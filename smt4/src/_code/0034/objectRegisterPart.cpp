#include "common.h"

extern "C" {

typedef struct Object003472c8 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 part[1];      /* embedded part registered with __aeabi_vec_ctor_nocookie_nodtor */
} Object003472c8;

typedef void Callback003472c8(void);

Object003472c8 *_ZN9Obj421f54C1Ev(void);
u8 *__aeabi_vec_ctor_nocookie_nodtor(u8 *part, Callback003472c8 *callback, s32 count, s32 alignment);

/* Registers the object's embedded part with a callback and returns the object. The callback at 0x376968 has no symbol; retail embeds its address. */
Object003472c8 *objectRegisterPart(void)
{
    Object003472c8 *object = _ZN9Obj421f54C1Ev();
    u8 *part = __aeabi_vec_ctor_nocookie_nodtor(object->part, (Callback003472c8 *)0x376968, 4, 4);

    return (Object003472c8 *)(part - 0x20);
}

} /* extern "C" */
