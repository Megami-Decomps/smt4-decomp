#include "AsdSDK/Source/Gfx/Effect/EffectBehaviorBlock.h"

extern "C" {

/* One behavior type's table entry: the per-frame update callback comes first. */
struct EffectBehaviorRunEntry {
    void (*run)(EffectBehaviorBlock *block);
    u8 unk04[0x10];
};

/* One behavior element (0x28 bytes); only its marker is touched here. */
struct EffectBehaviorElement {
    u8 unk00[0x10];
    s32 marker;
    u8 unk14[0x14];
};

extern EffectBehaviorRunEntry DAT_00473590[];

/* Runs one frame of a behavior block; on its first frame every element's marker is reset. */
void effBehaviorRun(EffectBehaviorBlock *block)
{
    if (block->state == 0) {
        u32 count = block->elementCount;
        EffectBehaviorElement *elements = static_cast<EffectBehaviorElement *>(block->elements);
        for (u32 i = 0; i < count; i++) {
            elements[i].marker = -1;
        }
    }
    DAT_00473590[block->type].run(block);
    block->state++;
}

}
