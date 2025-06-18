#pragma once
// MESSAGE FRSKY_MANUAL_CONTROL PACKING

#define MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL 13001


typedef struct __mavlink_frsky_manual_control_t {
 int16_t x; /*<  */
 int16_t y; /*<  */
 int16_t z; /*<  */
 int16_t r; /*<   */
 uint16_t buttons; /*<  */
 int16_t s1; /*<  */
 int16_t s2; /*<  */
 int16_t ls; /*<  */
 int16_t rs; /*<  */
 uint8_t target; /*<  The system to be controlled.*/
} mavlink_frsky_manual_control_t;

#define MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN 19
#define MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_MIN_LEN 19
#define MAVLINK_MSG_ID_13001_LEN 19
#define MAVLINK_MSG_ID_13001_MIN_LEN 19

#define MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_CRC 170
#define MAVLINK_MSG_ID_13001_CRC 170



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FRSKY_MANUAL_CONTROL { \
    13001, \
    "FRSKY_MANUAL_CONTROL", \
    10, \
    {  { "target", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_frsky_manual_control_t, target) }, \
         { "x", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_frsky_manual_control_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_frsky_manual_control_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_frsky_manual_control_t, z) }, \
         { "r", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_frsky_manual_control_t, r) }, \
         { "buttons", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_frsky_manual_control_t, buttons) }, \
         { "s1", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_frsky_manual_control_t, s1) }, \
         { "s2", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_frsky_manual_control_t, s2) }, \
         { "ls", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_frsky_manual_control_t, ls) }, \
         { "rs", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_frsky_manual_control_t, rs) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FRSKY_MANUAL_CONTROL { \
    "FRSKY_MANUAL_CONTROL", \
    10, \
    {  { "target", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_frsky_manual_control_t, target) }, \
         { "x", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_frsky_manual_control_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_frsky_manual_control_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_frsky_manual_control_t, z) }, \
         { "r", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_frsky_manual_control_t, r) }, \
         { "buttons", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_frsky_manual_control_t, buttons) }, \
         { "s1", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_frsky_manual_control_t, s1) }, \
         { "s2", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_frsky_manual_control_t, s2) }, \
         { "ls", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_frsky_manual_control_t, ls) }, \
         { "rs", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_frsky_manual_control_t, rs) }, \
         } \
}
#endif

