#include "common.h"

extern "C" {

void FUN_00197e38(void *member);

typedef struct Holder {
    /* 0x000 */ u8 unk000[0xB4];
    /* 0x0B4 */ u8 memberB4[0xD9];
    /* 0x18D */ u8 flag;
} Holder;

/* Runs FUN_00197e38 on the object and on its member at 0xB4, then clears the flag at 0x18D. */
void FUN_0015eb74(Holder *object)
{
    FUN_00197e38(object);
    FUN_00197e38(object->memberB4);
    object->flag = 0;
}

} /* extern "C" */
