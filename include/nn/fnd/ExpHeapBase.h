#ifndef NN_FND_EXP_HEAP_BASE_H
#define NN_FND_EXP_HEAP_BASE_H

#include "classes/Obj420f70.h"
#include <stddef.h>

namespace nn {
namespace fnd {
/* The expanding heap as nn builds it on the heap interface: its constructor clears the words after the
 * interface's and the destructor finalizes the heap. */
class ExpHeapBase : public Obj420f70 {
public:
    ExpHeapBase() : unk14(0), unk18(0) {}
    virtual ~ExpHeapBase();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void vfunc18();

    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u8 unk1c[0x38];
};

typedef char ExpHeapBaseLayoutCheck[
    sizeof(ExpHeapBase) == 0x54 && offsetof(ExpHeapBase, unk14) == 0x14 ? 1 : -1];
}
}

#endif
