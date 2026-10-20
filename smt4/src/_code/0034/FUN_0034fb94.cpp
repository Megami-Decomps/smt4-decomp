#include "common.h"

extern "C" {

int FUN_002c3424(void *event);
int FUN_003511cc(void *obj);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 done;
    /* 0x11 */ u8 unk11[0xF];
    /* 0x20 */ u8 event[1];
} Obj;

/* Waits on the event, running FUN_003511cc until the object is done. */
void FUN_0034fb94(Obj *obj)
{
    while (FUN_002c3424(obj->event), obj->done != 1) {
        FUN_003511cc(obj);
    }
}

} /* extern "C" */
