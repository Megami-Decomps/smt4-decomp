/* NON_MATCHING: 114 vs 111 rows (88 diff lines): signed loops, MapVector screen, halfWidth and s8 active improve offset and loop form; retail spills table/sprite constants (8 and 0x18D) into a 76-byte frame and schedules world copy/VFP differently. */
#include "gfx/StereoParallax.h"
#include "camp/RenderCtxA.h"
#include "map/NpcDummyBindings.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include "code/Code0015.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

namespace {
struct ProjectedNpcMarker {
    s8 active;
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
void cameraProjectToScreen(f32 *screen, s32 display, const ProjectionMatrices *, const f32 *world);
f32 messageGetActiveValue(u32 channel);
void efctSetSpeed(f32 opacity);

void FUN_0046868c(NpcDummyBindings *owner, u32, s32)
{
    /* The marker array lies beyond the currently recovered bindings prefix. */
    struct MarkerView {
        u8 unk000[0xE46];
        ProjectedNpcMarker markers[4];
    };
    const MarkerView *view = (const MarkerView *)owner;
    TextureTableEntryIV *sprite = asdTMTexTableEntryAt(8, 0x18D);
    s32 width = sprite->placement->width;
    s32 height = sprite->placement->height;
    s32 halfWidth = width / 2;
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.31f);
    for (s32 index = 0; index < 4; ++index) {
        const ProjectedNpcMarker &marker = view->markers[index];
        if (marker.active) {
            s32 actor = marker.actor - 1;
            if (actor >= 0 && actor < owner->count) {
                NpcDummyControllerLink *link = owner->second[actor];
                if (link != NULL) {
                    MapVector world = link->controller->position;
                    world.x += (f32)marker.offsetX;
                    world.y += (f32)marker.offsetY;
                    MapVector screen;
                    cameraProjectToScreen(&screen.x, 0, (const ProjectionMatrices *)asdCameraGetSavedRenderPairs(), &world.x);
                    s32 x = (s32)((screen.x - (f32)width) + (f32)halfWidth + (f32)parallax);
                    s32 y = (s32)(screen.y - (f32)height);
                    texDrawTableEntryAtStoredOrigin(2, 8, 0x18D, x, y, 2);
                    for (s32 channel = 0; channel < 3; ++channel) {
                        efctSetSpeed(messageGetActiveValue(channel));
                        texDrawTableEntryAtStoredOrigin(2, 8, 0x18E + channel, x, y, 6);
                    }
                    efctSetSpeed(1.0f);
                }
            }
        }
    }
}
} /* extern "C" */
