#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 state;
    /* 0x8 */ u32 step;
} Obj;

/* Switches to state 4. */
void NaviMain_EnterState4(Obj *obj)
{
    obj->state = 4;
    obj->step = 0;
}

} /* extern "C" */
