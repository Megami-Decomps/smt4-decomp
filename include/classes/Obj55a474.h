#ifndef CLASSES_OBJ55A474_H
#define CLASSES_OBJ55A474_H

#include "common.h"

class Obj420794;

/* Base of the filter descriptors (vtable 0x55a474): two unimplemented slots, then five hooks that all default to
 * filterRunDefaultUpdate. */
class Obj55a474 {
public:
    Obj55a474();
    virtual void vfunc08() = 0;
    virtual void vfunc0c() = 0;
    virtual void vfunc10(Obj420794 *filter);
    virtual void vfunc14(Obj420794 *filter);
    virtual void vfunc18(Obj420794 *filter);
    virtual void vfunc1c(Obj420794 *filter);
    virtual void vfunc20(Obj420794 *filter);
    /* 0x04 */ u32 unk04;
};

typedef char Obj55a474SizeCheck[sizeof(Obj55a474) == 8 ? 1 : -1];

#endif
