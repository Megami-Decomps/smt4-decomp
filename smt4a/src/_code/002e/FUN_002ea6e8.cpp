/* NON_MATCHING: register allocation only: retail loads the vtable address into r1 and zero into r2 (swapped here) */
/* Constructs the object: allocates it, installs its vtable and clears the flag. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 flag;
} Object;

extern u8 DAT_005594b4;

extern Object *FUN_002fd0e4(void);

void FUN_002ea6e8(void)
{
    Object *obj = FUN_002fd0e4();

    obj->vtbl = &DAT_005594b4;
    obj->flag = 0;
}

}
