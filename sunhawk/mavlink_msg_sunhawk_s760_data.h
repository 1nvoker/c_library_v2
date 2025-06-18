#pragma once
// MESSAGE SUNHAWK_S760_DATA PACKING

#define MAVLINK_MSG_ID_SUNHAWK_S760_DATA 13002


typedef struct __mavlink_sunhawk_s760_data_t {
 float gear_temp[2]; /*<  [front back] gear tempreture*/
 float fuel_percentage; /*<  */
 float ecu_water_temp; /*<  */
 float ecu_intake_maniflod_pressure; /*<  */
 float ecu_intake_air_temp; /*<  */
 float ecu_thr_valve_opening; /*<  */
 float ecu_rpm_feedback; /*<  */
 float ecu_rpm_accurancy; /*<  */
 float ecu_pedal_aimed; /*<  */
 float ecu_pedal_feedback; /*<  */
 float ecu_oil_temp; /*<  */
 float ecu_oil_pressure; /*<  */
 float ecu_gaso_pressure; /*<  */
 float ectl_aimed; /*<  */
 float ecu_input_v; /*<  */
} mavlink_sunhawk_s760_data_t;

#define MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN 64
#define MAVLINK_MSG_ID_SUNHAWK_S760_DATA_MIN_LEN 64
#define MAVLINK_MSG_ID_13002_LEN 64
#define MAVLINK_MSG_ID_13002_MIN_LEN 64

#define MAVLINK_MSG_ID_SUNHAWK_S760_DATA_CRC 31
#define MAVLINK_MSG_ID_13002_CRC 31

#define MAVLINK_MSG_SUNHAWK_S760_DATA_FIELD_GEAR_TEMP_LEN 2

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SUNHAWK_S760_DATA { \
    13002, \
    "SUNHAWK_S760_DATA", \
    15, \
    {  { "gear_temp", NULL, MAVLINK_TYPE_FLOAT, 2, 0, offsetof(mavlink_sunhawk_s760_data_t, gear_temp) }, \
         { "fuel_percentage", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_sunhawk_s760_data_t, fuel_percentage) }, \
         { "ecu_water_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_sunhawk_s760_data_t, ecu_water_temp) }, \
         { "ecu_intake_maniflod_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_sunhawk_s760_data_t, ecu_intake_maniflod_pressure) }, \
         { "ecu_intake_air_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_sunhawk_s760_data_t, ecu_intake_air_temp) }, \
         { "ecu_thr_valve_opening", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_sunhawk_s760_data_t, ecu_thr_valve_opening) }, \
         { "ecu_rpm_feedback", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_sunhawk_s760_data_t, ecu_rpm_feedback) }, \
         { "ecu_rpm_accurancy", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_sunhawk_s760_data_t, ecu_rpm_accurancy) }, \
         { "ecu_pedal_aimed", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_sunhawk_s760_data_t, ecu_pedal_aimed) }, \
         { "ecu_pedal_feedback", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_sunhawk_s760_data_t, ecu_pedal_feedback) }, \
         { "ecu_oil_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_sunhawk_s760_data_t, ecu_oil_temp) }, \
         { "ecu_oil_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_sunhawk_s760_data_t, ecu_oil_pressure) }, \
         { "ecu_gaso_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_sunhawk_s760_data_t, ecu_gaso_pressure) }, \
         { "ectl_aimed", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_sunhawk_s760_data_t, ectl_aimed) }, \
         { "ecu_input_v", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_sunhawk_s760_data_t, ecu_input_v) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SUNHAWK_S760_DATA { \
    "SUNHAWK_S760_DATA", \
    15, \
    {  { "gear_temp", NULL, MAVLINK_TYPE_FLOAT, 2, 0, offsetof(mavlink_sunhawk_s760_data_t, gear_temp) }, \
         { "fuel_percentage", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_sunhawk_s760_data_t, fuel_percentage) }, \
         { "ecu_water_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_sunhawk_s760_data_t, ecu_water_temp) }, \
         { "ecu_intake_maniflod_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_sunhawk_s760_data_t, ecu_intake_maniflod_pressure) }, \
         { "ecu_intake_air_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_sunhawk_s760_data_t, ecu_intake_air_temp) }, \
         { "ecu_thr_valve_opening", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_sunhawk_s760_data_t, ecu_thr_valve_opening) }, \
         { "ecu_rpm_feedback", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_sunhawk_s760_data_t, ecu_rpm_feedback) }, \
         { "ecu_rpm_accurancy", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_sunhawk_s760_data_t, ecu_rpm_accurancy) }, \
         { "ecu_pedal_aimed", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_sunhawk_s760_data_t, ecu_pedal_aimed) }, \
         { "ecu_pedal_feedback", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_sunhawk_s760_data_t, ecu_pedal_feedback) }, \
         { "ecu_oil_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_sunhawk_s760_data_t, ecu_oil_temp) }, \
         { "ecu_oil_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_sunhawk_s760_data_t, ecu_oil_pressure) }, \
         { "ecu_gaso_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_sunhawk_s760_data_t, ecu_gaso_pressure) }, \
         { "ectl_aimed", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_sunhawk_s760_data_t, ectl_aimed) }, \
         { "ecu_input_v", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_sunhawk_s760_data_t, ecu_input_v) }, \
         } \
}
#endif

