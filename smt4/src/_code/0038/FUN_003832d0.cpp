#include "common.h"

extern "C" {

extern int scrRunOpcodesStub(u32 value);

typedef struct Source {
    /* 0x0 */ u32 value;
} Source;

typedef struct Obj {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 unk004;
    /* 0x008 */ u32 unk008;
    /* 0x00C */ u8 unk00C[0x5B8];
    /* 0x5C4 */ Source *source;
} Obj;

void FUN_003832d0(Obj *obj)
{
    if (scrRunOpcodesStub(obj->source->value) == 2) {
        obj->unk004 = 4;
        obj->unk008 = 0;
    }
}

} /* extern "C" */
