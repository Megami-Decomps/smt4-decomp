#ifndef CLASSES_OBJ55840C_H
#define CLASSES_OBJ55840C_H

#include "nn/fnd/ExpHeapBase.h"
#include "nn/os/CriticalSection.h"

/* The shared heap storage includes a deferred lock, immediately after the heap state word. */
class LockedExpHeapBase : public nn::fnd::ExpHeapBase {
protected:
    LockedExpHeapBase() : heapState(0), lock(nn::os::CRITICAL_SECTION_DEFERRED) {}
    virtual ~LockedExpHeapBase() = 0;

    /* 0x54 */ u32 heapState;
    /* 0x58 */ nn::os::CriticalSection lock;
};

class Obj55840c : public LockedExpHeapBase {
public:
    Obj55840c() {}
    virtual ~Obj55840c();
};

typedef char LockedExpHeapSizeCheck[sizeof(Obj55840c) == 0x64 ? 1 : -1];

#endif
