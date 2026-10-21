#include "shard/Shard004C.h"

extern "C" {

typedef struct PtrAt8 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 *target;
} PtrAt8;

extern void* dataTableFileGetTable(s32 *target, u32 section);

void* btlTalkGetTableSection0(PtrAt8 *obj)
{
    if (obj->target != NULL) {
        return dataTableFileGetTable(obj->target, 0);
    }
    return NULL;
}

} /* extern "C" */
