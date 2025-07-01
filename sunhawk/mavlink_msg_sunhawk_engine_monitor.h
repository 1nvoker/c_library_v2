#pragma once
// MESSAGE SUNHAWK_ENGINE_MONITOR PACKING

#define MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR 13004


typedef struct __mavlink_sunhawk_engine_monitor_t {
 float throttle_opening; /*<  节气门开度*/
 float oil_level; /*<  机油油量*/
 int16_t water_temperature; /*<  水箱温度*/
 int16_t gasoline_pressure; /*<  汽油压力*/
 int16_t intake_manifold_pressure; /*<  进气歧管压力*/
 int16_t intake_air_temperature; /*<  进气空气温度*/
 int16_t oil_temperature; /*<  机油温度*/
 int16_t oil_pressure; /*<  机油压力*/
 int16_t exhaust_temperature[4]; /*<  排气温度[1,2,3,4]*/
 int16_t ntc_temperature[4]; /*<  缸头温度[1,2,3,4]*/
} mavlink_sunhawk_engine_monitor_t;

#define MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN 36
#define MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_MIN_LEN 36
#define MAVLINK_MSG_ID_13004_LEN 36
#define MAVLINK_MSG_ID_13004_MIN_LEN 36

#define MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_CRC 41
#define MAVLINK_MSG_ID_13004_CRC 41

#define MAVLINK_MSG_SUNHAWK_ENGINE_MONITOR_FIELD_EXHAUST_TEMPERATURE_LEN 4
#define MAVLINK_MSG_SUNHAWK_ENGINE_MONITOR_FIELD_NTC_TEMPERATURE_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SUNHAWK_ENGINE_MONITOR { \
    13004, \
    "SUNHAWK_ENGINE_MONITOR", \
    10, \
    {  { "water_temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_sunhawk_engine_monitor_t, water_temperature) }, \
         { "gasoline_pressure", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_sunhawk_engine_monitor_t, gasoline_pressure) }, \
         { "intake_manifold_pressure", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_sunhawk_engine_monitor_t, intake_manifold_pressure) }, \
         { "intake_air_temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_sunhawk_engine_monitor_t, intake_air_temperature) }, \
         { "throttle_opening", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_sunhawk_engine_monitor_t, throttle_opening) }, \
         { "oil_temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_sunhawk_engine_monitor_t, oil_temperature) }, \
         { "oil_pressure", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_sunhawk_engine_monitor_t, oil_pressure) }, \
         { "oil_level", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_sunhawk_engine_monitor_t, oil_level) }, \
         { "exhaust_temperature", NULL, MAVLINK_TYPE_INT16_T, 4, 20, offsetof(mavlink_sunhawk_engine_monitor_t, exhaust_temperature) }, \
         { "ntc_temperature", NULL, MAVLINK_TYPE_INT16_T, 4, 28, offsetof(mavlink_sunhawk_engine_monitor_t, ntc_temperature) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SUNHAWK_ENGINE_MONITOR { \
    "SUNHAWK_ENGINE_MONITOR", \
    10, \
    {  { "water_temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_sunhawk_engine_monitor_t, water_temperature) }, \
         { "gasoline_pressure", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_sunhawk_engine_monitor_t, gasoline_pressure) }, \
         { "intake_manifold_pressure", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_sunhawk_engine_monitor_t, intake_manifold_pressure) }, \
         { "intake_air_temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_sunhawk_engine_monitor_t, intake_air_temperature) }, \
         { "throttle_opening", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_sunhawk_engine_monitor_t, throttle_opening) }, \
         { "oil_temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_sunhawk_engine_monitor_t, oil_temperature) }, \
         { "oil_pressure", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_sunhawk_engine_monitor_t, oil_pressure) }, \
         { "oil_level", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_sunhawk_engine_monitor_t, oil_level) }, \
         { "exhaust_temperature", NULL, MAVLINK_TYPE_INT16_T, 4, 20, offsetof(mavlink_sunhawk_engine_monitor_t, exhaust_temperature) }, \
         { "ntc_temperature", NULL, MAVLINK_TYPE_INT16_T, 4, 28, offsetof(mavlink_sunhawk_engine_monitor_t, ntc_temperature) }, \
         } \
}
#endif

