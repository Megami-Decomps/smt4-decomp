/* NON_MATCHING: register allocation and block layout: retail keeps flags/variant in r8/r9 (loaded with ldrd), spills the box/task pair to the frame and reaches the shared asdTextDrawDirectoryEntry call through duplicated argument setups; built merges the tail differently */
#include "ui/MessageMain.h"
#include "shard/W6_W6Match5_DevilSort.h"

extern "C" {

void objFlagsSetBits(u32 object, u32 bits);
void FUN_002d65d0(void);
void FUN_002e20b4(void);
void asdTextDrawDirectoryEntry(u32 box, u32 font, s32 color, s32 x, s32 y, const void *message, u32 index);
void asdTextDrawFormatted(u32 box, u32 font, s32 color, s32 x, s32 y, const char *format, ...);
s32 FUN_00309ba0(void);

/* Opens the message window on a directory message (or plain text for the `%s` variant) and picks its first state. */
void FUN_0028e6d0(MessageWork *win, const void *message, u32 index, s32 kind, u32 flags, s32 variant, u32 initial)
{
    u32 box = win->box;
    u32 task = win->taskValue;
    u8 oldState = win->state;
    u32 oldFlags = win->flags;

    objFlagsSetBits(box, 8);
    FUN_002d65d0();
    FUN_002e20b4();
    if (message == NULL) {
        win->empty = 1;
    } else {
        win->empty = 0;
        if (win->unk02D != 0) {
            asdTextDrawFormatted(box, 3, -1, 0, 3, "%s", message);
        } else if (kind == 12) {
            asdTextDrawDirectoryEntry(box, 3, -1, 0, 3, message, index);
        } else if (kind == 11) {
            asdTextDrawDirectoryEntry(box, 3, -1, 0, 3, message, index);
        } else if (kind == 19) {
            asdTextDrawDirectoryEntry(box, 4, -1, 0, 3, message, index);
        } else if (kind == 1 || kind == 2 || kind == 3 || kind == 4 || kind == 5 || kind == 6 ||
                   kind == 16 || kind == 17 || kind == 18) {
            asdTextDrawDirectoryEntry(box, 4, task, 0, 3, message, index);
        } else {
            asdTextDrawDirectoryEntry(box, 3, task, 0, 3, message, index);
        }
    }
    FUN_002d65d0();
    FUN_002e20b4();
    if (win->displayMode == 20) {
        win->mode = kind;
    } else {
        win->mode = win->displayMode;
    }
    win->flags = flags;
    win->value = initial;
    win->choiceResult = -1;
    if (win->unk034 == 1) {
        win->flags = flags & ~8;
        if (win->closeRequested != 0) {
            variant = 0;
        }
    }
    win->unk00A = variant;
    if (variant == 0) {
        win->state = 1;
    } else if (variant == 1 || variant == 2) {
        win->state = 2;
    }
    if (!((flags & 1) != 0 && oldState != 0 && (oldFlags & 1) != 0 && win->unk014 != 0)) {
        win->unk014 = 0;
    }
    if (FUN_00309ba0() != 0 || FUN_002b89a4(0) == 0) {
        if (win->state == 2) {
            win->state = 6;
        }
    }
}

} /* extern "C" */
