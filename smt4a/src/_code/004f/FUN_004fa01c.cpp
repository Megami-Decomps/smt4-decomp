#include "common.h"

extern "C" {

typedef struct Object004fa01c {
    /* 0x0000 */ u8 unk0000[0x33bc];
    /* 0x33bc */ u32 state;
} Object004fa01c;

void panelReset(Object004fa01c *obj);

/* Resets the object's state word, then runs panelReset on it. */
void FUN_004fa01c(Object004fa01c *obj)
{
    obj->state = 0;
    panelReset(obj);
}

} /* extern "C" */
