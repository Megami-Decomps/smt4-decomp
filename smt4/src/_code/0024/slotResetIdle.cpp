#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x4A0C];
    /* 0x4A0C */ u32 arrA[2];
    /* 0x4A14 */ u32 arrB[2];
    /* 0x4A1C */ u32 arrC[2];
    /* 0x4A24 */ u32 state[2];
    /* 0x4A2C */ u32 arrD[2];
    /* 0x4A34 */ u32 arrE[2];
} Obj;

/* Resets slot `slot` to the idle state with `value` in arrE. */
void slotResetIdle(Obj *obj, int slot, u32 value)
{
    obj->state[slot] = 0;
    obj->arrD[slot] = 0;
    obj->arrE[slot] = value;
    obj->arrB[slot] = obj->arrA[slot];
    obj->arrC[slot] = 0;
}

} /* extern "C" */
