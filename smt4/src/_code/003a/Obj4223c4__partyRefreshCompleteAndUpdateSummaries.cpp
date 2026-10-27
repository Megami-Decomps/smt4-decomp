/* NON_MATCHING: register allocation only (retail keeps the screen in r9, the 0x500 block in r6, the entries base in r7 and the id in r8; build allocates this/entries/id differently). */
#include "common.h"
#include "classes/Obj4223c4.h"
#include "quest_center/qcMain.h"
#include "bible/bibleLegionDraw.h"
#include "status/StatusCamera.h"

struct RefreshSkills { u16 ids[8]; };
struct RefreshSummary {
    u16 level;
    s16 stats[5];
    u16 baseStats[5];
    union {
        u8 raw;
        struct { u8 low : 2; u8 bonus : 4; u8 high : 2; } bits;
    } options;
    u8 unk17;
    u16 id, kind;
    RefreshSkills skills;
    u32 unk2c;
    u32 experience;
};
struct RefreshDemon {
    u16 id, kind;
    u16 stats[5];
    u8 unk0e[0x12];
    u16 baseStats[5];
    u8 unk2a[6];
    u32 experience;
    RefreshSkills skills;
    u8 unk44[4];
    u8 level;
    u8 unk49[0x547];
    u16 bonusStats[5]; // 0x590
    u8 unk59a[0x67];
    u8 bonus; // 0x601
};
/* The part of the screen's state at 0x500: the keep-display flag and the entry count. */
struct RefreshBlock {
    u8 unk00[0xA4];
    u8 keepDisplay;
    u8 unkA5[3];
    s16 count;
};
struct RefreshEntry { u8 unk00[4]; u16 id; u8 unk06[0x1a]; };
struct PartyRefresh {
    u8 unk000[0x14];
    u32 state, phase;
    u8 unk01c[0xc0];
    u8 control[1]; // 0xdc
    u8 unk0dd[0x4c3];
    u32 request; // 0x5a0
    u8 keepDisplay;
    u8 unk5a5[3];
    RefreshEntry entries[1]; // 0x5a8
};
extern "C" {
s32 scrRunOpcodesStub(u32);
s32 messageMainGetChoiceResult();
s32 gameRecordCopy(u16, RefreshSummary *);
void gameDataStoreRecord(u16, const RefreshSummary *);
void FUN_0022d434(PartyRefresh *);
void FUN_0029cc44(s32);
void FUN_0029ee6c(s32, u32);
void beginStatusPanelClose();
void FUN_00233240(void *, s32);
void FUN_00232848();
void uniteLoadPreviewRoomModel();

}

void Obj4223c4::partyRefreshCompleteAndUpdateSummaries()
{
    PartyRefresh * work = reinterpret_cast<PartyRefresh *>(this);
    if (scrRunOpcodesStub(work->request) != 2)
        return;
    const RefreshBlock *block = reinterpret_cast<const RefreshBlock *>(reinterpret_cast<u8 *>(work) + 0x500);
    if (!messageMainGetChoiceResult()) {
        for (s32 i = 0; i < block->count; ++i) {
            const RefreshEntry *entries = work->entries;
            u16 id = entries[i].id;
            const RefreshDemon *unit = reinterpret_cast<const RefreshDemon *>(FUN_003ad6e0(id));
            RefreshSummary summary;
            if (gameRecordCopy(id, &summary)) {
                summary.level = unit->level;
                summary.experience = unit->experience;
                summary.id = unit->id;
                summary.kind = unit->kind;
                summary.stats[0] = unit->stats[0] + unit->bonusStats[0];
                summary.baseStats[0] = unit->baseStats[0];
                summary.stats[1] = unit->stats[1] + unit->bonusStats[1];
                summary.baseStats[1] = unit->baseStats[1];
                summary.stats[2] = unit->stats[2] + unit->bonusStats[2];
                summary.baseStats[2] = unit->baseStats[2];
                summary.stats[3] = unit->stats[3] + unit->bonusStats[3];
                summary.baseStats[3] = unit->baseStats[3];
                summary.stats[4] = unit->stats[4] + unit->bonusStats[4];
                summary.baseStats[4] = unit->baseStats[4];
                summary.skills = unit->skills;
                summary.options.bits.bonus = unit->bonus;
                gameDataStoreRecord(id, &summary);
            }
        }
        FUN_0022d434(work);
    }
    buttonHelpSetPreset(buttonHelpGetMode());
    FUN_002a0cc8(0);
    if (block->count < 1) {
        if (!block->keepDisplay)
            FUN_0029cc44(1);
        FUN_0029ee6c(0, 0x323232ff);
        beginStatusPanelClose();
        FUN_00233240(work->control, 1);
        FUN_002a0cc8(1);
        work->state = 11;
        work->phase = 0;
        FUN_00232848();
        uniteLoadPreviewRoomModel();
        return;
    }
    work->state = 2;
    work->phase = 0;
}
