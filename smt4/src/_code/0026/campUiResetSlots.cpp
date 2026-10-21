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

extern UiState *g_camp;

int ifTouchRegionRemove(void);

/* Resets the three UI slots: all ids to -1 and four ifTouchRegionRemove calls per slot; then clears `ready`. */
void campUiResetSlots(void)
{
    UiState *state = g_camp;
    int i = 0;

    do {
        state->ids[i] = -1;
        state->slots[i].a = -1;
        state->slots[i].b = -1;
        state->slots[i].c = -1;
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        i++;
    } while (i < 3);
    state->ready = 0;
}

} /* extern "C" */