/**
 * @brief Pack a sunhawk_s760_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param gear_temp  [front back] gear tempreture
 * @param fuel_percentage  
 * @param ecu_water_temp  
 * @param ecu_intake_maniflod_pressure  
 * @param ecu_intake_air_temp  
 * @param ecu_thr_valve_opening  
 * @param ecu_rpm_feedback  
 * @param ecu_rpm_accurancy  
 * @param ecu_pedal_aimed  
 * @param ecu_pedal_feedback  
 * @param ecu_oil_temp  
 * @param ecu_oil_pressure  
 * @param ecu_gaso_pressure  
 * @param ectl_aimed  
 * @param ecu_input_v  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_s760_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const float *gear_temp, float fuel_percentage, float ecu_water_temp, float ecu_intake_maniflod_pressure, float ecu_intake_air_temp, float ecu_thr_valve_opening, float ecu_rpm_feedback, float ecu_rpm_accurancy, float ecu_pedal_aimed, float ecu_pedal_feedback, float ecu_oil_temp, float ecu_oil_pressure, float ecu_gaso_pressure, float ectl_aimed, float ecu_input_v)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN];
    _mav_put_float(buf, 8, fuel_percentage);
    _mav_put_float(buf, 12, ecu_water_temp);
    _mav_put_float(buf, 16, ecu_intake_maniflod_pressure);
    _mav_put_float(buf, 20, ecu_intake_air_temp);
    _mav_put_float(buf, 24, ecu_thr_valve_opening);
    _mav_put_float(buf, 28, ecu_rpm_feedback);
    _mav_put_float(buf, 32, ecu_rpm_accurancy);
    _mav_put_float(buf, 36, ecu_pedal_aimed);
    _mav_put_float(buf, 40, ecu_pedal_feedback);
    _mav_put_float(buf, 44, ecu_oil_temp);
    _mav_put_float(buf, 48, ecu_oil_pressure);
    _mav_put_float(buf, 52, ecu_gaso_pressure);
    _mav_put_float(buf, 56, ectl_aimed);
    _mav_put_float(buf, 60, ecu_input_v);
    _mav_put_float_array(buf, 0, gear_temp, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN);
#else
    mavlink_sunhawk_s760_data_t packet;
    packet.fuel_percentage = fuel_percentage;
    packet.ecu_water_temp = ecu_water_temp;
    packet.ecu_intake_maniflod_pressure = ecu_intake_maniflod_pressure;
    packet.ecu_intake_air_temp = ecu_intake_air_temp;
    packet.ecu_thr_valve_opening = ecu_thr_valve_opening;
    packet.ecu_rpm_feedback = ecu_rpm_feedback;
    packet.ecu_rpm_accurancy = ecu_rpm_accurancy;
    packet.ecu_pedal_aimed = ecu_pedal_aimed;
    packet.ecu_pedal_feedback = ecu_pedal_feedback;
    packet.ecu_oil_temp = ecu_oil_temp;
    packet.ecu_oil_pressure = ecu_oil_pressure;
    packet.ecu_gaso_pressure = ecu_gaso_pressure;
    packet.ectl_aimed = ectl_aimed;
    packet.ecu_input_v = ecu_input_v;
    mav_array_memcpy(packet.gear_temp, gear_temp, sizeof(float)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_S760_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_CRC);
}

/**
 * @brief Pack a sunhawk_s760_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param gear_temp  [front back] gear tempreture
 * @param fuel_percentage  
 * @param ecu_water_temp  
 * @param ecu_intake_maniflod_pressure  
 * @param ecu_intake_air_temp  
 * @param ecu_thr_valve_opening  
 * @param ecu_rpm_feedback  
 * @param ecu_rpm_accurancy  
 * @param ecu_pedal_aimed  
 * @param ecu_pedal_feedback  
 * @param ecu_oil_temp  
 * @param ecu_oil_pressure  
 * @param ecu_gaso_pressure  
 * @param ectl_aimed  
 * @param ecu_input_v  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_s760_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const float *gear_temp, float fuel_percentage, float ecu_water_temp, float ecu_intake_maniflod_pressure, float ecu_intake_air_temp, float ecu_thr_valve_opening, float ecu_rpm_feedback, float ecu_rpm_accurancy, float ecu_pedal_aimed, float ecu_pedal_feedback, float ecu_oil_temp, float ecu_oil_pressure, float ecu_gaso_pressure, float ectl_aimed, float ecu_input_v)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN];
    _mav_put_float(buf, 8, fuel_percentage);
    _mav_put_float(buf, 12, ecu_water_temp);
    _mav_put_float(buf, 16, ecu_intake_maniflod_pressure);
    _mav_put_float(buf, 20, ecu_intake_air_temp);
    _mav_put_float(buf, 24, ecu_thr_valve_opening);
    _mav_put_float(buf, 28, ecu_rpm_feedback);
    _mav_put_float(buf, 32, ecu_rpm_accurancy);
    _mav_put_float(buf, 36, ecu_pedal_aimed);
    _mav_put_float(buf, 40, ecu_pedal_feedback);
    _mav_put_float(buf, 44, ecu_oil_temp);
    _mav_put_float(buf, 48, ecu_oil_pressure);
    _mav_put_float(buf, 52, ecu_gaso_pressure);
    _mav_put_float(buf, 56, ectl_aimed);
    _mav_put_float(buf, 60, ecu_input_v);
    _mav_put_float_array(buf, 0, gear_temp, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN);
#else
    mavlink_sunhawk_s760_data_t packet;
    packet.fuel_percentage = fuel_percentage;
    packet.ecu_water_temp = ecu_water_temp;
    packet.ecu_intake_maniflod_pressure = ecu_intake_maniflod_pressure;
    packet.ecu_intake_air_temp = ecu_intake_air_temp;
    packet.ecu_thr_valve_opening = ecu_thr_valve_opening;
    packet.ecu_rpm_feedback = ecu_rpm_feedback;
    packet.ecu_rpm_accurancy = ecu_rpm_accurancy;
    packet.ecu_pedal_aimed = ecu_pedal_aimed;
    packet.ecu_pedal_feedback = ecu_pedal_feedback;
    packet.ecu_oil_temp = ecu_oil_temp;
    packet.ecu_oil_pressure = ecu_oil_pressure;
    packet.ecu_gaso_pressure = ecu_gaso_pressure;
    packet.ectl_aimed = ectl_aimed;
    packet.ecu_input_v = ecu_input_v;
    mav_array_memcpy(packet.gear_temp, gear_temp, sizeof(float)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_S760_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN);
#endif
}

/**
 * @brief Pack a sunhawk_s760_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gear_temp  [front back] gear tempreture
 * @param fuel_percentage  
 * @param ecu_water_temp  
 * @param ecu_intake_maniflod_pressure  
 * @param ecu_intake_air_temp  
 * @param ecu_thr_valve_opening  
 * @param ecu_rpm_feedback  
 * @param ecu_rpm_accurancy  
 * @param ecu_pedal_aimed  
 * @param ecu_pedal_feedback  
 * @param ecu_oil_temp  
 * @param ecu_oil_pressure  
 * @param ecu_gaso_pressure  
 * @param ectl_aimed  
 * @param ecu_input_v  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sunhawk_s760_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const float *gear_temp,float fuel_percentage,float ecu_water_temp,float ecu_intake_maniflod_pressure,float ecu_intake_air_temp,float ecu_thr_valve_opening,float ecu_rpm_feedback,float ecu_rpm_accurancy,float ecu_pedal_aimed,float ecu_pedal_feedback,float ecu_oil_temp,float ecu_oil_pressure,float ecu_gaso_pressure,float ectl_aimed,float ecu_input_v)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN];
    _mav_put_float(buf, 8, fuel_percentage);
    _mav_put_float(buf, 12, ecu_water_temp);
    _mav_put_float(buf, 16, ecu_intake_maniflod_pressure);
    _mav_put_float(buf, 20, ecu_intake_air_temp);
    _mav_put_float(buf, 24, ecu_thr_valve_opening);
    _mav_put_float(buf, 28, ecu_rpm_feedback);
    _mav_put_float(buf, 32, ecu_rpm_accurancy);
    _mav_put_float(buf, 36, ecu_pedal_aimed);
    _mav_put_float(buf, 40, ecu_pedal_feedback);
    _mav_put_float(buf, 44, ecu_oil_temp);
    _mav_put_float(buf, 48, ecu_oil_pressure);
    _mav_put_float(buf, 52, ecu_gaso_pressure);
    _mav_put_float(buf, 56, ectl_aimed);
    _mav_put_float(buf, 60, ecu_input_v);
    _mav_put_float_array(buf, 0, gear_temp, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN);
#else
    mavlink_sunhawk_s760_data_t packet;
    packet.fuel_percentage = fuel_percentage;
    packet.ecu_water_temp = ecu_water_temp;
    packet.ecu_intake_maniflod_pressure = ecu_intake_maniflod_pressure;
    packet.ecu_intake_air_temp = ecu_intake_air_temp;
    packet.ecu_thr_valve_opening = ecu_thr_valve_opening;
    packet.ecu_rpm_feedback = ecu_rpm_feedback;
    packet.ecu_rpm_accurancy = ecu_rpm_accurancy;
    packet.ecu_pedal_aimed = ecu_pedal_aimed;
    packet.ecu_pedal_feedback = ecu_pedal_feedback;
    packet.ecu_oil_temp = ecu_oil_temp;
    packet.ecu_oil_pressure = ecu_oil_pressure;
    packet.ecu_gaso_pressure = ecu_gaso_pressure;
    packet.ectl_aimed = ectl_aimed;
    packet.ecu_input_v = ecu_input_v;
    mav_array_memcpy(packet.gear_temp, gear_temp, sizeof(float)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SUNHAWK_S760_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_CRC);
}

/**
 * @brief Encode a sunhawk_s760_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_s760_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_s760_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sunhawk_s760_data_t* sunhawk_s760_data)
{
    return mavlink_msg_sunhawk_s760_data_pack(system_id, component_id, msg, sunhawk_s760_data->gear_temp, sunhawk_s760_data->fuel_percentage, sunhawk_s760_data->ecu_water_temp, sunhawk_s760_data->ecu_intake_maniflod_pressure, sunhawk_s760_data->ecu_intake_air_temp, sunhawk_s760_data->ecu_thr_valve_opening, sunhawk_s760_data->ecu_rpm_feedback, sunhawk_s760_data->ecu_rpm_accurancy, sunhawk_s760_data->ecu_pedal_aimed, sunhawk_s760_data->ecu_pedal_feedback, sunhawk_s760_data->ecu_oil_temp, sunhawk_s760_data->ecu_oil_pressure, sunhawk_s760_data->ecu_gaso_pressure, sunhawk_s760_data->ectl_aimed, sunhawk_s760_data->ecu_input_v);
}

/**
 * @brief Encode a sunhawk_s760_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_s760_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_s760_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sunhawk_s760_data_t* sunhawk_s760_data)
{
    return mavlink_msg_sunhawk_s760_data_pack_chan(system_id, component_id, chan, msg, sunhawk_s760_data->gear_temp, sunhawk_s760_data->fuel_percentage, sunhawk_s760_data->ecu_water_temp, sunhawk_s760_data->ecu_intake_maniflod_pressure, sunhawk_s760_data->ecu_intake_air_temp, sunhawk_s760_data->ecu_thr_valve_opening, sunhawk_s760_data->ecu_rpm_feedback, sunhawk_s760_data->ecu_rpm_accurancy, sunhawk_s760_data->ecu_pedal_aimed, sunhawk_s760_data->ecu_pedal_feedback, sunhawk_s760_data->ecu_oil_temp, sunhawk_s760_data->ecu_oil_pressure, sunhawk_s760_data->ecu_gaso_pressure, sunhawk_s760_data->ectl_aimed, sunhawk_s760_data->ecu_input_v);
}

/**
 * @brief Encode a sunhawk_s760_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sunhawk_s760_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sunhawk_s760_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sunhawk_s760_data_t* sunhawk_s760_data)
{
    return mavlink_msg_sunhawk_s760_data_pack_status(system_id, component_id, _status, msg,  sunhawk_s760_data->gear_temp, sunhawk_s760_data->fuel_percentage, sunhawk_s760_data->ecu_water_temp, sunhawk_s760_data->ecu_intake_maniflod_pressure, sunhawk_s760_data->ecu_intake_air_temp, sunhawk_s760_data->ecu_thr_valve_opening, sunhawk_s760_data->ecu_rpm_feedback, sunhawk_s760_data->ecu_rpm_accurancy, sunhawk_s760_data->ecu_pedal_aimed, sunhawk_s760_data->ecu_pedal_feedback, sunhawk_s760_data->ecu_oil_temp, sunhawk_s760_data->ecu_oil_pressure, sunhawk_s760_data->ecu_gaso_pressure, sunhawk_s760_data->ectl_aimed, sunhawk_s760_data->ecu_input_v);
}

/**
 * @brief Send a sunhawk_s760_data message
 * @param chan MAVLink channel to send the message
 *
 * @param gear_temp  [front back] gear tempreture
 * @param fuel_percentage  
 * @param ecu_water_temp  
 * @param ecu_intake_maniflod_pressure  
 * @param ecu_intake_air_temp  
 * @param ecu_thr_valve_opening  
 * @param ecu_rpm_feedback  
 * @param ecu_rpm_accurancy  
 * @param ecu_pedal_aimed  
 * @param ecu_pedal_feedback  
 * @param ecu_oil_temp  
 * @param ecu_oil_pressure  
 * @param ecu_gaso_pressure  
 * @param ectl_aimed  
 * @param ecu_input_v  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sunhawk_s760_data_send(mavlink_channel_t chan, const float *gear_temp, float fuel_percentage, float ecu_water_temp, float ecu_intake_maniflod_pressure, float ecu_intake_air_temp, float ecu_thr_valve_opening, float ecu_rpm_feedback, float ecu_rpm_accurancy, float ecu_pedal_aimed, float ecu_pedal_feedback, float ecu_oil_temp, float ecu_oil_pressure, float ecu_gaso_pressure, float ectl_aimed, float ecu_input_v)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN];
    _mav_put_float(buf, 8, fuel_percentage);
    _mav_put_float(buf, 12, ecu_water_temp);
    _mav_put_float(buf, 16, ecu_intake_maniflod_pressure);
    _mav_put_float(buf, 20, ecu_intake_air_temp);
    _mav_put_float(buf, 24, ecu_thr_valve_opening);
    _mav_put_float(buf, 28, ecu_rpm_feedback);
    _mav_put_float(buf, 32, ecu_rpm_accurancy);
    _mav_put_float(buf, 36, ecu_pedal_aimed);
    _mav_put_float(buf, 40, ecu_pedal_feedback);
    _mav_put_float(buf, 44, ecu_oil_temp);
    _mav_put_float(buf, 48, ecu_oil_pressure);
    _mav_put_float(buf, 52, ecu_gaso_pressure);
    _mav_put_float(buf, 56, ectl_aimed);
    _mav_put_float(buf, 60, ecu_input_v);
    _mav_put_float_array(buf, 0, gear_temp, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_S760_DATA, buf, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_CRC);
#else
    mavlink_sunhawk_s760_data_t packet;
    packet.fuel_percentage = fuel_percentage;
    packet.ecu_water_temp = ecu_water_temp;
    packet.ecu_intake_maniflod_pressure = ecu_intake_maniflod_pressure;
    packet.ecu_intake_air_temp = ecu_intake_air_temp;
    packet.ecu_thr_valve_opening = ecu_thr_valve_opening;
    packet.ecu_rpm_feedback = ecu_rpm_feedback;
    packet.ecu_rpm_accurancy = ecu_rpm_accurancy;
    packet.ecu_pedal_aimed = ecu_pedal_aimed;
    packet.ecu_pedal_feedback = ecu_pedal_feedback;
    packet.ecu_oil_temp = ecu_oil_temp;
    packet.ecu_oil_pressure = ecu_oil_pressure;
    packet.ecu_gaso_pressure = ecu_gaso_pressure;
    packet.ectl_aimed = ectl_aimed;
    packet.ecu_input_v = ecu_input_v;
    mav_array_memcpy(packet.gear_temp, gear_temp, sizeof(float)*2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_S760_DATA, (const char *)&packet, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_CRC);
#endif
}

/**
 * @brief Send a sunhawk_s760_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sunhawk_s760_data_send_struct(mavlink_channel_t chan, const mavlink_sunhawk_s760_data_t* sunhawk_s760_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sunhawk_s760_data_send(chan, sunhawk_s760_data->gear_temp, sunhawk_s760_data->fuel_percentage, sunhawk_s760_data->ecu_water_temp, sunhawk_s760_data->ecu_intake_maniflod_pressure, sunhawk_s760_data->ecu_intake_air_temp, sunhawk_s760_data->ecu_thr_valve_opening, sunhawk_s760_data->ecu_rpm_feedback, sunhawk_s760_data->ecu_rpm_accurancy, sunhawk_s760_data->ecu_pedal_aimed, sunhawk_s760_data->ecu_pedal_feedback, sunhawk_s760_data->ecu_oil_temp, sunhawk_s760_data->ecu_oil_pressure, sunhawk_s760_data->ecu_gaso_pressure, sunhawk_s760_data->ectl_aimed, sunhawk_s760_data->ecu_input_v);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_S760_DATA, (const char *)sunhawk_s760_data, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sunhawk_s760_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const float *gear_temp, float fuel_percentage, float ecu_water_temp, float ecu_intake_maniflod_pressure, float ecu_intake_air_temp, float ecu_thr_valve_opening, float ecu_rpm_feedback, float ecu_rpm_accurancy, float ecu_pedal_aimed, float ecu_pedal_feedback, float ecu_oil_temp, float ecu_oil_pressure, float ecu_gaso_pressure, float ectl_aimed, float ecu_input_v)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 8, fuel_percentage);
    _mav_put_float(buf, 12, ecu_water_temp);
    _mav_put_float(buf, 16, ecu_intake_maniflod_pressure);
    _mav_put_float(buf, 20, ecu_intake_air_temp);
    _mav_put_float(buf, 24, ecu_thr_valve_opening);
    _mav_put_float(buf, 28, ecu_rpm_feedback);
    _mav_put_float(buf, 32, ecu_rpm_accurancy);
    _mav_put_float(buf, 36, ecu_pedal_aimed);
    _mav_put_float(buf, 40, ecu_pedal_feedback);
    _mav_put_float(buf, 44, ecu_oil_temp);
    _mav_put_float(buf, 48, ecu_oil_pressure);
    _mav_put_float(buf, 52, ecu_gaso_pressure);
    _mav_put_float(buf, 56, ectl_aimed);
    _mav_put_float(buf, 60, ecu_input_v);
    _mav_put_float_array(buf, 0, gear_temp, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_S760_DATA, buf, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_CRC);
#else
    mavlink_sunhawk_s760_data_t *packet = (mavlink_sunhawk_s760_data_t *)msgbuf;
    packet->fuel_percentage = fuel_percentage;
    packet->ecu_water_temp = ecu_water_temp;
    packet->ecu_intake_maniflod_pressure = ecu_intake_maniflod_pressure;
    packet->ecu_intake_air_temp = ecu_intake_air_temp;
    packet->ecu_thr_valve_opening = ecu_thr_valve_opening;
    packet->ecu_rpm_feedback = ecu_rpm_feedback;
    packet->ecu_rpm_accurancy = ecu_rpm_accurancy;
    packet->ecu_pedal_aimed = ecu_pedal_aimed;
    packet->ecu_pedal_feedback = ecu_pedal_feedback;
    packet->ecu_oil_temp = ecu_oil_temp;
    packet->ecu_oil_pressure = ecu_oil_pressure;
    packet->ecu_gaso_pressure = ecu_gaso_pressure;
    packet->ectl_aimed = ectl_aimed;
    packet->ecu_input_v = ecu_input_v;
    mav_array_memcpy(packet->gear_temp, gear_temp, sizeof(float)*2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SUNHAWK_S760_DATA, (const char *)packet, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_MIN_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE SUNHAWK_S760_DATA UNPACKING


/**
 * @brief Get field gear_temp from sunhawk_s760_data message
 *
 * @return  [front back] gear tempreture
 */
