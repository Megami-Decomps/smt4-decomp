#include "common.h"
#include <stddef.h>

/* Obj421f18 as its destructor sees it (see classes/Obj421f18.h): the vtable pointer, the parameter
 * holder whose vtable is reset, and the signalling object whose two parts are destroyed. */
struct Obj421f18DestructorView {
    /* 0x000 */ const void *vtable;
    /* 0x004 */ u8 unk004[0xF0];
    /* 0x0F4 */ const void *paramsVtable;
    /* 0x0F8 */ u8 unk0F8[0xA0];
    /* 0x198 */ u8 signal[0x40];       /* destroyed by FUN_00235c60 */
    /* 0x1D8 */ u8 signalChild[0x278]; /* destroyed by FUN_0037ba64 */
};

extern "C" {
extern u8 _ZTV9Obj421f18[];
extern u8 _ZTV9Obj421dd4[];
u8 *FUN_0037ba64(void *child);
u8 *FUN_00235c60(void *signal);

/* The destructor of Obj421f18: destroys the signalling object's child, then the object itself,
 * resets the parameter holder's vtable and returns the object. As in the native destructor chain,
 * each part's destructor returns its own address and the next part is found from it. */
Obj421f18DestructorView *FUN_00380864(Obj421f18DestructorView *self)
{
    self->vtable = _ZTV9Obj421f18 + 8;
    u8 *child = FUN_0037ba64(self->signalChild);
    u8 *signal = FUN_00235c60(child - offsetof(Obj421f18DestructorView, signalChild)
                              + offsetof(Obj421f18DestructorView, signal));
    const void **params = (const void **)(signal - offsetof(Obj421f18DestructorView, signal)
                                          + offsetof(Obj421f18DestructorView, paramsVtable));
    *params = _ZTV9Obj421dd4 + 8;
    return (Obj421f18DestructorView *)((u8 *)params - offsetof(Obj421f18DestructorView, paramsVtable));
}

} /* extern "C" */
