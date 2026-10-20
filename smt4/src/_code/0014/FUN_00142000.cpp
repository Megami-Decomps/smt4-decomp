#include "common.h"

extern "C" {

typedef struct ObjFUN_00142000 {
    u8 unk00[0x3c];
    u32 handle;                    /* 0x3C */
} ObjFUN_00142000;

extern u32 *FUN_0014d36c(u32 handle);

/* Returns the first word of the value FUN_0014d36c looks up for the object's handle. */
u32 FUN_00142000(ObjFUN_00142000 *obj)
{
    return *FUN_0014d36c(obj->handle);
}

} /* extern "C" */
