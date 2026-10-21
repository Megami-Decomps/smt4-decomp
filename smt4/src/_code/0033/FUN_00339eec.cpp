#include "shard/W6_W6Match5_ArmySummon.h"

extern "C" {
extern const char DAT_00400a4c[256];
void *rt_memcpy_w(void *, const void *, u32);
void FUN_002402c4(ArmySummonState *, char *);
AsdMdlObject *asdMdlManagerCreateSecondList(const char *, u32);

// Build the army-summon model path and retain its model-manager resource.
void FUN_00339eec(ArmySummonState *state)
{
    char path[256];
    rt_memcpy_w(path, DAT_00400a4c, sizeof(path));
    FUN_002402c4(state, path);
    state->model = asdMdlManagerCreateSecondList(path, 0x1c0);
}
}
