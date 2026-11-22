#include <stdio.h>
#include "battle/btlTargetSelect.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryA.h"
#include "classes/Obj557bd8.h"
#include "gamedata/NkmEnemyLookup.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_VariantF.h"
#include "addon/LookupRecord.h"
#include "code/Code0027.h"
#include "code/Code002a_Smt4a.h"
#include "shard/Shard0035.h"
#include "nw/math/MTX33.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* The battle sprite table and the target panel's entries in it. */
enum {
    TARGET_PANEL_TABLE = 12,
    TARGET_PANEL_LEVEL = 70,            /* where a level of up to two digits is drawn */
    TARGET_PANEL_RACE_AREA = 71,        /* the area the race name is centred in */
    TARGET_PANEL_LEVEL_3_DIGITS = 162
};

/* The information panel the target selection owns. */
static __inline Obj557bd8 *targetInfoPanel(BtlTargetSelect *select)
{
    return (Obj557bd8 *)select->primary;
}

extern "C" {
extern BtlTargetSelect *g_btlTargetSelect;
u8 itemIsCollectedWithRelated(u32 demonId);
void cameraProjectToScreen(ProjectedPoint *out, s32 display, u32 camera, const nw::math::VEC3 *world);

/* Fills the target information panel for the demon `demonId` standing at `position`: its name, race, level
 * (scaled by the progress grade once the story has advanced), resistance kinds (the battle entry's when there is
 * one, else the enemy record's) and the battle's six display flags, then places the panel left or right of the
 * target's screen position. */
void btlTargetSelectSetInfoPanel(const nw::math::VEC3 *position, u16 demonId, u32 option0, u32 option1, u8 option2, u8 option3,
                  u8 option4, u8 option5, const BtlCombatantEntryA *entry)
{
    BtlTargetSelect *select = g_btlTargetSelect;
    const NkmEnemyRecordA *record = nkmEnemyFindById(demonId);

    sprintf(targetInfoPanel(select)->name, "%s", (const char *)dataTable01GetRecordWithAocOverride(demonId));
    sprintf(targetInfoPanel(select)->raceName, "%s", demonGetRaceLabel(demonId, 0));
    targetInfoPanel(select)->registered = itemIsCollectedWithRelated(demonId);
    targetInfoPanel(select)->level = record->level & 0x7FFF;
    if (gameProgressIsAdvanced() != 0) {
        f32 grade = (f32)(s32)gameDataGetTableValue();
        if (grade < 0.0f) {
            grade = 0.0f;
        } else if (grade > 9.0f) {
            grade = 9.0f;
        }
        targetInfoPanel(select)->level =
            (s32)((f32)(record->level & 0x7FFF) * (grade * 0.55f + 1.0f) + grade * grade * 5.0f);
        targetInfoPanel(select)->level = targetInfoPanel(select)->level < 999 ? targetInfoPanel(select)->level : 999;
    }

    TextureTableEntryIV *raceArea = asdTMTexTableEntryAt(TARGET_PANEL_TABLE, TARGET_PANEL_RACE_AREA);
    s32 raceWidth = fontMeasureLineAdvance(targetInfoPanel(select)->raceName, 1);
    targetInfoPanel(select)->iconPos[1][0] = (f32)(raceArea->x + (raceArea->placement->width - raceWidth) / 2);
    targetInfoPanel(select)->iconPos[1][1] = (f32)raceArea->y;

    if (targetInfoPanel(select)->level > 99) {
        targetInfoPanel(select)->levelDigits = 3;
        TextureTableEntryIV *levelAt = asdTMTexTableEntryAt(TARGET_PANEL_TABLE, TARGET_PANEL_LEVEL_3_DIGITS);
        targetInfoPanel(select)->iconPos[0][0] = (f32)levelAt->x;
        targetInfoPanel(select)->iconPos[0][1] = (f32)levelAt->y;
    } else {
        targetInfoPanel(select)->levelDigits = 2;
        TextureTableEntryIV *levelAt = asdTMTexTableEntryAt(TARGET_PANEL_TABLE, TARGET_PANEL_LEVEL);
        targetInfoPanel(select)->iconPos[0][0] = (f32)levelAt->x;
        targetInfoPanel(select)->iconPos[0][1] = (f32)levelAt->y;
    }

    targetInfoPanel(select)->unseen = 0;
    if (compendiumEntryIsRegistered(demonId) == 0 && (record->flags & 4) != 0) {
        targetInfoPanel(select)->unseen = 1;
    }

    if (entry != NULL) {
        targetInfoPanel(select)->resistances[0] = entry->data.values[0] >> 10;
        targetInfoPanel(select)->resistances[1] = entry->data.values[1] >> 10;
        targetInfoPanel(select)->resistances[2] = entry->data.values[2] >> 10;
        targetInfoPanel(select)->resistances[3] = entry->data.values[3] >> 10;
        targetInfoPanel(select)->resistances[4] = entry->data.values[4] >> 10;
        targetInfoPanel(select)->resistances[5] = entry->data.values[5] >> 10;
        targetInfoPanel(select)->resistances[6] = entry->data.values[6] >> 10;
        targetInfoPanel(select)->resistances[7] = entry->data.values[7] >> 10;
    } else {
        targetInfoPanel(select)->resistances[0] = record->resistances[0] >> 10;
        targetInfoPanel(select)->resistances[1] = record->resistances[1] >> 10;
        targetInfoPanel(select)->resistances[2] = record->resistances[2] >> 10;
        targetInfoPanel(select)->resistances[3] = record->resistances[3] >> 10;
        targetInfoPanel(select)->resistances[4] = record->resistances[4] >> 10;
        targetInfoPanel(select)->resistances[5] = record->resistances[5] >> 10;
        targetInfoPanel(select)->resistances[6] = record->resistances[6] >> 10;
        targetInfoPanel(select)->resistances[7] = record->resistances[7] >> 10;
    }
    targetInfoPanel(select)->options[0] = option0;
    targetInfoPanel(select)->options[1] = option1;
    targetInfoPanel(select)->options[2] = option2;
    targetInfoPanel(select)->options[3] = option3;
    targetInfoPanel(select)->options[4] = option4;
    targetInfoPanel(select)->options[5] = option5;

    Obj557bd8 *panel = targetInfoPanel(select);
    panel->position[0] = position->x;
    panel->position[1] = position->y;
    panel->position[2] = position->z;
    ProjectedPoint projected;
    cameraProjectToScreen(&projected, 0, obj80Select(0), (const nw::math::VEC3 *)panel->position);
    panel->screen = projected.screen;

    s32 middle = 210;
    BtlMainStateA *battle = btlGetMainState();
    if (battle != NULL && battle->encounterSelection.id == 364) {
        middle = 200;
    }
    if (panel->screen.x > (f32)middle) {
        panel->side = 0;
        panel->offset = panel->screen.x - panel->frameSize[1][0];
    } else {
        panel->side = 1;
        panel->offset = panel->frameSize[0][0] + panel->barWidth - panel->screen.x;
    }
}

} /* extern "C" */
