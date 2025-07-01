#pragma once
// MESSAGE SUNHAWK_CMD PACKING

#define MAVLINK_MSG_ID_SUNHAWK_CMD 13006


typedef struct __mavlink_sunhawk_cmd_t {
 uint8_t cmd; /*<  命令*/
 uint8_t param; /*<  参数*/
} mavlink_sunhawk_cmd_t;

#define MAVLINK_MSG_ID_SUNHAWK_CMD_LEN 2
#define MAVLINK_MSG_ID_SUNHAWK_CMD_MIN_LEN 2
#define MAVLINK_MSG_ID_13006_LEN 2
#define MAVLINK_MSG_ID_13006_MIN_LEN 2

#define MAVLINK_MSG_ID_SUNHAWK_CMD_CRC 200
#define MAVLINK_MSG_ID_13006_CRC 200



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SUNHAWK_CMD { \
    13006, \
    "SUNHAWK_CMD", \
    2, \
    {  { "cmd", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_sunhawk_cmd_t, cmd) }, \
         { "param", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_sunhawk_cmd_t, param) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SUNHAWK_CMD { \
    "SUNHAWK_CMD", \
    2, \
    {  { "cmd", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_sunhawk_cmd_t, cmd) }, \
         { "param", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_sunhawk_cmd_t, param) }, \
         } \
}
#endif

/**
 * @brief Pack a sunhawk_cmd message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cmd  命令
 * @param param  参数
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_cmd_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t cmd, uint8_t param)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_CMD_LEN];
    _mav_put_uint8_t(buf, 0, cmd);
    _mav_put_uint8_t(buf, 1, param);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN);
#else
    mavlink_sunhawk_cmd_t packet;
    packet.cmd = cmd;
    packet.param = param;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_CMD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SUNHAWK_CMD_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_CRC);
}

/**
 * @brief Pack a sunhawk_cmd message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param cmd  命令
 * @param param  参数
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_cmd_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t cmd, uint8_t param)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_CMD_LEN];
    _mav_put_uint8_t(buf, 0, cmd);
    _mav_put_uint8_t(buf, 1, param);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN);
#else
    mavlink_sunhawk_cmd_t packet;
    packet.cmd = cmd;
    packet.param = param;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_CMD;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_CMD_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_CMD_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN);
#endif
}

/**
 * @brief Pack a sunhawk_cmd message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd  命令
 * @param param  参数
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_cmd_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t cmd,uint8_t param)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_CMD_LEN];
    _mav_put_uint8_t(buf, 0, cmd);
    _mav_put_uint8_t(buf, 1, param);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN);
#else
    mavlink_sunhawk_cmd_t packet;
    packet.cmd = cmd;
    packet.param = param;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_CMD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SUNHAWK_CMD_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_CRC);
}

/**
 * @brief Encode a sunhawk_cmd struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_cmd_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sunhawk_cmd_t* sunhawk_cmd)
{
    return mavlink_msg_sunhawk_cmd_pack(system_id, component_id, msg, sunhawk_cmd->cmd, sunhawk_cmd->param);
}

/**
 * @brief Encode a sunhawk_cmd struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_cmd_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sunhawk_cmd_t* sunhawk_cmd)
{
    return mavlink_msg_sunhawk_cmd_pack_chan(system_id, component_id, chan, msg, sunhawk_cmd->cmd, sunhawk_cmd->param);
}

/**
 * @brief Encode a sunhawk_cmd struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_cmd_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sunhawk_cmd_t* sunhawk_cmd)
{
    return mavlink_msg_sunhawk_cmd_pack_status(system_id, component_id, _status, msg,  sunhawk_cmd->cmd, sunhawk_cmd->param);
}

/**
 * @brief Send a sunhawk_cmd message
 * @param chan MAVLink channel to send the message
 *
 * @param cmd  命令
 * @param param  参数
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sunhawk_cmd_send(mavlink_channel_t chan, uint8_t cmd, uint8_t param)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_CMD_LEN];
    _mav_put_uint8_t(buf, 0, cmd);
    _mav_put_uint8_t(buf, 1, param);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_CMD, buf, MAVLINK_MSG_ID_SUNHAWK_CMD_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_CRC);
#else
    mavlink_sunhawk_cmd_t packet;
    packet.cmd = cmd;
    packet.param = param;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_CMD, (const char *)&packet, MAVLINK_MSG_ID_SUNHAWK_CMD_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_CRC);
#endif
}

/**
 * @brief Send a sunhawk_cmd message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sunhawk_cmd_send_struct(mavlink_channel_t chan, const mavlink_sunhawk_cmd_t* sunhawk_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sunhawk_cmd_send(chan, sunhawk_cmd->cmd, sunhawk_cmd->param);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_CMD, (const char *)sunhawk_cmd, MAVLINK_MSG_ID_SUNHAWK_CMD_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_CRC);
#endif
}

#if MAVLINK_MSG_ID_SUNHAWK_CMD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sunhawk_cmd_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t cmd, uint8_t param)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, cmd);
    _mav_put_uint8_t(buf, 1, param);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_CMD, buf, MAVLINK_MSG_ID_SUNHAWK_CMD_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_CRC);
#else
    mavlink_sunhawk_cmd_t *packet = (mavlink_sunhawk_cmd_t *)msgbuf;
    packet->cmd = cmd;
    packet->param = param;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_CMD, (const char *)packet, MAVLINK_MSG_ID_SUNHAWK_CMD_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_CRC);
#endif
}
#endif

#endif

// MESSAGE SUNHAWK_CMD UNPACKING


/**
 * @brief Get field cmd from sunhawk_cmd message
 *
 * @return  命令
 */
static inline uint8_t mavlink_msg_sunhawk_cmd_get_cmd(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field param from sunhawk_cmd message
 *
 * @return  参数
 */
static inline uint8_t mavlink_msg_sunhawk_cmd_get_param(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a sunhawk_cmd message into a struct
 *
 * @param msg The message to decode
 * @param sunhawk_cmd C-struct to decode the message contents into
 */
static inline void mavlink_msg_sunhawk_cmd_decode(const mavlink_message_t* msg, mavlink_sunhawk_cmd_t* sunhawk_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    sunhawk_cmd->cmd = mavlink_msg_sunhawk_cmd_get_cmd(msg);
    sunhawk_cmd->param = mavlink_msg_sunhawk_cmd_get_param(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SUNHAWK_CMD_LEN? msg->len : MAVLINK_MSG_ID_SUNHAWK_CMD_LEN;
        memset(sunhawk_cmd, 0, MAVLINK_MSG_ID_SUNHAWK_CMD_LEN);
    memcpy(sunhawk_cmd, _MAV_PAYLOAD(msg), len);
#endif
}