/**
 * @brief Pack a frsky_manual_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target  The system to be controlled.
 * @param x  
 * @param y  
 * @param z  
 * @param r   
 * @param buttons  
 * @param s1  
 * @param s2  
 * @param ls  
 * @param rs  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_frsky_manual_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target, int16_t x, int16_t y, int16_t z, int16_t r, uint16_t buttons, int16_t s1, int16_t s2, int16_t ls, int16_t rs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, x);
    _mav_put_int16_t(buf, 2, y);
    _mav_put_int16_t(buf, 4, z);
    _mav_put_int16_t(buf, 6, r);
    _mav_put_uint16_t(buf, 8, buttons);
    _mav_put_int16_t(buf, 10, s1);
    _mav_put_int16_t(buf, 12, s2);
    _mav_put_int16_t(buf, 14, ls);
    _mav_put_int16_t(buf, 16, rs);
    _mav_put_uint8_t(buf, 18, target);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN);
#else
    mavlink_frsky_manual_control_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.r = r;
    packet.buttons = buttons;
    packet.s1 = s1;
    packet.s2 = s2;
    packet.ls = ls;
    packet.rs = rs;
    packet.target = target;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_CRC);
}

/**
 * @brief Pack a frsky_manual_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target  The system to be controlled.
 * @param x  
 * @param y  
 * @param z  
 * @param r   
 * @param buttons  
 * @param s1  
 * @param s2  
 * @param ls  
 * @param rs  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_frsky_manual_control_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target, int16_t x, int16_t y, int16_t z, int16_t r, uint16_t buttons, int16_t s1, int16_t s2, int16_t ls, int16_t rs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, x);
    _mav_put_int16_t(buf, 2, y);
    _mav_put_int16_t(buf, 4, z);
    _mav_put_int16_t(buf, 6, r);
    _mav_put_uint16_t(buf, 8, buttons);
    _mav_put_int16_t(buf, 10, s1);
    _mav_put_int16_t(buf, 12, s2);
    _mav_put_int16_t(buf, 14, ls);
    _mav_put_int16_t(buf, 16, rs);
    _mav_put_uint8_t(buf, 18, target);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN);
#else
    mavlink_frsky_manual_control_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.r = r;
    packet.buttons = buttons;
    packet.s1 = s1;
    packet.s2 = s2;
    packet.ls = ls;
    packet.rs = rs;
    packet.target = target;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN);
#endif
}

/**
 * @brief Pack a frsky_manual_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target  The system to be controlled.
 * @param x  
 * @param y  
 * @param z  
 * @param r   
 * @param buttons  
 * @param s1  
 * @param s2  
 * @param ls  
 * @param rs  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_frsky_manual_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target,int16_t x,int16_t y,int16_t z,int16_t r,uint16_t buttons,int16_t s1,int16_t s2,int16_t ls,int16_t rs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, x);
    _mav_put_int16_t(buf, 2, y);
    _mav_put_int16_t(buf, 4, z);
    _mav_put_int16_t(buf, 6, r);
    _mav_put_uint16_t(buf, 8, buttons);
    _mav_put_int16_t(buf, 10, s1);
    _mav_put_int16_t(buf, 12, s2);
    _mav_put_int16_t(buf, 14, ls);
    _mav_put_int16_t(buf, 16, rs);
    _mav_put_uint8_t(buf, 18, target);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN);
#else
    mavlink_frsky_manual_control_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.r = r;
    packet.buttons = buttons;
    packet.s1 = s1;
    packet.s2 = s2;
    packet.ls = ls;
    packet.rs = rs;
    packet.target = target;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_CRC);
}

/**
 * @brief Encode a frsky_manual_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param frsky_manual_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_frsky_manual_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_frsky_manual_control_t* frsky_manual_control)
{
    return mavlink_msg_frsky_manual_control_pack(system_id, component_id, msg, frsky_manual_control->target, frsky_manual_control->x, frsky_manual_control->y, frsky_manual_control->z, frsky_manual_control->r, frsky_manual_control->buttons, frsky_manual_control->s1, frsky_manual_control->s2, frsky_manual_control->ls, frsky_manual_control->rs);
}

/**
 * @brief Encode a frsky_manual_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param frsky_manual_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_frsky_manual_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_frsky_manual_control_t* frsky_manual_control)
{
    return mavlink_msg_frsky_manual_control_pack_chan(system_id, component_id, chan, msg, frsky_manual_control->target, frsky_manual_control->x, frsky_manual_control->y, frsky_manual_control->z, frsky_manual_control->r, frsky_manual_control->buttons, frsky_manual_control->s1, frsky_manual_control->s2, frsky_manual_control->ls, frsky_manual_control->rs);
}

/**
 * @brief Encode a frsky_manual_control struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param frsky_manual_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_frsky_manual_control_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_frsky_manual_control_t* frsky_manual_control)
{
    return mavlink_msg_frsky_manual_control_pack_status(system_id, component_id, _status, msg,  frsky_manual_control->target, frsky_manual_control->x, frsky_manual_control->y, frsky_manual_control->z, frsky_manual_control->r, frsky_manual_control->buttons, frsky_manual_control->s1, frsky_manual_control->s2, frsky_manual_control->ls, frsky_manual_control->rs);
}

/**
 * @brief Send a frsky_manual_control message
 * @param chan MAVLink channel to send the message
 *
 * @param target  The system to be controlled.
 * @param x  
 * @param y  
 * @param z  
 * @param r   
 * @param buttons  
 * @param s1  
 * @param s2  
 * @param ls  
 * @param rs  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_frsky_manual_control_send(mavlink_channel_t chan, uint8_t target, int16_t x, int16_t y, int16_t z, int16_t r, uint16_t buttons, int16_t s1, int16_t s2, int16_t ls, int16_t rs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, x);
    _mav_put_int16_t(buf, 2, y);
    _mav_put_int16_t(buf, 4, z);
    _mav_put_int16_t(buf, 6, r);
    _mav_put_uint16_t(buf, 8, buttons);
    _mav_put_int16_t(buf, 10, s1);
    _mav_put_int16_t(buf, 12, s2);
    _mav_put_int16_t(buf, 14, ls);
    _mav_put_int16_t(buf, 16, rs);
    _mav_put_uint8_t(buf, 18, target);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL, buf, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_CRC);
#else
    mavlink_frsky_manual_control_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.r = r;
    packet.buttons = buttons;
    packet.s1 = s1;
    packet.s2 = s2;
    packet.ls = ls;
    packet.rs = rs;
    packet.target = target;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_CRC);
#endif
}

/**
 * @brief Send a frsky_manual_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_frsky_manual_control_send_struct(mavlink_channel_t chan, const mavlink_frsky_manual_control_t* frsky_manual_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_frsky_manual_control_send(chan, frsky_manual_control->target, frsky_manual_control->x, frsky_manual_control->y, frsky_manual_control->z, frsky_manual_control->r, frsky_manual_control->buttons, frsky_manual_control->s1, frsky_manual_control->s2, frsky_manual_control->ls, frsky_manual_control->rs);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL, (const char *)frsky_manual_control, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_frsky_manual_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target, int16_t x, int16_t y, int16_t z, int16_t r, uint16_t buttons, int16_t s1, int16_t s2, int16_t ls, int16_t rs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, x);
    _mav_put_int16_t(buf, 2, y);
    _mav_put_int16_t(buf, 4, z);
    _mav_put_int16_t(buf, 6, r);
    _mav_put_uint16_t(buf, 8, buttons);
    _mav_put_int16_t(buf, 10, s1);
    _mav_put_int16_t(buf, 12, s2);
    _mav_put_int16_t(buf, 14, ls);
    _mav_put_int16_t(buf, 16, rs);
    _mav_put_uint8_t(buf, 18, target);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL, buf, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_CRC);
#else
    mavlink_frsky_manual_control_t *packet = (mavlink_frsky_manual_control_t *)msgbuf;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->r = r;
    packet->buttons = buttons;
    packet->s1 = s1;
    packet->s2 = s2;
    packet->ls = ls;
    packet->rs = rs;
    packet->target = target;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL, (const char *)packet, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE FRSKY_MANUAL_CONTROL UNPACKING


/**
 * @brief Get field target from frsky_manual_control message
 *
 * @return  The system to be controlled.
 */
