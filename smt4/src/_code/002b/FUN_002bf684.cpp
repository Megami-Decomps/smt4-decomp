#include "common.h"
#include "code/Code002b.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ int unk4;
} Obj;

u8 FUN_002bf684(const void *handle)
{
    const Obj *obj = static_cast<const Obj *>(handle);
    return obj->unk4 != 0;
}

} /* extern "C" */
