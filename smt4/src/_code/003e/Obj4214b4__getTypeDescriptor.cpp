#include "common.h"

extern "C" u8 DAT_00472210[];

/* Return the concrete implementation's type descriptor. */
extern "C" const void *_ZNK9Obj4214b417getTypeDescriptorEv(void *)
{
    return DAT_00472210;
}