/**
 * @brief Pack a sunhawk_engine_monitor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param water_temperature  水箱温度
 * @param gasoline_pressure  汽油压力
 * @param intake_manifold_pressure  进气歧管压力
 * @param intake_air_temperature  进气空气温度
 * @param throttle_opening  节气门开度
 * @param oil_temperature  机油温度
 * @param oil_pressure  机油压力
 * @param oil_level  机油油量
 * @param exhaust_temperature  排气温度[1,2,3,4]
 * @param ntc_temperature  缸头温度[1,2,3,4]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_engine_monitor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t water_temperature, int16_t gasoline_pressure, int16_t intake_manifold_pressure, int16_t intake_air_temperature, float throttle_opening, int16_t oil_temperature, int16_t oil_pressure, float oil_level, const int16_t *exhaust_temperature, const int16_t *ntc_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN];
    _mav_put_float(buf, 0, throttle_opening);
    _mav_put_float(buf, 4, oil_level);
    _mav_put_int16_t(buf, 8, water_temperature);
    _mav_put_int16_t(buf, 10, gasoline_pressure);
    _mav_put_int16_t(buf, 12, intake_manifold_pressure);
    _mav_put_int16_t(buf, 14, intake_air_temperature);
    _mav_put_int16_t(buf, 16, oil_temperature);
    _mav_put_int16_t(buf, 18, oil_pressure);
    _mav_put_int16_t_array(buf, 20, exhaust_temperature, 4);
    _mav_put_int16_t_array(buf, 28, ntc_temperature, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN);
#else
    mavlink_sunhawk_engine_monitor_t packet;
    packet.throttle_opening = throttle_opening;
    packet.oil_level = oil_level;
    packet.water_temperature = water_temperature;
    packet.gasoline_pressure = gasoline_pressure;
    packet.intake_manifold_pressure = intake_manifold_pressure;
    packet.intake_air_temperature = intake_air_temperature;
    packet.oil_temperature = oil_temperature;
    packet.oil_pressure = oil_pressure;
    mav_array_memcpy(packet.exhaust_temperature, exhaust_temperature, sizeof(int16_t)*4);
    mav_array_memcpy(packet.ntc_temperature, ntc_temperature, sizeof(int16_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_CRC);
}

/**
 * @brief Pack a sunhawk_engine_monitor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param water_temperature  水箱温度
 * @param gasoline_pressure  汽油压力
 * @param intake_manifold_pressure  进气歧管压力
 * @param intake_air_temperature  进气空气温度
 * @param throttle_opening  节气门开度
 * @param oil_temperature  机油温度
 * @param oil_pressure  机油压力
 * @param oil_level  机油油量
 * @param exhaust_temperature  排气温度[1,2,3,4]
 * @param ntc_temperature  缸头温度[1,2,3,4]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_engine_monitor_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int16_t water_temperature, int16_t gasoline_pressure, int16_t intake_manifold_pressure, int16_t intake_air_temperature, float throttle_opening, int16_t oil_temperature, int16_t oil_pressure, float oil_level, const int16_t *exhaust_temperature, const int16_t *ntc_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN];
    _mav_put_float(buf, 0, throttle_opening);
    _mav_put_float(buf, 4, oil_level);
    _mav_put_int16_t(buf, 8, water_temperature);
    _mav_put_int16_t(buf, 10, gasoline_pressure);
    _mav_put_int16_t(buf, 12, intake_manifold_pressure);
    _mav_put_int16_t(buf, 14, intake_air_temperature);
    _mav_put_int16_t(buf, 16, oil_temperature);
    _mav_put_int16_t(buf, 18, oil_pressure);
    _mav_put_int16_t_array(buf, 20, exhaust_temperature, 4);
    _mav_put_int16_t_array(buf, 28, ntc_temperature, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN);
#else
    mavlink_sunhawk_engine_monitor_t packet;
    packet.throttle_opening = throttle_opening;
    packet.oil_level = oil_level;
    packet.water_temperature = water_temperature;
    packet.gasoline_pressure = gasoline_pressure;
    packet.intake_manifold_pressure = intake_manifold_pressure;
    packet.intake_air_temperature = intake_air_temperature;
    packet.oil_temperature = oil_temperature;
    packet.oil_pressure = oil_pressure;
    mav_array_memcpy(packet.exhaust_temperature, exhaust_temperature, sizeof(int16_t)*4);
    mav_array_memcpy(packet.ntc_temperature, ntc_temperature, sizeof(int16_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN);
#endif
}

/**
 * @brief Pack a sunhawk_engine_monitor message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param water_temperature  水箱温度
 * @param gasoline_pressure  汽油压力
 * @param intake_manifold_pressure  进气歧管压力
 * @param intake_air_temperature  进气空气温度
 * @param throttle_opening  节气门开度
 * @param oil_temperature  机油温度
 * @param oil_pressure  机油压力
 * @param oil_level  机油油量
 * @param exhaust_temperature  排气温度[1,2,3,4]
 * @param ntc_temperature  缸头温度[1,2,3,4]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_engine_monitor_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t water_temperature,int16_t gasoline_pressure,int16_t intake_manifold_pressure,int16_t intake_air_temperature,float throttle_opening,int16_t oil_temperature,int16_t oil_pressure,float oil_level,const int16_t *exhaust_temperature,const int16_t *ntc_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN];
    _mav_put_float(buf, 0, throttle_opening);
    _mav_put_float(buf, 4, oil_level);
    _mav_put_int16_t(buf, 8, water_temperature);
    _mav_put_int16_t(buf, 10, gasoline_pressure);
    _mav_put_int16_t(buf, 12, intake_manifold_pressure);
    _mav_put_int16_t(buf, 14, intake_air_temperature);
    _mav_put_int16_t(buf, 16, oil_temperature);
    _mav_put_int16_t(buf, 18, oil_pressure);
    _mav_put_int16_t_array(buf, 20, exhaust_temperature, 4);
    _mav_put_int16_t_array(buf, 28, ntc_temperature, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN);
#else
    mavlink_sunhawk_engine_monitor_t packet;
    packet.throttle_opening = throttle_opening;
    packet.oil_level = oil_level;
    packet.water_temperature = water_temperature;
    packet.gasoline_pressure = gasoline_pressure;
    packet.intake_manifold_pressure = intake_manifold_pressure;
    packet.intake_air_temperature = intake_air_temperature;
    packet.oil_temperature = oil_temperature;
    packet.oil_pressure = oil_pressure;
    mav_array_memcpy(packet.exhaust_temperature, exhaust_temperature, sizeof(int16_t)*4);
    mav_array_memcpy(packet.ntc_temperature, ntc_temperature, sizeof(int16_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_CRC);
}

/**
 * @brief Encode a sunhawk_engine_monitor struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_engine_monitor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_engine_monitor_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sunhawk_engine_monitor_t* sunhawk_engine_monitor)
{
    return mavlink_msg_sunhawk_engine_monitor_pack(system_id, component_id, msg, sunhawk_engine_monitor->water_temperature, sunhawk_engine_monitor->gasoline_pressure, sunhawk_engine_monitor->intake_manifold_pressure, sunhawk_engine_monitor->intake_air_temperature, sunhawk_engine_monitor->throttle_opening, sunhawk_engine_monitor->oil_temperature, sunhawk_engine_monitor->oil_pressure, sunhawk_engine_monitor->oil_level, sunhawk_engine_monitor->exhaust_temperature, sunhawk_engine_monitor->ntc_temperature);
}

/**
 * @brief Encode a sunhawk_engine_monitor struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_engine_monitor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_engine_monitor_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sunhawk_engine_monitor_t* sunhawk_engine_monitor)
{
    return mavlink_msg_sunhawk_engine_monitor_pack_chan(system_id, component_id, chan, msg, sunhawk_engine_monitor->water_temperature, sunhawk_engine_monitor->gasoline_pressure, sunhawk_engine_monitor->intake_manifold_pressure, sunhawk_engine_monitor->intake_air_temperature, sunhawk_engine_monitor->throttle_opening, sunhawk_engine_monitor->oil_temperature, sunhawk_engine_monitor->oil_pressure, sunhawk_engine_monitor->oil_level, sunhawk_engine_monitor->exhaust_temperature, sunhawk_engine_monitor->ntc_temperature);
}

/**
 * @brief Encode a sunhawk_engine_monitor struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_engine_monitor C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_engine_monitor_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sunhawk_engine_monitor_t* sunhawk_engine_monitor)
{
    return mavlink_msg_sunhawk_engine_monitor_pack_status(system_id, component_id, _status, msg,  sunhawk_engine_monitor->water_temperature, sunhawk_engine_monitor->gasoline_pressure, sunhawk_engine_monitor->intake_manifold_pressure, sunhawk_engine_monitor->intake_air_temperature, sunhawk_engine_monitor->throttle_opening, sunhawk_engine_monitor->oil_temperature, sunhawk_engine_monitor->oil_pressure, sunhawk_engine_monitor->oil_level, sunhawk_engine_monitor->exhaust_temperature, sunhawk_engine_monitor->ntc_temperature);
}

/**
 * @brief Send a sunhawk_engine_monitor message
 * @param chan MAVLink channel to send the message
 *
 * @param water_temperature  水箱温度
 * @param gasoline_pressure  汽油压力
 * @param intake_manifold_pressure  进气歧管压力
 * @param intake_air_temperature  进气空气温度
 * @param throttle_opening  节气门开度
 * @param oil_temperature  机油温度
 * @param oil_pressure  机油压力
 * @param oil_level  机油油量
 * @param exhaust_temperature  排气温度[1,2,3,4]
 * @param ntc_temperature  缸头温度[1,2,3,4]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sunhawk_engine_monitor_send(mavlink_channel_t chan, int16_t water_temperature, int16_t gasoline_pressure, int16_t intake_manifold_pressure, int16_t intake_air_temperature, float throttle_opening, int16_t oil_temperature, int16_t oil_pressure, float oil_level, const int16_t *exhaust_temperature, const int16_t *ntc_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN];
    _mav_put_float(buf, 0, throttle_opening);
    _mav_put_float(buf, 4, oil_level);
    _mav_put_int16_t(buf, 8, water_temperature);
    _mav_put_int16_t(buf, 10, gasoline_pressure);
    _mav_put_int16_t(buf, 12, intake_manifold_pressure);
    _mav_put_int16_t(buf, 14, intake_air_temperature);
    _mav_put_int16_t(buf, 16, oil_temperature);
    _mav_put_int16_t(buf, 18, oil_pressure);
    _mav_put_int16_t_array(buf, 20, exhaust_temperature, 4);
    _mav_put_int16_t_array(buf, 28, ntc_temperature, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR, buf, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_CRC);
#else
    mavlink_sunhawk_engine_monitor_t packet;
    packet.throttle_opening = throttle_opening;
    packet.oil_level = oil_level;
    packet.water_temperature = water_temperature;
    packet.gasoline_pressure = gasoline_pressure;
    packet.intake_manifold_pressure = intake_manifold_pressure;
    packet.intake_air_temperature = intake_air_temperature;
    packet.oil_temperature = oil_temperature;
    packet.oil_pressure = oil_pressure;
    mav_array_memcpy(packet.exhaust_temperature, exhaust_temperature, sizeof(int16_t)*4);
    mav_array_memcpy(packet.ntc_temperature, ntc_temperature, sizeof(int16_t)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR, (const char *)&packet, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_CRC);
#endif
}

/**
 * @brief Send a sunhawk_engine_monitor message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sunhawk_engine_monitor_send_struct(mavlink_channel_t chan, const mavlink_sunhawk_engine_monitor_t* sunhawk_engine_monitor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sunhawk_engine_monitor_send(chan, sunhawk_engine_monitor->water_temperature, sunhawk_engine_monitor->gasoline_pressure, sunhawk_engine_monitor->intake_manifold_pressure, sunhawk_engine_monitor->intake_air_temperature, sunhawk_engine_monitor->throttle_opening, sunhawk_engine_monitor->oil_temperature, sunhawk_engine_monitor->oil_pressure, sunhawk_engine_monitor->oil_level, sunhawk_engine_monitor->exhaust_temperature, sunhawk_engine_monitor->ntc_temperature);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR, (const char *)sunhawk_engine_monitor, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sunhawk_engine_monitor_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t water_temperature, int16_t gasoline_pressure, int16_t intake_manifold_pressure, int16_t intake_air_temperature, float throttle_opening, int16_t oil_temperature, int16_t oil_pressure, float oil_level, const int16_t *exhaust_temperature, const int16_t *ntc_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, throttle_opening);
    _mav_put_float(buf, 4, oil_level);
    _mav_put_int16_t(buf, 8, water_temperature);
    _mav_put_int16_t(buf, 10, gasoline_pressure);
    _mav_put_int16_t(buf, 12, intake_manifold_pressure);
    _mav_put_int16_t(buf, 14, intake_air_temperature);
    _mav_put_int16_t(buf, 16, oil_temperature);
    _mav_put_int16_t(buf, 18, oil_pressure);
    _mav_put_int16_t_array(buf, 20, exhaust_temperature, 4);
    _mav_put_int16_t_array(buf, 28, ntc_temperature, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR, buf, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_CRC);
#else
    mavlink_sunhawk_engine_monitor_t *packet = (mavlink_sunhawk_engine_monitor_t *)msgbuf;
    packet->throttle_opening = throttle_opening;
    packet->oil_level = oil_level;
    packet->water_temperature = water_temperature;
    packet->gasoline_pressure = gasoline_pressure;
    packet->intake_manifold_pressure = intake_manifold_pressure;
    packet->intake_air_temperature = intake_air_temperature;
    packet->oil_temperature = oil_temperature;
    packet->oil_pressure = oil_pressure;
    mav_array_memcpy(packet->exhaust_temperature, exhaust_temperature, sizeof(int16_t)*4);
    mav_array_memcpy(packet->ntc_temperature, ntc_temperature, sizeof(int16_t)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR, (const char *)packet, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_CRC);
#endif
}
#endif

#endif

// MESSAGE SUNHAWK_ENGINE_MONITOR UNPACKING


/**
 * @brief Get field water_temperature from sunhawk_engine_monitor message
 *
 * @return  水箱温度
 */
