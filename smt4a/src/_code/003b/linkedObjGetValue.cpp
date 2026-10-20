#include "shard/Shard003B.h"

extern "C" {

typedef struct LinkTarget {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 value;
} LinkTarget;

typedef struct LinkedObj {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ LinkTarget *link;
} LinkedObj;

u32 linkedObjGetValue(LinkedObj *obj)
{
    return obj->link->value;
}

} /* extern "C" */
