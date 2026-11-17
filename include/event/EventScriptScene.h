#ifndef EVENT_EVENTSCRIPTSCENE_H
#define EVENT_EVENTSCRIPTSCENE_H

#include "script/scrScriptProcess.h"
#include <stddef.h>

struct EventScriptScene {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ s32 state;
    /* 0x02C */ s32 substate;
    /* 0x030 */ u8 unk030[0xD84];
    /* 0xDB4 */ void *scriptData;
    /* 0xDB8 */ void *messageData;
    /* 0xDBC */ ScriptProcess *process;
};

typedef char EventScriptSceneOffsets[
    offsetof(EventScriptScene, state) == 0x28 &&
    offsetof(EventScriptScene, substate) == 0x2C &&
    offsetof(EventScriptScene, scriptData) == 0xDB4 &&
    offsetof(EventScriptScene, messageData) == 0xDB8 &&
    offsetof(EventScriptScene, process) == 0xDBC ? 1 : -1];

#endif
