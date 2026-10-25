#include "common.h"
#include "shard/TextureDrawCall.h"
#include "ui/PartyPanel.h"

extern "C" {
u32 dataTable24Sub0GetRecordS90X(u32);
const u16 *dataTable24Sub0GetRecordS90(u32);
s32 FUN_002240b4(u32);
void FUN_002bf380(s32, s32, s32, s32, s32, s32);
void efctSetSpeed(f32);
f32 vec2GetSpeed(const void *object);
void FUN_002be5a4(s32, u32, const u16 *, f32, f32, f32, f32, f32);

// Draw a highlighted or ordinary entry label with its availability indicator.
void FUN_001af670(void *owner, u32 entryId, s32 x, s32 y, s32 highlighted, f32 speed)
{
    struct LabelOwnerView { u8 prefix[0x13C]; PartyMember effect; };
    struct LabelOffset { u8 prefix[8]; s16 x, y; };
    extern const LabelOffset *FUN_002bf4f8(u32, u32);
    u32 record = dataTable24Sub0GetRecordS90X(entryId);
    u32 color;
    if (highlighted != 0) {
        FUN_002bf380(2, 36, 16, x, y, 101);
        FUN_002bf288(2, 36, 0x95, x, y, 106);
        if (FUN_002240b4(record)) {
            efctSetSpeed(vec2GetSpeed(&static_cast<LabelOwnerView *>(owner)->effect));
            FUN_002bf288(2, 36, 0x97, x, y, 109);
            efctSetSpeed(speed);
            FUN_002bf288(2, 36, 0x91, x, y, 111);
        } else {
            efctSetSpeed(vec2GetSpeed(&static_cast<LabelOwnerView *>(owner)->effect));
            FUN_002bf288(2, 36, 0x96, x, y, 111);
            efctSetSpeed(speed);
        }
        color = 0xFFFFFFFF;
    } else {
        FUN_002bf380(2, 36, 15, x, y, 101);
        FUN_002bf288(2, 36, 0x90, x, y, 106);
        if (FUN_002240b4(record))
            FUN_002bf288(2, 36, 0x91, x, y, 111);
        color = 0xFF;
    }
    const u16 *text = dataTable24Sub0GetRecordS90(entryId);
    const LabelOffset *offset = FUN_002bf4f8(36, 0xA4);
    FUN_002be5a4(2, color, text, (f32)(offset->x + x), (f32)(offset->y + y), 0.55f, 0.0f, speed);
}
}
