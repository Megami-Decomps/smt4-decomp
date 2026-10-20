#include "common.h"

extern "C" {

extern int FUN_00234660(void *block);
extern int FUN_00263c34(int value);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x2E8];
    /* 0x2E8 */ u8 block[1];
} Obj;

int FUN_0027e974(Obj *obj)
{
    int value = FUN_00234660(obj->block);

    value = FUN_00263c34(value - 0x34);
    return value - 0x2b4;
}

} /* extern "C" */
