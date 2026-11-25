#ifndef CLASSES_OBJ557C28_H
#define CLASSES_OBJ557C28_H
#include "Model/MoriModelCommand.h"
#include <stddef.h>

/* Double-buffered model command queues and their binding-state caches. */
class Obj557c28 {
public:
    Obj557c28();
    virtual ~Obj557c28();
    MoriModelCommand *command() { return (MoriModelCommand *)this; }
    /* 0x04 */ MoriCommandBuffer buffers[2];
    /* The queues' mutable state, also exposed through the MoriModelCommand ABI prefix. */
    struct MoriModelCommandState {
        /* 0x00 */ u32 activeBuffer;
        /* 0x04 */ u32 unk04;
        /* 0x08 */ u32 unk08;
        /* 0x0C */ Vector8 *listA;
        /* 0x10 */ Vector8 *listB;
    };
    /* 0x9C */ MoriModelCommandState state;
    struct BindingCache {
        BindingCache() : first(0), mode(2), firstSlot(0xff), secondSlot(0xff), value(0) {}
        u8 first, mode, firstSlot, secondSlot;
        u32 value;
    };
    /* 0xb0 */ BindingCache first;
    /* 0xb8 */ BindingCache second;
};
typedef char Obj557c28LayoutCheck[
    sizeof(Obj557c28) == 0xc0 && offsetof(Obj557c28, buffers) == 4 &&
    offsetof(Obj557c28, state.activeBuffer) == offsetof(MoriModelCommand, activeBuffer) &&
    offsetof(Obj557c28, state.listA) == offsetof(MoriModelCommand, listA) &&
    offsetof(Obj557c28, first) == sizeof(MoriModelCommand) ? 1 : -1];
#endif
