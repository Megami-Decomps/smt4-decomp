/* NON_MATCHING: 181 lines (shape 97). Retail loads the last random slot (20) into a callee-saved register next to
 * firstRandomSlot's 0, before the location test, and its constant 0 for the text calls only after the heading is
 * converted; this build loads 20 at the call and keeps 0 in a register from the prologue, which renames the rows
 * between. With a `u32 lastRandomSlot = QC_TAB_SLOTS;` local declared after firstRandomSlot every row matches
 * except the frame size (6 lines: retail sub sp, #116; that build #132, every slot at retail's offset and 16 unused
 * bytes above the name buffer); a single-use constant local is not written without other evidence. */
#include "ui/DummyAttachmentWork.h"
#include "quest_center/qcUtility.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GameDataAccess.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "AsdSDK/asdTextDrawFormatted.h"

/* A story flag and the draw-weight column the board's lists use once it is set. */
struct QcWeightKindFlag {
    /* 0x00 */ u16 flag;
    /* 0x02 */ u16 weightKind;
};

enum {
    QC_TAB_BONUS = 4,   /* the extra tab qcUtilityBuildBonusTab builds */
    QC_TAB_NONE = 5,    /* qcTabListPickRandomTab found no tab to build */
    QC_TAB_SLOTS = 20,
    QC_BOARD_SLOTS = 3  /* quests the board shows at once */
};

/* Mikado's center and the Tokyo hunter association's: only the first story flag differs. */
static const QcWeightKindFlag sMikadoWeightKinds[4] = {{0x25, 1}, {0x99, 2}, {0x648, 3}, {0x1ba, 4}};
static const QcWeightKindFlag sTokyoWeightKinds[4] = {{0x6c, 1}, {0x99, 2}, {0x648, 3}, {0x1ba, 4}};

