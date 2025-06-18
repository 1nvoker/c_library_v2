#pragma once
// MESSAGE SUNHAWK_MOTOR_DATA PACKING

#define MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA 13004


typedef struct __mavlink_sunhawk_motor_data_t {
 float motor_v; /*<  */
 float motor_feedback[6]; /*<  */
 float motor_aimed[6]; /*<  */
 float motor_a[6]; /*<  */
 float motor_temp[6]; /*<  */
} mavlink_sunhawk_motor_data_t;

#define MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN 100
#define MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_MIN_LEN 100
#define MAVLINK_MSG_ID_13004_LEN 100
#define MAVLINK_MSG_ID_13004_MIN_LEN 100

#define MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_CRC 153
#define MAVLINK_MSG_ID_13004_CRC 153

#define MAVLINK_MSG_SUNHAWK_MOTOR_DATA_FIELD_MOTOR_FEEDBACK_LEN 6
#define MAVLINK_MSG_SUNHAWK_MOTOR_DATA_FIELD_MOTOR_AIMED_LEN 6
#define MAVLINK_MSG_SUNHAWK_MOTOR_DATA_FIELD_MOTOR_A_LEN 6
#define MAVLINK_MSG_SUNHAWK_MOTOR_DATA_FIELD_MOTOR_TEMP_LEN 6

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SUNHAWK_MOTOR_DATA { \
    13004, \
    "SUNHAWK_MOTOR_DATA", \
    5, \
    {  { "motor_v", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_sunhawk_motor_data_t, motor_v) }, \
         { "motor_feedback", NULL, MAVLINK_TYPE_FLOAT, 6, 4, offsetof(mavlink_sunhawk_motor_data_t, motor_feedback) }, \
         { "motor_aimed", NULL, MAVLINK_TYPE_FLOAT, 6, 28, offsetof(mavlink_sunhawk_motor_data_t, motor_aimed) }, \
         { "motor_a", NULL, MAVLINK_TYPE_FLOAT, 6, 52, offsetof(mavlink_sunhawk_motor_data_t, motor_a) }, \
         { "motor_temp", NULL, MAVLINK_TYPE_FLOAT, 6, 76, offsetof(mavlink_sunhawk_motor_data_t, motor_temp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SUNHAWK_MOTOR_DATA { \
    "SUNHAWK_MOTOR_DATA", \
    5, \
    {  { "motor_v", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_sunhawk_motor_data_t, motor_v) }, \
         { "motor_feedback", NULL, MAVLINK_TYPE_FLOAT, 6, 4, offsetof(mavlink_sunhawk_motor_data_t, motor_feedback) }, \
         { "motor_aimed", NULL, MAVLINK_TYPE_FLOAT, 6, 28, offsetof(mavlink_sunhawk_motor_data_t, motor_aimed) }, \
         { "motor_a", NULL, MAVLINK_TYPE_FLOAT, 6, 52, offsetof(mavlink_sunhawk_motor_data_t, motor_a) }, \
         { "motor_temp", NULL, MAVLINK_TYPE_FLOAT, 6, 76, offsetof(mavlink_sunhawk_motor_data_t, motor_temp) }, \
         } \
}
#endif

/**
 * @brief Pack a sunhawk_motor_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param motor_v  
 * @param motor_feedback  
 * @param motor_aimed  
 * @param motor_a  
 * @param motor_temp  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_motor_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float motor_v, const float *motor_feedback, const float *motor_aimed, const float *motor_a, const float *motor_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN];
    _mav_put_float(buf, 0, motor_v);
    _mav_put_float_array(buf, 4, motor_feedback, 6);
    _mav_put_float_array(buf, 28, motor_aimed, 6);
    _mav_put_float_array(buf, 52, motor_a, 6);
    _mav_put_float_array(buf, 76, motor_temp, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN);
#else
    mavlink_sunhawk_motor_data_t packet;
    packet.motor_v = motor_v;
    mav_array_memcpy(packet.motor_feedback, motor_feedback, sizeof(float)*6);
    mav_array_memcpy(packet.motor_aimed, motor_aimed, sizeof(float)*6);
    mav_array_memcpy(packet.motor_a, motor_a, sizeof(float)*6);
    mav_array_memcpy(packet.motor_temp, motor_temp, sizeof(float)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_CRC);
}

/**
 * @brief Pack a sunhawk_motor_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param motor_v  
 * @param motor_feedback  
 * @param motor_aimed  
 * @param motor_a  
 * @param motor_temp  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_motor_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float motor_v, const float *motor_feedback, const float *motor_aimed, const float *motor_a, const float *motor_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN];
    _mav_put_float(buf, 0, motor_v);
    _mav_put_float_array(buf, 4, motor_feedback, 6);
    _mav_put_float_array(buf, 28, motor_aimed, 6);
    _mav_put_float_array(buf, 52, motor_a, 6);
    _mav_put_float_array(buf, 76, motor_temp, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN);
#else
    mavlink_sunhawk_motor_data_t packet;
    packet.motor_v = motor_v;
    mav_array_memcpy(packet.motor_feedback, motor_feedback, sizeof(float)*6);
    mav_array_memcpy(packet.motor_aimed, motor_aimed, sizeof(float)*6);
    mav_array_memcpy(packet.motor_a, motor_a, sizeof(float)*6);
    mav_array_memcpy(packet.motor_temp, motor_temp, sizeof(float)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN);
#endif
}

/**
 * @brief Pack a sunhawk_motor_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param motor_v  
 * @param motor_feedback  
 * @param motor_aimed  
 * @param motor_a  
 * @param motor_temp  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_motor_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float motor_v,const float *motor_feedback,const float *motor_aimed,const float *motor_a,const float *motor_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN];
    _mav_put_float(buf, 0, motor_v);
    _mav_put_float_array(buf, 4, motor_feedback, 6);
    _mav_put_float_array(buf, 28, motor_aimed, 6);
    _mav_put_float_array(buf, 52, motor_a, 6);
    _mav_put_float_array(buf, 76, motor_temp, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN);
#else
    mavlink_sunhawk_motor_data_t packet;
    packet.motor_v = motor_v;
    mav_array_memcpy(packet.motor_feedback, motor_feedback, sizeof(float)*6);
    mav_array_memcpy(packet.motor_aimed, motor_aimed, sizeof(float)*6);
    mav_array_memcpy(packet.motor_a, motor_a, sizeof(float)*6);
    mav_array_memcpy(packet.motor_temp, motor_temp, sizeof(float)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_CRC);
}

/**
 * @brief Encode a sunhawk_motor_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_motor_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_motor_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sunhawk_motor_data_t* sunhawk_motor_data)
{
    return mavlink_msg_sunhawk_motor_data_pack(system_id, component_id, msg, sunhawk_motor_data->motor_v, sunhawk_motor_data->motor_feedback, sunhawk_motor_data->motor_aimed, sunhawk_motor_data->motor_a, sunhawk_motor_data->motor_temp);
}

/**
 * @brief Encode a sunhawk_motor_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_motor_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_motor_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sunhawk_motor_data_t* sunhawk_motor_data)
{
    return mavlink_msg_sunhawk_motor_data_pack_chan(system_id, component_id, chan, msg, sunhawk_motor_data->motor_v, sunhawk_motor_data->motor_feedback, sunhawk_motor_data->motor_aimed, sunhawk_motor_data->motor_a, sunhawk_motor_data->motor_temp);
}

/**
 * @brief Encode a sunhawk_motor_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_motor_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_motor_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sunhawk_motor_data_t* sunhawk_motor_data)
{
    return mavlink_msg_sunhawk_motor_data_pack_status(system_id, component_id, _status, msg,  sunhawk_motor_data->motor_v, sunhawk_motor_data->motor_feedback, sunhawk_motor_data->motor_aimed, sunhawk_motor_data->motor_a, sunhawk_motor_data->motor_temp);
}

/**
 * @brief Send a sunhawk_motor_data message
 * @param chan MAVLink channel to send the message
 *
 * @param motor_v  
 * @param motor_feedback  
 * @param motor_aimed  
 * @param motor_a  
 * @param motor_temp  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sunhawk_motor_data_send(mavlink_channel_t chan, float motor_v, const float *motor_feedback, const float *motor_aimed, const float *motor_a, const float *motor_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN];
    _mav_put_float(buf, 0, motor_v);
    _mav_put_float_array(buf, 4, motor_feedback, 6);
    _mav_put_float_array(buf, 28, motor_aimed, 6);
    _mav_put_float_array(buf, 52, motor_a, 6);
    _mav_put_float_array(buf, 76, motor_temp, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA, buf, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_CRC);
#else
    mavlink_sunhawk_motor_data_t packet;
    packet.motor_v = motor_v;
    mav_array_memcpy(packet.motor_feedback, motor_feedback, sizeof(float)*6);
    mav_array_memcpy(packet.motor_aimed, motor_aimed, sizeof(float)*6);
    mav_array_memcpy(packet.motor_a, motor_a, sizeof(float)*6);
    mav_array_memcpy(packet.motor_temp, motor_temp, sizeof(float)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA, (const char *)&packet, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_CRC);
#endif
}

/**
 * @brief Send a sunhawk_motor_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sunhawk_motor_data_send_struct(mavlink_channel_t chan, const mavlink_sunhawk_motor_data_t* sunhawk_motor_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sunhawk_motor_data_send(chan, sunhawk_motor_data->motor_v, sunhawk_motor_data->motor_feedback, sunhawk_motor_data->motor_aimed, sunhawk_motor_data->motor_a, sunhawk_motor_data->motor_temp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA, (const char *)sunhawk_motor_data, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sunhawk_motor_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float motor_v, const float *motor_feedback, const float *motor_aimed, const float *motor_a, const float *motor_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, motor_v);
    _mav_put_float_array(buf, 4, motor_feedback, 6);
    _mav_put_float_array(buf, 28, motor_aimed, 6);
    _mav_put_float_array(buf, 52, motor_a, 6);
    _mav_put_float_array(buf, 76, motor_temp, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA, buf, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_CRC);
#else
    mavlink_sunhawk_motor_data_t *packet = (mavlink_sunhawk_motor_data_t *)msgbuf;
    packet->motor_v = motor_v;
    mav_array_memcpy(packet->motor_feedback, motor_feedback, sizeof(float)*6);
    mav_array_memcpy(packet->motor_aimed, motor_aimed, sizeof(float)*6);
    mav_array_memcpy(packet->motor_a, motor_a, sizeof(float)*6);
    mav_array_memcpy(packet->motor_temp, motor_temp, sizeof(float)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA, (const char *)packet, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE SUNHAWK_MOTOR_DATA UNPACKING


/**
 * @brief Get field motor_v from sunhawk_motor_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_motor_data_get_motor_v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field motor_feedback from sunhawk_motor_data message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_sunhawk_motor_data_get_motor_feedback(const mavlink_message_t* msg, float *motor_feedback)
{
    return _MAV_RETURN_float_array(msg, motor_feedback, 6,  4);
}

/**
 * @brief Get field motor_aimed from sunhawk_motor_data message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_sunhawk_motor_data_get_motor_aimed(const mavlink_message_t* msg, float *motor_aimed)
{
    return _MAV_RETURN_float_array(msg, motor_aimed, 6,  28);
}

/**
 * @brief Get field motor_a from sunhawk_motor_data message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_sunhawk_motor_data_get_motor_a(const mavlink_message_t* msg, float *motor_a)
{
    return _MAV_RETURN_float_array(msg, motor_a, 6,  52);
}

/**
 * @brief Get field motor_temp from sunhawk_motor_data message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_sunhawk_motor_data_get_motor_temp(const mavlink_message_t* msg, float *motor_temp)
{
    return _MAV_RETURN_float_array(msg, motor_temp, 6,  76);
}

/**
 * @brief Decode a sunhawk_motor_data message into a struct
 *
 * @param msg The message to decode
 * @param sunhawk_motor_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_sunhawk_motor_data_decode(const mavlink_message_t* msg, mavlink_sunhawk_motor_data_t* sunhawk_motor_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    sunhawk_motor_data->motor_v = mavlink_msg_sunhawk_motor_data_get_motor_v(msg);
    mavlink_msg_sunhawk_motor_data_get_motor_feedback(msg, sunhawk_motor_data->motor_feedback);
    mavlink_msg_sunhawk_motor_data_get_motor_aimed(msg, sunhawk_motor_data->motor_aimed);
    mavlink_msg_sunhawk_motor_data_get_motor_a(msg, sunhawk_motor_data->motor_a);
    mavlink_msg_sunhawk_motor_data_get_motor_temp(msg, sunhawk_motor_data->motor_temp);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN? msg->len : MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN;
        memset(sunhawk_motor_data, 0, MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_LEN);
    memcpy(sunhawk_motor_data, _MAV_PAYLOAD(msg), len);
#endif
}
