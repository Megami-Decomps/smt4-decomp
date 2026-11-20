/* NON_MATCHING: retail's calls, constants, switch table and blocks, in its order. What still differs: retail's frame
 * is 16 bytes larger (0x630 against 0x620: it holds stack temporaries this source does not have, so the spilled
 * addresses of the slide sprite, categoryIndex and unk5924 and the looked-up enemy get other slots); the state-2
 * scan keeps the previewed record in r1 and the index in r0 (here r0 and r2); retail keeps the key number in r4 for
 * the store to unk3060 where this build stores its zero register; and for an enemy without level flag bit 0 retail moves
 * the new touch region to r1 before forming the slot address. */
#include "battle/ActorCardAnimations.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiControl_Smt4.h"
#include "ui/PartyPanelState.h"
#include "gamedata/UnitStats.h"
#include "gamedata/NkmEnemyLookup.h"
#include "quest_center/qcMain.h"
#include "status/StatusCamera.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "code/Code0026_Smt4.h"

extern "C" {

s32 ifTouchGetSelectedRegion(void);
s32 ifTouchRegionAddRequested(u32 file, s32 index);
s32 ifTouchGetActiveCounter(void);
s32 inputQueryButtonState(s32 button, s32 mode);
void FUN_001990d4(ActorCardAnimations *card);
void categoryPreviewCycleTint(ActorCardAnimations *card);
void FUN_0029d8f4(const StatBlock *unit, s32 demonSide, u8 flag);
void FUN_0026a958(u8 value);
void statusPanelRefreshSelection(s32 alternate);
void statusPanelSetOpen(s32 open);
u16 itemIsCollectedWithRelated(u16 id);
void FUN_0029da34(void *directory, u32 entry, u16 devilId, u32 context);
s32 FUN_0029e02c(void);
void FUN_002efed8(u8 value);

/* Which of the card's touch regions is selected, -1 when none is. */
static __inline s32 cardSelectedTouchRegion(const ActorCardAnimations *card)
{
    for (s32 region = 0; region < 32; region++) {
        if (ifTouchGetSelectedRegion() == card->touchRegions[region])
            return region;
    }
    return -1;
}

/* Whether the record exists with flag bit 0 clear: the preview then leaves the enemy's skills out. */
static __inline bool enemySkillsWithheld(const NkmEnemyRecord *enemy)
{
    return enemy != NULL && !(enemy->flags & 1);
}

/* The step of the enemy list shown while a target is picked: opens the list and its touch
   regions, follows the cursor with the status preview, and handles the status page and the keys. */
void btlUiTargetListStep(ActorCardAnimations *card)
{
    s32 region = cardSelectedTouchRegion(card);

    switch (card->targetState) {
    case 0:
        break;
    case 1:
        FUN_001990d4(card);
        timerStart(&card->slide, 0, 0);
        if (uiSlidingSpriteAdvance(&card->unk11A0, 0)) {
            card->targetState = 2;
            card->targetTimer = 0;
            card->touchRegions[ACTOR_CARD_TARGET_REGION_BACK] = ifTouchRegionAddRequested(0x15, 0x1B3);
            card->touchRegionCount++;
            for (s32 i = 0; i < card->targetCount; i++) {
                if (nkmEnemyFindById(card->targets[i].id)->levelFlags & 1) {
                    if (card->targetSingleGroup) {
                        card->touchRegions[ACTOR_CARD_TARGET_REGION_FIRST + i] = ifTouchRegionAddRequested(0x15, 0x1A0);
                    } else if ((card->targets[i].touchImage >= 0x14A && card->targets[i].touchImage <= 0x14E) ||
                               (card->targets[i].touchImage >= 0x165 && card->targets[i].touchImage <= 0x168)) {
                        card->touchRegions[ACTOR_CARD_TARGET_REGION_FIRST + i] = ifTouchRegionAddRequested(0x15, 0x19F);
                    } else {
                        card->touchRegions[ACTOR_CARD_TARGET_REGION_FIRST + i] = ifTouchRegionAddRequested(0x15, 0x19E);
                    }
                } else {
                    card->touchRegions[ACTOR_CARD_TARGET_REGION_FIRST + i] =
                        ifTouchRegionAddRequested(0x15, card->targets[i].touchImage);
                }
                card->touchRegionCount++;
            }
        }
        break;
    case 2:
        if (uiSpriteGetOperationMode(&card->slide) == 11) {
            if (!uiSlidingSpriteAdvance(&card->slide, 1))
                break;
        } else if (uiSpriteGetOperationMode(&card->slide) == 12) {
            if (!uiSlidingSpriteAdvance(&card->slide, 0))
                break;
        }
        timerStart(&card->slide, 0, 0);
        if (FUN_0029e0f8()) {
            u16 *shown = FUN_0029acb0();

            /* Preview the enemy under the cursor when it changed. */
            for (s32 i = 0; i < card->targetCount; i++) {
                if (card->targets[i].active) {
                    if (static_cast<s16>(shown[0]) != card->targets[i].id || shown[10] != card->targets[i].ailments) {
                        StatBlock record;

                        FUN_0026a858(card->targets[i].id, reinterpret_cast<Record *>(&record));
                        NkmEnemyRecord *enemy = nkmEnemyFindById(*FUN_0029acb0());
                        if (static_cast<s16>(*FUN_0029acb0()) > 0 && enemySkillsWithheld(enemy)) {
                            record.skills = UnitSummarySkills();
                        } else if (enemySkillsWithheld(nkmEnemyFindById(card->targets[i].id))) {
                            record.skills = UnitSummarySkills();
                        }
                        record.hp = card->targets[i].hp;
                        record.mp = card->targets[i].mp;
                        record.ailments = card->targets[i].ailments;
                        FUN_0029d8f4(&record, 1, 0);
                        FUN_0026a958(1);
                        statusPanelSetOpen(1);
                        card->categoryIndex = 0;
                        if (itemIsCollectedWithRelated(card->targets[i].id))
                            FUN_0029da34(NULL, 1, card->targets[i].id, 0);
                        else
                            FUN_0029da34(NULL, 2, card->targets[i].id, 0);
                    }
                    break;
                }
            }
            categoryPreviewCycleTint(card);
            card->targetTouched = 0;
            if (FUN_0029e02c()) {
                /* The status page opens. */
                FUN_002efed8(1);
                card->targetState = 3;
                card->unk5924 = 0;
                if (gameGetFlagByte12e8() < 0) {
                    timerStart(&card->slide, 10, 0);
                } else if (gameGetFlagByte12e8() > 0) {
                    timerStart(&card->slide, 9, 0);
                }
            } else if (!card->unk307C) {
                bool touched = false;

                if (region >= 0) {
                    if (ifTouchGetSelectionMode() == 1 || ifTouchGetSelectionMode() == 2) {
                        if (region == ACTOR_CARD_TARGET_REGION_BACK) {
                            card->unk3060 = 1;
                            card->targetState = 4;
                            gameGlobalsSetSubScreenActive(1);
                        } else if (!card->targetLocked) {
                            for (s32 i = 0; i < card->targetCount; i++)
                                card->targets[i].active = 0;
                            if (card->targets[region - ACTOR_CARD_TARGET_REGION_FIRST].selectable) {
                                card->targets[region - ACTOR_CARD_TARGET_REGION_FIRST].active = 1;
                                card->targetTouched = 1;
                            }
                        }
                        touched = true;
                    } else if (ifTouchGetSelectionMode() == 6) {
                        if (region != ACTOR_CARD_TARGET_REGION_BACK)
                            card->unk3060 = 0;
                        touched = true;
                    }
                }
                if (touched) {
                    if (ifTouchGetSelectionMode() == 1 && ifTouchGetActiveCounter() < 1 &&
                        region != ACTOR_CARD_TARGET_REGION_BACK)
                        eventQueueAddUniqueIfValid(0x100016C);
                } else if (inputQueryButtonState(0, 1)) {
                    card->unk3060 = 0;
                } else if (inputQueryButtonState(1, 1)) {
                    card->unk3060 = 1;
                    card->targetState = 4;
                    gameGlobalsSetSubScreenActive(1);
                }
            }
        }
        break;
    case 3:
        uiSpriteAdvanceAnimation(&card->slide);
        categoryPreviewCycleTint(card);
        if (FUN_0029e02c() == 0) {
            /* The status page closed. */
            FUN_002efed8(0);
            card->targetState = 2;
            if (gameGetFlagByte12e8() < 0) {
                timerStart(&card->slide, 11, 0);
            } else if (gameGetFlagByte12e8() > 0) {
                timerStart(&card->slide, 12, 0);
            }
            buttonHelpSetPreset(0x33);
            u16 *shown = FUN_0029acb0();
            if (itemIsCollectedWithRelated(*shown))
                FUN_0029da34(NULL, 1, *shown, 0);
            else
                FUN_0029da34(NULL, 2, *shown, 0);
        } else {
            /* Keep the status page on the enemy under the cursor. */
            s32 selected = 0;

            for (s32 i = 0; i < card->targetCount; i++) {
                if (card->targets[i].active) {
                    selected = i;
                    break;
                }
            }
            if (static_cast<s16>(*FUN_0029acb0()) != card->targets[selected].id) {
                StatBlock record;

                FUN_0026a858(card->targets[selected].id, reinterpret_cast<Record *>(&record));
                if (enemySkillsWithheld(nkmEnemyFindById(*FUN_0029acb0())))
                    record.skills = UnitSummarySkills();
                record.hp = card->targets[selected].hp;
                record.mp = card->targets[selected].mp;
                record.ailments = card->targets[selected].ailments;
                FUN_0029d8f4(&record, 1, 0);
                statusPanelRefreshSelection(0);
                statusPanelSetOpen(1);
                card->categoryIndex = 0;
                card->unk5924 = 0;
            }
        }
        break;
    case 4:
        break;
    }
    card->targetTimer++;
}

} /* extern "C" */
