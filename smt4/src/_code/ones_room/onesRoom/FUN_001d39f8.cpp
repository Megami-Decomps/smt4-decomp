/* NON_MATCHING: allocation/initialization register lifetimes and script-argument load scheduling differ. */
#include "ones_room/onesRoom.h"
#include "AsdSDK/AsdDebug.h"
#include <stddef.h>
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct RoomScriptProcess {
    u8 unk000[0x108];
    u32 state;
};

extern "C" {
void *asdMemoryAlloc(u32, u32, u32, u32, u32);
void FUN_002898e4(void);
void buttonHelpCreate(void);
void FUN_00289880(void);
void buttonHelpSetPreset(s32);
void *asdLoadFileSyncDefault(const char *);
RoomScriptProcess *FUN_00297060(void *, void *);
void scrScriptProcessStartEntry(RoomScriptProcess *, s32);
void FUN_00282bfc(s32, s32);
s32 onesRoomTeardown(u32);
void onesRoomSetEnabled(void);
extern OnesRoom *g_onesRoom;

/* Create the room script, UI, and lifetime job. */
void FUN_001d39f8(s32 inactive)
{
    /* The shared OnesRoom padding begins at 0x04 and ends at 0x11:
       adding a pointer-aligned resource union there would move freeOnEnd. */
    struct RoomCreateView {
        u32 job;
        void *dataA;
        RoomScriptProcess *process;
        void *dataB;
        union {
            u32 word;
            struct {
                u8 active;
                u8 freeOnEnd;
                u8 unk12[2];
            } bytes;
        } flags;
    };
    typedef char RoomCreateViewOffsets[
        offsetof(RoomCreateView, flags) == 0x10 &&
        sizeof(RoomCreateView) == 0x14 ? 1 : -1];
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\ones_room\\onesRoom.cpp", 125);
    RoomCreateView *room = (RoomCreateView *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(RoomCreateView), 1);
    g_onesRoom = (OnesRoom *)room;
    room->job = 0;
    room->dataA = NULL;
    room->process = NULL;
    room->dataB = NULL;
    room->flags.word = 0;
    if (inactive == 0) {
        room->flags.bytes.active = 1;
    }
    FUN_002898e4();
    buttonHelpCreate();
    FUN_00289880();
    buttonHelpSetPreset(0xA2);
    room->dataA = asdLoadFileSyncDefault("ones_room/onesRoom.bf");
    room->dataB = asdLoadFileSyncDefault("ones_room/onesRoom.mbm");
    room->process = FUN_00297060(room->dataA, room->dataB);
    room->process->state = 2;
    scrScriptProcessStartEntry(room->process, 0);
    room->flags.bytes.freeOnEnd = 0;
    if (room->flags.bytes.active) {
        FUN_00282bfc(0, 0xFF);
        FUN_00282bfc(1, 0xFF);
    }
    g_onesRoom->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("onesRoom C"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(onesRoomTeardown), reinterpret_cast<AsdProcFunc>(onesRoomSetEnabled), reinterpret_cast<u32>(g_onesRoom));
}
}