static inline int16_t mavlink_msg_sunhawk_engine_monitor_get_water_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field gasoline_pressure from sunhawk_engine_monitor message
 *
 * @return  汽油压力
 */
static inline int16_t mavlink_msg_sunhawk_engine_monitor_get_gasoline_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field intake_manifold_pressure from sunhawk_engine_monitor message
 *
 * @return  进气歧管压力
 */
static inline int16_t mavlink_msg_sunhawk_engine_monitor_get_intake_manifold_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field intake_air_temperature from sunhawk_engine_monitor message
 *
 * @return  进气空气温度
 */
static inline int16_t mavlink_msg_sunhawk_engine_monitor_get_intake_air_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field throttle_opening from sunhawk_engine_monitor message
 *
 * @return  节气门开度
 */
static inline float mavlink_msg_sunhawk_engine_monitor_get_throttle_opening(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field oil_temperature from sunhawk_engine_monitor message
 *
 * @return  机油温度
 */
static inline int16_t mavlink_msg_sunhawk_engine_monitor_get_oil_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field oil_pressure from sunhawk_engine_monitor message
 *
 * @return  机油压力
 */
static inline int16_t mavlink_msg_sunhawk_engine_monitor_get_oil_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field oil_level from sunhawk_engine_monitor message
 *
 * @return  机油油量
 */
static inline float mavlink_msg_sunhawk_engine_monitor_get_oil_level(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field exhaust_temperature from sunhawk_engine_monitor message
 *
 * @return  排气温度[1,2,3,4]
 */
static inline uint16_t mavlink_msg_sunhawk_engine_monitor_get_exhaust_temperature(const mavlink_message_t* msg, int16_t *exhaust_temperature)
{
    return _MAV_RETURN_int16_t_array(msg, exhaust_temperature, 4,  20);
}

/**
 * @brief Get field ntc_temperature from sunhawk_engine_monitor message
 *
 * @return  缸头温度[1,2,3,4]
 */
static inline uint16_t mavlink_msg_sunhawk_engine_monitor_get_ntc_temperature(const mavlink_message_t* msg, int16_t *ntc_temperature)
{
    return _MAV_RETURN_int16_t_array(msg, ntc_temperature, 4,  28);
}

/**
 * @brief Decode a sunhawk_engine_monitor message into a struct
 *
 * @param msg The message to decode
 * @param sunhawk_engine_monitor C-struct to decode the message contents into
 */
static inline void mavlink_msg_sunhawk_engine_monitor_decode(const mavlink_message_t* msg, mavlink_sunhawk_engine_monitor_t* sunhawk_engine_monitor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    sunhawk_engine_monitor->throttle_opening = mavlink_msg_sunhawk_engine_monitor_get_throttle_opening(msg);
    sunhawk_engine_monitor->oil_level = mavlink_msg_sunhawk_engine_monitor_get_oil_level(msg);
    sunhawk_engine_monitor->water_temperature = mavlink_msg_sunhawk_engine_monitor_get_water_temperature(msg);
    sunhawk_engine_monitor->gasoline_pressure = mavlink_msg_sunhawk_engine_monitor_get_gasoline_pressure(msg);
    sunhawk_engine_monitor->intake_manifold_pressure = mavlink_msg_sunhawk_engine_monitor_get_intake_manifold_pressure(msg);
    sunhawk_engine_monitor->intake_air_temperature = mavlink_msg_sunhawk_engine_monitor_get_intake_air_temperature(msg);
    sunhawk_engine_monitor->oil_temperature = mavlink_msg_sunhawk_engine_monitor_get_oil_temperature(msg);
    sunhawk_engine_monitor->oil_pressure = mavlink_msg_sunhawk_engine_monitor_get_oil_pressure(msg);
    mavlink_msg_sunhawk_engine_monitor_get_exhaust_temperature(msg, sunhawk_engine_monitor->exhaust_temperature);
    mavlink_msg_sunhawk_engine_monitor_get_ntc_temperature(msg, sunhawk_engine_monitor->ntc_temperature);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN? msg->len : MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN;
        memset(sunhawk_engine_monitor, 0, MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_LEN);
    memcpy(sunhawk_engine_monitor, _MAV_PAYLOAD(msg), len);
#endif
}
