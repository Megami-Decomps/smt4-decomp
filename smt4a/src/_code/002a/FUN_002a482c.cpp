#include "common.h"

struct TaggedDispatch {
    u8 tag; // 0x00
    u8 unk01[15];
    u32 payload; // 0x10
};
extern "C" s32 FUN_002a4860(u32 *payload);
extern "C" s32 FUN_002a4844(u32 *payload);

// Dispatch the tagged payload to its specialized handler.
extern "C" s32 FUN_002a482c(TaggedDispatch *object)
{
    if (object->tag != 1)
        return FUN_002a4860(&object->payload);
    return FUN_002a4844(&object->payload);
}
