#include "gfx/StereoParallax.h"
/* NON_MATCHING: world-vector copy formation, projected-coordinate VFP scheduling and stack slots differ. */
#include "map/NpcDummyBindings.h"
#include "shard/TextureDrawCall.h"
#include "shard/S1ListPanel.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include "util/CalleeContracts.h"

namespace {
struct ProjectedNpcMarker {
    u8 active;
    u8 unk01;
    u16 actor;
    u8 unk04[2];
    s16 offsetX;
    s8 offsetY;
    u8 unk09;
};
typedef char ProjectedNpcMarkerLayoutCheck[sizeof(ProjectedNpcMarker) == 10 &&
    offsetof(ProjectedNpcMarker, actor) == 2 &&
    offsetof(ProjectedNpcMarker, offsetX) == 6 &&
    offsetof(ProjectedNpcMarker, offsetY) == 8 ? 1 : -1];
}

struct RenderCtxA;
extern "C" {
extern RenderCtxA *g_renderCtx;
SpriteInfo *FUN_001834a4(u32 group, s32 sprite);
void FUN_002a1850(f32 *screen, s32 display, const ProjectionMatrices *, const f32 *world);
f32 messageGetActiveValue(u32 channel);
void efctSetSpeed(f32 opacity);

void FUN_0046868c(NpcDummyBindings *owner, u32, s32)
{
    // The marker array lies beyond the currently recovered bindings prefix.
    struct MarkerView {
        u8 unk000[0xE46];
        ProjectedNpcMarker markers[4];
    };
    const MarkerView *view = reinterpret_cast<const MarkerView *>(owner);
    SpriteInfo *sprite = FUN_001834a4(8, 0x18D);
    s32 width = sprite->size[0];
    s32 height = sprite->size[1];
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.31f);
    for (u32 index = 0; index < 4; ++index) {
        const ProjectedNpcMarker &marker = view->markers[index];
        if (marker.active) {
            s32 actor = marker.actor - 1;
            if (actor >= 0 && actor < owner->count) {
                NpcDummyControllerLink *link = owner->second[actor];
                if (link != NULL) {
                    MapVector world = link->controller->destination;
                    world.x += (f32)marker.offsetX;
                    world.y += (f32)marker.offsetY;
                    f32 screen[3];
                    FUN_002a1850(screen, 0, reinterpret_cast<const ProjectionMatrices *>(FUN_00152f54()), &world.x);
                    s32 x = (s32)((screen[0] - (f32)width) + (f32)(width / 2) + (f32)parallax);
                    s32 y = (s32)(screen[1] - (f32)height);
                    FUN_001835b4(2, 8, 0x18D, x, y, 2);
                    for (u32 channel = 0; channel < 3; ++channel) {
                        efctSetSpeed(messageGetActiveValue(channel));
                        FUN_001835b4(2, 8, 0x18E + channel, x, y, 6);
                    }
                    efctSetSpeed(1.0f);
                }
            }
        }
    }
}
}
