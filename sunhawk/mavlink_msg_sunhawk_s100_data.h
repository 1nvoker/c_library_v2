#pragma once
// MESSAGE SUNHAWK_S100_DATA PACKING

#define MAVLINK_MSG_ID_SUNHAWK_S100_DATA 13003


typedef struct __mavlink_sunhawk_s100_data_t {
 float k_temp[4]; /*<  */
 float ntc_temp[4]; /*<  */
 float tp100_temp[2]; /*<  */
 float oil_temp; /*<  */
 float oil_percentage; /*<  */
 float gaso_pressure; /*<  */
 float fuel_percentage; /*<  */
 float engine_rpm_feedback; /*<  */
 float starting_v; /*<  */
 float thr_servo_aimed; /*<  Throttle servo control*/
} mavlink_sunhawk_s100_data_t;

#define MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN 68
#define MAVLINK_MSG_ID_SUNHAWK_S100_DATA_MIN_LEN 68
#define MAVLINK_MSG_ID_13003_LEN 68
#define MAVLINK_MSG_ID_13003_MIN_LEN 68

#define MAVLINK_MSG_ID_SUNHAWK_S100_DATA_CRC 230
#define MAVLINK_MSG_ID_13003_CRC 230

#define MAVLINK_MSG_SUNHAWK_S100_DATA_FIELD_K_TEMP_LEN 4
#define MAVLINK_MSG_SUNHAWK_S100_DATA_FIELD_NTC_TEMP_LEN 4
#define MAVLINK_MSG_SUNHAWK_S100_DATA_FIELD_TP100_TEMP_LEN 2

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SUNHAWK_S100_DATA { \
    13003, \
    "SUNHAWK_S100_DATA", \
    10, \
    {  { "k_temp", NULL, MAVLINK_TYPE_FLOAT, 4, 0, offsetof(mavlink_sunhawk_s100_data_t, k_temp) }, \
         { "ntc_temp", NULL, MAVLINK_TYPE_FLOAT, 4, 16, offsetof(mavlink_sunhawk_s100_data_t, ntc_temp) }, \
         { "tp100_temp", NULL, MAVLINK_TYPE_FLOAT, 2, 32, offsetof(mavlink_sunhawk_s100_data_t, tp100_temp) }, \
         { "oil_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_sunhawk_s100_data_t, oil_temp) }, \
         { "oil_percentage", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_sunhawk_s100_data_t, oil_percentage) }, \
         { "gaso_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_sunhawk_s100_data_t, gaso_pressure) }, \
         { "fuel_percentage", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_sunhawk_s100_data_t, fuel_percentage) }, \
         { "engine_rpm_feedback", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_sunhawk_s100_data_t, engine_rpm_feedback) }, \
         { "starting_v", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_sunhawk_s100_data_t, starting_v) }, \
         { "thr_servo_aimed", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_sunhawk_s100_data_t, thr_servo_aimed) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SUNHAWK_S100_DATA { \
    "SUNHAWK_S100_DATA", \
    10, \
    {  { "k_temp", NULL, MAVLINK_TYPE_FLOAT, 4, 0, offsetof(mavlink_sunhawk_s100_data_t, k_temp) }, \
         { "ntc_temp", NULL, MAVLINK_TYPE_FLOAT, 4, 16, offsetof(mavlink_sunhawk_s100_data_t, ntc_temp) }, \
         { "tp100_temp", NULL, MAVLINK_TYPE_FLOAT, 2, 32, offsetof(mavlink_sunhawk_s100_data_t, tp100_temp) }, \
         { "oil_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_sunhawk_s100_data_t, oil_temp) }, \
         { "oil_percentage", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_sunhawk_s100_data_t, oil_percentage) }, \
         { "gaso_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_sunhawk_s100_data_t, gaso_pressure) }, \
         { "fuel_percentage", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_sunhawk_s100_data_t, fuel_percentage) }, \
         { "engine_rpm_feedback", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_sunhawk_s100_data_t, engine_rpm_feedback) }, \
         { "starting_v", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_sunhawk_s100_data_t, starting_v) }, \
         { "thr_servo_aimed", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_sunhawk_s100_data_t, thr_servo_aimed) }, \
         } \
}
#endif

