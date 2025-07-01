#pragma once
// MESSAGE SUNHAWK_CMD_FEEDBACK PACKING

#define MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK 13007


typedef struct __mavlink_sunhawk_cmd_feedback_t {
 uint8_t throw_goods; /*<  Å×Í¶×´Ì¬*/
 uint8_t load_status; /*<  ¸ºÔØ¿ª¹Ø×´Ì¬*/
 uint8_t led_power; /*<  LEDµçÔ´×´Ì¬*/
 uint8_t pod_power; /*<  µõ²ÕµçÔ´×´Ì¬*/
 uint8_t pressure_valves; /*<  Ñ¹Á¦·§×´Ì¬*/
 uint8_t sustained_release; /*<  »ºÊÍ·§×´Ì¬*/
 uint8_t ignition_switch; /*<  µã»ð¿ª¹Ø×´Ì¬*/
 uint8_t oilpump_switch; /*<  ÓÍ±Ã¿ª¹Ø×´Ì¬*/
 uint8_t radar_switch; /*<  À×´ï¿ª¹Ø×´Ì¬*/
} mavlink_sunhawk_cmd_feedback_t;

#define MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN 9
#define MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_MIN_LEN 9
#define MAVLINK_MSG_ID_13007_LEN 9
#define MAVLINK_MSG_ID_13007_MIN_LEN 9

#define MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_CRC 56
#define MAVLINK_MSG_ID_13007_CRC 56



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SUNHAWK_CMD_FEEDBACK { \
    13007, \
    "SUNHAWK_CMD_FEEDBACK", \
    9, \
    {  { "throw_goods", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_sunhawk_cmd_feedback_t, throw_goods) }, \
         { "load_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_sunhawk_cmd_feedback_t, load_status) }, \
         { "led_power", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_sunhawk_cmd_feedback_t, led_power) }, \
         { "pod_power", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_sunhawk_cmd_feedback_t, pod_power) }, \
         { "pressure_valves", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_sunhawk_cmd_feedback_t, pressure_valves) }, \
         { "sustained_release", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_sunhawk_cmd_feedback_t, sustained_release) }, \
         { "ignition_switch", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_sunhawk_cmd_feedback_t, ignition_switch) }, \
         { "oilpump_switch", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_sunhawk_cmd_feedback_t, oilpump_switch) }, \
         { "radar_switch", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_sunhawk_cmd_feedback_t, radar_switch) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SUNHAWK_CMD_FEEDBACK { \
    "SUNHAWK_CMD_FEEDBACK", \
    9, \
    {  { "throw_goods", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_sunhawk_cmd_feedback_t, throw_goods) }, \
         { "load_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_sunhawk_cmd_feedback_t, load_status) }, \
         { "led_power", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_sunhawk_cmd_feedback_t, led_power) }, \
         { "pod_power", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_sunhawk_cmd_feedback_t, pod_power) }, \
         { "pressure_valves", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_sunhawk_cmd_feedback_t, pressure_valves) }, \
         { "sustained_release", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_sunhawk_cmd_feedback_t, sustained_release) }, \
         { "ignition_switch", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_sunhawk_cmd_feedback_t, ignition_switch) }, \
         { "oilpump_switch", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_sunhawk_cmd_feedback_t, oilpump_switch) }, \
         { "radar_switch", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_sunhawk_cmd_feedback_t, radar_switch) }, \
         } \
}
#endif

