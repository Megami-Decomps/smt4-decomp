#ifndef CLASSES_OBJ420F4C_H
#define CLASSES_OBJ420F4C_H

#include "common.h"

extern "C" {
void nn_fnd_UnitHeapBase_Initialize(void *heap, u32 elementSize, void *buffer, u32 bytes, s32 alignment, u32 flags);
void nn_os_CriticalSection_Initialize(void *section);
}

/* A nn::os::CriticalSection (12 bytes) before Initialize() has run. */
struct Obj420f4cLock {
    Obj420f4cLock() : unk00(0), unk04(0), unk08(-1) {}
    u32 unk00;
    u32 unk04;
    s32 unk08;
};

/* A unit heap guarded by a critical section (vtable at 0x420f4c; named after it until its real name
 * is known): all words start cleared. */
class Obj420f4c {
public:
    Obj420f4c()
        : unk04(0), unk08(0), unk0c(0), unk10(0), unk14(0), unk24(0)
    {
    }
    Obj420f4c(u32 elementSize, void *buffer, u32 bytes)
        : unk04(0), unk08(0), unk0c(0), unk10(0), unk14(0), unk24(0)
    {
        nn_fnd_UnitHeapBase_Initialize(this, elementSize, buffer, bytes, 4, 0);
        nn_os_CriticalSection_Initialize(&lock);
    }
    virtual ~Obj420f4c();

    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 unk18[0xc];
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u8 unk28[8];
    /* 0x30 */ Obj420f4cLock lock;
};

typedef char Obj420f4cSizeCheck[sizeof(Obj420f4c) == 0x3c ? 1 : -1];

#endif
