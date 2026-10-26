#include "common.h"
#include "sys/RuntimeObjects.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
} Obj;

void pairSetFirstResetSecond(void *handle, u32 value)
{
    Obj *obj = static_cast<Obj *>(handle);
    obj->unk4 = value;
    obj->unk8 = 0xffffffff;
}

} /* extern "C" */
