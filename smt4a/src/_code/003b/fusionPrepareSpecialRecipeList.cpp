/* NON_MATCHING: retail retains one shared indexed work base and literal array offsets; this build rematerializes both addresses, saving one fewer register and using an 8-byte rather than 12-byte frame. -O2 candidate. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "map/lmapMain.h"
struct LinkHolder;

struct FusionSavedSelection {
    s16 slots[2];
    u16 ids[2];
};
struct FusionSavedPreferences {
    u8 unk00[0x20];
    FusionSavedSelection selection;
};
struct FusionRecipeEntry {
    u16 id;
    u16 ingredients[12];
    u16 resultId;
};
// A view of the recipe-list span; the backing UniteWork remains unchanged.
struct FusionRecipeWorkView {
    u8 unk0000[0x48c];
    u32 soundChannel;
    u8 unk0490[0x8a20];
    ScrollSelection list;           // 0x8eb0
    ScrollSelection pages;          // 0x8f14
    u16 count;                      // 0x8f78
    u16 unk8f7a;
    u16 recipeIds[0x94];            // 0x8f7c..0x90a3: span before the next known field
    u32 maximumLevel;               // 0x90a4
    u8 unk90a8[0x108];
    u32 progress;                   // 0x91b0
};

extern "C" {
extern UniteWork *g_unite;
FusionSavedPreferences *FUN_0026140c();
void soundChannelRequestIfEnabled(u32 channel, u32 mode, u32 duration);
u32 fusionListAvailableSpecialRecipes(void *context, u16 *recipes);
void FUN_00203b40(ScrollSelection *list, s32 count, s32 visible, s32 columns,
                  s32 enable, s32 colors);
FusionRecipeEntry *contentEntryFindById(u32 id);
u32 FUN_004dad8c(void *context);
void FUN_0022e774();
void FUN_002a7b74();
void FUN_0023c08c(s32 mode);
void FUN_0020b908(s32 id, s32 enabled);
LmapScript *lmapSceneGetScript();
void FUN_003857b4(u8 value);
void linkHolderClearFlag(LinkHolder *holder);

// Validate the saved ingredients and populate the special-fusion recipe/result lists.
void fusionPrepareSpecialRecipeList()
{
    UniteWork *work = g_unite;
    FusionRecipeWorkView *recipes = reinterpret_cast<FusionRecipeWorkView *>(work);
    FusionSavedSelection *selection = &FUN_0026140c()->selection;
    soundChannelRequestIfEnabled(recipes->soundChannel, 0, 60);
    if (selection->slots[0] >= 0) {
        const SlotRecord *slot = gameGetSlotRecord(selection->slots[0]);
        if (slot == NULL || slot->entryId != selection->ids[0]) {
            selection->slots[0] = -1;
            selection->ids[0] = 0;
        }
    }
    if (selection->slots[1] >= 0) {
        const SlotRecord *slot = gameGetSlotRecord(selection->slots[1]);
        if (slot == NULL || slot->entryId != selection->ids[1]) {
            selection->slots[1] = -1;
            selection->ids[1] = 0;
        }
    }
    u32 count = fusionListAvailableSpecialRecipes(work->context, recipes->recipeIds);
    recipes->count = (u16)count;
    FUN_00203b40(&recipes->list, count, 10, 1, 1, 1);
    FUN_00203b40(&recipes->pages, recipes->count, 1, 4, 1, 1);
    work->candidates.count = 0;
    for (s32 index = 0; index < recipes->count; ++index) {
        work->candidates.devilIds[index] =
            contentEntryFindById(recipes->recipeIds[index])->resultId;
        ++work->candidates.count;
    }
    recipes->maximumLevel = FUN_004dad8c(work->context);
    FUN_0022e774();
    recipes->progress = 0;
    FUN_002a7b74();
    FUN_0023c08c(18);
    FUN_0020b908(0x26, 1);
    LmapScript *script = lmapSceneGetScript();
    if (script != NULL) {
        FUN_003857b4(1);
        linkHolderClearFlag(reinterpret_cast<LinkHolder *>(script));
    }
}
}
