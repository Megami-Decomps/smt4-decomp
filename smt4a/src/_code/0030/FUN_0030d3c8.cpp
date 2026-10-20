#include "common.h"

extern "C" {

extern u8 DAT_0055ad38; /* base class vtable */
extern u8 DAT_0055a894; /* final vtable */

typedef struct Params {
    void *vtbl;  /* 0x00 */
    u8 flag;     /* 0x04 */
    u8 unk05[3];
    u32 valueA;  /* 0x08 */
    u32 valueB;  /* 0x0c */
    u32 valueC;  /* 0x10 */
    u16 shortA;  /* 0x14 */
    u16 shortB;  /* 0x16 */
} Params;

/* Copy constructor: the base part sets the base vtable, then the final vtable replaces it. */
void FUN_0030d3c8(Params *self, const Params *other)
{
    self->vtbl = &DAT_0055ad38;
    self->flag = other->flag;
    self->valueA = other->valueA;
    self->valueB = other->valueB;
    self->valueC = other->valueC;
    self->shortA = other->shortA;
    self->shortB = other->shortB;
    self->vtbl = &DAT_0055a894;
}

} /* extern "C" */
