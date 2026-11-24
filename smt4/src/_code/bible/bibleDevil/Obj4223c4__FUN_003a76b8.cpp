/* NON_MATCHING: the step/phase stm uses r1 instead of retail's r2. */
#include "bible/BibleDevilList.h"
#include "classes/Obj4223c4.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "gamedata/UnitStats.h"
#include "shard/Shard004A.h"
#include "code/Code0029_Smt4.h"
#include "script/scrScriptProcess.h"

extern "C" {
s32 utilityReturnSuccess(const void *input);
void buttonHelpSetPreset(u32 preset);
void *partyMemberFindById(u16 id);
void FUN_0029da34(s32 screen, s32 enabled, u16 id, void *unit);
s32 compendiumComputeSummonCost(u16 id, u32 source, s32 a, s32 specialMode, s32 b);
void messageTargetSetValue(s32 target, s32 mode);
void unitInitializeFromSavedRecord(u16 id, StatBlock *unit);
void uiSceneApplySpritePreset(void *timers, s32 index);
void devilListUpdatePreview(Obj42247c *view);
extern s32 g_bibleDevilCallbackContext[2];

} /* extern "C" */

/* Opens the compendium's confirmation preview for a new summon or a demon in the party. */
void Obj4223c4::FUN_003a76b8()
{
    /* The concrete compendium view's source flag and entry array extend past the shared base. */
    struct DetailView {
        u8 prefix[0x14];
        u32 phase, timer;
        u8 unk1C[4];
        FlaggedValueHolder selection;
        s8 sortMode;
        u8 unk95;
        u8 input[0x46];
        u8 timers[0x4bc];
        void *handleA, *handleB;
        ScriptProcess *preview;
        u8 fromParty, source;
        u8 unk5A6[2];
        BibleDevilEntry entries[1];
    };
    typedef char LayoutCheck[__INTADDR__(&((DetailView *)0)->input) == 0x96 &&
        __INTADDR__(&((DetailView *)0)->entries) == 0x5a8 ? 1 : -1];
    DetailView *state = (DetailView *)this;
    if (isScreenReady() != 0 && utilityReturnSuccess(state->input) == 0) {
        ScriptProcess *preview = scrScriptProcessCreate(state->handleA, state->handleB);
        state->preview = preview;
        scriptProcessSetMode(preview, 2);
        step = 1;
        phase = 0;
        BibleDevilEntry *entries = state->entries;
        if (mode == 0) {
            state->source = 1;
            u16 rawId = entries[flaggedValueHolderGetTotal(&state->selection)].devilId;
            s16 id = rawId;
            s32 cost = compendiumComputeSummonCost((u16)id, state->source, 0, state->sortMode >= 100, 0);
            messageBannerInitSelection(1, 0);
            messageTargetSetValue(-cost, 0);
            buttonHelpSetPreset(0x2d);
            StatBlock unit;
            unitInitializeFromSavedRecord((u16)id, &unit);
            FUN_0029da34(0, 1, (u16)id, &unit);
        } else {
            state->source = 1;
            s16 id = entries[flaggedValueHolderGetTotal(&state->selection)].devilId;
            buttonHelpSetPreset(0x4c);
            FUN_0029da34(0, 1, (u16)id, partyMemberFindById((u16)id));
        }
        uiSceneApplySpritePreset(state->timers, 0);
        uiSceneApplySpritePreset(state->timers, 1);
        g_bibleDevilCallbackContext[1] = -1;
        devilListUpdatePreview(this);
    }
}