/**
 * @brief Pack a sunhawk_cmd_feedback message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param throw_goods  Å×Í¶×´Ì¬
 * @param load_status  ¸ºÔØ¿ª¹Ø×´Ì¬
 * @param led_power  LEDµçÔ´×´Ì¬
 * @param pod_power  µõ²ÕµçÔ´×´Ì¬
 * @param pressure_valves  Ñ¹Á¦·§×´Ì¬
 * @param sustained_release  »ºÊÍ·§×´Ì¬
 * @param ignition_switch  µã»ð¿ª¹Ø×´Ì¬
 * @param oilpump_switch  ÓÍ±Ã¿ª¹Ø×´Ì¬
 * @param radar_switch  À×´ï¿ª¹Ø×´Ì¬
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_cmd_feedback_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t throw_goods, uint8_t load_status, uint8_t led_power, uint8_t pod_power, uint8_t pressure_valves, uint8_t sustained_release, uint8_t ignition_switch, uint8_t oilpump_switch, uint8_t radar_switch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN];
    _mav_put_uint8_t(buf, 0, throw_goods);
    _mav_put_uint8_t(buf, 1, load_status);
    _mav_put_uint8_t(buf, 2, led_power);
    _mav_put_uint8_t(buf, 3, pod_power);
    _mav_put_uint8_t(buf, 4, pressure_valves);
    _mav_put_uint8_t(buf, 5, sustained_release);
    _mav_put_uint8_t(buf, 6, ignition_switch);
    _mav_put_uint8_t(buf, 7, oilpump_switch);
    _mav_put_uint8_t(buf, 8, radar_switch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN);
#else
    mavlink_sunhawk_cmd_feedback_t packet;
    packet.throw_goods = throw_goods;
    packet.load_status = load_status;
    packet.led_power = led_power;
    packet.pod_power = pod_power;
    packet.pressure_valves = pressure_valves;
    packet.sustained_release = sustained_release;
    packet.ignition_switch = ignition_switch;
    packet.oilpump_switch = oilpump_switch;
    packet.radar_switch = radar_switch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_CRC);
}

/**
 * @brief Pack a sunhawk_cmd_feedback message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param throw_goods  Å×Í¶×´Ì¬
 * @param load_status  ¸ºÔØ¿ª¹Ø×´Ì¬
 * @param led_power  LEDµçÔ´×´Ì¬
 * @param pod_power  µõ²ÕµçÔ´×´Ì¬
 * @param pressure_valves  Ñ¹Á¦·§×´Ì¬
 * @param sustained_release  »ºÊÍ·§×´Ì¬
 * @param ignition_switch  µã»ð¿ª¹Ø×´Ì¬
 * @param oilpump_switch  ÓÍ±Ã¿ª¹Ø×´Ì¬
 * @param radar_switch  À×´ï¿ª¹Ø×´Ì¬
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_cmd_feedback_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t throw_goods, uint8_t load_status, uint8_t led_power, uint8_t pod_power, uint8_t pressure_valves, uint8_t sustained_release, uint8_t ignition_switch, uint8_t oilpump_switch, uint8_t radar_switch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN];
    _mav_put_uint8_t(buf, 0, throw_goods);
    _mav_put_uint8_t(buf, 1, load_status);
    _mav_put_uint8_t(buf, 2, led_power);
    _mav_put_uint8_t(buf, 3, pod_power);
    _mav_put_uint8_t(buf, 4, pressure_valves);
    _mav_put_uint8_t(buf, 5, sustained_release);
    _mav_put_uint8_t(buf, 6, ignition_switch);
    _mav_put_uint8_t(buf, 7, oilpump_switch);
    _mav_put_uint8_t(buf, 8, radar_switch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN);
#else
    mavlink_sunhawk_cmd_feedback_t packet;
    packet.throw_goods = throw_goods;
    packet.load_status = load_status;
    packet.led_power = led_power;
    packet.pod_power = pod_power;
    packet.pressure_valves = pressure_valves;
    packet.sustained_release = sustained_release;
    packet.ignition_switch = ignition_switch;
    packet.oilpump_switch = oilpump_switch;
    packet.radar_switch = radar_switch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN);
#endif
}

/**
 * @brief Pack a sunhawk_cmd_feedback message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param throw_goods  Å×Í¶×´Ì¬
 * @param load_status  ¸ºÔØ¿ª¹Ø×´Ì¬
 * @param led_power  LEDµçÔ´×´Ì¬
 * @param pod_power  µõ²ÕµçÔ´×´Ì¬
 * @param pressure_valves  Ñ¹Á¦·§×´Ì¬
 * @param sustained_release  »ºÊÍ·§×´Ì¬
 * @param ignition_switch  µã»ð¿ª¹Ø×´Ì¬
 * @param oilpump_switch  ÓÍ±Ã¿ª¹Ø×´Ì¬
 * @param radar_switch  À×´ï¿ª¹Ø×´Ì¬
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_cmd_feedback_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t throw_goods,uint8_t load_status,uint8_t led_power,uint8_t pod_power,uint8_t pressure_valves,uint8_t sustained_release,uint8_t ignition_switch,uint8_t oilpump_switch,uint8_t radar_switch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN];
    _mav_put_uint8_t(buf, 0, throw_goods);
    _mav_put_uint8_t(buf, 1, load_status);
    _mav_put_uint8_t(buf, 2, led_power);
    _mav_put_uint8_t(buf, 3, pod_power);
    _mav_put_uint8_t(buf, 4, pressure_valves);
    _mav_put_uint8_t(buf, 5, sustained_release);
    _mav_put_uint8_t(buf, 6, ignition_switch);
    _mav_put_uint8_t(buf, 7, oilpump_switch);
    _mav_put_uint8_t(buf, 8, radar_switch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN);
#else
    mavlink_sunhawk_cmd_feedback_t packet;
    packet.throw_goods = throw_goods;
    packet.load_status = load_status;
    packet.led_power = led_power;
    packet.pod_power = pod_power;
    packet.pressure_valves = pressure_valves;
    packet.sustained_release = sustained_release;
    packet.ignition_switch = ignition_switch;
    packet.oilpump_switch = oilpump_switch;
    packet.radar_switch = radar_switch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_CRC);
}

/**
 * @brief Encode a sunhawk_cmd_feedback struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_cmd_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_cmd_feedback_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sunhawk_cmd_feedback_t* sunhawk_cmd_feedback)
{
    return mavlink_msg_sunhawk_cmd_feedback_pack(system_id, component_id, msg, sunhawk_cmd_feedback->throw_goods, sunhawk_cmd_feedback->load_status, sunhawk_cmd_feedback->led_power, sunhawk_cmd_feedback->pod_power, sunhawk_cmd_feedback->pressure_valves, sunhawk_cmd_feedback->sustained_release, sunhawk_cmd_feedback->ignition_switch, sunhawk_cmd_feedback->oilpump_switch, sunhawk_cmd_feedback->radar_switch);
}

/**
 * @brief Encode a sunhawk_cmd_feedback struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_cmd_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_cmd_feedback_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sunhawk_cmd_feedback_t* sunhawk_cmd_feedback)
{
    return mavlink_msg_sunhawk_cmd_feedback_pack_chan(system_id, component_id, chan, msg, sunhawk_cmd_feedback->throw_goods, sunhawk_cmd_feedback->load_status, sunhawk_cmd_feedback->led_power, sunhawk_cmd_feedback->pod_power, sunhawk_cmd_feedback->pressure_valves, sunhawk_cmd_feedback->sustained_release, sunhawk_cmd_feedback->ignition_switch, sunhawk_cmd_feedback->oilpump_switch, sunhawk_cmd_feedback->radar_switch);
}

/**
 * @brief Encode a sunhawk_cmd_feedback struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_cmd_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_cmd_feedback_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sunhawk_cmd_feedback_t* sunhawk_cmd_feedback)
{
    return mavlink_msg_sunhawk_cmd_feedback_pack_status(system_id, component_id, _status, msg,  sunhawk_cmd_feedback->throw_goods, sunhawk_cmd_feedback->load_status, sunhawk_cmd_feedback->led_power, sunhawk_cmd_feedback->pod_power, sunhawk_cmd_feedback->pressure_valves, sunhawk_cmd_feedback->sustained_release, sunhawk_cmd_feedback->ignition_switch, sunhawk_cmd_feedback->oilpump_switch, sunhawk_cmd_feedback->radar_switch);
}

/**
 * @brief Send a sunhawk_cmd_feedback message
 * @param chan MAVLink channel to send the message
 *
 * @param throw_goods  Å×Í¶×´Ì¬
 * @param load_status  ¸ºÔØ¿ª¹Ø×´Ì¬
 * @param led_power  LEDµçÔ´×´Ì¬
 * @param pod_power  µõ²ÕµçÔ´×´Ì¬
 * @param pressure_valves  Ñ¹Á¦·§×´Ì¬
 * @param sustained_release  »ºÊÍ·§×´Ì¬
 * @param ignition_switch  µã»ð¿ª¹Ø×´Ì¬
 * @param oilpump_switch  ÓÍ±Ã¿ª¹Ø×´Ì¬
 * @param radar_switch  À×´ï¿ª¹Ø×´Ì¬
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sunhawk_cmd_feedback_send(mavlink_channel_t chan, uint8_t throw_goods, uint8_t load_status, uint8_t led_power, uint8_t pod_power, uint8_t pressure_valves, uint8_t sustained_release, uint8_t ignition_switch, uint8_t oilpump_switch, uint8_t radar_switch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN];
    _mav_put_uint8_t(buf, 0, throw_goods);
    _mav_put_uint8_t(buf, 1, load_status);
    _mav_put_uint8_t(buf, 2, led_power);
    _mav_put_uint8_t(buf, 3, pod_power);
    _mav_put_uint8_t(buf, 4, pressure_valves);
    _mav_put_uint8_t(buf, 5, sustained_release);
    _mav_put_uint8_t(buf, 6, ignition_switch);
    _mav_put_uint8_t(buf, 7, oilpump_switch);
    _mav_put_uint8_t(buf, 8, radar_switch);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK, buf, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_CRC);
#else
    mavlink_sunhawk_cmd_feedback_t packet;
    packet.throw_goods = throw_goods;
    packet.load_status = load_status;
    packet.led_power = led_power;
    packet.pod_power = pod_power;
    packet.pressure_valves = pressure_valves;
    packet.sustained_release = sustained_release;
    packet.ignition_switch = ignition_switch;
    packet.oilpump_switch = oilpump_switch;
    packet.radar_switch = radar_switch;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK, (const char *)&packet, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_CRC);
#endif
}

/**
 * @brief Send a sunhawk_cmd_feedback message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sunhawk_cmd_feedback_send_struct(mavlink_channel_t chan, const mavlink_sunhawk_cmd_feedback_t* sunhawk_cmd_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sunhawk_cmd_feedback_send(chan, sunhawk_cmd_feedback->throw_goods, sunhawk_cmd_feedback->load_status, sunhawk_cmd_feedback->led_power, sunhawk_cmd_feedback->pod_power, sunhawk_cmd_feedback->pressure_valves, sunhawk_cmd_feedback->sustained_release, sunhawk_cmd_feedback->ignition_switch, sunhawk_cmd_feedback->oilpump_switch, sunhawk_cmd_feedback->radar_switch);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK, (const char *)sunhawk_cmd_feedback, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sunhawk_cmd_feedback_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t throw_goods, uint8_t load_status, uint8_t led_power, uint8_t pod_power, uint8_t pressure_valves, uint8_t sustained_release, uint8_t ignition_switch, uint8_t oilpump_switch, uint8_t radar_switch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, throw_goods);
    _mav_put_uint8_t(buf, 1, load_status);
    _mav_put_uint8_t(buf, 2, led_power);
    _mav_put_uint8_t(buf, 3, pod_power);
    _mav_put_uint8_t(buf, 4, pressure_valves);
    _mav_put_uint8_t(buf, 5, sustained_release);
    _mav_put_uint8_t(buf, 6, ignition_switch);
    _mav_put_uint8_t(buf, 7, oilpump_switch);
    _mav_put_uint8_t(buf, 8, radar_switch);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK, buf, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_CRC);
#else
    mavlink_sunhawk_cmd_feedback_t *packet = (mavlink_sunhawk_cmd_feedback_t *)msgbuf;
    packet->throw_goods = throw_goods;
    packet->load_status = load_status;
    packet->led_power = led_power;
    packet->pod_power = pod_power;
    packet->pressure_valves = pressure_valves;
    packet->sustained_release = sustained_release;
    packet->ignition_switch = ignition_switch;
    packet->oilpump_switch = oilpump_switch;
    packet->radar_switch = radar_switch;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK, (const char *)packet, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_CRC);
#endif
}
#endif

#endif

// MESSAGE SUNHAWK_CMD_FEEDBACK UNPACKING


/**
 * @brief Get field throw_goods from sunhawk_cmd_feedback message
 *
 * @return  Å×Í¶×´Ì¬
 */
