#include "ones_room/onesRoom.h"
#include "AsdSDK/AsdDebug.h"
#include <stddef.h>
#include <string.h>
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "script/scrScriptProcess.h"

extern "C" {
void *asdMemoryAlloc(u32, u32, u32, u32, u32);
void commonBgAcquire(void);
void buttonHelpCreate(void);
void commonBgStopChildAndBeginTransition(void);
void buttonHelpSetPreset(s32);
void *asdLoadFileSyncDefault(const char *);
void scrScriptProcessStartEntry(ScriptProcess *, s32);
void titleRestartSlotState3(s32, s32);
void scriptProcessSetMode(ScriptProcess *process, s32 mode);
s32 onesRoomTeardown(u32);
void onesRoomSetEnabled(void);
extern OnesRoom *g_onesRoom;

/* Create the room script, UI, and lifetime job. */
void FUN_001d39f8(s32 inactive)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\ones_room\\onesRoom.cpp", 125);
    g_onesRoom = static_cast<OnesRoom *>(asdMemoryAlloc(0x100, 0x100, 0, sizeof(OnesRoomWork), 1));
    memset(g_onesRoom, 0, sizeof(OnesRoomWork));
    if (inactive == 0) {
        reinterpret_cast<OnesRoomWork *>(g_onesRoom)->active = 1;
    }
    OnesRoomWork *room = reinterpret_cast<OnesRoomWork *>(g_onesRoom);
    commonBgAcquire();
    buttonHelpCreate();
    commonBgStopChildAndBeginTransition();
    buttonHelpSetPreset(0xA2);
    room->dataA = asdLoadFileSyncDefault("ones_room/onesRoom.bf");
    room->dataB = asdLoadFileSyncDefault("ones_room/onesRoom.mbm");
    ScriptProcess *process = scrScriptProcessCreate(room->dataA, room->dataB);
    room->process = process;
    scriptProcessSetMode(process, 2);
    scrScriptProcessStartEntry(room->process, 0);
    room->freeOnEnd = 0;
    if (room->active) {
        titleRestartSlotState3(0, 0xFF);
        titleRestartSlotState3(1, 0xFF);
    }
    g_onesRoom->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("onesRoom C"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(onesRoomTeardown), reinterpret_cast<AsdProcFunc>(onesRoomSetEnabled), reinterpret_cast<u32>(g_onesRoom));
}
}