extern "C" {

s32 gameFlagIsSet(u32 flag); // declcheck: local (its headers belong to the battle and camp menus)
s32 storyModeCanProceed(u32 mode);
void questCompletionSetTierFlags(u32 *reward);
u8 *qcGetCenterSlotGroups(s32 index);
u8 objectFlagBitIsSet(QcTabListState *list, u32 bit);
void qcTabListResetStamp(QcTabListState *list);
u32 qcUtilityBuildBonusTab(QcTabListState *list, u32 group, u32 forcedSlot, u32 weightKind);
u32 qcTabListPickRandomTab(QcTabListState *list);
int qcUtilityBuildAndMarkTabList(QcTabListState *list, u32 tab, u32 group, u32 weightKind, u32 firstRandomSlot,
                                 u32 lastRandomSlot);
int dataTable26GroupGetRecord(u32 unused, int group, u32 index);
int dataTable26GroupGetRecordS2(u32 unused, int group, u32 index);
s8 *textConvertToGlyphPairs(const u8 *source, s8 *output);
char *libc_strcat(char *dst, const char *src);

/* This center's tab lists. */
static __inline QcTabListState *centerTabList(DummyAttachmentWork *work)
{
    return (QcTabListState *)qcGetCenterSlotGroups(work->location);
}

/* The draw-weight column of this center's lists: that of the last story flag reached. */
static __inline u32 centerWeightKind(DummyAttachmentWork *work)
{
    u32 weightKind = 0;

    switch (work->location) {
    case 0:
        for (u32 i = 0; i < 4; i++) {
            if (gameFlagIsSet(sMikadoWeightKinds[i].flag)) {
                weightKind = sMikadoWeightKinds[i].weightKind;
            }
        }
        break;
    case 1:
        for (u32 i = 0; i < 4; i++) {
            if (gameFlagIsSet(sTokyoWeightKinds[i].flag)) {
                weightKind = sTokyoWeightKinds[i].weightKind;
            }
        }
        break;
    }
    return weightKind;
}

/* Builds the tab the quest board shows (the bonus tab once the completion tiers are open, a random one
 * otherwise) and writes its heading and the names of its first three quests. */
void qcBoardBuildShownTab(DummyAttachmentWork *work)
{
    if (storyModeCanProceed(work->location)) {
        u32 reward = ~0u;

        questCompletionSetTierFlags(&reward);
        if (work->tierReward != reward) {
            work->tierReward = reward;
            qcTabListResetStamp(centerTabList(work));
        }
        if (!objectFlagBitIsSet(centerTabList(work), QC_TAB_BONUS)) {
            u32 weightKind = centerWeightKind(work);

            qcUtilityBuildBonusTab(centerTabList(work), (u32)&work->npcTable, work->tierReward, weightKind);
            if (work->tierReward == 0) {
                gameFlagSetValue(0x424, 1, 1);
            }
        }
    } else {
        u32 tab = qcTabListPickRandomTab(centerTabList(work));

        if (tab != QC_TAB_NONE) {
            u32 firstRandomSlot = 0;

            switch (work->location) {
            case 0:
                firstRandomSlot = QC_TAB_SLOTS;
                if (gameFlagIsSet(0x25)) {
                    firstRandomSlot = 5;
                    if (gameFlagIsSet(0x55)) {
                        firstRandomSlot = 0;
                    }
                }
                break;
            case 1:
                firstRandomSlot = QC_TAB_SLOTS;
                if (gameFlagIsSet(0x6c)) {
                    firstRandomSlot = 5;
                    if (gameFlagIsSet(0x7c)) {
                        firstRandomSlot = 0;
                    }
                }
                break;
            }
            centerTabList(work)->pinnedCategory = 0;
            if (work->location == 0 && !gameFlagIsSet(0x55)) {
                centerTabList(work)->pinnedCategory = 8;
            }

            u32 weightKind = centerWeightKind(work);

            qcUtilityBuildAndMarkTabList(centerTabList(work), tab, (u32)&work->npcTable, weightKind, firstRandomSlot,
                                         QC_TAB_SLOTS);
        }
    }

    QcTabListState *list = centerTabList(work);
    const u8 *titles = (const u8 *)dataTable26GroupGetRecordS2((u32)&work->npcTable, work->location, 0);
    QcQuestRecord *records = (QcQuestRecord *)dataTable26GroupGetRecord((u32)&work->npcTable, work->location, 0);
    const u8 *title = titles + list->tab * 0x20;

    if (storyModeCanProceed(work->location) && work->tierReward == 0) {
        title = titles + list->tab * 0x20 + 0x20;
    }
    asdTextDrawFormatted(work->board.titleText, 3, ~0u, 0, 0, (const char *)textConvertToGlyphPairs(title, NULL));

    const s32 *slots = list->tabs[list->tab].slots;

    for (s32 i = 0; i < QC_BOARD_SLOTS; i++) {
        s8 glyphs[72];
        char name[36];

        name[0] = '\0';

        s32 quest = slots[i];

        if (quest == QC_SLOT_FREE) {
            libc_strcat(name, "\x81\x7c\x81\x7c\x81\x7c");
        } else if (quest == QC_SLOT_BONUS) {
            libc_strcat(name, (const char *)gameGetPlayerName());
        } else if (records[quest].category != 0) {
            libc_strcat(name, FUN_002bcf4c(records[quest].category)->name);
        } else {
            libc_strcat(name, records[quest].name);
        }
        textConvertToGlyphPairs((const u8 *)name, glyphs);
        if (i == 0) {
            asdTextDrawFormatted(work->board.slotTexts[0], 4, ~0u, 0, 0, (const char *)glyphs);
        }
        if (i == 1) {
            asdTextDrawFormatted(work->board.slotTexts[1], 3, ~0u, 0, 0, (const char *)glyphs);
        }
        if (i == 2) {
            asdTextDrawFormatted(work->board.slotTexts[2], 2, ~0u, 0, 0, (const char *)glyphs);
        }
    }
}

} /* extern "C" */
