/* NON_MATCHING: retail keeps the element-destroy loop (a distance-counted loop unrolled by two, empty); armcc deletes it here. Symbol name pending: AllocatedArray<T>::~AllocatedArray (16-byte element). */
#include "common.h"
#include "classes/AllocatedArray.h"

struct ArrayEntry {
    f32 unk00;
    f32 unk04;
    f32 unk08;
    void *unk0c;

    ~ArrayEntry() {}
};

template class AllocatedArray<ArrayEntry>;
