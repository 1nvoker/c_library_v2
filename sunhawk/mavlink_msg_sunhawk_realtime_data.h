#pragma once
// MESSAGE SUNHAWK_REALTIME_DATA PACKING

#define MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA 13002


typedef struct __mavlink_sunhawk_realtime_data_t {
 float pedal_aimed; /*<  油门控制目标值*/
 int16_t engine_rpm_feedback; /*<  发动机转速*/
 int16_t servo_aimed[6]; /*<  舵机期望*/
 int16_t servo_feedback[6]; /*<  舵机反馈*/
} mavlink_sunhawk_realtime_data_t;

#define MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN 30
#define MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_MIN_LEN 30
#define MAVLINK_MSG_ID_13002_LEN 30
#define MAVLINK_MSG_ID_13002_MIN_LEN 30

#define MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_CRC 207
#define MAVLINK_MSG_ID_13002_CRC 207

#define MAVLINK_MSG_SUNHAWK_REALTIME_DATA_FIELD_SERVO_AIMED_LEN 6
#define MAVLINK_MSG_SUNHAWK_REALTIME_DATA_FIELD_SERVO_FEEDBACK_LEN 6

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SUNHAWK_REALTIME_DATA { \
    13002, \
    "SUNHAWK_REALTIME_DATA", \
    4, \
    {  { "engine_rpm_feedback", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_sunhawk_realtime_data_t, engine_rpm_feedback) }, \
         { "pedal_aimed", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_sunhawk_realtime_data_t, pedal_aimed) }, \
         { "servo_aimed", NULL, MAVLINK_TYPE_INT16_T, 6, 6, offsetof(mavlink_sunhawk_realtime_data_t, servo_aimed) }, \
         { "servo_feedback", NULL, MAVLINK_TYPE_INT16_T, 6, 18, offsetof(mavlink_sunhawk_realtime_data_t, servo_feedback) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SUNHAWK_REALTIME_DATA { \
    "SUNHAWK_REALTIME_DATA", \
    4, \
    {  { "engine_rpm_feedback", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_sunhawk_realtime_data_t, engine_rpm_feedback) }, \
         { "pedal_aimed", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_sunhawk_realtime_data_t, pedal_aimed) }, \
         { "servo_aimed", NULL, MAVLINK_TYPE_INT16_T, 6, 6, offsetof(mavlink_sunhawk_realtime_data_t, servo_aimed) }, \
         { "servo_feedback", NULL, MAVLINK_TYPE_INT16_T, 6, 18, offsetof(mavlink_sunhawk_realtime_data_t, servo_feedback) }, \
         } \
}
#endif

