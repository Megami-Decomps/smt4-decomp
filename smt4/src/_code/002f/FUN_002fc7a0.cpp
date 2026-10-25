/* NON_MATCHING: Refresh-result registers, count-store scheduling and retail's unused panel-call arguments differ. */
#include "common.h"
#include <stddef.h>
#include "camp/CommonBg/CommonBg.h"
#include "AsdSDK/AsdMemUtil.h"

struct PartyPanelRecord {
    u8 unk00[0x38];
    u8 skillsAndDemon[0x14];
};
struct PartyPanelRefreshTimer {
    u8 unk00[0xC];
    u32 elapsed;
    u8 active;
    u8 unk11[3];
};
struct PartyPanelRefreshWork {
    void *vtable;
    void *link;
    PartyPanelRecord *record;
    void *nameLabels;
    void *characterPanel;
    PartyPanelRefreshTimer timers[5];
    u8 unk78[0x34];
    void *preview;
    u8 unkB0[0x50];
    s32 selected;
    s32 count;
    u8 unk108[8];
    s32 state;
    s32 substate;
    u8 unk118[4];
    s32 compact;
    s16 unit;
    u8 unk122;
    u8 kind;
    u8 unk124[2];
    s8 refresh;
    u8 unk127;
    u8 active;
    u8 unk129[0xB];
    s32 baseIndex;
    u8 unk138[4];
    s32 pageIndex;
    u8 unk140[8];
    s32 extraIndex;
};
typedef char PartyPanelRefreshLayoutCheck[
    offsetof(PartyPanelRefreshWork, refresh) == 0x126 &&
    offsetof(PartyPanelRefreshWork, extraIndex) == 0x148 ? 1 : -1];
extern "C" {
PartyPanelRecord *FUN_002bd2b4(PartyPanelRecord *record, s32 unit, u8 kind, s32 index);
void FUN_002597c0(void);
void cecProcessForward(PartyPanelRecord *record);
void rt_aeabi_memclr(void *data, u32 size);
void characterInfoPanelPopulate(void *panel, PartyPanelRecord *record, void *preview);
void uiDrawRecordNameLabels(void *labels, PartyPanelRecord *record);
void FUN_002595e0(PartyPanelRecord *record);
void linkHolderApplyFlag(void *link, s32 flag);
s32 partyPanelExists(void);

/* Rebuilds the displayed party record, resets its animations and requests another refresh if selection changed. */
u32 FUN_002fc7a0(PartyPanelRefreshWork *work)
{
    u32 result = 0;
    if (work->refresh != 0) {
        work->refresh = 0;
        memClear(work->record, sizeof(PartyPanelRecord));
        FUN_002bd2b4(work->record, work->unit, work->kind,
                    work->pageIndex + work->baseIndex + work->extraIndex);
        FUN_002597c0();
        cecProcessForward(work->record);
        if (work->unit == 0) {
            rt_aeabi_memclr(work->record->skillsAndDemon, sizeof(work->record->skillsAndDemon));
        }
        characterInfoPanelPopulate(work->characterPanel, work->record, work->preview);
        uiDrawRecordNameLabels(work->nameLabels, work->record);
        FUN_002595e0(work->record);
        linkHolderApplyFlag(work->link, 1);
        work->selected = -1;
        work->count = work->compact == 0 ? 6 : 3;
        work->substate = 2;
        work->state = 5;
        work->timers[2].elapsed = 0;
        work->timers[2].active = 0;
        work->timers[3].elapsed = 0;
        work->timers[3].active = 0;
        work->timers[4].elapsed = 0;
        work->timers[4].active = 0;
        work->timers[0].elapsed = 0;
        work->timers[0].active = 0;
        work->timers[1].elapsed = 0;
        work->timers[1].active = 0;
        result = 2;
        work->active = 1;
    }
    if (partyPanelExists() != 0) {
        if (FUN_0028a318() != 0) {
            work->refresh = 1;
        } else {
            return 0;
        }
    }
    return result;
}
}
