/* NON_MATCHING: the handle is loaded before the object pointer is copied, and the virtual slot is fetched through r2 in retail; the built code differs in register use only */
/* Releases the object's handle once (virtual slot 7), then destroys it (virtual slot 8, a tail call). */
#include "common.h"

class Obj004d9430 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void releaseHandle();
    virtual void destroy();

    u32 unk04[3];
    u32 handle;
};

extern "C" void FUN_004d9430(Obj004d9430 *obj)
{
    if (obj->handle != 0) {
        obj->releaseHandle();
        obj->handle = 0;
    }
    obj->destroy();
}
