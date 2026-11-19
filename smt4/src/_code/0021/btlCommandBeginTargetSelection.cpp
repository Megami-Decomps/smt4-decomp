/* NON_MATCHING: 36 rows, frame layout and scheduling only. Retail keeps the outer `kind` at sp+20 and the
 * inlined previews' unread `kind` copies at sp+40/28/32 (built: 24, 40/36/20), stores the outer and the
 * item-skill preview's `kind` before the argument moves, and loads the user index after the result
 * address in the item-skill preview's loop. Writing the two plain-item previews as inline functions too (the item forms
 * of btlCommandResolveSelectedTarget) gives retail's whole frame layout and store order, but then the
 * cursor panel's btlItemComputeValues arguments and the first preview's fallback registers differ
 * (79 raw / 41 shape), so they are written in place. */
#include <string.h>
#include "shard/PlayScene.h"
#include "code/Code0026.h"
#include "code/Code0029_Smt4.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/ConsumableRecord.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/GameDataAccess_VariantH_Shard0031.h"
#include "camp/CampMenuEntry.h"
#include "quest_center/qcMain.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {
void btlCommandMenuResolveLayout(PlayScene *scene, u16 *kind, s16 *id);
u32 btlCommandResolveSelectedTarget(PlayScene *scene);
void playSceneSetState(PlayScene *scene, s32 state, s32 flag);
u32 btlClassifySkillUse(s32 unit, u32 skillId);
u32 FUN_0025043c(s32 side, u32 actionId);
}

/* The target cursor, as the flagged list entry it is driven as. */
static __inline FlaggedEntry *targetSelector(PlayScene *scene)
{
    return reinterpret_cast<FlaggedEntry *>(&scene->targeting.selector);
}

enum {
    SCENE_STATE_TARGET_GROUP = 0x23,
    SCENE_STATE_TARGET_SELF = 0x24
};

/* Previews the selected skill on the player and every active demon. */
static __inline void previewSkillOnParty(PlayScene *scene)
{
    u16 kind = 0;
    s16 skill = 0;
    btlCommandMenuResolveLayout(scene, &kind, &skill);
    FUN_002621b4(scene->unk305C - 1, -1, skill, &scene->party.hpDeltas[0]);
    for (s32 i = 1; i < 4; i++) {
        FUN_002621b4(scene->unk305C - 1, gameGetSlotTable()->active[i - 1], skill, &scene->party.hpDeltas[i]);
    }
    const SkillDataRecord *record = skillDataFindById(skill);
    if ((record->rankInfo.rankFlags & 0x600) != 0 && scene->unk305C < 4 && scene->targeting.fallback < 0) {
        scene->party.hpDeltas[scene->unk305C] = scene->targeting.fallback;
    }
}