static inline uint16_t mavlink_msg_sunhawk_s760_data_get_gear_temp(const mavlink_message_t* msg, float *gear_temp)
{
    return _MAV_RETURN_float_array(msg, gear_temp, 2,  0);
}

/**
 * @brief Get field fuel_percentage from sunhawk_s760_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s760_data_get_fuel_percentage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field ecu_water_temp from sunhawk_s760_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s760_data_get_ecu_water_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field ecu_intake_maniflod_pressure from sunhawk_s760_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s760_data_get_ecu_intake_maniflod_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field ecu_intake_air_temp from sunhawk_s760_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s760_data_get_ecu_intake_air_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field ecu_thr_valve_opening from sunhawk_s760_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s760_data_get_ecu_thr_valve_opening(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field ecu_rpm_feedback from sunhawk_s760_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s760_data_get_ecu_rpm_feedback(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field ecu_rpm_accurancy from sunhawk_s760_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s760_data_get_ecu_rpm_accurancy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field ecu_pedal_aimed from sunhawk_s760_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s760_data_get_ecu_pedal_aimed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field ecu_pedal_feedback from sunhawk_s760_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s760_data_get_ecu_pedal_feedback(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field ecu_oil_temp from sunhawk_s760_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s760_data_get_ecu_oil_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field ecu_oil_pressure from sunhawk_s760_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s760_data_get_ecu_oil_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field ecu_gaso_pressure from sunhawk_s760_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s760_data_get_ecu_gaso_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field ectl_aimed from sunhawk_s760_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s760_data_get_ectl_aimed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field ecu_input_v from sunhawk_s760_data message
 *
 * @return  
 */
