/* NON_MATCHING: scoped-lock and reference-query register allocation has not been matched. */
#include "classes/Obj558c90.h"
#include "classes/Obj55b28c.h"

/* Only the queried reference operation is recovered. */
class Obj558c90Reference {
public:
    virtual void vfunc00();
    virtual void vfunc04();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void vfunc18();
    virtual void vfunc1c();
    virtual void vfunc20();
    virtual void vfunc24();
    virtual void vfunc28();
    virtual s32 vfunc2c();
};
extern "C" {
void *onlineContextGetInstance();
Obj558c90Reference *FUN_0030f044(Obj558c90 *object, u32 kind);
}

s32 Obj558c90::vfunc14(u32, u32, u32)
{
    Obj55b28c lock((u8 *)onlineContextGetInstance() + 0x58);
    if (reference != NULL) {
        Obj558c90Reference *target = FUN_0030f044(this, 0xB);
        return target != NULL && target->vfunc2c() != 0;
    }
    return 0;
}
