/** @file
 *    @brief MAVLink comm protocol testsuite generated from sunhawk.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef SUNHAWK_TESTSUITE_H
#define SUNHAWK_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_sunhawk(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_sunhawk(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_sunhawk_realtime_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_sunhawk_realtime_data_t packet_in = {
        17.0,17443,{ 17547, 17548, 17549, 17550, 17551, 17552 },{ 18171, 18172, 18173, 18174, 18175, 18176 }
    };
    mavlink_sunhawk_realtime_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pedal_aimed = packet_in.pedal_aimed;
        packet1.engine_rpm_feedback = packet_in.engine_rpm_feedback;
        
        mav_array_memcpy(packet1.servo_aimed, packet_in.servo_aimed, sizeof(int16_t)*6);
        mav_array_memcpy(packet1.servo_feedback, packet_in.servo_feedback, sizeof(int16_t)*6);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_realtime_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_sunhawk_realtime_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_realtime_data_pack(system_id, component_id, &msg , packet1.engine_rpm_feedback , packet1.pedal_aimed , packet1.servo_aimed , packet1.servo_feedback );
    mavlink_msg_sunhawk_realtime_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_realtime_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.engine_rpm_feedback , packet1.pedal_aimed , packet1.servo_aimed , packet1.servo_feedback );
    mavlink_msg_sunhawk_realtime_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_sunhawk_realtime_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_realtime_data_send(MAVLINK_COMM_1 , packet1.engine_rpm_feedback , packet1.pedal_aimed , packet1.servo_aimed , packet1.servo_feedback );
    mavlink_msg_sunhawk_realtime_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SUNHAWK_REALTIME_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SUNHAWK_REALTIME_DATA) != NULL);
#endif
}

static void mavlink_test_sunhawk_plane_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_sunhawk_plane_status_t packet_in = {
        { 17.0, 18.0, 19.0, 20.0, 21.0, 22.0 },185.0,213.0,{ 18899, 18900, 18901, 18902, 18903, 18904 },{ 19523, 19524 }
    };
    mavlink_sunhawk_plane_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.power_voltage = packet_in.power_voltage;
        packet1.starting_voltage = packet_in.starting_voltage;
        
        mav_array_memcpy(packet1.motor_current, packet_in.motor_current, sizeof(float)*6);
        mav_array_memcpy(packet1.motor_temperature, packet_in.motor_temperature, sizeof(int16_t)*6);
        mav_array_memcpy(packet1.gear_temperature, packet_in.gear_temperature, sizeof(int16_t)*2);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_plane_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_sunhawk_plane_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_plane_status_pack(system_id, component_id, &msg , packet1.motor_current , packet1.motor_temperature , packet1.power_voltage , packet1.starting_voltage , packet1.gear_temperature );
    mavlink_msg_sunhawk_plane_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_plane_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.motor_current , packet1.motor_temperature , packet1.power_voltage , packet1.starting_voltage , packet1.gear_temperature );
    mavlink_msg_sunhawk_plane_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_sunhawk_plane_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_plane_status_send(MAVLINK_COMM_1 , packet1.motor_current , packet1.motor_temperature , packet1.power_voltage , packet1.starting_voltage , packet1.gear_temperature );
    mavlink_msg_sunhawk_plane_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SUNHAWK_PLANE_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SUNHAWK_PLANE_STATUS) != NULL);
#endif
}

static void mavlink_test_sunhawk_engine_monitor(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_sunhawk_engine_monitor_t packet_in = {
        17.0,45.0,17651,17755,17859,17963,18067,18171,{ 18275, 18276, 18277, 18278 },{ 18691, 18692, 18693, 18694 }
    };
    mavlink_sunhawk_engine_monitor_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.throttle_opening = packet_in.throttle_opening;
        packet1.oil_level = packet_in.oil_level;
        packet1.water_temperature = packet_in.water_temperature;
        packet1.gasoline_pressure = packet_in.gasoline_pressure;
        packet1.intake_manifold_pressure = packet_in.intake_manifold_pressure;
        packet1.intake_air_temperature = packet_in.intake_air_temperature;
        packet1.oil_temperature = packet_in.oil_temperature;
        packet1.oil_pressure = packet_in.oil_pressure;
        
        mav_array_memcpy(packet1.exhaust_temperature, packet_in.exhaust_temperature, sizeof(int16_t)*4);
        mav_array_memcpy(packet1.ntc_temperature, packet_in.ntc_temperature, sizeof(int16_t)*4);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_engine_monitor_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_sunhawk_engine_monitor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_engine_monitor_pack(system_id, component_id, &msg , packet1.water_temperature , packet1.gasoline_pressure , packet1.intake_manifold_pressure , packet1.intake_air_temperature , packet1.throttle_opening , packet1.oil_temperature , packet1.oil_pressure , packet1.oil_level , packet1.exhaust_temperature , packet1.ntc_temperature );
    mavlink_msg_sunhawk_engine_monitor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_engine_monitor_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.water_temperature , packet1.gasoline_pressure , packet1.intake_manifold_pressure , packet1.intake_air_temperature , packet1.throttle_opening , packet1.oil_temperature , packet1.oil_pressure , packet1.oil_level , packet1.exhaust_temperature , packet1.ntc_temperature );
    mavlink_msg_sunhawk_engine_monitor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_sunhawk_engine_monitor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_engine_monitor_send(MAVLINK_COMM_1 , packet1.water_temperature , packet1.gasoline_pressure , packet1.intake_manifold_pressure , packet1.intake_air_temperature , packet1.throttle_opening , packet1.oil_temperature , packet1.oil_pressure , packet1.oil_level , packet1.exhaust_temperature , packet1.ntc_temperature );
    mavlink_msg_sunhawk_engine_monitor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SUNHAWK_ENGINE_MONITOR") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SUNHAWK_ENGINE_MONITOR) != NULL);
#endif
}

static void mavlink_test_sunhawk_fluid_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_sunhawk_fluid_status_t packet_in = {
        { 5, 6, 7 }
    };
    mavlink_sunhawk_fluid_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.fuel_level, packet_in.fuel_level, sizeof(uint8_t)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_fluid_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_sunhawk_fluid_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_fluid_status_pack(system_id, component_id, &msg , packet1.fuel_level );
    mavlink_msg_sunhawk_fluid_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_fluid_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.fuel_level );
    mavlink_msg_sunhawk_fluid_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_sunhawk_fluid_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_fluid_status_send(MAVLINK_COMM_1 , packet1.fuel_level );
    mavlink_msg_sunhawk_fluid_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SUNHAWK_FLUID_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SUNHAWK_FLUID_STATUS) != NULL);
#endif
}

static void mavlink_test_sunhawk_cmd(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SUNHAWK_CMD >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_sunhawk_cmd_t packet_in = {
        5,72
    };
    mavlink_sunhawk_cmd_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.cmd = packet_in.cmd;
        packet1.param = packet_in.param;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SUNHAWK_CMD_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SUNHAWK_CMD_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_cmd_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_sunhawk_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_cmd_pack(system_id, component_id, &msg , packet1.cmd , packet1.param );
    mavlink_msg_sunhawk_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_cmd_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cmd , packet1.param );
    mavlink_msg_sunhawk_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_sunhawk_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_cmd_send(MAVLINK_COMM_1 , packet1.cmd , packet1.param );
    mavlink_msg_sunhawk_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SUNHAWK_CMD") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SUNHAWK_CMD) != NULL);
#endif
}

static void mavlink_test_sunhawk_cmd_feedback(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_sunhawk_cmd_feedback_t packet_in = {
        5,72,139,206,17,84,151,218,29
    };
    mavlink_sunhawk_cmd_feedback_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.throw_goods = packet_in.throw_goods;
        packet1.load_status = packet_in.load_status;
        packet1.led_power = packet_in.led_power;
        packet1.pod_power = packet_in.pod_power;
        packet1.pressure_valves = packet_in.pressure_valves;
        packet1.sustained_release = packet_in.sustained_release;
        packet1.ignition_switch = packet_in.ignition_switch;
        packet1.oilpump_switch = packet_in.oilpump_switch;
        packet1.radar_switch = packet_in.radar_switch;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_cmd_feedback_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_sunhawk_cmd_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_cmd_feedback_pack(system_id, component_id, &msg , packet1.throw_goods , packet1.load_status , packet1.led_power , packet1.pod_power , packet1.pressure_valves , packet1.sustained_release , packet1.ignition_switch , packet1.oilpump_switch , packet1.radar_switch );
    mavlink_msg_sunhawk_cmd_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_cmd_feedback_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.throw_goods , packet1.load_status , packet1.led_power , packet1.pod_power , packet1.pressure_valves , packet1.sustained_release , packet1.ignition_switch , packet1.oilpump_switch , packet1.radar_switch );
    mavlink_msg_sunhawk_cmd_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_sunhawk_cmd_feedback_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_cmd_feedback_send(MAVLINK_COMM_1 , packet1.throw_goods , packet1.load_status , packet1.led_power , packet1.pod_power , packet1.pressure_valves , packet1.sustained_release , packet1.ignition_switch , packet1.oilpump_switch , packet1.radar_switch );
    mavlink_msg_sunhawk_cmd_feedback_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SUNHAWK_CMD_FEEDBACK") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SUNHAWK_CMD_FEEDBACK) != NULL);
#endif
}

static void mavlink_test_sunhawk(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_sunhawk_realtime_data(system_id, component_id, last_msg);
    mavlink_test_sunhawk_plane_status(system_id, component_id, last_msg);
    mavlink_test_sunhawk_engine_monitor(system_id, component_id, last_msg);
    mavlink_test_sunhawk_fluid_status(system_id, component_id, last_msg);
    mavlink_test_sunhawk_cmd(system_id, component_id, last_msg);
    mavlink_test_sunhawk_cmd_feedback(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // SUNHAWK_TESTSUITE_H
