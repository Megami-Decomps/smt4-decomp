/* NON_MATCHING: the block is now cleared with memset like retail (five zero words through the allocation); only the freeOnEnd store is scheduled before the active load (retail: after). */
#include "ones_room/onesRoom.h"
#include "script/scrScriptProcess.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern OnesRoom *g_onesRoom;
void *asdMemoryAlloc(u32, u32, u32, u32, u32);
void campCommonBgAcquire();
void campButtonHelpAcquire();
void commonBgStopChildAndBeginTransition();
void sysPlaySe(s32 sound);
void *asdLoadFileSyncDefault(const char *path);
ScriptRunState *scrScriptProcessCreate(void *script, void *messages);
void scrScriptProcessStartEntry(void *process, s32 entry);
void FUN_0022677c(s32 screen, s32 alpha);
s32 onesRoomTeardown(u32 job);
void onesRoomRequestTransition();

/* Create the room resources, start its script, and install its lifetime job. */
void FUN_002758fc(s32 inactive)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\ones_room\\onesRoom.cpp", 146);
    g_onesRoom = static_cast<OnesRoom *>(asdMemoryAlloc(0x100, 0x100, 0, sizeof(OnesRoomWork), 1));
    memset(g_onesRoom, 0, sizeof(OnesRoomWork));
    if (inactive == 0) {
        reinterpret_cast<OnesRoomWork *>(g_onesRoom)->active = 1;
    }
    OnesRoomWork *room = reinterpret_cast<OnesRoomWork *>(g_onesRoom);
    campCommonBgAcquire();
    campButtonHelpAcquire();
    commonBgStopChildAndBeginTransition();
    sysPlaySe(0xa4);
    room->dataA = asdLoadFileSyncDefault("ones_room/onesRoom.bf");
    room->dataB = asdLoadFileSyncDefault("ones_room/onesRoom.mbm");
    ScriptRunState *process = scrScriptProcessCreate(room->dataA, room->dataB);
    room->process = process;
    process->mode = 2;
    scrScriptProcessStartEntry(room->process, 0);
    room->freeOnEnd = 0;
    if (room->active) {
        FUN_0022677c(0, 0xff);
        FUN_0022677c(1, 0xff);
    }
    g_onesRoom->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("onesRoom C"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(onesRoomTeardown), reinterpret_cast<AsdProcFunc>(onesRoomRequestTransition), reinterpret_cast<u32>(g_onesRoom));
}
}
