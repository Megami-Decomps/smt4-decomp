/* NON_MATCHING: bible devil list per-frame update; draft shape, branch layout and registers not compared with retail */
#include "common.h"
#include "classes/Obj4223f8.h"

struct BibleListEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 devilId;
    /* 0x06 */ u8 unk06[0x16];
    /* 0x1C */ u8 registered;
    /* 0x1D */ u8 unk1D[3];
};

struct BibleListUi {
    /* 0x00000 */ u8 unk00000[0x14];
    /* 0x00014 */ s32 mode;               /* 4: browsing */
    /* 0x00018 */ s32 modeTimer;
    /* 0x0001C */ u8 unk0001C[4];
    /* 0x00020 */ u8 list[8];             /* scrolling list */
    /* 0x00028 */ s32 count;
    /* 0x0002C */ u8 unk0002C[0x6A];
    /* 0x00096 */ u16 marked[16];         /* devil ids marked on the list page, then visibility flags */
    /* 0x000B6 */ u8 unk000B6[0x12];
    /* 0x000C8 */ u8 pointer[0x14];
    /* 0x000DC */ u8 animation[0x20];
    /* 0x000FC */ u8 slots[6][0x8C];
    /* 0x0043C */ u8 unk0043C[0x16C];
    /* 0x005A8 */ u16 entryCount;
    /* 0x005AA */ u8 unk005AA[2];
    /* 0x005AC */ BibleListEntry entries[0x500];
    /* 0x0A5AC */ u8 unkA5AC[4];
    /* 0x0A5B0 */ s16 shownDevil;         /* devil shown in the status panel */
    /* 0x0A5B2 */ s16 slotIndex;          /* cursor slot animation */
    /* 0x0A5B4 */ u8 unkA5B4[0x10A];
    /* 0x0A6BE */ u8 marker;
};

#define BIBLE_LIST_MARKED_COUNT 16

extern "C" {
void FUN_003a98b8(BibleListUi *ui);
void uiAnimationAdvanceChannel(void *animation, s32 channel);
u32 vec2GetYInt(void *slot);
u32 vec2GetXInt(void *slot);
void pointConvertToFloat(void *pointer, u32 x, u32 y);
s32 gameGetNavigationState(void);
s32 FUN_00293aac(void);
s32 FUN_00293b8c(void);
s32 FUN_0029e924(void *list);
s32 flaggedEntryGetValueByState(void *list);
void FUN_003c2c6c(void *list);
void FUN_003c2b74(void *list);
void FUN_00233404(void);
void FUN_00233240(void *animation, s32 channel);
s32 gameGetFlagByte12e8(void);
s32 flaggedValueHolderGetTotal(void *holder);
s32 FUN_0029e0f8(void);
void FUN_0029defc(s32 id, s32 flag);
void FUN_0029dfc0(s32 id);
void statusPanelSetOpen(s32 open);
void objectWordsClear(void *words);
s32 rangeLimitMin(void *list);
void devilListMarkOrInsertQualifiedEntry(void *list, u32 id);

/* Per-frame update of the bible's devil list: moves the cursor animation, handles page changes,
 * shows the highlighted devil's status panel and refreshes which listed devils are registered. */
}

void Obj4223f8::updateBrowse()
{
    BibleListUi *ui = reinterpret_cast<BibleListUi *>(this);
    ui->marker = 0xFF;
    if (ui->mode != 4) {
        FUN_003a98b8(ui);
    } else {
        uiAnimationAdvanceChannel(ui->animation, ui->slotIndex);
        void *slot = ui->slots[ui->slotIndex];
        u32 y = vec2GetYInt(slot);
        u32 x = vec2GetXInt(slot);
        pointConvertToFloat(ui->pointer, x, y);
        if (gameGetNavigationState() == 0 || FUN_00293aac() != 0) {
            if (gameGetNavigationState() == 0 && ui->count > 0) {
                s32 firstBefore = FUN_0029e924(ui->list);
                s32 cursorBefore = flaggedEntryGetValueByState(ui->list);
                if (FUN_00293b8c() != 1) {
                    if (FUN_00293b8c() == -1)
                        FUN_003c2c6c(ui->list);
                } else {
                    FUN_003c2b74(ui->list);
                }
                if (FUN_0029e924(ui->list) != firstBefore || flaggedEntryGetValueByState(ui->list) != cursorBefore)
                    FUN_00233404();
            }
        } else {
            ui->mode = 5;
            ui->modeTimer = 0;
            ui->slotIndex = (gameGetFlagByte12e8() == 1) ? 0 : 4;
            FUN_00233240(ui->animation, ui->slotIndex);
        }
    }

    BibleListEntry *entries = ui->entries;
    if (ui->entryCount != 0) {
        s16 shown = entries[flaggedValueHolderGetTotal(ui->list)].devilId;
        if (entries[flaggedValueHolderGetTotal(ui->list)].registered == 0)
            shown = 0;
        s32 panelOpen = FUN_0029e0f8();
        s16 current = 0;
        if (panelOpen != 0)
            current = ui->shownDevil;
        if (panelOpen != 0 && current != shown) {
            ui->shownDevil = shown;
            if (shown != 0) {
                FUN_0029defc(shown, 1);
                statusPanelSetOpen(1);
            } else {
                FUN_0029dfc0(0);
            }
        }
    } else {
        FUN_0029dfc0(0);
    }

    objectWordsClear(ui->marked);
    s32 visible = rangeLimitMin(ui->list);
    for (s32 i = 0; i < visible; i++)
        devilListMarkOrInsertQualifiedEntry(ui->marked, entries[FUN_0029e924(ui->list) + i].devilId);
    for (s32 i = 0; i < BIBLE_LIST_MARKED_COUNT; i++) {
        s16 id = ui->marked[i];
        if (id != -1 && id != 0 && *((u8 *)ui->marked + i + 0x20) == 0)
            ui->marked[i] = 0xFFFF;
    }
}
