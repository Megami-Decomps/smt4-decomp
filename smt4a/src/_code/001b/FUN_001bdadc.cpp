/* NON_MATCHING: armcc materializes the bank's +0x28 effect-array base separately; retail keeps the original base and uses +0x28 field displacements. */
#include "common.h"

struct ReverbEffect {
    u16 flags; // 0x00
    u16 amount; // 0x02
    u16 unk04;
    u16 feedback; // 0x06
    u32 unk08;
    u32 unk0c;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u16 unk1c;
    u16 unk1e;
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u16 unk26;
    u16 unk28;
    u16 unk2a;
    u16 unk2c;
    u16 unk2e;
    u16 unk30;
    u16 unk32;
};
struct ReverbEffectBank {
    u8 unk00[0x28];
    ReverbEffect effects[1]; // 0x28
};
extern "C" u8 g_dspsndState[];
extern "C" void nn_snd_CTR_Dspsnd_SetDspReverbEffect(void *state, u32 index, const ReverbEffect *effect);

// Merge the fields selected by the reverb-effect update flags.
extern "C" void FUN_001bdadc(ReverbEffectBank *bank, u32 index, const ReverbEffect *update)
{
    ReverbEffect *effect = &bank->effects[index];
    if (update->flags & 1)
        effect->amount = update->amount;
    if (update->flags & 4) {
        effect->feedback = update->feedback;
        effect->unk1c = update->unk1c;
        effect->unk1e = update->unk1e;
        effect->unk20 = update->unk20;
        effect->unk22 = update->unk22;
        effect->unk24 = update->unk24;
        effect->unk26 = update->unk26;
        effect->unk28 = update->unk28;
        effect->unk2a = update->unk2a;
        effect->unk2c = update->unk2c;
        effect->unk2e = update->unk2e;
        effect->unk30 = update->unk30;
        effect->unk32 = update->unk32;
    }
    if (update->flags & 2) {
        effect->unk08 = update->unk08;
        effect->unk0c = update->unk0c;
        effect->unk10 = update->unk10;
        effect->unk14 = update->unk14;
        effect->unk18 = update->unk18;
    }
    nn_snd_CTR_Dspsnd_SetDspReverbEffect(g_dspsndState, index, update);
}
