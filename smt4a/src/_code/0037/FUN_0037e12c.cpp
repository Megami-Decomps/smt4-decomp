/* Copies the packed 2D vector from the state block into the slot and, when `copy` is set, also latches it as the previous vector. */
#include "shard/Shard0033.h"

extern "C" {

typedef struct Item {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ u16 count;
} Item;

typedef struct State {
    /* 0x0000 */ u8 unk0000[0x19D0];
    /* 0x19D0 */ u8 slot[8];
    /* 0x19D8 */ u32 prevX;
    /* 0x19DC */ u32 prevY;
    /* 0x19E0 */ u32 curX;
    /* 0x19E4 */ u32 curY;
} State;

typedef struct StateHolder {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ObjB *state;
} StateHolder;

extern ObjBRef g_gameGlobals;

extern s32 FUN_00187168(Item *item);
extern void FUN_0026fd50(void *slot, Item *item, u32 count, u32 arg);

void FUN_0037e12c(Item *item, s32 latch, u32 arg)
{
    ObjB *state = g_gameGlobals.instance;

    if (FUN_00187168(item) != 0) {
        FUN_0026fd50(state->snapshotSlot, item, item->count, arg);
        if (latch != 0) {
            state->previousPositionX = state->positionX;
            state->previousPositionY = state->positionY;
        }
    }
}

}
