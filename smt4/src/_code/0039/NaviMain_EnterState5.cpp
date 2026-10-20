#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 state;
    /* 0x8 */ u32 step;
} Obj;

/* Switches to state 5. */
void NaviMain_EnterState5(Obj *obj)
{
    obj->state = 5;
    obj->step = 0;
}

} /* extern "C" */
