#include "common.h"

extern "C" {

typedef struct Object0041306c {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 part[1];      /* embedded part registered with __aeabi_vec_ctor_nocookie_nodtor */
} Object0041306c;

typedef void Callback0041306c(void);

Object0041306c *FUN_00467040(void);
u8 *__aeabi_vec_ctor_nocookie_nodtor(u8 *part, Callback0041306c *callback, s32 count, s32 alignment);

/* Registers the object's embedded part with a callback and returns the object. The callback at 0x45b824 has no symbol; retail embeds its address. */
Object0041306c *objectRegisterPart(void)
{
    Object0041306c *object = FUN_00467040();
    u8 *part = __aeabi_vec_ctor_nocookie_nodtor(object->part, (Callback0041306c *)0x45b824, 4, 4);

    return (Object0041306c *)(part - 0x20);
}

} /* extern "C" */
