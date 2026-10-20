#include "common.h"

extern "C" {

typedef struct ObjFUN_005090fc {
    u8 unk00[0x3c];
    u32 handle;                    /* 0x3C */
} ObjFUN_005090fc;

extern u32 *getSectionAt1C_85f4(u32 handle);

/* Returns the first word of the value getSectionAt1C_85f4 looks up for the object's handle. */
u32 FUN_005090fc(ObjFUN_005090fc *obj)
{
    return *getSectionAt1C_85f4(obj->handle);
}

} /* extern "C" */
