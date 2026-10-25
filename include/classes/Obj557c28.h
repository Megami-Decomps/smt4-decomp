#ifndef CLASSES_OBJ557C28_H
#define CLASSES_OBJ557C28_H
#include "Model/MoriModelCommand.h"
#include <stddef.h>

// Double-buffered model command queues and their binding-state caches.
class Obj557c28 {
public:
    Obj557c28();
    virtual ~Obj557c28();
    MoriModelCommand *command() { return reinterpret_cast<MoriModelCommand *>(this); }
    /* 0x04 */ MoriCommandBuffer buffers[2];
    /* 0x9c */ u32 unk9c;
    /* 0xa0 */ u32 unkA0;
    /* 0xa4 */ u32 unkA4;
    /* 0xa8 */ Vector8 *listA;
    /* 0xac */ Vector8 *listB;
    struct BindingCache {
        u8 first, mode, firstSlot, secondSlot;
        u32 value;
    };
    /* 0xb0 */ BindingCache first;
    /* 0xb8 */ BindingCache second;
};
typedef char Obj557c28LayoutCheck[
    sizeof(Obj557c28) == 0xc0 && offsetof(Obj557c28, buffers) == 4 &&
    offsetof(Obj557c28, listA) == 0xa8 && offsetof(Obj557c28, first) == 0xb0 ? 1 : -1];
#endif
