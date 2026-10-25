/* NON_MATCHING: register assignment of the stacked arguments and the branch layout of the close-mode / unk14 tail differ (retail tests the two flag pairs with separate predicated compares); the first handle copy uses ldr instead of vldr. */
#include "common.h"

/* A one-word object handle passed by value. */
struct ObjectHandle {
    u32 id;
};

/* The message window work as the open call sees it (accessed prefix of MessageWorkA). */
struct MessageOpenWork {
    u8 unk00[4];
    ObjectHandle handle;      // 0x04
    u8 state;                 // 0x08
    u8 mode;                  // 0x09
    u8 voiceMode;             // 0x0A
    u8 unk0B;
    u32 flags;                // 0x0C
    u8 unk10[4];
    s32 unk14;                // 0x14
    ObjectHandle owner;       // 0x18
    s32 choiceResult;         // 0x1C
    u8 unk20[0xC];
    u8 empty;                 // 0x2C
    u8 hasPending;            // 0x2D
    u8 unk2E[6];
    u8 closeMode;             // 0x34
    u8 closeRequested;        // 0x35
    u8 unk36[0x198F];
    u8 displayMode;           // 0x19C5
    u8 unk19C6[0x26];
    ObjectHandle textHandle;  // 0x19EC
};

extern "C" {
void objFlagsSetBits(ObjectHandle handle, s32 bits);
void bustupCutAnimClearFlags(void);
void eventTexClearFlagB8(void);
s32 bustupCutAnimIsStateFive(void);
s32 FUN_00163e84(u32 value);
void asdTextFormatStream(ObjectHandle handle, u32 a, u32 b, u32 c, u32 d, const char *format, const char *text);
void asdTextDrawDirectoryEntry(ObjectHandle handle, u32 kind, u32 textHandle, u32 a, u32 b,
                               const char *text, u32 arg);

/* Prepare the message window for a new message: draw its text entry and set up its mode and timers. */
void FUN_00203da4(MessageOpenWork *work, const char *text, u32 arg, s32 kind, u32 flags, s32 mode, ObjectHandle owner)
{
    ObjectHandle handle = work->handle;
    ObjectHandle textHandle = work->textHandle;
    u8 previousState = work->state;
    u32 previousFlags = work->flags;
    objFlagsSetBits(handle, 8);
    bustupCutAnimClearFlags();
    eventTexClearFlagB8();
    if (text == 0) {
        work->empty = 1;
    } else {
        work->empty = 0;
        if (work->hasPending != 0) {
            asdTextFormatStream(handle, 3, 0xFFFFFFFF, 0, 3, "%s", text);
        } else if (kind == 12 || kind == 13) {
            asdTextDrawDirectoryEntry(handle, 3, 0xFFFFFFFF, 0, 3, text, arg);
        } else if (kind == 11) {
            asdTextDrawDirectoryEntry(handle, 3, 0xFFFFFFFF, 0, 3, text, arg);
        } else if (kind == 20) {
            asdTextDrawDirectoryEntry(handle, 4, 0xFFFFFFFF, 0, 3, text, arg);
        } else if (kind == 1 || kind == 2 || kind == 3 || kind == 4 || kind == 5 || kind == 6 ||
                   kind == 17 || kind == 18 || kind == 19) {
            asdTextDrawDirectoryEntry(handle, 4, textHandle.id, 0, 3, text, arg);
        } else {
            asdTextDrawDirectoryEntry(handle, 3, textHandle.id, 0, 3, text, arg);
        }
    }
    bustupCutAnimClearFlags();
    eventTexClearFlagB8();
    if (work->displayMode == 21)
        work->mode = kind;
    else
        work->mode = work->displayMode;
    work->flags = flags;
    work->owner = owner;
    work->choiceResult = -1;
    switch (work->closeMode) {
    case 0:
        break;
    case 1:
        work->flags = flags & ~8;
        if (work->closeRequested != 0)
            mode = 0;
        break;
    }
    work->voiceMode = mode;
    if (mode == 0)
        work->state = 1;
    else if (mode == 1 || mode == 2)
        work->state = 2;
    if ((flags & 1) == 0 || previousState == 0 || (previousFlags & 1) == 0 || work->unk14 == 0)
        work->unk14 = 0;
    if ((bustupCutAnimIsStateFive() != 0 || FUN_00163e84(0) == 0) && work->state == 2)
        work->state = 6;
}
}
