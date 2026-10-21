/* NON_MATCHING: placement construction adds a null guard; the string wrapper also loses retail's constructor-return pointer chaining. */
#include "shard/W6_W6Match2_OnlineString.h"
#include <new>

extern "C" {
extern const u8 _ZTV9Obj559eec[];
extern const u8 DAT_00559524[];
}

struct OnlineMessageValue {
    const void *vtable; // 0x00
    u8 kind; // 0x04
    u8 unk05[3];
    u32 first; // 0x08
    u32 second; // 0x0c
    u32 third; // 0x10
    u32 fourth; // 0x14
    OnlineStringValue text; // 0x18
    u32 flags; // 0x20

    OnlineMessageValue(const OnlineMessageValue &other)
        : vtable(_ZTV9Obj559eec + 8), kind(other.kind), first(other.first),
          second(other.second), third(other.third), fourth(other.fourth),
          text(other.text), flags(other.flags)
    {
        vtable = DAT_00559524;
    }
};
struct OnlineMessageNode {
    OnlineMessageNode *next;
    OnlineMessageNode *previous;
    OnlineMessageValue value;
};
struct OnlineMessageListRoot {
    OnlineMessageNode *sentinel;
};
struct OnlineMessageList {
    u8 pool[0x10];
    OnlineMessageListRoot *root; // 0x10
    u32 count; // 0x14
};

extern "C" {
OnlineMessageNode *FUN_0030710c(OnlineMessageList *, u32);

void FUN_001327b4(OnlineMessageList *list, const OnlineMessageValue *value)
{
    OnlineMessageNode *sentinel = list->root->sentinel;
    OnlineMessageNode *node = FUN_0030710c(list, 0);
    new (&node->value) OnlineMessageValue(*value);
    node->next = sentinel;
    node->previous = sentinel->previous;
    sentinel->previous->next = node;
    sentinel->previous = node;
    ++list->count;
}
}
