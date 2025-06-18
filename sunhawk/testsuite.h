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

static void mavlink_test_sunhawk(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_sunhawk(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_frsky_manual_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_frsky_manual_control_t packet_in = {
        17235,17339,17443,17547,17651,17755,17859,17963,18067,187
    };
    mavlink_frsky_manual_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.z = packet_in.z;
        packet1.r = packet_in.r;
        packet1.buttons = packet_in.buttons;
        packet1.s1 = packet_in.s1;
        packet1.s2 = packet_in.s2;
        packet1.ls = packet_in.ls;
        packet1.rs = packet_in.rs;
        packet1.target = packet_in.target;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_frsky_manual_control_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_frsky_manual_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_frsky_manual_control_pack(system_id, component_id, &msg , packet1.target , packet1.x , packet1.y , packet1.z , packet1.r , packet1.buttons , packet1.s1 , packet1.s2 , packet1.ls , packet1.rs );
    mavlink_msg_frsky_manual_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_frsky_manual_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target , packet1.x , packet1.y , packet1.z , packet1.r , packet1.buttons , packet1.s1 , packet1.s2 , packet1.ls , packet1.rs );
    mavlink_msg_frsky_manual_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_frsky_manual_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_frsky_manual_control_send(MAVLINK_COMM_1 , packet1.target , packet1.x , packet1.y , packet1.z , packet1.r , packet1.buttons , packet1.s1 , packet1.s2 , packet1.ls , packet1.rs );
    mavlink_msg_frsky_manual_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FRSKY_MANUAL_CONTROL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FRSKY_MANUAL_CONTROL) != NULL);
#endif
}

static void mavlink_test_sunhawk_s760_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SUNHAWK_S760_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_sunhawk_s760_data_t packet_in = {
        { 17.0, 18.0 },73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0,353.0,381.0,409.0,437.0
    };
    mavlink_sunhawk_s760_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.fuel_percentage = packet_in.fuel_percentage;
        packet1.ecu_water_temp = packet_in.ecu_water_temp;
        packet1.ecu_intake_maniflod_pressure = packet_in.ecu_intake_maniflod_pressure;
        packet1.ecu_intake_air_temp = packet_in.ecu_intake_air_temp;
        packet1.ecu_thr_valve_opening = packet_in.ecu_thr_valve_opening;
        packet1.ecu_rpm_feedback = packet_in.ecu_rpm_feedback;
        packet1.ecu_rpm_accurancy = packet_in.ecu_rpm_accurancy;
        packet1.ecu_pedal_aimed = packet_in.ecu_pedal_aimed;
        packet1.ecu_pedal_feedback = packet_in.ecu_pedal_feedback;
        packet1.ecu_oil_temp = packet_in.ecu_oil_temp;
        packet1.ecu_oil_pressure = packet_in.ecu_oil_pressure;
        packet1.ecu_gaso_pressure = packet_in.ecu_gaso_pressure;
        packet1.ectl_aimed = packet_in.ectl_aimed;
        packet1.ecu_input_v = packet_in.ecu_input_v;
        
        mav_array_memcpy(packet1.gear_temp, packet_in.gear_temp, sizeof(float)*2);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SUNHAWK_S760_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SUNHAWK_S760_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_s760_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_sunhawk_s760_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_s760_data_pack(system_id, component_id, &msg , packet1.gear_temp , packet1.fuel_percentage , packet1.ecu_water_temp , packet1.ecu_intake_maniflod_pressure , packet1.ecu_intake_air_temp , packet1.ecu_thr_valve_opening , packet1.ecu_rpm_feedback , packet1.ecu_rpm_accurancy , packet1.ecu_pedal_aimed , packet1.ecu_pedal_feedback , packet1.ecu_oil_temp , packet1.ecu_oil_pressure , packet1.ecu_gaso_pressure , packet1.ectl_aimed , packet1.ecu_input_v );
    mavlink_msg_sunhawk_s760_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_s760_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.gear_temp , packet1.fuel_percentage , packet1.ecu_water_temp , packet1.ecu_intake_maniflod_pressure , packet1.ecu_intake_air_temp , packet1.ecu_thr_valve_opening , packet1.ecu_rpm_feedback , packet1.ecu_rpm_accurancy , packet1.ecu_pedal_aimed , packet1.ecu_pedal_feedback , packet1.ecu_oil_temp , packet1.ecu_oil_pressure , packet1.ecu_gaso_pressure , packet1.ectl_aimed , packet1.ecu_input_v );
    mavlink_msg_sunhawk_s760_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_sunhawk_s760_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_s760_data_send(MAVLINK_COMM_1 , packet1.gear_temp , packet1.fuel_percentage , packet1.ecu_water_temp , packet1.ecu_intake_maniflod_pressure , packet1.ecu_intake_air_temp , packet1.ecu_thr_valve_opening , packet1.ecu_rpm_feedback , packet1.ecu_rpm_accurancy , packet1.ecu_pedal_aimed , packet1.ecu_pedal_feedback , packet1.ecu_oil_temp , packet1.ecu_oil_pressure , packet1.ecu_gaso_pressure , packet1.ectl_aimed , packet1.ecu_input_v );
    mavlink_msg_sunhawk_s760_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SUNHAWK_S760_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SUNHAWK_S760_DATA) != NULL);
#endif
}

