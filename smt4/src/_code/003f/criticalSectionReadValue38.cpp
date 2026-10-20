#include "common.h"

extern "C" {

extern u8 DAT_004d4674;
extern void nn_os_CriticalSection_Enter(void *section);
extern void nn_os_CriticalSection_Leave(void *section);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 value;
} Obj;

/* Reads obj->value under the critical section. */
u32 criticalSectionReadValue38(Obj *obj, u32 *out)
{
    nn_os_CriticalSection_Enter(&DAT_004d4674);
    *out = obj->value;
    nn_os_CriticalSection_Leave(&DAT_004d4674);
    return 1;
}

} /* extern "C" */
