#include "common.h"

namespace {
struct ObjectPart {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
};
}

/* Returns the part's stored value. */
extern "C" u32 FUN_002cb8d0(const ObjectPart *part)
{
    return part->unk20;
}
