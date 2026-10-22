/* NON_MATCHING: state initialization store scheduling and global-address register reuse differ from retail. */
#include "battle/btlPartnerAttack.h"
#include "AsdSDK/AsdDebug.h"

struct PartnerAttackOwner {
    u32 parent;                   /* 0x00 */
    u8 unk04[0x4c];
    u32 job;                      /* 0x50 */
};

extern "C" {
extern BtlPartnerAttackA *g_btlPartnerAttack;
s32 jobIsValid(u32 job);
void *asdMemoryAllocTracked(u32 size, u32 alignment, u32 heap, u32 line, u32 clear);
u32 taskCreateDraw(const char *name, u32 priority, u32, u32, void (*update)(void *),
                   void (*destroy)(void *), void *work, u32 parent);
void btlPartnerAttackJobCallback(void *);
void scriptObjDestroy(void *);
void btlPartnerAttackApplyState(void *);
void renderObjAttach(void *);
void scrScriptProcessDestroy(void *);
void asdMemFree(void *);
void *asdOperatorNew(u32 size, BtlPartnerAttackA **owner);
void *FUN_00416b70(void *);

// Allocate the partner attack state and attach its update and draw jobs.
void btlPartnerAttackInitialize(PartnerAttackOwner *owner)
{
    jobIsValid(owner->job);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlPartnerAttack.cpp", 0x77b);
    g_btlPartnerAttack = static_cast<BtlPartnerAttackA *>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x1cc, 1));
    owner->job = taskCreateDraw("btlPartnerAttack Calc", 4, 0, 0,
                               btlPartnerAttackJobCallback, scriptObjDestroy, owner, owner->parent);
    taskCreateDraw("btlPartnerAttack DrawUp3D", 0x71, 0, 0,
                   btlPartnerAttackApplyState, NULL, NULL, owner->job);
    taskCreateDraw("btlPartnerAttack DrawUp2D", 0x75, 0, 0,
                   renderObjAttach, NULL, NULL, owner->job);

    BtlPartnerAttackA *state = g_btlPartnerAttack;
    state->unk00 = 0;
    state->unk04 = 0;
    state->unk08 = 0;
    state->unk0c = 0;
    state->unk10 = 0;
    state->unk14 = 0;
    state->state = 0;
    state->selected = -1;
    state->argument = 0;
    if (state->scriptProcess != NULL) {
        scrScriptProcessDestroy(state->scriptProcess);
        state->scriptProcess = NULL;
    }
    if (state->scriptData != NULL) {
        asdMemFree(state->scriptData);
        state->scriptData = NULL;
    }
    state->unk2c = 0;
    void *entries = asdOperatorNew(0x860, &g_btlPartnerAttack);
    if (entries != NULL) {
        entries = FUN_00416b70(entries);
    }
    state->entries = entries;
}
}
