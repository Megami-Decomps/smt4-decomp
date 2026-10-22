#include "common.h"

struct ModelSourceOwner {
    u8 unk00[0x28];
    u32 model; // 0x28
};
extern "C" u32 asdMdlManagerCreateFromSource(void *source, u32 type, u32 flags);
extern "C" void FUN_002a0428(u32 model, s32 enabled);

// Create the model from its source and enable the newly created instance.
extern "C" void FUN_002a0400(ModelSourceOwner *owner, void *source, u32 type)
{
    owner->model = asdMdlManagerCreateFromSource(source, type, 7);
    FUN_002a0428(owner->model, 1);
}