/**
 * @brief Pack a sunhawk_realtime_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param engine_rpm_feedback  发动机转速
 * @param pedal_aimed  油门控制目标值
 * @param servo_aimed  舵机期望
 * @param servo_feedback  舵机反馈
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_realtime_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t engine_rpm_feedback, float pedal_aimed, const int16_t *servo_aimed, const int16_t *servo_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN];
    _mav_put_float(buf, 0, pedal_aimed);
    _mav_put_int16_t(buf, 4, engine_rpm_feedback);
    _mav_put_int16_t_array(buf, 6, servo_aimed, 6);
    _mav_put_int16_t_array(buf, 18, servo_feedback, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN);
#else
    mavlink_sunhawk_realtime_data_t packet;
    packet.pedal_aimed = pedal_aimed;
    packet.engine_rpm_feedback = engine_rpm_feedback;
    mav_array_memcpy(packet.servo_aimed, servo_aimed, sizeof(int16_t)*6);
    mav_array_memcpy(packet.servo_feedback, servo_feedback, sizeof(int16_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_CRC);
}

/**
 * @brief Pack a sunhawk_realtime_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param engine_rpm_feedback  发动机转速
 * @param pedal_aimed  油门控制目标值
 * @param servo_aimed  舵机期望
 * @param servo_feedback  舵机反馈
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_realtime_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int16_t engine_rpm_feedback, float pedal_aimed, const int16_t *servo_aimed, const int16_t *servo_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN];
    _mav_put_float(buf, 0, pedal_aimed);
    _mav_put_int16_t(buf, 4, engine_rpm_feedback);
    _mav_put_int16_t_array(buf, 6, servo_aimed, 6);
    _mav_put_int16_t_array(buf, 18, servo_feedback, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN);
#else
    mavlink_sunhawk_realtime_data_t packet;
    packet.pedal_aimed = pedal_aimed;
    packet.engine_rpm_feedback = engine_rpm_feedback;
    mav_array_memcpy(packet.servo_aimed, servo_aimed, sizeof(int16_t)*6);
    mav_array_memcpy(packet.servo_feedback, servo_feedback, sizeof(int16_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN);
#endif
}

/**
 * @brief Pack a sunhawk_realtime_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param engine_rpm_feedback  发动机转速
 * @param pedal_aimed  油门控制目标值
 * @param servo_aimed  舵机期望
 * @param servo_feedback  舵机反馈
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_realtime_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t engine_rpm_feedback,float pedal_aimed,const int16_t *servo_aimed,const int16_t *servo_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN];
    _mav_put_float(buf, 0, pedal_aimed);
    _mav_put_int16_t(buf, 4, engine_rpm_feedback);
    _mav_put_int16_t_array(buf, 6, servo_aimed, 6);
    _mav_put_int16_t_array(buf, 18, servo_feedback, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN);
#else
    mavlink_sunhawk_realtime_data_t packet;
    packet.pedal_aimed = pedal_aimed;
    packet.engine_rpm_feedback = engine_rpm_feedback;
    mav_array_memcpy(packet.servo_aimed, servo_aimed, sizeof(int16_t)*6);
    mav_array_memcpy(packet.servo_feedback, servo_feedback, sizeof(int16_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_CRC);
}

/**
 * @brief Encode a sunhawk_realtime_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_realtime_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_realtime_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sunhawk_realtime_data_t* sunhawk_realtime_data)
{
    return mavlink_msg_sunhawk_realtime_data_pack(system_id, component_id, msg, sunhawk_realtime_data->engine_rpm_feedback, sunhawk_realtime_data->pedal_aimed, sunhawk_realtime_data->servo_aimed, sunhawk_realtime_data->servo_feedback);
}

/**
 * @brief Encode a sunhawk_realtime_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_realtime_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_realtime_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sunhawk_realtime_data_t* sunhawk_realtime_data)
{
    return mavlink_msg_sunhawk_realtime_data_pack_chan(system_id, component_id, chan, msg, sunhawk_realtime_data->engine_rpm_feedback, sunhawk_realtime_data->pedal_aimed, sunhawk_realtime_data->servo_aimed, sunhawk_realtime_data->servo_feedback);
}

/**
 * @brief Encode a sunhawk_realtime_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_realtime_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_realtime_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sunhawk_realtime_data_t* sunhawk_realtime_data)
{
    return mavlink_msg_sunhawk_realtime_data_pack_status(system_id, component_id, _status, msg,  sunhawk_realtime_data->engine_rpm_feedback, sunhawk_realtime_data->pedal_aimed, sunhawk_realtime_data->servo_aimed, sunhawk_realtime_data->servo_feedback);
}

/**
 * @brief Send a sunhawk_realtime_data message
 * @param chan MAVLink channel to send the message
 *
 * @param engine_rpm_feedback  发动机转速
 * @param pedal_aimed  油门控制目标值
 * @param servo_aimed  舵机期望
 * @param servo_feedback  舵机反馈
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sunhawk_realtime_data_send(mavlink_channel_t chan, int16_t engine_rpm_feedback, float pedal_aimed, const int16_t *servo_aimed, const int16_t *servo_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN];
    _mav_put_float(buf, 0, pedal_aimed);
    _mav_put_int16_t(buf, 4, engine_rpm_feedback);
    _mav_put_int16_t_array(buf, 6, servo_aimed, 6);
    _mav_put_int16_t_array(buf, 18, servo_feedback, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA, buf, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_CRC);
#else
    mavlink_sunhawk_realtime_data_t packet;
    packet.pedal_aimed = pedal_aimed;
    packet.engine_rpm_feedback = engine_rpm_feedback;
    mav_array_memcpy(packet.servo_aimed, servo_aimed, sizeof(int16_t)*6);
    mav_array_memcpy(packet.servo_feedback, servo_feedback, sizeof(int16_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA, (const char *)&packet, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_CRC);
#endif
}

/**
 * @brief Send a sunhawk_realtime_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sunhawk_realtime_data_send_struct(mavlink_channel_t chan, const mavlink_sunhawk_realtime_data_t* sunhawk_realtime_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sunhawk_realtime_data_send(chan, sunhawk_realtime_data->engine_rpm_feedback, sunhawk_realtime_data->pedal_aimed, sunhawk_realtime_data->servo_aimed, sunhawk_realtime_data->servo_feedback);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA, (const char *)sunhawk_realtime_data, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sunhawk_realtime_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t engine_rpm_feedback, float pedal_aimed, const int16_t *servo_aimed, const int16_t *servo_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, pedal_aimed);
    _mav_put_int16_t(buf, 4, engine_rpm_feedback);
    _mav_put_int16_t_array(buf, 6, servo_aimed, 6);
    _mav_put_int16_t_array(buf, 18, servo_feedback, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA, buf, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_CRC);
#else
    mavlink_sunhawk_realtime_data_t *packet = (mavlink_sunhawk_realtime_data_t *)msgbuf;
    packet->pedal_aimed = pedal_aimed;
    packet->engine_rpm_feedback = engine_rpm_feedback;
    mav_array_memcpy(packet->servo_aimed, servo_aimed, sizeof(int16_t)*6);
    mav_array_memcpy(packet->servo_feedback, servo_feedback, sizeof(int16_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA, (const char *)packet, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE SUNHAWK_REALTIME_DATA UNPACKING


/**
 * @brief Get field engine_rpm_feedback from sunhawk_realtime_data message
 *
 * @return  发动机转速
 */
