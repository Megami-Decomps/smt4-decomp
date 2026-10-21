/* NON_MATCHING: state initialization store scheduling and global-address register reuse differ from retail. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

struct PartnerAttackOwner {
    u32 parent;                   /* 0x00 */
    u8 unk04[0x4c];
    u32 job;                      /* 0x50 */
};

struct PartnerAttackState {
    u32 unk00;                    /* 0x00 */
    u32 unk04;                    /* 0x04 */
    u32 unk08;                    /* 0x08 */
    u32 unk0c;                    /* 0x0c */
    u32 unk10;                    /* 0x10 */
    u32 unk14;                    /* 0x14 */
    u32 unk18;                    /* 0x18 */
    u32 unk1c;                    /* 0x1c */
    s32 selected;                 /* 0x20 */
    void *scriptData;             /* 0x24 */
    void *scriptProcess;          /* 0x28 */
    u32 unk2c;                    /* 0x2c */
    void *entries;                /* 0x30 */
};

extern "C" {
extern PartnerAttackState *g_btlPartnerAttack;
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
void *asdOperatorNew(u32 size, PartnerAttackState **owner);
void *FUN_00416b70(void *);

// Allocate the partner attack state and attach its update and draw jobs.
void btlPartnerAttackInitialize(PartnerAttackOwner *owner)
{
    jobIsValid(owner->job);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlPartnerAttack.cpp", 0x77b);
    g_btlPartnerAttack = static_cast<PartnerAttackState *>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x1cc, 1));
    owner->job = taskCreateDraw("btlPartnerAttack Calc", 4, 0, 0,
                               btlPartnerAttackJobCallback, scriptObjDestroy, owner, owner->parent);
    taskCreateDraw("btlPartnerAttack DrawUp3D", 0x71, 0, 0,
                   btlPartnerAttackApplyState, NULL, NULL, owner->job);
    taskCreateDraw("btlPartnerAttack DrawUp2D", 0x75, 0, 0,
                   renderObjAttach, NULL, NULL, owner->job);

    PartnerAttackState *state = g_btlPartnerAttack;
    state->unk00 = 0;
    state->unk04 = 0;
    state->unk08 = 0;
    state->unk0c = 0;
    state->unk10 = 0;
    state->unk14 = 0;
    state->unk18 = 0;
    state->selected = -1;
    state->unk1c = 0;
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
