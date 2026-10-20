#include "common.h"

extern "C" {

int FUN_0019ff9c(u32 a, void *b);
extern int FUN_001ed80c(void);

typedef struct Obj {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0C[0x1C];
    /* 0x28 */ u8 unk28[1];
} Obj;

typedef struct Owner {
    /* 0x0 */ Obj *obj;
} Owner;

u32 FUN_001ebdbc(Owner *owner)
{
    Obj *obj = owner->obj;

    if (FUN_001ed80c() == 0) {
        FUN_0019ff9c(obj->unk08, obj->unk28);
    }
    return 0;
}

} /* extern "C" */
