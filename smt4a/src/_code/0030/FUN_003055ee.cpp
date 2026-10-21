/* NON_MATCHING: -Ospace fixes stack sizing but places shared list destruction after both dispatch branches; retail outlines the ordinary dispatch after an earlier shared cleanup block. */
#include "shard/Shard0031.h"

extern "C" {
ListOwner* FUN_002f8728(ListOwner* list);
ListOwner* FUN_002fd180(ListOwner* list);
}

struct OnlineRequestList : ListOwner {
    OnlineRequestList() { FUN_002f8728(this); }
    ~OnlineRequestList() { FUN_002fd180(this); }
};

struct OnlineOperationOwner {
    u8 unk00[8];
    OnlineOperationOwner* parent;
    u8 unk0c[4];
    u8 context[1];
};

struct OnlineOperationOptions {
    u32 unk00;
    u32 mode;
};

extern "C" {
void FUN_0011742c(OnlineOperationOwner* owner, ListOwner* entries);
u32 FUN_0011e910(void* context, u32 operation, u32 tag,
                 ListOwner* entries, void* parentContext, u32 argument);
u32 FUN_0011e9c8(void* context, u32 operation, u32 tag,
                 ListOwner* entries, void* parentContext, u32 argument,
                 const OnlineOperationOptions* options);

u32 FUN_003055ee(OnlineOperationOwner* owner, u32 operation, u32 tag,
                 u32 argument, const OnlineOperationOptions* options)
{
    OnlineRequestList entries;
    FUN_0011742c(owner, &entries);
    if (options->mode != 0) {
        return FUN_0011e9c8(owner->context, operation, tag, &entries,
                             owner->parent->context, argument, options);
    }
    return FUN_0011e910(owner->context, operation, tag, &entries,
                         owner->parent->context, argument);
}

} /* extern "C" */
