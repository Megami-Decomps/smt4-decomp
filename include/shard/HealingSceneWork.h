#ifndef SHARD_HEALINGSCENEWORK_H
#define SHARD_HEALINGSCENEWORK_H

#include "common.h"
#include "script/scrScriptProcess.h"
#include "Model/MoriModelContent.h"

struct HealingSceneWork {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u8 returnToField;
    /* 0x009 */ u8 unk009[3];
    /* 0x00C */ u32 state;
    /* 0x010 */ void *heapA;
    /* 0x014 */ void *heapB;
    /* 0x018 */ ScriptProcess *script;
    /* 0x01C */ u32 unk01c;
    /* 0x020 */ MoriModelContent *primary;
    /* 0x024 */ MoriModelContent *secondary;
    /* 0x028 */ MoriModelContent *models[3];
    /* 0x034 */ u32 unk034;
    /* 0x038 */ f32 cameraTarget[4];
    /* 0x048 */ u8 unk048[0x4FC];
    /* 0x544 */ void *backdrop;
    /* 0x548 */ u8 unk548[0x44];
    /* 0x58C */ void *tableFile;
    /* 0x590 */ void *entries;
    /* 0x594 */ u32 count;
    /* 0x598 */ u32 timer;
};

#endif
