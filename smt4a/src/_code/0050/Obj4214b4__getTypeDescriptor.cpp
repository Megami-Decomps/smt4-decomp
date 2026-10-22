#include "common.h"

extern "C" const u32 DAT_005c0f28[];

/* Return the implementation's static descriptor. */
extern "C" const u32 *_ZNK9Obj4214b417getTypeDescriptorEv(void *)
{
    return DAT_005c0f28;
}
