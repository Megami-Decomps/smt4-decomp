#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x52C];
    /* 0x52C */ u32 count;
} Obj;

void entryListReset(Obj *obj)
{
    obj->count = 0;
}

} /* extern "C" */
