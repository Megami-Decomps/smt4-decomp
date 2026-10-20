#include "common.h"

extern "C" {

int FUN_002a215c(u32 a, void *b);
extern u32 FUN_002a2174(void);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u8 unk80[1];
} Obj;

Obj *FUN_00155634(Obj *obj)
{
    u32 a = FUN_002a2174();

    FUN_002a215c(a, obj->unk80);
    return obj;
}

} /* extern "C" */
