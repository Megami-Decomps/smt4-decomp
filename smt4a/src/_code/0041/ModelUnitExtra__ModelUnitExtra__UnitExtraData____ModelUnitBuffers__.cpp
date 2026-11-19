#include "Model/ModelUnitBuffers.h"

extern "C" {
extern const u8 _ZTV9Obj557d58[];
void rt_aeabi_memclr(void *memory, u32 size);
}

// Initialize the extra-effect lists, then build the private list of flagged effects.
ModelUnitExtra::ModelUnitExtra(UnitExtraData *data, ModelUnitBuffers *unit)
    : vtable(_ZTV9Obj557d58 + 8), table(data), owner(unit), count(data->count), modelId(0xffffffff)
{
    rt_aeabi_memclr(&filtered, sizeof(filtered));
    rt_aeabi_memclr(&list, sizeof(list));
    FUN_0041a270(this);
}
