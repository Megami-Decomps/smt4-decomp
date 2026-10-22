#include "common.h"

extern "C" u8 DAT_005c0f3c[];

/* Return the concrete implementation's type descriptor. */
extern "C" const void *_ZNK9Obj42165417getTypeDescriptorEv(void *)
{
    return DAT_005c0f3c;
}
