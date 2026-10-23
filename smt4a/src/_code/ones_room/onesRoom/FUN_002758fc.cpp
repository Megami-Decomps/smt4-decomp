/* NON_MATCHING: allocation flag lifetime adds saved r8; resource argument and flag-load scheduling differ. */
#include "ones_room/onesRoom.h"
#include "script/scrScriptProcess.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

extern "C" {
extern OnesRoom *g_onesRoom;
void *asdMemoryAlloc(u32, u32, u32, u32, u32);
void campCommonBgAcquire();
void campButtonHelpAcquire();
void FUN_003b61ec();
void sysPlaySe(s32 sound);
void *asdLoadFileSyncDefault(const char *path);
ScriptRunState *FUN_00275bc8(void *script, void *messages);
void scrScriptProcessStartEntry(void *process, s32 entry);
void FUN_0022677c(s32 screen, s32 alpha);
s32 onesRoomTeardown(u32 job);
void onesRoomRequestTransition();
u32 asdProcessCreateSimple(const char *name, s32 priority, s32 first, s32 second,
                          s32 (*teardown)(u32), void (*update)(), void *work);

/* Create the room resources, start its script, and install its lifetime job. */
void FUN_002758fc(s32 inactive)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\ones_room\\onesRoom.cpp", 146);
    OnesRoomWork *room = static_cast<OnesRoomWork *>(asdMemoryAlloc(0x100, 0x100, 0, 0x14, 1));
    g_onesRoom = reinterpret_cast<OnesRoom *>(room);
    room->job = 0;
    room->dataA = NULL;
    room->process = NULL;
    room->dataB = NULL;
    memset(&room->active, 0, 4);
    if (inactive == 0) {
        room->active = 1;
    }
    campCommonBgAcquire();
    campButtonHelpAcquire();
    FUN_003b61ec();
    sysPlaySe(0xa4);
    room->dataA = asdLoadFileSyncDefault("ones_room/onesRoom.bf");
    room->dataB = asdLoadFileSyncDefault("ones_room/onesRoom.mbm");
    ScriptRunState *process = FUN_00275bc8(room->dataA, room->dataB);
    room->process = process;
    process->mode = 2;
    scrScriptProcessStartEntry(room->process, 0);
    room->freeOnEnd = 0;
    if (room->active) {
        FUN_0022677c(0, 0xff);
        FUN_0022677c(1, 0xff);
    }
    g_onesRoom->job = asdProcessCreateSimple("onesRoom C", 4, 0, 0,
        onesRoomTeardown, onesRoomRequestTransition, g_onesRoom);
}
}
