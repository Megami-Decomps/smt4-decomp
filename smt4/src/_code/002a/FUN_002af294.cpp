#include "AsdSDK/Source/Gfx/Model/AsdSceneNodeArray.h"

using nw::gfx::SceneNode;
using nw::ut::MoveArray;

extern "C" {

/* Grows the array to hold `count` scene nodes if it owns its storage. */
u32 FUN_002af294(MoveArray<SceneNode *> *array, u32 count)
{
    if (array->capacity() >= (s32)count) {
        return 1;
    }
    AsdAllocatorObject *allocator = array->allocator;
    if (allocator != NULL && (array->capacityFlags & 0xc0000000u) == 0x40000000u) {
        SceneNode **storage = (SceneNode **)allocator->allocate(count * sizeof(*storage), 0x20);
        s32 size = 0;
        if (array->begin != array->end) {
            std::uninitialized_copy(array->begin, array->end, storage);
            size = array->size();
        }
        if (array->begin != NULL) {
            array->allocator->release(array->begin);
        }
        array->end = storage + size;
        array->begin = storage;
        array->setCapacity(count);
        return 1;
    }
    return 0;
}

} /* extern "C" */