/**
 * @brief Pack a sunhawk_s100_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param k_temp  
 * @param ntc_temp  
 * @param tp100_temp  
 * @param oil_temp  
 * @param oil_percentage  
 * @param gaso_pressure  
 * @param fuel_percentage  
 * @param engine_rpm_feedback  
 * @param starting_v  
 * @param thr_servo_aimed  Throttle servo control
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_s100_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const float *k_temp, const float *ntc_temp, const float *tp100_temp, float oil_temp, float oil_percentage, float gaso_pressure, float fuel_percentage, float engine_rpm_feedback, float starting_v, float thr_servo_aimed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN];
    _mav_put_float(buf, 40, oil_temp);
    _mav_put_float(buf, 44, oil_percentage);
    _mav_put_float(buf, 48, gaso_pressure);
    _mav_put_float(buf, 52, fuel_percentage);
    _mav_put_float(buf, 56, engine_rpm_feedback);
    _mav_put_float(buf, 60, starting_v);
    _mav_put_float(buf, 64, thr_servo_aimed);
    _mav_put_float_array(buf, 0, k_temp, 4);
    _mav_put_float_array(buf, 16, ntc_temp, 4);
    _mav_put_float_array(buf, 32, tp100_temp, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN);
#else
    mavlink_sunhawk_s100_data_t packet;
    packet.oil_temp = oil_temp;
    packet.oil_percentage = oil_percentage;
    packet.gaso_pressure = gaso_pressure;
    packet.fuel_percentage = fuel_percentage;
    packet.engine_rpm_feedback = engine_rpm_feedback;
    packet.starting_v = starting_v;
    packet.thr_servo_aimed = thr_servo_aimed;
    mav_array_memcpy(packet.k_temp, k_temp, sizeof(float)*4);
    mav_array_memcpy(packet.ntc_temp, ntc_temp, sizeof(float)*4);
    mav_array_memcpy(packet.tp100_temp, tp100_temp, sizeof(float)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_S100_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_CRC);
}

/**
 * @brief Pack a sunhawk_s100_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param k_temp  
 * @param ntc_temp  
 * @param tp100_temp  
 * @param oil_temp  
 * @param oil_percentage  
 * @param gaso_pressure  
 * @param fuel_percentage  
 * @param engine_rpm_feedback  
 * @param starting_v  
 * @param thr_servo_aimed  Throttle servo control
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_s100_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const float *k_temp, const float *ntc_temp, const float *tp100_temp, float oil_temp, float oil_percentage, float gaso_pressure, float fuel_percentage, float engine_rpm_feedback, float starting_v, float thr_servo_aimed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN];
    _mav_put_float(buf, 40, oil_temp);
    _mav_put_float(buf, 44, oil_percentage);
    _mav_put_float(buf, 48, gaso_pressure);
    _mav_put_float(buf, 52, fuel_percentage);
    _mav_put_float(buf, 56, engine_rpm_feedback);
    _mav_put_float(buf, 60, starting_v);
    _mav_put_float(buf, 64, thr_servo_aimed);
    _mav_put_float_array(buf, 0, k_temp, 4);
    _mav_put_float_array(buf, 16, ntc_temp, 4);
    _mav_put_float_array(buf, 32, tp100_temp, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN);
#else
    mavlink_sunhawk_s100_data_t packet;
    packet.oil_temp = oil_temp;
    packet.oil_percentage = oil_percentage;
    packet.gaso_pressure = gaso_pressure;
    packet.fuel_percentage = fuel_percentage;
    packet.engine_rpm_feedback = engine_rpm_feedback;
    packet.starting_v = starting_v;
    packet.thr_servo_aimed = thr_servo_aimed;
    mav_array_memcpy(packet.k_temp, k_temp, sizeof(float)*4);
    mav_array_memcpy(packet.ntc_temp, ntc_temp, sizeof(float)*4);
    mav_array_memcpy(packet.tp100_temp, tp100_temp, sizeof(float)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_S100_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN);
#endif
}

/**
 * @brief Pack a sunhawk_s100_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param k_temp  
 * @param ntc_temp  
 * @param tp100_temp  
 * @param oil_temp  
 * @param oil_percentage  
 * @param gaso_pressure  
 * @param fuel_percentage  
 * @param engine_rpm_feedback  
 * @param starting_v  
 * @param thr_servo_aimed  Throttle servo control
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_s100_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const float *k_temp,const float *ntc_temp,const float *tp100_temp,float oil_temp,float oil_percentage,float gaso_pressure,float fuel_percentage,float engine_rpm_feedback,float starting_v,float thr_servo_aimed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN];
    _mav_put_float(buf, 40, oil_temp);
    _mav_put_float(buf, 44, oil_percentage);
    _mav_put_float(buf, 48, gaso_pressure);
    _mav_put_float(buf, 52, fuel_percentage);
    _mav_put_float(buf, 56, engine_rpm_feedback);
    _mav_put_float(buf, 60, starting_v);
    _mav_put_float(buf, 64, thr_servo_aimed);
    _mav_put_float_array(buf, 0, k_temp, 4);
    _mav_put_float_array(buf, 16, ntc_temp, 4);
    _mav_put_float_array(buf, 32, tp100_temp, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN);
#else
    mavlink_sunhawk_s100_data_t packet;
    packet.oil_temp = oil_temp;
    packet.oil_percentage = oil_percentage;
    packet.gaso_pressure = gaso_pressure;
    packet.fuel_percentage = fuel_percentage;
    packet.engine_rpm_feedback = engine_rpm_feedback;
    packet.starting_v = starting_v;
    packet.thr_servo_aimed = thr_servo_aimed;
    mav_array_memcpy(packet.k_temp, k_temp, sizeof(float)*4);
    mav_array_memcpy(packet.ntc_temp, ntc_temp, sizeof(float)*4);
    mav_array_memcpy(packet.tp100_temp, tp100_temp, sizeof(float)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_S100_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_CRC);
}

/**
 * @brief Encode a sunhawk_s100_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_s100_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_s100_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sunhawk_s100_data_t* sunhawk_s100_data)
{
    return mavlink_msg_sunhawk_s100_data_pack(system_id, component_id, msg, sunhawk_s100_data->k_temp, sunhawk_s100_data->ntc_temp, sunhawk_s100_data->tp100_temp, sunhawk_s100_data->oil_temp, sunhawk_s100_data->oil_percentage, sunhawk_s100_data->gaso_pressure, sunhawk_s100_data->fuel_percentage, sunhawk_s100_data->engine_rpm_feedback, sunhawk_s100_data->starting_v, sunhawk_s100_data->thr_servo_aimed);
}

/**
 * @brief Encode a sunhawk_s100_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_s100_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_s100_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sunhawk_s100_data_t* sunhawk_s100_data)
{
    return mavlink_msg_sunhawk_s100_data_pack_chan(system_id, component_id, chan, msg, sunhawk_s100_data->k_temp, sunhawk_s100_data->ntc_temp, sunhawk_s100_data->tp100_temp, sunhawk_s100_data->oil_temp, sunhawk_s100_data->oil_percentage, sunhawk_s100_data->gaso_pressure, sunhawk_s100_data->fuel_percentage, sunhawk_s100_data->engine_rpm_feedback, sunhawk_s100_data->starting_v, sunhawk_s100_data->thr_servo_aimed);
}

/**
 * @brief Encode a sunhawk_s100_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_s100_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_s100_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sunhawk_s100_data_t* sunhawk_s100_data)
{
    return mavlink_msg_sunhawk_s100_data_pack_status(system_id, component_id, _status, msg,  sunhawk_s100_data->k_temp, sunhawk_s100_data->ntc_temp, sunhawk_s100_data->tp100_temp, sunhawk_s100_data->oil_temp, sunhawk_s100_data->oil_percentage, sunhawk_s100_data->gaso_pressure, sunhawk_s100_data->fuel_percentage, sunhawk_s100_data->engine_rpm_feedback, sunhawk_s100_data->starting_v, sunhawk_s100_data->thr_servo_aimed);
}

/**
 * @brief Send a sunhawk_s100_data message
 * @param chan MAVLink channel to send the message
 *
 * @param k_temp  
 * @param ntc_temp  
 * @param tp100_temp  
 * @param oil_temp  
 * @param oil_percentage  
 * @param gaso_pressure  
 * @param fuel_percentage  
 * @param engine_rpm_feedback  
 * @param starting_v  
 * @param thr_servo_aimed  Throttle servo control
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sunhawk_s100_data_send(mavlink_channel_t chan, const float *k_temp, const float *ntc_temp, const float *tp100_temp, float oil_temp, float oil_percentage, float gaso_pressure, float fuel_percentage, float engine_rpm_feedback, float starting_v, float thr_servo_aimed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN];
    _mav_put_float(buf, 40, oil_temp);
    _mav_put_float(buf, 44, oil_percentage);
    _mav_put_float(buf, 48, gaso_pressure);
    _mav_put_float(buf, 52, fuel_percentage);
    _mav_put_float(buf, 56, engine_rpm_feedback);
    _mav_put_float(buf, 60, starting_v);
    _mav_put_float(buf, 64, thr_servo_aimed);
    _mav_put_float_array(buf, 0, k_temp, 4);
    _mav_put_float_array(buf, 16, ntc_temp, 4);
    _mav_put_float_array(buf, 32, tp100_temp, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_S100_DATA, buf, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_CRC);
#else
    mavlink_sunhawk_s100_data_t packet;
    packet.oil_temp = oil_temp;
    packet.oil_percentage = oil_percentage;
    packet.gaso_pressure = gaso_pressure;
    packet.fuel_percentage = fuel_percentage;
    packet.engine_rpm_feedback = engine_rpm_feedback;
    packet.starting_v = starting_v;
    packet.thr_servo_aimed = thr_servo_aimed;
    mav_array_memcpy(packet.k_temp, k_temp, sizeof(float)*4);
    mav_array_memcpy(packet.ntc_temp, ntc_temp, sizeof(float)*4);
    mav_array_memcpy(packet.tp100_temp, tp100_temp, sizeof(float)*2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_S100_DATA, (const char *)&packet, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_CRC);
#endif
}

/**
 * @brief Send a sunhawk_s100_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sunhawk_s100_data_send_struct(mavlink_channel_t chan, const mavlink_sunhawk_s100_data_t* sunhawk_s100_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sunhawk_s100_data_send(chan, sunhawk_s100_data->k_temp, sunhawk_s100_data->ntc_temp, sunhawk_s100_data->tp100_temp, sunhawk_s100_data->oil_temp, sunhawk_s100_data->oil_percentage, sunhawk_s100_data->gaso_pressure, sunhawk_s100_data->fuel_percentage, sunhawk_s100_data->engine_rpm_feedback, sunhawk_s100_data->starting_v, sunhawk_s100_data->thr_servo_aimed);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_S100_DATA, (const char *)sunhawk_s100_data, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sunhawk_s100_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const float *k_temp, const float *ntc_temp, const float *tp100_temp, float oil_temp, float oil_percentage, float gaso_pressure, float fuel_percentage, float engine_rpm_feedback, float starting_v, float thr_servo_aimed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 40, oil_temp);
    _mav_put_float(buf, 44, oil_percentage);
    _mav_put_float(buf, 48, gaso_pressure);
    _mav_put_float(buf, 52, fuel_percentage);
    _mav_put_float(buf, 56, engine_rpm_feedback);
    _mav_put_float(buf, 60, starting_v);
    _mav_put_float(buf, 64, thr_servo_aimed);
    _mav_put_float_array(buf, 0, k_temp, 4);
    _mav_put_float_array(buf, 16, ntc_temp, 4);
    _mav_put_float_array(buf, 32, tp100_temp, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_S100_DATA, buf, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_CRC);
#else
    mavlink_sunhawk_s100_data_t *packet = (mavlink_sunhawk_s100_data_t *)msgbuf;
    packet->oil_temp = oil_temp;
    packet->oil_percentage = oil_percentage;
    packet->gaso_pressure = gaso_pressure;
    packet->fuel_percentage = fuel_percentage;
    packet->engine_rpm_feedback = engine_rpm_feedback;
    packet->starting_v = starting_v;
    packet->thr_servo_aimed = thr_servo_aimed;
    mav_array_memcpy(packet->k_temp, k_temp, sizeof(float)*4);
    mav_array_memcpy(packet->ntc_temp, ntc_temp, sizeof(float)*4);
    mav_array_memcpy(packet->tp100_temp, tp100_temp, sizeof(float)*2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_S100_DATA, (const char *)packet, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE SUNHAWK_S100_DATA UNPACKING


/**
 * @brief Get field k_temp from sunhawk_s100_data message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_sunhawk_s100_data_get_k_temp(const mavlink_message_t* msg, float *k_temp)
{
    return _MAV_RETURN_float_array(msg, k_temp, 4,  0);
}

/**
 * @brief Get field ntc_temp from sunhawk_s100_data message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_sunhawk_s100_data_get_ntc_temp(const mavlink_message_t* msg, float *ntc_temp)
{
    return _MAV_RETURN_float_array(msg, ntc_temp, 4,  16);
}

/**
 * @brief Get field tp100_temp from sunhawk_s100_data message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_sunhawk_s100_data_get_tp100_temp(const mavlink_message_t* msg, float *tp100_temp)
{
    return _MAV_RETURN_float_array(msg, tp100_temp, 2,  32);
}

/**
 * @brief Get field oil_temp from sunhawk_s100_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s100_data_get_oil_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field oil_percentage from sunhawk_s100_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s100_data_get_oil_percentage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field gaso_pressure from sunhawk_s100_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s100_data_get_gaso_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field fuel_percentage from sunhawk_s100_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s100_data_get_fuel_percentage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field engine_rpm_feedback from sunhawk_s100_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s100_data_get_engine_rpm_feedback(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field starting_v from sunhawk_s100_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s100_data_get_starting_v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field thr_servo_aimed from sunhawk_s100_data message
 *
 * @return  Throttle servo control
 */
