/* NON_MATCHING: rewritten from the retail flow; node field scheduling and the VFP register numbering of the fade interpolation differ (retail converts the elapsed count into a separate s4). */
#include "classes/Obj421aa4Requests.h"
#include "classes/SoundVoiceOwner.h"

// Sends the voice's changed parameters: after updating them, queues a type-0x2d request for each of
// the four fades whose bit is set in the changed mask, carrying the fade's current value.
extern "C" void FUN_00379e18(SoundVoiceOwner *owner)
{
    owner->Obj421aa4::updateParameters();
    Obj421aa4Manager *manager = FUN_002baed8();
    u32 mask = owner->changedMask;
    for (u32 i = 0; i < 4; i++) {
        if ((mask & 1) != 0) {
            Obj421aa4NodeWide *node = (Obj421aa4NodeWide *)soundRequestBegin(manager, 7);
            node->type = 0x2d;
            node->id = (u32)&owner->params;
            node->word = 1 << i;
            SoundVoiceFade *fade = &owner->fades[i];
            f32 value;
            s32 elapsed = fade->elapsed;
            s32 duration = fade->duration;
            if (elapsed >= duration) {
                value = fade->target;
            } else {
                value = (fade->target - fade->start) * (f32)elapsed / (f32)duration + fade->start;
            }
            node->word2 = *(u32 *)&value;
            listAppendNode(manager, node);
        }
        mask >>= 1;
    }
}
