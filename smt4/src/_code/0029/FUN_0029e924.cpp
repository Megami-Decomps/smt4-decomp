#include "common.h"
#include "code/Code0029.h"

struct TaggedDispatch {
    u8 tag; // 0x00
    u8 unk01[15];
    u32 payload; // 0x10
};
extern "C" s32 FUN_0029efc0(u32 *payload);
extern "C" s32 FUN_0029e93c(u32 *payload);

// Dispatch the tagged payload to its specialized handler.
extern "C" s32 FUN_0029e924(void *handle)
{
    TaggedDispatch *object = static_cast<TaggedDispatch *>(handle);
    if (object->tag != 1)
        return FUN_0029efc0(&object->payload);
    return FUN_0029e93c(&object->payload);
}