static inline float mavlink_msg_sunhawk_s100_data_get_thr_servo_aimed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Decode a sunhawk_s100_data message into a struct
 *
 * @param msg The message to decode
 * @param sunhawk_s100_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_sunhawk_s100_data_decode(const mavlink_message_t* msg, mavlink_sunhawk_s100_data_t* sunhawk_s100_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sunhawk_s100_data_get_k_temp(msg, sunhawk_s100_data->k_temp);
    mavlink_msg_sunhawk_s100_data_get_ntc_temp(msg, sunhawk_s100_data->ntc_temp);
    mavlink_msg_sunhawk_s100_data_get_tp100_temp(msg, sunhawk_s100_data->tp100_temp);
    sunhawk_s100_data->oil_temp = mavlink_msg_sunhawk_s100_data_get_oil_temp(msg);
    sunhawk_s100_data->oil_percentage = mavlink_msg_sunhawk_s100_data_get_oil_percentage(msg);
    sunhawk_s100_data->gaso_pressure = mavlink_msg_sunhawk_s100_data_get_gaso_pressure(msg);
    sunhawk_s100_data->fuel_percentage = mavlink_msg_sunhawk_s100_data_get_fuel_percentage(msg);
    sunhawk_s100_data->engine_rpm_feedback = mavlink_msg_sunhawk_s100_data_get_engine_rpm_feedback(msg);
    sunhawk_s100_data->starting_v = mavlink_msg_sunhawk_s100_data_get_starting_v(msg);
    sunhawk_s100_data->thr_servo_aimed = mavlink_msg_sunhawk_s100_data_get_thr_servo_aimed(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN? msg->len : MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN;
        memset(sunhawk_s100_data, 0, MAVLINK_MSG_ID_SUNHAWK_S100_DATA_LEN);
    memcpy(sunhawk_s100_data, _MAV_PAYLOAD(msg), len);
#endif
}
