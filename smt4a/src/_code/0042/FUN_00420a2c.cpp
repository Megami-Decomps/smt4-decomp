#include "util/Vec2Fixed.h"
/* NON_MATCHING: native depth getter and grouped snapshots now agree; owner/index saved registers and header destination base still differ. */
#include "shard/W9_W9Match8_WorkRecords.h"
#include "shard/TextureDrawCall.h"

struct SpritePositionView { u8 unk00[0x20]; f32 depth; u8 unk24[0x68]; };
struct PositionSnapshot { s32 x, y; f32 depth; };
struct SpriteSnapshot { PositionSnapshot position; u8 unk0c[0x38]; };

extern "C" {
void FUN_00163aa4(void *sprite, f32 delta);
s32 vec2GetYInt(const void *sprite);
f32 vec2GetSpeed(const void *sprite);

// Advance the revealed sprites and save their positions as transition origins.
void FUN_00420a2c(void *context)
{
    union CaptureView {
        SaveLoadTransitionPrefixA state;
        struct {
            u8 unk000[0x474];
            SpritePositionView header;
            SpritePositionView entries[1];
        } sprites;
        struct {
            u8 unk000[0x624];
            PositionSnapshot header;
            u8 unk630[0x34];
            SpriteSnapshot entries[1];
        } snapshots;
        struct {
            u8 unk000[0x710];
            PositionSnapshot position;
        } selected;
    };
    // Local overlapping views avoid growing the shared prefix or changing sprite alignment.
    CaptureView *work = static_cast<CaptureView *>(context);
    FUN_00163aa4(&work->sprites.header, 1.0f);
    for (s32 index = 0; index < work->state.spriteCount; ++index) {
        if (static_cast<s32>(work->state.transitionCounter) < index) {
            ++work->state.transitionCounter;
            break;
        }
        FUN_00163aa4(&work->sprites.entries[index], 1.0f);
    }
    s32 x = vec2GetXInt(&work->sprites.header);
    s32 y = vec2GetYInt(&work->sprites.header);
    f32 depth = vec2GetSpeed(&work->sprites.header);
    PositionSnapshot *header = &work->snapshots.header;
    header->x = x;
    header->y = y;
    header->depth = depth;
    for (s32 index = 0; index < work->state.spriteCount; ++index) {
        s32 x = vec2GetXInt(&work->sprites.entries[index]);
        s32 y = vec2GetYInt(&work->sprites.entries[index]);
        f32 depth = vec2GetSpeed(&work->sprites.entries[index]);
        PositionSnapshot *snapshot = &work->snapshots.entries[index].position;
        snapshot->x = x;
        snapshot->y = y;
        snapshot->depth = depth;
    }
    x = vec2GetXInt(&work->sprites.entries[0]);
    y = vec2GetYInt(&work->sprites.entries[0]);
    depth = vec2GetSpeed(&work->sprites.entries[0]);
    PositionSnapshot *selected = &work->selected.position;
    selected->x = x;
    selected->y = y;
    selected->depth = depth;
}
}