static void mavlink_test_sunhawk_s100_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SUNHAWK_S100_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_sunhawk_s100_data_t packet_in = {
        { 17.0, 18.0, 19.0, 20.0 },{ 129.0, 130.0, 131.0, 132.0 },{ 241.0, 242.0 },297.0,325.0,353.0,381.0,409.0,437.0,465.0
    };
    mavlink_sunhawk_s100_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.oil_temp = packet_in.oil_temp;
        packet1.oil_percentage = packet_in.oil_percentage;
        packet1.gaso_pressure = packet_in.gaso_pressure;
        packet1.fuel_percentage = packet_in.fuel_percentage;
        packet1.engine_rpm_feedback = packet_in.engine_rpm_feedback;
        packet1.starting_v = packet_in.starting_v;
        packet1.thr_servo_aimed = packet_in.thr_servo_aimed;
        
        mav_array_memcpy(packet1.k_temp, packet_in.k_temp, sizeof(float)*4);
        mav_array_memcpy(packet1.ntc_temp, packet_in.ntc_temp, sizeof(float)*4);
        mav_array_memcpy(packet1.tp100_temp, packet_in.tp100_temp, sizeof(float)*2);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SUNHAWK_S100_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SUNHAWK_S100_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_s100_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_sunhawk_s100_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_s100_data_pack(system_id, component_id, &msg , packet1.k_temp , packet1.ntc_temp , packet1.tp100_temp , packet1.oil_temp , packet1.oil_percentage , packet1.gaso_pressure , packet1.fuel_percentage , packet1.engine_rpm_feedback , packet1.starting_v , packet1.thr_servo_aimed );
    mavlink_msg_sunhawk_s100_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_s100_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.k_temp , packet1.ntc_temp , packet1.tp100_temp , packet1.oil_temp , packet1.oil_percentage , packet1.gaso_pressure , packet1.fuel_percentage , packet1.engine_rpm_feedback , packet1.starting_v , packet1.thr_servo_aimed );
    mavlink_msg_sunhawk_s100_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_sunhawk_s100_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_s100_data_send(MAVLINK_COMM_1 , packet1.k_temp , packet1.ntc_temp , packet1.tp100_temp , packet1.oil_temp , packet1.oil_percentage , packet1.gaso_pressure , packet1.fuel_percentage , packet1.engine_rpm_feedback , packet1.starting_v , packet1.thr_servo_aimed );
    mavlink_msg_sunhawk_s100_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SUNHAWK_S100_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SUNHAWK_S100_DATA) != NULL);
#endif
}

static void mavlink_test_sunhawk_motor_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_sunhawk_motor_data_t packet_in = {
        17.0,{ 45.0, 46.0, 47.0, 48.0, 49.0, 50.0 },{ 213.0, 214.0, 215.0, 216.0, 217.0, 218.0 },{ 381.0, 382.0, 383.0, 384.0, 385.0, 386.0 },{ 549.0, 550.0, 551.0, 552.0, 553.0, 554.0 }
    };
    mavlink_sunhawk_motor_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.motor_v = packet_in.motor_v;
        
        mav_array_memcpy(packet1.motor_feedback, packet_in.motor_feedback, sizeof(float)*6);
        mav_array_memcpy(packet1.motor_aimed, packet_in.motor_aimed, sizeof(float)*6);
        mav_array_memcpy(packet1.motor_a, packet_in.motor_a, sizeof(float)*6);
        mav_array_memcpy(packet1.motor_temp, packet_in.motor_temp, sizeof(float)*6);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_motor_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_sunhawk_motor_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_motor_data_pack(system_id, component_id, &msg , packet1.motor_v , packet1.motor_feedback , packet1.motor_aimed , packet1.motor_a , packet1.motor_temp );
    mavlink_msg_sunhawk_motor_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_motor_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.motor_v , packet1.motor_feedback , packet1.motor_aimed , packet1.motor_a , packet1.motor_temp );
    mavlink_msg_sunhawk_motor_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_sunhawk_motor_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_motor_data_send(MAVLINK_COMM_1 , packet1.motor_v , packet1.motor_feedback , packet1.motor_aimed , packet1.motor_a , packet1.motor_temp );
    mavlink_msg_sunhawk_motor_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SUNHAWK_MOTOR_DATA") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SUNHAWK_MOTOR_DATA) != NULL);
#endif
}

static void mavlink_test_sunhawk_state_cmd(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SUNHAWK_STATE_CMD >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_sunhawk_state_cmd_t packet_in = {
        5
    };
    mavlink_sunhawk_state_cmd_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.sunhawk_cmd = packet_in.sunhawk_cmd;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SUNHAWK_STATE_CMD_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SUNHAWK_STATE_CMD_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_state_cmd_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_sunhawk_state_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_state_cmd_pack(system_id, component_id, &msg , packet1.sunhawk_cmd );
    mavlink_msg_sunhawk_state_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_state_cmd_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.sunhawk_cmd );
    mavlink_msg_sunhawk_state_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_sunhawk_state_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_sunhawk_state_cmd_send(MAVLINK_COMM_1 , packet1.sunhawk_cmd );
    mavlink_msg_sunhawk_state_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SUNHAWK_STATE_CMD") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SUNHAWK_STATE_CMD) != NULL);
#endif
}

static void mavlink_test_sunhawk(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_frsky_manual_control(system_id, component_id, last_msg);
    mavlink_test_sunhawk_s760_data(system_id, component_id, last_msg);
    mavlink_test_sunhawk_s100_data(system_id, component_id, last_msg);
    mavlink_test_sunhawk_motor_data(system_id, component_id, last_msg);
    mavlink_test_sunhawk_state_cmd(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // SUNHAWK_TESTSUITE_H
