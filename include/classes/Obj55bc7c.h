#ifndef CLASSES_OBJ55BC7C_H
#define CLASSES_OBJ55BC7C_H

#include "common.h"

/* The allocator a material array frees its storage to: slot 3 releases a block. */
class MaterialArrayAllocator {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void *allocate(u32 size, u32 alignment);   /* +0x08 */
    virtual void free(void *block);                    /* +0x0C */
};

/* A growable array of material resources (nw::ut::MoveArray layout): its destructor clears it and
 * gives the storage back to the allocator. */
template <typename T>
struct MaterialArray {
    ~MaterialArray()
    {
        clear();
        if (allocator != NULL && begin != NULL) {
            allocator->free(begin);
        }
    }
    void clear()
    {
        for (s32 i = 0; i < end - begin; ++i) {
            begin[i].~T();
        }
        end = begin;
    }

    /* 0x00 */ MaterialArrayAllocator *allocator;
    /* 0x04 */ T *begin;
    /* 0x08 */ T *end;
};

/* A material resource handle as the array stores it. */
struct MaterialHandle {
    ~MaterialHandle() {}
    u32 value;
};

class Obj55bc7c {
public:
    virtual ~Obj55bc7c();
    virtual const void *getTypeDescriptor() const;
    /* 0x04 */ u32 owner;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ MaterialArray<MaterialHandle> materials;
};

#endif