static inline float mavlink_msg_sunhawk_s760_data_get_ecu_input_v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Decode a sunhawk_s760_data message into a struct
 *
 * @param msg The message to decode
 * @param sunhawk_s760_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_sunhawk_s760_data_decode(const mavlink_message_t* msg, mavlink_sunhawk_s760_data_t* sunhawk_s760_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sunhawk_s760_data_get_gear_temp(msg, sunhawk_s760_data->gear_temp);
    sunhawk_s760_data->fuel_percentage = mavlink_msg_sunhawk_s760_data_get_fuel_percentage(msg);
    sunhawk_s760_data->ecu_water_temp = mavlink_msg_sunhawk_s760_data_get_ecu_water_temp(msg);
    sunhawk_s760_data->ecu_intake_maniflod_pressure = mavlink_msg_sunhawk_s760_data_get_ecu_intake_maniflod_pressure(msg);
    sunhawk_s760_data->ecu_intake_air_temp = mavlink_msg_sunhawk_s760_data_get_ecu_intake_air_temp(msg);
    sunhawk_s760_data->ecu_thr_valve_opening = mavlink_msg_sunhawk_s760_data_get_ecu_thr_valve_opening(msg);
    sunhawk_s760_data->ecu_rpm_feedback = mavlink_msg_sunhawk_s760_data_get_ecu_rpm_feedback(msg);
    sunhawk_s760_data->ecu_rpm_accurancy = mavlink_msg_sunhawk_s760_data_get_ecu_rpm_accurancy(msg);
    sunhawk_s760_data->ecu_pedal_aimed = mavlink_msg_sunhawk_s760_data_get_ecu_pedal_aimed(msg);
    sunhawk_s760_data->ecu_pedal_feedback = mavlink_msg_sunhawk_s760_data_get_ecu_pedal_feedback(msg);
    sunhawk_s760_data->ecu_oil_temp = mavlink_msg_sunhawk_s760_data_get_ecu_oil_temp(msg);
    sunhawk_s760_data->ecu_oil_pressure = mavlink_msg_sunhawk_s760_data_get_ecu_oil_pressure(msg);
    sunhawk_s760_data->ecu_gaso_pressure = mavlink_msg_sunhawk_s760_data_get_ecu_gaso_pressure(msg);
    sunhawk_s760_data->ectl_aimed = mavlink_msg_sunhawk_s760_data_get_ectl_aimed(msg);
    sunhawk_s760_data->ecu_input_v = mavlink_msg_sunhawk_s760_data_get_ecu_input_v(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN? msg->len : MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN;
        memset(sunhawk_s760_data, 0, MAVLINK_MSG_ID_SUNHAWK_S760_DATA_LEN);
    memcpy(sunhawk_s760_data, _MAV_PAYLOAD(msg), len);
#endif
}
