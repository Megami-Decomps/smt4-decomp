/* NON_MATCHING: readable rebuild from asm of the battle command menu's result selection; retail shares its skip/candidate tails by jumps (the draft's six gotos) and computes the work-block offsets from three base registers, which armcc here emits from the structured conditions. */
#include "common.h"
#include "ui/PartyPanelCapacity.h"
#include "util/FUN_002a4878.h"
#include "util/FUN_002a4878.h"

/* One command-menu entry (only the fields read here). */
struct CommandEntry {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 valid;
    /* 0x02 */ u8 unk02[0x59];
    /* 0x5B */ u8 limitedByBattle;
    /* 0x5C */ u16 flagA;
    /* 0x5E */ u16 flagB;
    /* 0x60 */ u32 attributes;     /* bit 0: needs the target to be free */
};

/* A party member record (only the fields read here). */
struct MemberRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 equipment;
};

struct EquipmentInfo {
    /* 0x00 */ u8 unk00[0xB3];
    /* 0xB3 */ u8 flags;           /* bit 2: allows the command */
};

/* The battle command work (only the fields read here). */
struct CommandWork {
    /* 0x0000 */ u8 unk0000[0x387C];
    /* 0x387C */ s32 mode;
    /* 0x3880 */ u8 unk3880[0x10];
    /* 0x3890 */ s32 selected;
    /* 0x3894 */ u8 unk3894[0x28];
    /* 0x38BC */ u8 lists[0x7D0];  /* one 100-byte list per selection */
    /* 0x408C */ u8 unk408C[0x161];
    /* 0x41ED */ u8 blocked;
    /* 0x41EE */ u8 unk41EE[0x22];
    /* 0x4210 */ s16 targets[8];
};

struct BattleState {
    /* 0x0000 */ u8 unk0000[0x45A0];
    /* 0x45A0 */ u32 maskA;
    /* 0x45A4 */ u32 maskB;
};

struct BattleMasks {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 maskA;
    /* 0x2C */ u32 maskB;
};

extern "C" {
extern BattleMasks DAT_00573b88;

u8 *gameGetSlotTable(void);
MemberRecord *gameGetSlotRecord(s32 id);
CommandEntry *FUN_002cc228(u32 index, s32 first);
s32 gameFlagIsSet(u32 flag);
s32 gameDataFlagTestBit(u32 flag);
BattleState *btlGetMainState(void);
s32 idListHasFlaggedRecord(MemberRecord *member);
s32 FUN_00291e14(void);
EquipmentInfo *FUN_00184310(u32 equipment);
s32 FUN_002b24fc(void);

/* Whether a target command is usable by the member: allowed by the member's equipment when no
 * flagged record applies. */
static bool targetCommandAllowed(CommandEntry *entry, MemberRecord *member)
{
    if ((entry->attributes & 1) || FUN_00291e14() == 0 || FUN_00291e14() == 0)
        return false;
    EquipmentInfo *info = FUN_00184310(member->equipment);
    return info != NULL && (info->flags & 4) != 0;
}

/* Picks which command the menu returns for the current selection: walks the ten command slots,
 * keeps the usable entries and returns the code of the one under the cursor. */
u32 FUN_002cc9e0(CommandWork *work, s32 inBattle)
{
    if (inBattle != 0 && work->mode == 6)
        return 11;
    u8 *table = gameGetSlotTable();
    CommandEntry *entry = NULL;
    s32 count = 0;
    for (s32 t = 0; t < 10; t++) {
        entry = FUN_002cc228(t & 0xFF, work->selected == 0);
        MemberRecord *member = NULL;
        if (work->selected != 0 && (s8)table[0x1C9F + work->selected] >= 0)
            member = gameGetSlotRecord((s8)gameGetSlotTable()[0x1C9F + work->selected]);
        if (entry == NULL || entry->valid != 1)
            continue;
        if (entry->flagA != 0 && gameFlagIsSet(entry->flagA) == 0)
            continue;
        if (entry->flagB != 0 && gameDataFlagTestBit(entry->flagB) == 0)
            continue;
        if (entry->limitedByBattle) {
            BattleState *battle = btlGetMainState();
            if ((DAT_00573b88.maskA & battle->maskA) | (battle->maskB & DAT_00573b88.maskB))
                continue;
        }
        if (entry->kind == 2)
            continue;
        if (entry->kind == 5 && work->blocked != 0)
            continue;
        if (entry->kind == 3 && work->targets[work->selected] != -1 && member != NULL &&
            idListHasFlaggedRecord(member) == 0 && !targetCommandAllowed(entry, member))
            continue;
        if (entry->kind == 9 && FUN_002b24fc() == 0)
            continue;
        if ((entry->attributes & 1) && FUN_00291e14() != 0)
            continue;
        if (FUN_002a4878(reinterpret_cast<const Object *>(work->lists + work->selected * 100)) == count)
            break;
        count++;
    }
    if (entry == NULL)
        return 5;
    switch (entry->kind) {
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 7;
    case 4:
        return 3;
    case 5:
        return 10;
    case 6:
        return 9;
    case 7:
        return 4;
    case 9:
        return 12;
    }
    return 5;
}

} /* extern "C" */
