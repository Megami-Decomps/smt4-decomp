#include "common.h"

extern "C" {

typedef struct Object004fa01c {
    /* 0x0000 */ u8 unk0000[0x33bc];
    /* 0x33bc */ u32 state;
} Object004fa01c;

void FUN_004f7f08(Object004fa01c *obj);

/* Resets the object's state word, then runs FUN_004f7f08 on it. */
void FUN_004fa01c(Object004fa01c *obj)
{
    obj->state = 0;
    FUN_004f7f08(obj);
}

} /* extern "C" */