extern "C" {

// Enter the battle command's target selection: preview the skill or item on the party panels and
// disable the panels it cannot be used on.
void btlCommandBeginTargetSelection(PlayScene *scene)
{
    flaggedEntrySetValueB(targetSelector(scene), 0);
    scene->unk3064 = -1;
    playSceneSetState(scene, 0x22, 1);
    buttonHelpSetPreset(0x38);

    s16 kind = 0; /* signed here: retail tests it with ldrsh (the callee stores a u16) */
    s16 id = 0;
    btlCommandMenuResolveLayout(scene, reinterpret_cast<u16 *>(&kind), &id);
    memset(scene->party.targetEnabled, 1, sizeof(scene->party.targetEnabled));
    for (s32 i = 0; i < 4; i++) {
        scene->party.hpDeltas[i] = 0;
    }

    if (kind == 2 || kind == 3) {
        const SkillDataRecord *skill = skillDataFindById(id);
        if (skill->effectProperties.targeting == 3) {
            scene->state = SCENE_STATE_TARGET_GROUP;
            previewSkillOnParty(scene);
        } else {
            btlCommandResolveSelectedTarget(scene);
        }
        if (skill->effectProperties.targeting == 4) {
            scene->state = SCENE_STATE_TARGET_SELF;
            flaggedEntrySetValueB(targetSelector(scene), scene->unk305C);
        }
        if (btlClassifySkillUse(-1, id) != 0) {
            scene->party.targetEnabled[0] = 0;
        }
        for (s32 i = 0; i < 3; i++) {
            if (gameGetSlotTable()->active[i] < 0 || btlClassifySkillUse(i, id) != 0) {
                scene->party.targetEnabled[i + 1] = 0;
            }
        }
        if ((skill->rankInfo.rankFlags & 0x200) != 0) {
            scene->party.targetEnabled[scene->unk305C] = 0;
        }
        if (skill->sort.category == 3 && skill->effectProperties.targeting == 2 && skill->costs.fixedCost != 0 &&
            (skill->rankInfo.rankFlags & 0x7F) != 1 && playerPadTestBit(1) != 0) {
            for (s32 i = 0; i < 3; i++) {
                if (scene->party.targetEnabled[i + 1] != 0) {
                    flaggedEntrySetValueB(targetSelector(scene), i + 1);
                    break;
                }
            }
        }
    }

    if (kind == 8) {
        for (s32 i = 0; i < 4; i++) {
            scene->party.mpDeltas[i] = 0;
        }
        u32 skillId = itemTableGetItemRecord(id)->skillId;
        if (skillId != 0) {
            /* The item uses a skill. */
            const SkillDataRecord *skill = skillDataFindById(skillId);
            if (skill->effectProperties.targeting == 3) {
                scene->state = SCENE_STATE_TARGET_GROUP;
                previewSkillOnParty(scene);
            } else {
                btlCommandResolveSelectedTarget(scene);
            }
            if (skill->effectProperties.targeting == 4) {
                scene->state = SCENE_STATE_TARGET_SELF;
                flaggedEntrySetValueB(targetSelector(scene), scene->unk305C);
            }
            if (FUN_0025043c(-1, id) != 0) {
                scene->party.targetEnabled[0] = 0;
            }
            for (s32 i = 0; i < 3; i++) {
                if (gameGetSlotTable()->active[i] < 0 || FUN_0025043c(i, id) != 0) {
                    scene->party.targetEnabled[i + 1] = 0;
                }
            }
            if ((skill->rankInfo.rankFlags & 0x200) != 0) {
                scene->party.targetEnabled[scene->unk305C] = 0;
            }
            if (skill->sort.category == 3 && skill->effectProperties.targeting == 2 && skill->costs.fixedCost != 0 &&
                (skill->rankInfo.rankFlags & 0x7F) != 1 && playerPadTestBit(1) != 0) {
                for (s32 i = 0; i < 3; i++) {
                    if (scene->party.targetEnabled[i + 1] != 0) {
                        flaggedEntrySetValueB(targetSelector(scene), i + 1);
                        return;
                    }
                }
            }
        } else {
            /* A plain healing item. */
            const ConsumableRecord *item = itemTableGetItemRecord(id);
            if ((item->target & 0x80) != 0) {
                scene->state = SCENE_STATE_TARGET_GROUP;
                u16 itemKind = 0;
                s16 itemId = 0;
                btlCommandMenuResolveLayout(scene, &itemKind, &itemId);
                btlItemComputeValues(-1, itemId, (u32 *)&scene->party.hpDeltas[0], (u32 *)&scene->party.mpDeltas[0]);
                for (s32 i = 1; i < 4; i++) {
                    btlItemComputeValues(gameGetSlotTable()->active[i - 1], itemId, (u32 *)&scene->party.hpDeltas[i],
                                         (u32 *)&scene->party.mpDeltas[i]);
                }
            } else {
                u16 itemKind = 0;
                s16 itemId = 0;
                btlCommandMenuResolveLayout(scene, &itemKind, &itemId);
                s32 selection = objectPartRunUnlessLocked(reinterpret_cast<GridNavigation *>(&scene->targeting.selector));
                if (selection == 0) {
                    btlItemComputeValues(-1, itemId, (u32 *)&scene->party.hpDeltas[0], (u32 *)&scene->party.mpDeltas[0]);
                } else {
                    btlItemComputeValues(gameGetSlotTable()->active[selection - 1], itemId,
                                         (u32 *)&scene->party.hpDeltas[selection], (u32 *)&scene->party.mpDeltas[selection]);
                    if (gameGetSlotTable()->active[selection - 1] < 0) {
                        itemTableGetItemRecord(itemId);
                    }
                }
            }
            if (FUN_0025043c(-1, id) != 0) {
                scene->party.targetEnabled[0] = 0;
            }
            for (s32 i = 0; i < 3; i++) {
                if (gameGetSlotTable()->active[i] < 0 || FUN_0025043c(i, id) != 0) {
                    scene->party.targetEnabled[i + 1] = 0;
                }
            }
            if ((item->target & 0x7F) != 1 && (item->target & 0x80) == 0 &&
                (item->healHp != 0 || item->healMp != 0 || item->curesHp != 0 || item->curesMp != 0) &&
                playerPadTestBit(1) != 0) {
                for (s32 i = 0; i < 3; i++) {
                    if (scene->party.targetEnabled[i + 1] != 0) {
                        flaggedEntrySetValueB(targetSelector(scene), i + 1);
                        return;
                    }
                }
            }
        }
    }
}

} /* extern "C" */
