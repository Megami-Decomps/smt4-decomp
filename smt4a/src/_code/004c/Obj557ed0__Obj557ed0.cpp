/* NON_MATCHING: retail subtracts the 0x4d8 member offset explicitly (sub r0, r0, #1024; sub r0, r0, #216) and stores at positive offsets; the compiler folds the subtraction into negative store offsets here. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x000 */ void *vtbl;
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ u8 active;
    /* 0x009 */ u8 unk009[3];
    /* 0x00C */ u32 field0C[7];       /* 0x0C..0x24 */
    /* 0x028 */ u32 field28;
    /* 0x02C */ u32 field2C;
    /* 0x030 */ u32 field30;
    /* 0x034 */ u8 unk034[0x4D8 - 0x34];
    /* 0x4D8 */ u8 member[0x70];      /* embedded sub-object constructed by _ZN10FloatStateC1Ev */
    /* 0x548 */ u32 field548[4];      /* 0x548..0x554 */
    /* 0x558 */ u8 unk558[4];
    /* 0x55C */ u32 field55C;
    /* 0x560 */ u32 field560;
    /* 0x564 */ u8 flag564;
    /* 0x565 */ u8 unk565[3];
    /* 0x568 */ u32 field568;
    /* 0x56C */ u32 field56C;
    /* 0x570 */ u8 flag570;
    /* 0x571 */ u8 unk571[3];
    /* 0x574 */ u32 field574;
    /* 0x578 */ u32 field578;
    /* 0x57C */ u8 flag57C;
    /* 0x57D */ u8 unk57D[3];
    /* 0x580 */ u32 field580;
    /* 0x584 */ u32 field584;
    /* 0x588 */ u8 flag588;
    /* 0x589 */ u8 unk589[3];
    /* 0x58C */ u32 field58C;
} Object;

extern u8 DAT_00557ed8;

int _ZN10FloatStateC1Ev(void *member);

/* Constructor: installs the vtable, constructs the embedded member and zero-initialises the state (active = 1). */
void _ZN9Obj557ed0C1Ev(Object *self)
{
    Object *obj;

    self->vtbl = &DAT_00557ed8;
    obj = (Object *)((u8 *)_ZN10FloatStateC1Ev(self->member) - 0x4d8);
    obj->active = 1;
    obj->field0C[0] = 0;
    obj->field0C[1] = 0;
    obj->field0C[2] = 0;
    obj->field0C[3] = 0;
    obj->field0C[4] = 0;
    obj->field0C[5] = 0;
    obj->field0C[6] = 0;
    obj->field58C = 0;
    obj->field28 = 0;
    obj->field2C = 0;
    obj->field30 = 0;
    obj->field548[0] = 0;
    obj->field548[1] = 0;
    obj->field548[2] = 0;
    obj->field548[3] = 0;
    obj->field560 = 0;
    obj->field55C = 0;
    obj->flag564 = 0;
    obj->field56C = 0;
    obj->field568 = 0;
    obj->flag570 = 0;
    obj->field578 = 0;
    obj->field574 = 0;
    obj->flag57C = 0;
    obj->field584 = 0;
    obj->field580 = 0;
    obj->flag588 = 0;
}

} /* extern "C" */
