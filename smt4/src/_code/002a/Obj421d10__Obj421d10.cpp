#include "common.h"

extern "C" {

int nn_os_LightEvent_Signal(u32 *event);
extern u8 DAT_00421d18;
extern void nn_os_LightEvent_Initialize(u32 *event, u8 autoClear);

typedef struct Obj {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 event[1];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ u32 unk18;
} Obj;

/* Constructor: installs the vtable, clears the fields and initializes the light event. */
Obj *_ZN9Obj421d10C1Ev(Obj *obj)
{
    obj->vtbl = &DAT_00421d18;
    obj->unk04 = 0;
    obj->unk08 = 0;
    obj->event[0] = 0;
    obj->unk10 = 0;
    nn_os_LightEvent_Initialize(obj->event, 1);
    obj->unk14 = 0;
    obj->unk18 = 0;
    nn_os_LightEvent_Signal(obj->event);
    return obj;
}

} /* extern "C" */
