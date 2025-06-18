/** @file
 *  @brief MAVLink comm protocol generated from sunhawk.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_SUNHAWK_H
#define MAVLINK_SUNHAWK_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_SUNHAWK.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_SUNHAWK_XML_HASH 6385823941464231704

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{13001, 170, 19, 19, 0, 0, 0}, {13002, 31, 64, 64, 0, 0, 0}, {13003, 230, 68, 68, 0, 0, 0}, {13004, 153, 100, 100, 0, 0, 0}, {13005, 203, 1, 1, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_SUNHAWK

// ENUM DEFINITIONS


/** @brief  */
#ifndef HAVE_ENUM_MAV_SUNHAWK_STATE_CMD
#define HAVE_ENUM_MAV_SUNHAWK_STATE_CMD
typedef enum MAV_SUNHAWK_STATE_CMD
{
   MAV_PEDAL_REDUCE=1, /* reduce pedal control aimed. | */
   MAV_ECU_STOP=2, /* stop engine. | */
   MAV_ECU_START=4, /* start engine. | */
   MAV_ECU_LOOP=6, /* loop engine. | */
   MAV_THROW_GOODS=8, /* Throw goods. | */
   MAV_THROW_AGOODS=9, /* Throw agoods. | */
   MAV_THROW_BGOODS=10, /* Throw bgoods. | */
   MAV_THROW_CGOODS=11, /* Throw cgoods. | */
   MAV_THROW_DGOODS=12, /* Throw dgoods. | */
   MAV_LED_LOAD=15, /* led laod. | */
   MAV_LED_FRONT=16, /* led front. | */
   MAV_LED_BACK=17, /* led back. | */
   MAV_MP_PLAY=34, /* mp play. | */
   MAV_MP_STOP=35, /* mp stop. | */
   MAV_MP_UP=36, /* mp up. | */
   MAV_MP_DOWN=37, /* mp down. | */
   MAV_MP_PUP=38, /* mp pup. | */
   MAV_MP_PDOWN=39, /* mp pdown. | */
   MAV_SUNHAWK_STATE_CMD_ENUM_END=40, /*  | */
} MAV_SUNHAWK_STATE_CMD;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_frsky_manual_control.h"
#include "./mavlink_msg_sunhawk_s760_data.h"
#include "./mavlink_msg_sunhawk_s100_data.h"
#include "./mavlink_msg_sunhawk_motor_data.h"
#include "./mavlink_msg_sunhawk_state_cmd.h"

// base include



#if MAVLINK_SUNHAWK_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_FRSKY_MANUAL_CONTROL, MAVLINK_MESSAGE_INFO_SUNHAWK_S760_DATA, MAVLINK_MESSAGE_INFO_SUNHAWK_S100_DATA, MAVLINK_MESSAGE_INFO_SUNHAWK_MOTOR_DATA, MAVLINK_MESSAGE_INFO_SUNHAWK_STATE_CMD}
# define MAVLINK_MESSAGE_NAMES {{ "FRSKY_MANUAL_CONTROL", 13001 }, { "SUNHAWK_MOTOR_DATA", 13004 }, { "SUNHAWK_S100_DATA", 13003 }, { "SUNHAWK_S760_DATA", 13002 }, { "SUNHAWK_STATE_CMD", 13005 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_SUNHAWK_H
