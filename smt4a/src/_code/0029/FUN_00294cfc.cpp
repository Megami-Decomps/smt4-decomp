/* NON_MATCHING: picks a hint popup for a candidate from the list (level window, not yet known or recent) and records it in the recent list; written from the decompilation and the retail disassembly, loop structure and register allocation not compared with retail */
#include "gamedata/DataTable.h"
#include "code/Code0015.h"
#include "code/Code002a_Smt4a.h"

struct PopupEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 kind;
    /* 0x08 */ s16 requireFlag;
    /* 0x0A */ s16 excludeFlag;
    /* 0x0C */ s16 chance;
    /* 0x0E */ u8 unk0E[0x12];
};

struct PopupState {
    /* 0x00 */ s32 state;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ u8 unk08[0xC];
    /* 0x14 */ void *record;
    /* 0x18 */ s32 entryId;
    /* 0x1C */ u8 unk1C[9];
    /* 0x25 */ char text[0x80];
};

struct SaveSlotView {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ u16 id;
};

struct HintCandidates {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u16 ids[6];
};

struct PlayerView {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 level;
};

struct HintRecord {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 levelRequirement;   /* bit 15 is a flag */
    /* 0x04 */ u8 unk04[6];
    /* 0x0A */ u16 flagsB;
    /* 0x0C */ u8 unk0C[0xA];
    /* 0x16 */ u16 flagsA;
};

#define HINT_CANDIDATE_COUNT 6
#define HINT_RECENT_COUNT 6
#define HINT_KNOWN_COUNT 32
#define HINT_POPUP_STATE 7
#define HINT_KIND 10
#define HINT_LEVEL_WINDOW 6
#define HINT_TABLE 0x43

extern "C" {
extern PopupState *g_popupState;
extern u32 DAT_005f18ec[HINT_RECENT_COUNT];   /* most recent first */
extern u32 DAT_005f190c[HINT_KNOWN_COUNT];     /* ids already shown */

SaveSlotView *saveSlotFindSelected(void);
s32 gameFlagIsSet(s32 flag);
s32 randRange(u32 maximum);
HintCandidates *FUN_004bb80c(u32 owner);
PlayerView *gameGetPlayerData(void);
HintRecord *dataTable00FindById(u32 id);
HintRecord *FUN_00184310(u32 id);
void *FUN_002d8b58(s32 kind, u32 id);
void rt_memcpy(void *destination, const void *source, u32 size);
const char *FUN_00180118(u32 id);
void textFormatBuffer(char *out, const void *format, const char *argument);

static __inline bool hintInList(const u32 *list, s32 count, u32 id)
{
    for (s32 i = 0; i < count; i += 2) {
        if (list[i] == id || list[i + 1] == id)
            return true;
    }
    return false;
}

void FUN_00294cfc(u32 owner)
{
    FUN_00152f44();
    if (g_popupState->state != 0)
        return;
    SaveSlotView *slot = saveSlotFindSelected();
    if (slot == NULL)
        return;
    if (gameFlagIsSet(0x1A2) != 0 && randRange(99) + 1 < 0x33)
        return;
    if (gameFlagIsSet(0x15) == 0)
        return;

    HintCandidates *candidates = FUN_004bb80c(owner);
    s32 level = gameGetPlayerData()->level;
    s32 lowest = level - HINT_LEVEL_WINDOW;
    u32 chosen = 0;
    for (s32 i = 0; i < HINT_CANDIDATE_COUNT; i++) {
        u32 id = candidates->ids[i];
        if (FUN_002a4b28(id) != 0)
            continue;
        HintRecord *record = dataTable00FindById(id);
        if ((FUN_00184310(id)->flagsB & 1) != 0 && (dataTable00FindById((u16)id)->flagsA & 4) != 0
            && !hintInList(DAT_005f190c, HINT_KNOWN_COUNT, id)
            && !hintInList(DAT_005f18ec, HINT_RECENT_COUNT, id)) {
            s32 requirement = record->levelRequirement & 0x7FFF;
            if (level >= requirement && requirement >= lowest) {
                chosen = id;
                break;
            }
        }
    }

    DataTableView<PopupEntry> table(HINT_TABLE, 0);
    if (chosen == 0 || table.count <= 0)
        return;
    for (u32 i = 0; (s32)i < (s32)table.count; i++) {
        DataTableView<PopupEntry> view(HINT_TABLE, 0);
        PopupEntry *entry = view.at(i);
        if (entry->kind != HINT_KIND || entry->id != slot->id)
            continue;
        if (entry->requireFlag != 0 && gameFlagIsSet(entry->requireFlag) == 0)
            continue;
        if (entry->excludeFlag != 0 && gameFlagIsSet(entry->excludeFlag) != 0)
            continue;
        if (randRange(99) + 1 > entry->chance)
            continue;

        PopupState *popup = g_popupState;
        popup->state = HINT_POPUP_STATE;
        popup->unk04 = 0;
        void *record = FUN_002d8b58(HINT_KIND, slot->id);
        popup = g_popupState;
        popup->record = record;
        popup->entryId = slot->id;
        u32 format[19];
        rt_memcpy(format, record, 0x48);
        textFormatBuffer(g_popupState->text, format, FUN_00180118((u16)chosen));

        /* Move the id to the front of the recent list unless it is already there. */
        s32 index;
        for (index = 0; index < HINT_RECENT_COUNT; index++) {
            if (DAT_005f18ec[index] == chosen)
                break;
            if (DAT_005f18ec[index] == 0) {
                DAT_005f18ec[index] = chosen;
                break;
            }
        }
        if (index == HINT_RECENT_COUNT) {
            for (s32 shift = HINT_RECENT_COUNT - 1; shift > 0; shift--)
                DAT_005f18ec[shift] = DAT_005f18ec[shift - 1];
            DAT_005f18ec[0] = chosen;
        }
        g_popupState->record = g_popupState->text;
        return;
    }
}

} /* extern "C" */
