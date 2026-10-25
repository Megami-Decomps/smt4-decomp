#include "AsdSDK/EffectPolyTexPivot.h"
extern "C" {
EffectPolyTexPivot* effPolyTexPivotCreate(u32);
u32 FUN_00268fc4(u32);
void __aeabi_memcpy4(void*, const void*, u32);
void handleBlockRefDrop(u32);
u32 handleBlockRefCreate(u32);
void handleBlockUnref(u32);
u32 handleRefIncrement(u32);

// Copies pivot parameters and retains the source's resource references.
EffectPolyTexPivot* effectCloneTexturePivot(const EffectPolyTexPivot* source)
{
    EffectPolyTexPivot* copy = effPolyTexPivotCreate(0);
    copy->unk13C = FUN_00268fc4(source->unk13C);
    __aeabi_memcpy4(copy->parameters, source->parameters, sizeof(copy->parameters));
    if (source->blockReference != 0) {
        if (copy->blockReference != 0) {
            handleBlockRefDrop(copy->blockReference);
        }
        copy->blockReference = handleBlockRefCreate(source->blockReference);
    } else if (source->sharedHandle != 0) {
        if (copy->sharedHandle != 0) {
            handleBlockUnref(copy->sharedHandle);
        }
        copy->sharedHandle = handleRefIncrement(source->sharedHandle);
    }
    return copy;
}
}
