/* NON_MATCHING: the marker mask uses LDM rather than LDRD, and VFP registers/coordinate scheduling and literal order differ; candidate -O2. */
#include "battle/btlMain.h"
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match7_BattleEffects.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W6_W6Match8_BattleSpritePlacement.h"
#include "shard/JobWork.h"

struct BattleMarkerLookup {
    u8 unk00[0xc];
    s32 id;
};

extern "C" {
extern BattleEffectGlobals g_battleEffectSettings;
extern RenderCtxA *g_renderCtx;
void FUN_0016c4b8(RenderCtxA *context, s32 mode);
BattleMarkerLookup *FUN_001568f8(BtlMainStateA *state, s16 group);
BattleFrameSprite *stateEntryFindById(BtlMainStateA *state, s32 id);
void FUN_0014e314(u32 color0, u32 color1, u32 color2, u32 color3,
    f32 x, f32 y, f32 width, f32 height, f32 depth);
}

static __inline BattleRosterRecordA *battleRosterAt(BtlMainStateA *state, s32 index)
{
    return &state->roster[index];
}

static __inline u64 battleMarkerMask(const BtlMainStateA *state)
{
    return *reinterpret_cast<const u64 *>(state->markerMasks.words);
}

static __inline void battleDrawMarker(f32 x, f32 y, f32 width, f32 height, u32 color)
{
    FUN_0014e314(color, color, color, color, x, y, width, height, 1.0f);
}

extern "C" u32 battleDrawRosterMarkerRects(u32 job)
{
    BtlMainStateA *state = reinterpret_cast<BtlMainStateA *>(jobGetWork(job));
    if (++state->drawCounters.markerTimer >= 30) {
        state->drawCounters.markerTimer -= 30;
    }
    if (g_battleEffectSettings.markerMask & battleMarkerMask(state)) {
        FUN_0016c4b8(g_renderCtx, 0);
        for (s32 group = 0; group < 3; ++group) {
            for (s32 index = 4; index < 54; ++index) {
                BattleRosterRecordA *record = battleRosterAt(state, index);
                if (record == NULL) {
                    continue;
                }
                u32 flags = record->render.flags;
                if ((flags & 1) && (flags & 2) && !(flags & 0x200000) &&
                    (flags & 0x80) && !(flags & 0x4000) && (record->marker.flags & 0x800) &&
                    !(flags & 0x10) && record->marker.group == group) {
                    BattleMarkerLookup *lookup = FUN_001568f8(state, record->render.group);
                    BattleSpriteFrame *frame = stateEntryFindById(state, lookup->id)->frame;
                    f32 scale = record->marker.scale;
                    u32 width = frame->width;
                    u32 height = frame->height;
                    f32 horizontalOffset = static_cast<f32>(static_cast<s32>(frame->anchorX - (frame->left + (width >> 1)))) * scale;
                    f32 verticalOffset = static_cast<f32>(static_cast<s32>(143 - (frame->top + height))) * scale;
                    f32 scaledWidth = static_cast<f32>(width) * scale;
                    f32 scaledHeight = static_cast<f32>(height) * scale;
                    f32 x = record->render.position[0] - horizontalOffset - scaledWidth * 0.5f;
                    f32 y = record->render.position[1] + verticalOffset;
                    battleDrawMarker(x, y, scaledWidth, scaledHeight, 0xff0088);
                }
            }
        }
    }
    return 0;
}
