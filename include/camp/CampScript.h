#ifndef CAMP_CAMPSCRIPT_H
#define CAMP_CAMPSCRIPT_H

#include "common.h"

struct ScriptProcess;
struct CampScriptState {
    /* 0x000 */ u8 unk000[0xF4];
    /* 0x0F4 */ ScriptProcess *script;
    /* 0x0F8 */ u8 unk0F8[0x4C];
    /* 0x144 */ u32 unk144;
    /* 0x148 */ u32 unk148;
    /* 0x14C */ u32 unk14C;
    /* 0x150 */ s32 scriptState;
};

#endif
