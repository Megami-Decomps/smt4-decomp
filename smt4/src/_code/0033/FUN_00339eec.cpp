#include "shard/W6_W6Match5_ArmySummon.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {
extern const char DAT_00400a4c[256];
void *__aeabi_memcpy4(void *, const void *, u32);
void FUN_002402c4(ArmySummonState *, char *);

// Build the army-summon model path and retain its model-manager resource.
void FUN_00339eec(ArmySummonState *state)
{
    char path[256];
    __aeabi_memcpy4(path, DAT_00400a4c, sizeof(path));
    FUN_002402c4(state, path);
    state->model = asdMdlManagerCreateSecondList(path, 0x1c0);
}
}
