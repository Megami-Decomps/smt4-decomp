#include "shard/Shard0051.h"

extern "C" {

typedef struct Obj38 {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 unk38;
} Obj38;

extern u8 g_mwmoCriticalSection;
extern void nn_os_CriticalSection_Enter(u8 *section);
extern void nn_os_CriticalSection_Leave(u8 *section);

u32 criticalSectionReadValue38(Obj38 *obj, u32 *out)
{
    nn_os_CriticalSection_Enter(&g_mwmoCriticalSection);
    *out = obj->unk38;
    nn_os_CriticalSection_Leave(&g_mwmoCriticalSection);
    return 1;
}

} /* extern "C" */
