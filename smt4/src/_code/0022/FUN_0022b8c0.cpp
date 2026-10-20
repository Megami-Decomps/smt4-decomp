#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x530];
    /* 0x530 */ u32 entries[1];
} Obj;

extern int FUN_0023360c(void);

u32 FUN_0022b8c0(Obj *obj)
{
    int index = FUN_0023360c();

    return obj->entries[index];
}

} /* extern "C" */
