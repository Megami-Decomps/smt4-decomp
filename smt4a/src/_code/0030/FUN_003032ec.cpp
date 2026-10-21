/* NON_MATCHING: saved arguments and list-link temporaries use different registers from retail. */
#include "common.h"

struct NodeValue {
    const void* vtable; // 0x00
    u32 first;          // 0x04
    u32 second;         // 0x08
    u32 third;          // 0x0c
};

struct ValueNode {
    ValueNode* next;     // 0x00
    ValueNode* previous; // 0x04
    NodeValue value;     // 0x08
};

struct ValueCollection {
    u8 unk00[0x14];      // 0x00
    u32 count;           // 0x14
};

extern "C" {
extern const u32 DAT_00559144[];
ValueNode* FUN_00307d00(ValueCollection* collection, s32 mode, ValueNode** position, const NodeValue* value);

// Copy a value into a new list node and insert it before the requested position.
void FUN_003032ec(ValueNode** result, ValueCollection* collection, ValueNode** position, const NodeValue* value)
{
    ValueNode* node = FUN_00307d00(collection, 0, position, value);
    NodeValue* copy = &node->value;
    copy->vtable = DAT_00559144;
    copy->first = value->first;
    copy->second = value->second;
    copy->third = value->third;
    node->next = *position;
    node->previous = (*position)->previous;
    (*position)->previous->next = node;
    (*position)->previous = node;
    ++collection->count;
    *result = node;
}
}