static inline uint8_t mavlink_msg_frsky_manual_control_get_target(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field x from frsky_manual_control message
 *
 * @return  
 */
static inline int16_t mavlink_msg_frsky_manual_control_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field y from frsky_manual_control message
 *
 * @return  
 */
static inline int16_t mavlink_msg_frsky_manual_control_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field z from frsky_manual_control message
 *
 * @return  
 */
static inline int16_t mavlink_msg_frsky_manual_control_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field r from frsky_manual_control message
 *
 * @return   
 */
static inline int16_t mavlink_msg_frsky_manual_control_get_r(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field buttons from frsky_manual_control message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_frsky_manual_control_get_buttons(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field s1 from frsky_manual_control message
 *
 * @return  
 */
static inline int16_t mavlink_msg_frsky_manual_control_get_s1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field s2 from frsky_manual_control message
 *
 * @return  
 */
static inline int16_t mavlink_msg_frsky_manual_control_get_s2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field ls from frsky_manual_control message
 *
 * @return  
 */
static inline int16_t mavlink_msg_frsky_manual_control_get_ls(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field rs from frsky_manual_control message
 *
 * @return  
 */
static inline int16_t mavlink_msg_frsky_manual_control_get_rs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Decode a frsky_manual_control message into a struct
 *
 * @param msg The message to decode
 * @param frsky_manual_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_frsky_manual_control_decode(const mavlink_message_t* msg, mavlink_frsky_manual_control_t* frsky_manual_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    frsky_manual_control->x = mavlink_msg_frsky_manual_control_get_x(msg);
    frsky_manual_control->y = mavlink_msg_frsky_manual_control_get_y(msg);
    frsky_manual_control->z = mavlink_msg_frsky_manual_control_get_z(msg);
    frsky_manual_control->r = mavlink_msg_frsky_manual_control_get_r(msg);
    frsky_manual_control->buttons = mavlink_msg_frsky_manual_control_get_buttons(msg);
    frsky_manual_control->s1 = mavlink_msg_frsky_manual_control_get_s1(msg);
    frsky_manual_control->s2 = mavlink_msg_frsky_manual_control_get_s2(msg);
    frsky_manual_control->ls = mavlink_msg_frsky_manual_control_get_ls(msg);
    frsky_manual_control->rs = mavlink_msg_frsky_manual_control_get_rs(msg);
    frsky_manual_control->target = mavlink_msg_frsky_manual_control_get_target(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN;
        memset(frsky_manual_control, 0, MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_LEN);
    memcpy(frsky_manual_control, _MAV_PAYLOAD(msg), len);
#endif
}
