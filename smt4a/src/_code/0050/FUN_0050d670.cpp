#include "common.h"

class Primary {
public:
    virtual void vfunc00();
    virtual void vfunc04();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
};

/* Thunk for the secondary base 0x50 bytes into the object: adjusts the pointer back and calls the
 * primary vtable's slot 5. */
extern "C" void FUN_0050d670(u8 *secondary)
{
    reinterpret_cast<Primary *>(secondary - 0x50)->vfunc14();
}
