#pragma once
// MESSAGE SUNHAWK_FLUID_STATUS PACKING

#define MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS 13005


typedef struct __mavlink_sunhawk_fluid_status_t {
 float fuel_level[3]; /*<  ÓÍÏäÓÍÁ¿[1,2,3]*/
} mavlink_sunhawk_fluid_status_t;

#define MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN 12
#define MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_MIN_LEN 12
#define MAVLINK_MSG_ID_13005_LEN 12
#define MAVLINK_MSG_ID_13005_MIN_LEN 12

#define MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_CRC 172
#define MAVLINK_MSG_ID_13005_CRC 172

#define MAVLINK_MSG_SUNHAWK_FLUID_STATUS_FIELD_FUEL_LEVEL_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SUNHAWK_FLUID_STATUS { \
    13005, \
    "SUNHAWK_FLUID_STATUS", \
    1, \
    {  { "fuel_level", NULL, MAVLINK_TYPE_FLOAT, 3, 0, offsetof(mavlink_sunhawk_fluid_status_t, fuel_level) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SUNHAWK_FLUID_STATUS { \
    "SUNHAWK_FLUID_STATUS", \
    1, \
    {  { "fuel_level", NULL, MAVLINK_TYPE_FLOAT, 3, 0, offsetof(mavlink_sunhawk_fluid_status_t, fuel_level) }, \
         } \
}
#endif

/**
 * @brief Pack a sunhawk_fluid_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param fuel_level  ÓÍÏäÓÍÁ¿[1,2,3]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_fluid_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const float *fuel_level)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN];

    _mav_put_float_array(buf, 0, fuel_level, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN);
#else
    mavlink_sunhawk_fluid_status_t packet;

    mav_array_memcpy(packet.fuel_level, fuel_level, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_CRC);
}

/**
 * @brief Pack a sunhawk_fluid_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param fuel_level  ÓÍÏäÓÍÁ¿[1,2,3]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_fluid_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const float *fuel_level)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN];

    _mav_put_float_array(buf, 0, fuel_level, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN);
#else
    mavlink_sunhawk_fluid_status_t packet;

    mav_array_memcpy(packet.fuel_level, fuel_level, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN);
#endif
}

/**
 * @brief Pack a sunhawk_fluid_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param fuel_level  ÓÍÏäÓÍÁ¿[1,2,3]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_fluid_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const float *fuel_level)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN];

    _mav_put_float_array(buf, 0, fuel_level, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN);
#else
    mavlink_sunhawk_fluid_status_t packet;

    mav_array_memcpy(packet.fuel_level, fuel_level, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_CRC);
}

/**
 * @brief Encode a sunhawk_fluid_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_fluid_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_fluid_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sunhawk_fluid_status_t* sunhawk_fluid_status)
{
    return mavlink_msg_sunhawk_fluid_status_pack(system_id, component_id, msg, sunhawk_fluid_status->fuel_level);
}

/**
 * @brief Encode a sunhawk_fluid_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_fluid_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_fluid_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sunhawk_fluid_status_t* sunhawk_fluid_status)
{
    return mavlink_msg_sunhawk_fluid_status_pack_chan(system_id, component_id, chan, msg, sunhawk_fluid_status->fuel_level);
}

/**
 * @brief Encode a sunhawk_fluid_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_fluid_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_fluid_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sunhawk_fluid_status_t* sunhawk_fluid_status)
{
    return mavlink_msg_sunhawk_fluid_status_pack_status(system_id, component_id, _status, msg,  sunhawk_fluid_status->fuel_level);
}

/**
 * @brief Send a sunhawk_fluid_status message
 * @param chan MAVLink channel to send the message
 *
 * @param fuel_level  ÓÍÏäÓÍÁ¿[1,2,3]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sunhawk_fluid_status_send(mavlink_channel_t chan, const float *fuel_level)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN];

    _mav_put_float_array(buf, 0, fuel_level, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS, buf, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_CRC);
#else
    mavlink_sunhawk_fluid_status_t packet;

    mav_array_memcpy(packet.fuel_level, fuel_level, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS, (const char *)&packet, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_CRC);
#endif
}

/**
 * @brief Send a sunhawk_fluid_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sunhawk_fluid_status_send_struct(mavlink_channel_t chan, const mavlink_sunhawk_fluid_status_t* sunhawk_fluid_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sunhawk_fluid_status_send(chan, sunhawk_fluid_status->fuel_level);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS, (const char *)sunhawk_fluid_status, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sunhawk_fluid_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const float *fuel_level)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_float_array(buf, 0, fuel_level, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS, buf, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_CRC);
#else
    mavlink_sunhawk_fluid_status_t *packet = (mavlink_sunhawk_fluid_status_t *)msgbuf;

    mav_array_memcpy(packet->fuel_level, fuel_level, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS, (const char *)packet, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE SUNHAWK_FLUID_STATUS UNPACKING


/**
 * @brief Get field fuel_level from sunhawk_fluid_status message
 *
 * @return  ÓÍÏäÓÍÁ¿[1,2,3]
 */
static inline uint16_t mavlink_msg_sunhawk_fluid_status_get_fuel_level(const mavlink_message_t* msg, float *fuel_level)
{
    return _MAV_RETURN_float_array(msg, fuel_level, 3,  0);
}

/**
 * @brief Decode a sunhawk_fluid_status message into a struct
 *
 * @param msg The message to decode
 * @param sunhawk_fluid_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_sunhawk_fluid_status_decode(const mavlink_message_t* msg, mavlink_sunhawk_fluid_status_t* sunhawk_fluid_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sunhawk_fluid_status_get_fuel_level(msg, sunhawk_fluid_status->fuel_level);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN? msg->len : MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN;
        memset(sunhawk_fluid_status, 0, MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_LEN);
    memcpy(sunhawk_fluid_status, _MAV_PAYLOAD(msg), len);
#endif
}
