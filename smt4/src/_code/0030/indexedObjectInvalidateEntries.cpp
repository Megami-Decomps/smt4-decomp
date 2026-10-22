#include "common.h"

struct IndexedObject {
    u8 unk0000[0x21e4];
    s16 indices[10]; // 0x21e4
};

// Invalidate all ten stored indices.
extern "C" void indexedObjectInvalidateEntries(IndexedObject *object)
{
    for (s32 i = 0; i < 10; ++i)
        object->indices[i] = -1;
}
