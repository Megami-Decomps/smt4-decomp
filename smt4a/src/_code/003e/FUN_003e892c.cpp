/* NON_MATCHING: the final slot value is loaded with `ldrsh` (retail `ldrh`) and the +0x2004 store address comes from a literal pool word; retail forms r1 = list + 0x2000 and stores at [r1, #4]. */
#include "common.h"

extern "C" {

#define SLOT_COUNT 12

typedef struct SlotState {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ s16 current;          /* the slot value in use, -1 when there is none */
} SlotState;

typedef struct SlotList {
    /* 0x0000 */ u8 unk0000[0x2000];
    /* 0x2000 */ SlotState state;
    /* 0x2006 */ u8 unk2006[0xFFA];
    /* 0x3000 */ u8 unk3000[6];
    /* 0x3006 */ s16 slots[SLOT_COUNT]; /* negative when empty */
    /* 0x301E */ s16 cursor;
} SlotList;

extern void FUN_003f26d4(SlotList *list);

/* Advances the cursor to the next non-empty slot (or hands the list on when it runs out) and publishes its value. */
void FUN_003e892c(SlotList *list)
{
    if (list->cursor < 0) {
        FUN_003f26d4(list);
        return;
    }
    do {
        list->cursor++;
        if (list->cursor >= SLOT_COUNT) {
            FUN_003f26d4(list);
            break;
        }
    } while (list->slots[list->cursor] < 0);
    s16 value;

    if (list->cursor >= 0) {
        value = list->slots[list->cursor];
    } else {
        list->cursor = 0;
        value = -1;
    }
    list->state.current = value;
}

}