static inline uint8_t mavlink_msg_sunhawk_cmd_feedback_get_throw_goods(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field load_status from sunhawk_cmd_feedback message
 *
 * @return  ¸ºÔØ¿ª¹Ø×´Ì¬
 */
static inline uint8_t mavlink_msg_sunhawk_cmd_feedback_get_load_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field led_power from sunhawk_cmd_feedback message
 *
 * @return  LEDµçÔ´×´Ì¬
 */
static inline uint8_t mavlink_msg_sunhawk_cmd_feedback_get_led_power(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field pod_power from sunhawk_cmd_feedback message
 *
 * @return  µõ²ÕµçÔ´×´Ì¬
 */
static inline uint8_t mavlink_msg_sunhawk_cmd_feedback_get_pod_power(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field pressure_valves from sunhawk_cmd_feedback message
 *
 * @return  Ñ¹Á¦·§×´Ì¬
 */
static inline uint8_t mavlink_msg_sunhawk_cmd_feedback_get_pressure_valves(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field sustained_release from sunhawk_cmd_feedback message
 *
 * @return  »ºÊÍ·§×´Ì¬
 */
static inline uint8_t mavlink_msg_sunhawk_cmd_feedback_get_sustained_release(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field ignition_switch from sunhawk_cmd_feedback message
 *
 * @return  µã»ð¿ª¹Ø×´Ì¬
 */
static inline uint8_t mavlink_msg_sunhawk_cmd_feedback_get_ignition_switch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field oilpump_switch from sunhawk_cmd_feedback message
 *
 * @return  ÓÍ±Ã¿ª¹Ø×´Ì¬
 */
static inline uint8_t mavlink_msg_sunhawk_cmd_feedback_get_oilpump_switch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field radar_switch from sunhawk_cmd_feedback message
 *
 * @return  À×´ï¿ª¹Ø×´Ì¬
 */
static inline uint8_t mavlink_msg_sunhawk_cmd_feedback_get_radar_switch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Decode a sunhawk_cmd_feedback message into a struct
 *
 * @param msg The message to decode
 * @param sunhawk_cmd_feedback C-struct to decode the message contents into
 */
static inline void mavlink_msg_sunhawk_cmd_feedback_decode(const mavlink_message_t* msg, mavlink_sunhawk_cmd_feedback_t* sunhawk_cmd_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    sunhawk_cmd_feedback->throw_goods = mavlink_msg_sunhawk_cmd_feedback_get_throw_goods(msg);
    sunhawk_cmd_feedback->load_status = mavlink_msg_sunhawk_cmd_feedback_get_load_status(msg);
    sunhawk_cmd_feedback->led_power = mavlink_msg_sunhawk_cmd_feedback_get_led_power(msg);
    sunhawk_cmd_feedback->pod_power = mavlink_msg_sunhawk_cmd_feedback_get_pod_power(msg);
    sunhawk_cmd_feedback->pressure_valves = mavlink_msg_sunhawk_cmd_feedback_get_pressure_valves(msg);
    sunhawk_cmd_feedback->sustained_release = mavlink_msg_sunhawk_cmd_feedback_get_sustained_release(msg);
    sunhawk_cmd_feedback->ignition_switch = mavlink_msg_sunhawk_cmd_feedback_get_ignition_switch(msg);
    sunhawk_cmd_feedback->oilpump_switch = mavlink_msg_sunhawk_cmd_feedback_get_oilpump_switch(msg);
    sunhawk_cmd_feedback->radar_switch = mavlink_msg_sunhawk_cmd_feedback_get_radar_switch(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN? msg->len : MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN;
        memset(sunhawk_cmd_feedback, 0, MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_LEN);
    memcpy(sunhawk_cmd_feedback, _MAV_PAYLOAD(msg), len);
#endif
}
