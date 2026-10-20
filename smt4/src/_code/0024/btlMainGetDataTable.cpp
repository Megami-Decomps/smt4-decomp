#include "common.h"

extern "C" {

int dataTableFileGetTable(u32 value);

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x2238];
    /* 0x2238 */ u32 unk2238;
} Obj;

void btlMainGetDataTable(Obj *obj)
{
    if (obj->unk2238 != 0) {
        dataTableFileGetTable(obj->unk2238);
    }
}

} /* extern "C" */