static inline int16_t mavlink_msg_sunhawk_realtime_data_get_engine_rpm_feedback(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field pedal_aimed from sunhawk_realtime_data message
 *
 * @return  油门控制目标值
 */
static inline float mavlink_msg_sunhawk_realtime_data_get_pedal_aimed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field servo_aimed from sunhawk_realtime_data message
 *
 * @return  舵机期望
 */
static inline uint16_t mavlink_msg_sunhawk_realtime_data_get_servo_aimed(const mavlink_message_t* msg, int16_t *servo_aimed)
{
    return _MAV_RETURN_int16_t_array(msg, servo_aimed, 6,  6);
}

/**
 * @brief Get field servo_feedback from sunhawk_realtime_data message
 *
 * @return  舵机反馈
 */
static inline uint16_t mavlink_msg_sunhawk_realtime_data_get_servo_feedback(const mavlink_message_t* msg, int16_t *servo_feedback)
{
    return _MAV_RETURN_int16_t_array(msg, servo_feedback, 6,  18);
}

/**
 * @brief Decode a sunhawk_realtime_data message into a struct
 *
 * @param msg The message to decode
 * @param sunhawk_realtime_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_sunhawk_realtime_data_decode(const mavlink_message_t* msg, mavlink_sunhawk_realtime_data_t* sunhawk_realtime_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    sunhawk_realtime_data->pedal_aimed = mavlink_msg_sunhawk_realtime_data_get_pedal_aimed(msg);
    sunhawk_realtime_data->engine_rpm_feedback = mavlink_msg_sunhawk_realtime_data_get_engine_rpm_feedback(msg);
    mavlink_msg_sunhawk_realtime_data_get_servo_aimed(msg, sunhawk_realtime_data->servo_aimed);
    mavlink_msg_sunhawk_realtime_data_get_servo_feedback(msg, sunhawk_realtime_data->servo_feedback);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN? msg->len : MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN;
        memset(sunhawk_realtime_data, 0, MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_LEN);
    memcpy(sunhawk_realtime_data, _MAV_PAYLOAD(msg), len);
#endif
}
