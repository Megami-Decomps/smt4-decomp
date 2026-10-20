#include "common.h"

extern "C" {

typedef struct SlotIds {
    s16 a;
    s16 b;
    s16 c;
} SlotIds;

typedef struct UiState {
    /* 0x000 */ u8 unk000[0xE22];
    /* 0xE22 */ s16 ids[3];
    /* 0xE28 */ SlotIds slots[3];
    /* 0xE3A */ u8 unkE3A;
    /* 0xE3B */ u8 ready;
} UiState;

extern UiState *DAT_0043da90;

int FUN_002b8cc8(void);

/* Resets the three UI slots: all ids to -1 and four FUN_002b8cc8 calls per slot; then clears `ready`. */
void FUN_00269cd0(void)
{
    UiState *state = DAT_0043da90;
    int i = 0;

    do {
        state->ids[i] = -1;
        state->slots[i].a = -1;
        state->slots[i].b = -1;
        state->slots[i].c = -1;
        FUN_002b8cc8();
        FUN_002b8cc8();
        FUN_002b8cc8();
        FUN_002b8cc8();
        i++;
    } while (i < 3);
    state->ready = 0;
}

} /* extern "C" */
