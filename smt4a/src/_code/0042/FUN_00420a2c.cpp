/* NON_MATCHING: position snapshot stores use integer loads instead of retail's float/register grouping. */
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
void FUN_00163aa4(void *sprite, f32 delta);
s32 vec2GetXInt(const void *sprite);
s32 vec2GetYInt(const void *sprite);

// Advance the revealed sprites and save their positions as transition origins.
void FUN_00420a2c(void *context)
{
    struct SpritePositionView { u8 unk00[0x20]; f32 depth; u8 unk24[0x68]; };
    struct PositionSnapshot { s32 x, y; f32 depth; };
    struct SpriteSnapshot { PositionSnapshot position; u8 unk0c[0x38]; };
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
    work->snapshots.header.x = x;
    work->snapshots.header.y = y;
    work->snapshots.header.depth = work->sprites.header.depth;
    for (s32 index = 0; index < work->state.spriteCount; ++index) {
        s32 x = vec2GetXInt(&work->sprites.entries[index]);
        s32 y = vec2GetYInt(&work->sprites.entries[index]);
        f32 depth = work->sprites.entries[index].depth;
        work->snapshots.entries[index].position.x = x;
        work->snapshots.entries[index].position.y = y;
        work->snapshots.entries[index].position.depth = depth;
    }
    x = vec2GetXInt(&work->sprites.entries[0]);
    y = vec2GetYInt(&work->sprites.entries[0]);
    work->selected.position.x = x;
    work->selected.position.y = y;
    work->selected.position.depth = work->sprites.entries[0].depth;
}
}
