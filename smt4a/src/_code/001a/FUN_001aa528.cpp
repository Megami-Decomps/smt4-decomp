#include "AsdSDK/Source/Gfx/Model/AsdSceneNodeArray.h"

using nw::gfx::SceneNode;
using nw::ut::MoveArray;

extern "C" {

/* Grows the array to hold `count` scene nodes if it owns its storage. */
bool FUN_001aa528(MoveArray<SceneNode *> *array, s32 count)
{
    if (array->capacity() >= count) {
        return true;
    }
    AsdAllocatorObject *allocator = array->allocator;
    if (allocator != NULL && (array->capacityFlags & 0xc0000000u) == 0x40000000u) {
        SceneNode **storage = (SceneNode **)allocator->allocate(count * sizeof(*storage), 0x20);
        if (storage == NULL) {
            return false;
        }
        s32 size = 0;
        if (array->begin != array->end) {
            std::uninitialized_copy(array->begin, array->end, storage);
            size = array->size();
        }
        if (array->begin != NULL) {
            array->end = array->begin;
            array->allocator->release(array->begin);
        }
        array->end = storage + size;
        array->begin = storage;
        array->setCapacity(count);
        return true;
    }
    return false;
}

} /* extern "C" */
