#include "common.h"

extern "C" {

extern u8 g_mwmoCriticalSection;
extern void nn_os_CriticalSection_Enter(void *section);
extern void nn_os_CriticalSection_Leave(void *section);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 value;
} Obj;

/* Reads obj->value under the critical section. */
u32 criticalSectionReadValue38(Obj *obj, u32 *out)
{
    nn_os_CriticalSection_Enter(&g_mwmoCriticalSection);
    *out = obj->value;
    nn_os_CriticalSection_Leave(&g_mwmoCriticalSection);
    return 1;
}

} /* extern "C" */
