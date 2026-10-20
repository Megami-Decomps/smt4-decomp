#include "shard/Shard004D.h"

extern "C" {

typedef struct InnerFlags {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 flags;
} InnerFlags;

typedef struct OuterRef {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ InnerFlags *inner;
} OuterRef;

void setHandleEnabled(OuterRef **ref, s32 enable)
{
    InnerFlags *inner;
    u32 flags;

    if (*ref != NULL) {
        inner = (*ref)->inner;
        flags = inner->flags;
        if (enable == 0) {
            flags = flags & 0xFFFFFFFE;
        } else {
            flags = flags | 1;
        }
        inner->flags = flags;
    }
}

} /* extern "C" */
