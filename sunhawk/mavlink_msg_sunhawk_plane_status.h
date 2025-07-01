#pragma once
// MESSAGE SUNHAWK_PLANE_STATUS PACKING

#define MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS 13003


typedef struct __mavlink_sunhawk_plane_status_t {
 float motor_current[6]; /*<  电机电流*/
 float power_voltage; /*<  动力系统电压*/
 float starting_voltage; /*<  启动系统电压*/
 int16_t motor_temperature[6]; /*<  电机温度*/
 int16_t gear_temperature[2]; /*<  齿轮箱温度[前,后]*/
} mavlink_sunhawk_plane_status_t;

#define MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN 48
#define MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_MIN_LEN 48
#define MAVLINK_MSG_ID_13003_LEN 48
#define MAVLINK_MSG_ID_13003_MIN_LEN 48

#define MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_CRC 211
#define MAVLINK_MSG_ID_13003_CRC 211

#define MAVLINK_MSG_SUNHAWK_PLANE_STATUS_FIELD_MOTOR_CURRENT_LEN 6
#define MAVLINK_MSG_SUNHAWK_PLANE_STATUS_FIELD_MOTOR_TEMPERATURE_LEN 6
#define MAVLINK_MSG_SUNHAWK_PLANE_STATUS_FIELD_GEAR_TEMPERATURE_LEN 2

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SUNHAWK_PLANE_STATUS { \
    13003, \
    "SUNHAWK_PLANE_STATUS", \
    5, \
    {  { "motor_current", NULL, MAVLINK_TYPE_FLOAT, 6, 0, offsetof(mavlink_sunhawk_plane_status_t, motor_current) }, \
         { "motor_temperature", NULL, MAVLINK_TYPE_INT16_T, 6, 32, offsetof(mavlink_sunhawk_plane_status_t, motor_temperature) }, \
         { "power_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_sunhawk_plane_status_t, power_voltage) }, \
         { "starting_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_sunhawk_plane_status_t, starting_voltage) }, \
         { "gear_temperature", NULL, MAVLINK_TYPE_INT16_T, 2, 44, offsetof(mavlink_sunhawk_plane_status_t, gear_temperature) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SUNHAWK_PLANE_STATUS { \
    "SUNHAWK_PLANE_STATUS", \
    5, \
    {  { "motor_current", NULL, MAVLINK_TYPE_FLOAT, 6, 0, offsetof(mavlink_sunhawk_plane_status_t, motor_current) }, \
         { "motor_temperature", NULL, MAVLINK_TYPE_INT16_T, 6, 32, offsetof(mavlink_sunhawk_plane_status_t, motor_temperature) }, \
         { "power_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_sunhawk_plane_status_t, power_voltage) }, \
         { "starting_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_sunhawk_plane_status_t, starting_voltage) }, \
         { "gear_temperature", NULL, MAVLINK_TYPE_INT16_T, 2, 44, offsetof(mavlink_sunhawk_plane_status_t, gear_temperature) }, \
         } \
}
#endif

/**
 * @brief Pack a sunhawk_plane_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param motor_current  电机电流
 * @param motor_temperature  电机温度
 * @param power_voltage  动力系统电压
 * @param starting_voltage  启动系统电压
 * @param gear_temperature  齿轮箱温度[前,后]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_plane_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const float *motor_current, const int16_t *motor_temperature, float power_voltage, float starting_voltage, const int16_t *gear_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN];
    _mav_put_float(buf, 24, power_voltage);
    _mav_put_float(buf, 28, starting_voltage);
    _mav_put_float_array(buf, 0, motor_current, 6);
    _mav_put_int16_t_array(buf, 32, motor_temperature, 6);
    _mav_put_int16_t_array(buf, 44, gear_temperature, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN);
#else
    mavlink_sunhawk_plane_status_t packet;
    packet.power_voltage = power_voltage;
    packet.starting_voltage = starting_voltage;
    mav_array_memcpy(packet.motor_current, motor_current, sizeof(float)*6);
    mav_array_memcpy(packet.motor_temperature, motor_temperature, sizeof(int16_t)*6);
    mav_array_memcpy(packet.gear_temperature, gear_temperature, sizeof(int16_t)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_CRC);
}

/**
 * @brief Pack a sunhawk_plane_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param motor_current  电机电流
 * @param motor_temperature  电机温度
 * @param power_voltage  动力系统电压
 * @param starting_voltage  启动系统电压
 * @param gear_temperature  齿轮箱温度[前,后]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_plane_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const float *motor_current, const int16_t *motor_temperature, float power_voltage, float starting_voltage, const int16_t *gear_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN];
    _mav_put_float(buf, 24, power_voltage);
    _mav_put_float(buf, 28, starting_voltage);
    _mav_put_float_array(buf, 0, motor_current, 6);
    _mav_put_int16_t_array(buf, 32, motor_temperature, 6);
    _mav_put_int16_t_array(buf, 44, gear_temperature, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN);
#else
    mavlink_sunhawk_plane_status_t packet;
    packet.power_voltage = power_voltage;
    packet.starting_voltage = starting_voltage;
    mav_array_memcpy(packet.motor_current, motor_current, sizeof(float)*6);
    mav_array_memcpy(packet.motor_temperature, motor_temperature, sizeof(int16_t)*6);
    mav_array_memcpy(packet.gear_temperature, gear_temperature, sizeof(int16_t)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN);
#endif
}

/**
 * @brief Pack a sunhawk_plane_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param motor_current  电机电流
 * @param motor_temperature  电机温度
 * @param power_voltage  动力系统电压
 * @param starting_voltage  启动系统电压
 * @param gear_temperature  齿轮箱温度[前,后]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_plane_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const float *motor_current,const int16_t *motor_temperature,float power_voltage,float starting_voltage,const int16_t *gear_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN];
    _mav_put_float(buf, 24, power_voltage);
    _mav_put_float(buf, 28, starting_voltage);
    _mav_put_float_array(buf, 0, motor_current, 6);
    _mav_put_int16_t_array(buf, 32, motor_temperature, 6);
    _mav_put_int16_t_array(buf, 44, gear_temperature, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN);
#else
    mavlink_sunhawk_plane_status_t packet;
    packet.power_voltage = power_voltage;
    packet.starting_voltage = starting_voltage;
    mav_array_memcpy(packet.motor_current, motor_current, sizeof(float)*6);
    mav_array_memcpy(packet.motor_temperature, motor_temperature, sizeof(int16_t)*6);
    mav_array_memcpy(packet.gear_temperature, gear_temperature, sizeof(int16_t)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_CRC);
}

/**
 * @brief Encode a sunhawk_plane_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_plane_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_plane_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sunhawk_plane_status_t* sunhawk_plane_status)
{
    return mavlink_msg_sunhawk_plane_status_pack(system_id, component_id, msg, sunhawk_plane_status->motor_current, sunhawk_plane_status->motor_temperature, sunhawk_plane_status->power_voltage, sunhawk_plane_status->starting_voltage, sunhawk_plane_status->gear_temperature);
}

/**
 * @brief Encode a sunhawk_plane_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_plane_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_plane_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sunhawk_plane_status_t* sunhawk_plane_status)
{
    return mavlink_msg_sunhawk_plane_status_pack_chan(system_id, component_id, chan, msg, sunhawk_plane_status->motor_current, sunhawk_plane_status->motor_temperature, sunhawk_plane_status->power_voltage, sunhawk_plane_status->starting_voltage, sunhawk_plane_status->gear_temperature);
}

/**
 * @brief Encode a sunhawk_plane_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_plane_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_plane_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sunhawk_plane_status_t* sunhawk_plane_status)
{
    return mavlink_msg_sunhawk_plane_status_pack_status(system_id, component_id, _status, msg,  sunhawk_plane_status->motor_current, sunhawk_plane_status->motor_temperature, sunhawk_plane_status->power_voltage, sunhawk_plane_status->starting_voltage, sunhawk_plane_status->gear_temperature);
}

/**
 * @brief Send a sunhawk_plane_status message
 * @param chan MAVLink channel to send the message
 *
 * @param motor_current  电机电流
 * @param motor_temperature  电机温度
 * @param power_voltage  动力系统电压
 * @param starting_voltage  启动系统电压
 * @param gear_temperature  齿轮箱温度[前,后]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sunhawk_plane_status_send(mavlink_channel_t chan, const float *motor_current, const int16_t *motor_temperature, float power_voltage, float starting_voltage, const int16_t *gear_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN];
    _mav_put_float(buf, 24, power_voltage);
    _mav_put_float(buf, 28, starting_voltage);
    _mav_put_float_array(buf, 0, motor_current, 6);
    _mav_put_int16_t_array(buf, 32, motor_temperature, 6);
    _mav_put_int16_t_array(buf, 44, gear_temperature, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS, buf, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_CRC);
#else
    mavlink_sunhawk_plane_status_t packet;
    packet.power_voltage = power_voltage;
    packet.starting_voltage = starting_voltage;
    mav_array_memcpy(packet.motor_current, motor_current, sizeof(float)*6);
    mav_array_memcpy(packet.motor_temperature, motor_temperature, sizeof(int16_t)*6);
    mav_array_memcpy(packet.gear_temperature, gear_temperature, sizeof(int16_t)*2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS, (const char *)&packet, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_CRC);
#endif
}

/**
 * @brief Send a sunhawk_plane_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sunhawk_plane_status_send_struct(mavlink_channel_t chan, const mavlink_sunhawk_plane_status_t* sunhawk_plane_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sunhawk_plane_status_send(chan, sunhawk_plane_status->motor_current, sunhawk_plane_status->motor_temperature, sunhawk_plane_status->power_voltage, sunhawk_plane_status->starting_voltage, sunhawk_plane_status->gear_temperature);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS, (const char *)sunhawk_plane_status, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sunhawk_plane_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const float *motor_current, const int16_t *motor_temperature, float power_voltage, float starting_voltage, const int16_t *gear_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 24, power_voltage);
    _mav_put_float(buf, 28, starting_voltage);
    _mav_put_float_array(buf, 0, motor_current, 6);
    _mav_put_int16_t_array(buf, 32, motor_temperature, 6);
    _mav_put_int16_t_array(buf, 44, gear_temperature, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS, buf, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_CRC);
#else
    mavlink_sunhawk_plane_status_t *packet = (mavlink_sunhawk_plane_status_t *)msgbuf;
    packet->power_voltage = power_voltage;
    packet->starting_voltage = starting_voltage;
    mav_array_memcpy(packet->motor_current, motor_current, sizeof(float)*6);
    mav_array_memcpy(packet->motor_temperature, motor_temperature, sizeof(int16_t)*6);
    mav_array_memcpy(packet->gear_temperature, gear_temperature, sizeof(int16_t)*2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS, (const char *)packet, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE SUNHAWK_PLANE_STATUS UNPACKING


/**
 * @brief Get field motor_current from sunhawk_plane_status message
 *
 * @return  电机电流
 */
static inline uint16_t mavlink_msg_sunhawk_plane_status_get_motor_current(const mavlink_message_t* msg, float *motor_current)
{
    return _MAV_RETURN_float_array(msg, motor_current, 6,  0);
}

/**
 * @brief Get field motor_temperature from sunhawk_plane_status message
 *
 * @return  电机温度
 */
static inline uint16_t mavlink_msg_sunhawk_plane_status_get_motor_temperature(const mavlink_message_t* msg, int16_t *motor_temperature)
{
    return _MAV_RETURN_int16_t_array(msg, motor_temperature, 6,  32);
}

/**
 * @brief Get field power_voltage from sunhawk_plane_status message
 *
 * @return  动力系统电压
 */
static inline float mavlink_msg_sunhawk_plane_status_get_power_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field starting_voltage from sunhawk_plane_status message
 *
 * @return  启动系统电压
 */
static inline float mavlink_msg_sunhawk_plane_status_get_starting_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field gear_temperature from sunhawk_plane_status message
 *
 * @return  齿轮箱温度[前,后]
 */
static inline uint16_t mavlink_msg_sunhawk_plane_status_get_gear_temperature(const mavlink_message_t* msg, int16_t *gear_temperature)
{
    return _MAV_RETURN_int16_t_array(msg, gear_temperature, 2,  44);
}

/**
 * @brief Decode a sunhawk_plane_status message into a struct
 *
 * @param msg The message to decode
 * @param sunhawk_plane_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_sunhawk_plane_status_decode(const mavlink_message_t* msg, mavlink_sunhawk_plane_status_t* sunhawk_plane_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sunhawk_plane_status_get_motor_current(msg, sunhawk_plane_status->motor_current);
    sunhawk_plane_status->power_voltage = mavlink_msg_sunhawk_plane_status_get_power_voltage(msg);
    sunhawk_plane_status->starting_voltage = mavlink_msg_sunhawk_plane_status_get_starting_voltage(msg);
    mavlink_msg_sunhawk_plane_status_get_motor_temperature(msg, sunhawk_plane_status->motor_temperature);
    mavlink_msg_sunhawk_plane_status_get_gear_temperature(msg, sunhawk_plane_status->gear_temperature);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN? msg->len : MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN;
        memset(sunhawk_plane_status, 0, MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_LEN);
    memcpy(sunhawk_plane_status, _MAV_PAYLOAD(msg), len);
#endif
}
