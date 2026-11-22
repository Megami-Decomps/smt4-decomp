#include <stdio.h>
#include "battle/btlTargetSelect.h"
#include "classes/Obj420780.h"
#include "gamedata/NkmEnemyLookup.h"
#include "gamedata/GameDataAccess_VariantF.h"
#include "addon/LookupRecord.h"
#include "code/Code0027.h"
#include "nw/math/MTX33.h"

/* The information panel the target selection owns. */
static __inline Obj420780 *targetInfoPanel(BtlTargetSelect *select)
{
    return (Obj420780 *)select->primary;
}

extern "C" {
extern BtlTargetSelect *g_btlTargetSelect;
u8 itemIsCollectedWithRelated(u32 demonId);
void cameraProjectToScreen(ProjectedPoint *out, s32 display, u32 camera, const nw::math::VEC3 *world);

/* Fills the target information panel for the demon `demonId` standing at `position`: its name, race, level,
 * resistance kinds and the battle's six display flags, then places the panel left or right of the target's
 * screen position. */
void btlTargetSelectSetInfoPanel(const nw::math::VEC3 *position, u16 demonId, u32 option0, u32 option1, u8 option2,
                                 u8 option3, u8 option4, u8 option5)
{
    BtlTargetSelect *select = g_btlTargetSelect;
    const NkmEnemyRecord *record = nkmEnemyFindById(demonId);

    sprintf(targetInfoPanel(select)->name, "%s", (const char *)dataTable01FindByIdWithAoc(demonId));
    sprintf(targetInfoPanel(select)->raceName, "%s", demonGetRaceLabel(demonId, 0));
    targetInfoPanel(select)->registered = itemIsCollectedWithRelated(demonId);
    targetInfoPanel(select)->level = record->level;
    targetInfoPanel(select)->resistances[0] = record->resistances[0] >> 10;
    targetInfoPanel(select)->resistances[1] = record->resistances[1] >> 10;
    targetInfoPanel(select)->resistances[2] = record->resistances[2] >> 10;
    targetInfoPanel(select)->resistances[3] = record->resistances[3] >> 10;
    targetInfoPanel(select)->resistances[4] = record->resistances[4] >> 10;
    targetInfoPanel(select)->resistances[5] = record->resistances[5] >> 10;
    targetInfoPanel(select)->resistances[6] = record->resistances[6] >> 10;
    targetInfoPanel(select)->resistances[7] = record->resistances[7] >> 10;
    targetInfoPanel(select)->options[0] = option0;
    targetInfoPanel(select)->options[1] = option1;
    targetInfoPanel(select)->options[2] = option2;
    targetInfoPanel(select)->options[3] = option3;
    targetInfoPanel(select)->options[4] = option4;
    targetInfoPanel(select)->options[5] = option5;

    Obj420780 *panel = targetInfoPanel(select);
    panel->position[0] = position->x;
    panel->position[1] = position->y;
    panel->position[2] = position->z;
    ProjectedPoint projected;
    cameraProjectToScreen(&projected, 0, obj80Select(0), (const nw::math::VEC3 *)panel->position);
    ScreenPointF screen = projected.screen;
    panel->screen = screen;

    if (screen.x > 210.0f) {
        panel->side = 0;
        panel->offset = screen.x - panel->anchors[1].x;
    } else {
        panel->side = 1;
        panel->offset = panel->anchors[0].x + panel->scale - screen.x;
    }
}

} /* extern "C" */
