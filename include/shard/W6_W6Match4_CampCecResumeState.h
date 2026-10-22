#ifndef SHARD_W6_W6MATCH4_CAMPCECRESUMESTATE_H
#define SHARD_W6_W6MATCH4_CAMPCECRESUMESTATE_H

#include "common.h"
#include "script/scrScriptProcess.h"
#include <stddef.h>

struct CampCecResumeState {
    union {
        u8 unk000[0x144];
        struct {
            u8 unk000[0xE4];
            /* 0x0E4 */ void *resource;
            /* 0x0E8 */ u32 entry;
            u8 unk0EC[8];
            /* 0x0F4 */ ScriptRunState *script;
        } launch;
    };
    u32 state; // 0x144
    u32 unk148;
    u32 unk14c;
    u8 unk150[0x1c];
    u8 optionalProcess; // 0x16c
};
typedef char CampCecResumeStateLaunchOffsetsCheck[
    offsetof(CampCecResumeState, launch.resource) == 0xE4 &&
    offsetof(CampCecResumeState, launch.entry) == 0xE8 &&
    offsetof(CampCecResumeState, launch.script) == 0xF4 &&
    sizeof(CampCecResumeState) == 0x170 ? 1 : -1];

struct CampCecSceneOwnerView {
    u8 prefix[0xB0];
    u32 holder[8];
};
struct CampCecSceneGlobals {
    u32 unk00;
    CampCecSceneOwnerView *work;
};
typedef char CampCecSceneOwnerHolderOffsetCheck[
    offsetof(CampCecSceneOwnerView, holder) == 0xB0 &&
    offsetof(CampCecSceneGlobals, work) == 4 ? 1 : -1];

#endif
