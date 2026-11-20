#include "battle/btlTargetSelect.h"
#include "classes/Obj557d48.h"
#include "code/Code0027.h"
#include "nw/math/MTX33.h"

extern "C" {
extern BtlTargetSelect *g_btlTargetSelect;
u8 itemIsCollectedWithRelated(u32 demonId);
void cameraProjectToScreen(ProjectedPoint *out, s32 display, u32 camera, const nw::math::VEC3 *world);

/* Shows the target marker `index` (of five) at the screen position of `position`, with the
 * demon's registration state and the battle's six display flags. */
void btlTargetSelectSetEntry(s32 index, const nw::math::VEC3 *position, u32 demonId,
                  u8 status0, u8 status1, u8 status2, u8 status3,
                  u8 status4, u8 status5)
{
    BtlTargetSelect *select = g_btlTargetSelect;

    if (index < 5) {
        TargetMarkerEntry *marker = &((Obj557d48 *)select->secondary)->entries[index];

        marker->visible = 1;
        marker->registered = itemIsCollectedWithRelated(demonId);
        marker->status[0] = status0;
        marker->status[1] = status1;
        marker->status[2] = status2;
        marker->status[3] = status3;
        marker->status[4] = status4;
        marker->status[5] = status5;

        u32 camera = obj80Select(0);
        union {
            nw::math::VEC3 world;
            ProjectedPoint projected;
        } point; /* projected in place */

        point.world = *position;
        cameraProjectToScreen(&point.projected, 0, camera, &point.world);
        marker->screen = point.projected.screen;
    }
}

} /* extern "C" */
