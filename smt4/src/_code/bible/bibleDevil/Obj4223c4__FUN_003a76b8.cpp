/* NON_MATCHING: the source-flag store and entry address are scheduled differently around the branch, and the step/phase stm uses another base register (retail r2, built r1). */
#include "classes/Obj42247c.h"
#include "classes/Obj4223c4.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "gamedata/UnitStats.h"
#include "shard/Shard004A.h"
#include "code/Code0029_Smt4.h"
#include "script/scrScriptProcess.h"

extern "C" {
void scriptProcessSetMode(ScriptProcess *process, s32 mode);
s32 utilityReturnSuccess(const void *input);
void buttonHelpSetPreset(u32 preset);
void *partyMemberFindById(u16 id);
void FUN_0029da34(s32 screen, s32 enabled, u16 id, void *unit);
s32 compendiumComputeSummonCost(u16 id, u32 source, s32 a, s32 specialMode, s32 b);
void messageTargetSetValue(s32 target, s32 mode);
void unitInitializeFromSavedRecord(u16 id, StatBlock *unit);
void FUN_00233240(void *timers, s32 index);
void devilListUpdatePreview(Obj42247c *view);
extern s32 g_bibleDevilCallbackContext[2];

}

void Obj4223c4::FUN_003a76b8()
{
    Obj42247c * view = reinterpret_cast<Obj42247c *>(this);
    // The concrete compendium view's source flag and entry array extend past the shared base.
    struct DetailEntry { u32 unk00; u16 id; u8 unk06[0x1a]; };
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
        DetailEntry entries[1];
    };
    typedef char LayoutCheck[__INTADDR__(&((DetailView *)0)->input) == 0x96 &&
        __INTADDR__(&((DetailView *)0)->entries) == 0x5a8 ? 1 : -1];
    DetailView *state = reinterpret_cast<DetailView *>(view);
    if (view->isScreenReady() != 0 && utilityReturnSuccess(state->input) == 0) {
        ScriptProcess *preview = scrScriptProcessCreate(state->handleA, state->handleB);
        state->preview = preview;
        scriptProcessSetMode(preview, 2);
        view->step = 1;
        view->phase = 0;
        state->source = 1;
        DetailEntry *entries = state->entries;
        if (mode == 0) {
            u16 rawId = entries[flaggedValueHolderGetTotal(&state->selection)].id;
            s16 id = rawId;
            s32 cost = compendiumComputeSummonCost(static_cast<u16>(id), state->source, 0, state->sortMode >= 100, 0);
            messageBannerInitSelection(1, 0);
            messageTargetSetValue(-cost, 0);
            buttonHelpSetPreset(0x2d);
            StatBlock unit;
            unitInitializeFromSavedRecord(static_cast<u16>(id), &unit);
            FUN_0029da34(0, 1, static_cast<u16>(id), &unit);
        } else {
            s16 id = entries[flaggedValueHolderGetTotal(&state->selection)].id;
            buttonHelpSetPreset(0x4c);
            FUN_0029da34(0, 1, static_cast<u16>(id), partyMemberFindById(static_cast<u16>(id)));
        }
        FUN_00233240(state->timers, 0);
        FUN_00233240(state->timers, 1);
        g_bibleDevilCallbackContext[1] = -1;
        devilListUpdatePreview(view);
    }
}
