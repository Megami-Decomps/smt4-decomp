/* camp/CampCec/CampCecRecv.c: the StreetPass (cec) receive screen of the camp. */
#ifndef CAMP_CAMPCEC_CAMPCECRECV_H
#define CAMP_CAMPCEC_CAMPCECRECV_H

#include "common.h"
#include <stddef.h>
#include "script/ScriptVm.h"
#include "gamedata/GameSaveDataA.h"

/* The receive (StreetPass download) screen's work area. */
typedef struct CampCecRecv {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    union {
        /* 0x04 */ u8 unk04[0x3E4];
        struct {
            /* 0x004 */ u8 unk004BeforeValue[0x14a];
            /* 0x14E */ u16 value;
        } scriptValue;
        struct {
            /* 0x004 */ u8 unk004BeforeBuffers[0x344];
            /* 0x348 */ void *buffers[6];       /* heap blocks freed with the screen */
            /* 0x360 */ ScriptProcess *scripts[2];       /* script processes destroyed with the screen */
            /* 0x368 */ u8 unk368[0x78];
            /* 0x3E0 */ u32 received;           /* only the received data was set up */
        } resources;
        struct {
            /* 0x004 */ u8 unk004BeforeGains[0xDC];
            /* 0x0E0 */ s16 statGains[5];       /* stat points still to hand to the unit, one message each */
            /* 0x0EA */ u8 unk0EA[0x12E];
            /* 0x218 */ SlotRecordA unitBefore; /* the unit as it was before the gains (what the status display shows) */
            /* 0x344 */ u8 unk344[0x6C];
            /* 0x3B0 */ s32 nextState;          /* the state stateMachineRun enters when a handler returns 3 */
            /* 0x3B4 */ u8 unk3B4[8];
            /* 0x3BC */ s32 step;               /* the running state's own step */
            /* 0x3C0 */ u8 unk3C0[0x1C];
            /* 0x3DC */ u32 pending;            /* what is left to present, a mask maskToCode() turns into the next state */
            /* 0x3E0 */ u8 unk3E0[6];
            /* 0x3E6 */ u8 unk3E6;
        } gains;
    };
    /* 0x3E8 */ u8 done;                    /* the screen has finished */
    /* 0x3E9 */ u8 unk3E9[0x3];
    union {
        /* 0x3EC */ u8 unk3EC[0x3EC];
        struct {
            /* 0x3EC */ u8 unk3ECBeforeFlag[0x3E8];
            /* 0x7D4 */ u8 unk7D4;              /* FUN_002a5e7c is still owed for the unit */
        } unitFlag;
    };
    /* 0x7D8 */ void *handles;                 /* handle array freed with the screen */
} CampCecRecv;

typedef char CampCecRecvResourceOffsets[offsetof(CampCecRecv, resources.buffers) == 0x348 &&
    offsetof(CampCecRecv, resources.received) == 0x3E0 && offsetof(CampCecRecv, done) == 0x3E8 &&
    offsetof(CampCecRecv, handles) == 0x7D8 ? 1 : -1];
typedef char CampCecRecvGainOffsets[offsetof(CampCecRecv, gains.statGains) == 0xE0 &&
    offsetof(CampCecRecv, gains.unitBefore) == 0x218 && offsetof(CampCecRecv, gains.nextState) == 0x3B0 &&
    offsetof(CampCecRecv, gains.step) == 0x3BC && offsetof(CampCecRecv, gains.pending) == 0x3DC &&
    offsetof(CampCecRecv, gains.unk3E6) == 0x3E6 && offsetof(CampCecRecv, unitFlag.unk7D4) == 0x7D4 ? 1 : -1];

#endif
