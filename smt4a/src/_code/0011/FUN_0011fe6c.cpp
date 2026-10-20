/* NON_MATCHING: the vtable address and the zero constant land in r2/r1 where retail uses r1/r2. */
#include "common.h"

extern "C" {

extern u8 DAT_0055aca0;
extern u8 DAT_0055adc0;

/* Object with a vtable pointer, a flag byte and an embedded member at 8 (its constructor returns the member address). */
typedef struct {
    const void *vtbl;   /* 0x00 */
    u8 flag;            /* 0x04 */
    u8 unk05[3];
    u8 member[1];       /* 0x08 */
} Derived;

u8 *_ZN9Obj55aff4C1Ev(u8 *member);

/* Constructs the object: base vtable, flag cleared, member constructed, then the final vtable installed; returns the object. */
Derived *FUN_0011fe6c(Derived *self)
{
    self->vtbl = &DAT_0055adc0;
    self->flag = 0;
    self = (Derived *)(_ZN9Obj55aff4C1Ev(self->member) - 8);
    self->vtbl = &DAT_0055aca0;
    return self;
}

} /* extern "C" */
