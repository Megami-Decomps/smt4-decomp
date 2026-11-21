/* NON_MATCHING: only the result copy in the loop differs: retail loads the recipe's resultId into r1 before the 0x62a0 literal (r0), the build loads the literal into r1 first. */
#include "camp/Unite/UniteGlobals.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "map/lmapMain.h"
#include "event/2dEvent/2dEventTex.h"
#include "map/MapSceneAccess.h"
#include "gamedata/GameDataAccess_ContentWordList.h"
struct LinkHolder;

struct FusionSavedSelection {
    s16 slots[2];
    u16 ids[2];
};
struct FusionSavedPreferences {
    u8 unk00[0x20];
    FusionSavedSelection selection;
};
extern "C" {
void soundChannelRequestIfEnabled(u32 channel, u32 mode, u32 duration);
u32 fusionListAvailableSpecialRecipes(void *context, u16 *recipes);
void gridNavigationConfigure(ScrollSelection *list, s32 count, s32 visible, s32 columns,
                  s32 enable, s32 colors);
u32 histogramFindHighestSupportedValue(void *context);
void statusPanelClose();
void FUN_002a7b74();
void uniteStartOrQueueRequest(s32 mode);
void uniteMenuChangeState(s32 id, s32 enabled);
LmapScript *lmapSceneGetScript();
void linkHolderClearFlag(LinkHolder *holder);

/* Validates the saved ingredients and fills the special-fusion recipe and result lists. */
void fusionPrepareSpecialRecipeList()
{
    UniteWorkA *work = g_unite;
    FusionSavedSelection *selection = &reinterpret_cast<FusionSavedPreferences *>(saveGetUserSettingsBlock())->selection;
    soundChannelRequestIfEnabled(work->returnState.soundChannel, 0, 60);
    if (selection->slots[0] >= 0) {
        const SlotRecordA *slot = gameGetSlotRecord(selection->slots[0]);
        if (slot == NULL || slot->id != selection->ids[0]) {
            selection->slots[0] = -1;
            selection->ids[0] = 0;
        }
    }
    if (selection->slots[1] >= 0) {
        const SlotRecordA *slot = gameGetSlotRecord(selection->slots[1]);
        if (slot == NULL || slot->id != selection->ids[1]) {
            selection->slots[1] = -1;
            selection->ids[1] = 0;
        }
    }
    u32 count = fusionListAvailableSpecialRecipes(work->context, work->specialRecipes.recipeIds);
    work->specialRecipes.count = (u16)count;
    gridNavigationConfigure(&work->specialRecipes.list, count, 10, 1, 1, 1);
    gridNavigationConfigure(&work->specialRecipes.pages, work->specialRecipes.count, 1, 4, 1, 1);
    work->candidates.count = 0;
    for (s32 index = 0; index < work->specialRecipes.count; ++index) {
        work->candidates.devilIds[index] =
            contentEntryFindById(work->specialRecipes.recipeIds[index])->value;
        ++work->candidates.count;
    }
    work->specialRecipes.maximumLevel = histogramFindHighestSupportedValue(work->context);
    statusPanelClose();
    work->specialRecipes.progress = 0;
    FUN_002a7b74();
    uniteStartOrQueueRequest(18);
    uniteMenuChangeState(0x26, 1);
    LmapScript *script = lmapSceneGetScript();
    if (script != NULL) {
        lmapSceneSetUnk134(1);
        linkHolderClearFlag(reinterpret_cast<LinkHolder *>(script));
    }
}
}
