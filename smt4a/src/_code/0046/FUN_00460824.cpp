/* NON_MATCHING: matches except the argument/saved-register order of the two stack bytes and the pair, and the pair is stored with two vstr where retail uses one vstmia. */
#include "classes/ObjectCommandRequests.h"

/* A pair of floats (or the 64-bit word holding them) copied as a unit. */
union ObjectFloatPair {
    u64 bits;
    f32 values[2];
};

/* A type-13 command (11 words). */
struct ObjectPairNode {
    /* 0x00 */ u32 next;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[7];
    /* 0x0C */ u32 token;
    /* 0x10 */ u32 owner;
    /* 0x14 */ u32 first;
    /* 0x18 */ u32 second;
    /* 0x1C */ u32 third;
    /* 0x20 */ u8 flagA;
    /* 0x21 */ u8 flagB;
    /* 0x22 */ u8 unk22[2];
    /* 0x24 */ ObjectFloatPair pair;
};

struct ObjectPairOwner {
    /* 0x000 */ u8 unk000[0x128];
    /* 0x128 */ u32 params;
};

// Queues a type-13 command for the owner's parameter holder.
extern "C" void FUN_00460824(ObjectPairOwner *owner, u32 first, u32 second, u32 third, u8 flagA, u8 flagB,
                             ObjectFloatPair pair)
{
    ObjectCommandQueue *queue = objectCommandQueueGet();
    ObjectPairNode *command = (ObjectPairNode *)objectCommandBegin(queue, 11);
    command->kind = 13;
    command->owner = (u32)&owner->params;
    command->first = first;
    command->second = second;
    command->third = third;
    command->flagA = flagA;
    command->flagB = flagB;
    command->pair = pair;
    listAppendNode(queue, (ObjectCommand *)command);
}
