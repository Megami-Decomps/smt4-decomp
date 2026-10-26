/* NON_MATCHING: matches except the constant/address register order of the header stores; retail copies the 64-bit value with ldrd/strd at the word-aligned offset 0x2C, which needs a packed 64-bit field (here two words are copied with ldm/stm). */
#include "classes/ObjectCommandRequests.h"

/* Two words copied as a unit. */
struct ObjectWordPair {
    u32 low, high;
};

/* A three-word vector. */
struct ObjectVec3 {
    u32 x, y, z;
};

/* The extra description a type-35 command carries. */
struct ObjectCursorShape {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ const ObjectWordPair *value;
    /* 0x0C */ u32 fourth;
};

/* A type-35 command (14 words). */
struct ObjectShapeNode {
    /* 0x00 */ u32 next;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[7];
    /* 0x0C */ u32 token;
    /* 0x10 */ u32 owner;
    /* 0x14 */ ObjectVec3 vector;
    /* 0x20 */ u32 first;
    /* 0x24 */ u32 second;
    /* 0x28 */ u32 fourth;
    /* 0x2C */ ObjectWordPair value;
    /* 0x34 */ u32 vectorX;
};

// Queues a type-35 command for the cursor object describing a vector and a shape.
extern "C" void FUN_00466d2c(ObjectCursorOwner *owner, const ObjectCursorShape *shape, const ObjectVec3 *vector)
{
    ObjectCommandQueue *queue = objectCommandQueueGet();
    ObjectShapeNode *command = (ObjectShapeNode *)objectCommandBegin(queue, 14);
    command->kind = 35;
    command->owner = (u32)&owner->params;
    command->vector = *vector;
    command->second = shape->second;
    command->first = shape->first;
    command->fourth = shape->fourth;
    command->value = *shape->value;
    command->vectorX = vector->x;
    listAppendNode(queue, (ObjectCommand *)command);
}
