/* NON_MATCHING: class constructor identity is not named yet; C-form initialization does not reproduce member-constructor return-this reuse and registry address grouping. */
#include "shard/W6_W6Match2_OnlineString.h"
#include "shard/W6_W6Match2_OnlineScopedGuard.h"

struct OnlineTrackedString {
    const void* vtable;             // 0x00
    OnlineTrackedString* next;      // 0x04
    OnlineTrackedString* previous;  // 0x08
    OnlineStringValue text;         // 0x0c
    s32 index;                      // 0x14
    u32 unk18;                      // 0x18
    u32 unk1c;                      // 0x1c
    u32 unk20;                      // 0x20
};

struct TrackedStringRegistry {
    OnlineTrackedString* first; // 0x00
    OnlineTrackedString* last;  // 0x04
    OnlineTrackedString* end;   // 0x08
    u32 count;                  // 0x0c
    u8 mutex;                   // 0x10
};

extern "C" {
extern const u8 _ZTV9Obj5592ac[];
extern TrackedStringRegistry DAT_0062e58c;
u32 wordRefsDiffer_002fa114(OnlineTrackedString* const* first, OnlineTrackedString* const* second);

// Initialize the copied string object and append it to the shared tracked-string registry.
OnlineTrackedString* FUN_002fed24(OnlineTrackedString* object, const OnlineStringValue* text)
{
    object->next = NULL;
    object->previous = NULL;
    object->vtable = _ZTV9Obj5592ac + 8;
    onlineStringCopyConstruct(&object->text, text);
    object->unk18 = 0;
    object->unk1c = 0;
    object->unk20 = 0;
    object->index = -1;
    OnlineScopedGuard guard((OnlineMutex*)&DAT_0062e58c.mutex);
    if (wordRefsDiffer_002fa114(&DAT_0062e58c.first, &DAT_0062e58c.end)) {
        DAT_0062e58c.last->next = object;
        object->previous = DAT_0062e58c.last;
    } else {
        DAT_0062e58c.first = object;
    }
    ++DAT_0062e58c.count;
    DAT_0062e58c.last = object;
    return object;
}
}
