#include "common.h"

extern "C" {

/* 0x8c-byte slot; the signed flag byte at 0x8a marks a confirmed slot. */
typedef struct {
    u8 unk00[0x8a];
    s8 confirmed;       /* 0x8a */
    u8 unk8b;
} Slot;

typedef struct {
    u8 unk00[4];
    u32 mode;           /* 0x04 */
    u32 unk08;          /* 0x08 */
    u8 unk0c[8];
    s32 step;           /* 0x14 */
    u8 unk18[0x600];
    Slot slots[5];      /* 0x618 */
} Screen;

int FUN_002bf818(Slot *slot);
int flagBitIsSet(u32 flag);
int gameFlagIsSet(u32 mask);
s32 recordGetSignedFlags(const void *record);

/* Advances the screen one step: updates every slot up to the current step and switches mode when the last slot is confirmed. */
void menuScreenAdvanceConfirmedSlots(Screen *screen)
{
    int i;

    if (gameFlagIsSet(0x400) != 0 && flagBitIsSet(0x76) != 0) {
        i = 0;
        do {
            if (i <= screen->step) {
                FUN_002bf818(&screen->slots[i]);
            }
            i++;
        } while (i < 5);
        if (recordGetSignedFlags(&screen->slots[4]) != 0) {
            screen->mode = 2;
            screen->unk08 = 0;
        }
        screen->step++;
    }
}

} /* extern "C" */
