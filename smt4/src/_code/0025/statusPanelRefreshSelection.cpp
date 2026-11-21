#include "shard/GameGlobals.h"
#include "bible/bibleDevil.h"

namespace {
struct StatusRefreshMemberView { u8 prefix[0x4B]; u8 available; };
struct StatusSelectionRecord {
    s16 memberId;
    u16 level;
    u8 padding04[0x36];
    u8 entryData[0xE];
    u16 skills[8];
    u8 flags[0x40];
    u8 inventory[0x500];
};
}
extern "C" {
u32 countUnlockedSlots();
u32 flagCountUnlockedSlots(u32 flags);
void statusReplaceSkills(u16 *skills, u8 count);
void statusRefreshSkillsMarkNew(u16 *skills, u8 count);
StatusRefreshMemberView *partyMemberFindById(u32 id);
s32 statusCollectUnlearnedSkillsAboveLevel(u16 memberId, u32 level, const u16 *skills, u32 *result, s32 skip);
void statusDownRestoreTabForMode();
void FUN_00215a8c(const void *entry);
void statusDownSetSelectedEntryDescription(s16 id);
void statusBuildFlaggedDemonList(const u8 *flags);
void FUN_001ee8b4(const u8 *inventory);
void FUN_0026ae64();

/* The primary status selection record, stored at 0x1300 of the game data (the alternate one is at 0x18B0). */
static __inline StatusSelectionRecord *statusPrimarySelection(GameData *data)
{
    return (StatusSelectionRecord *)&data->unk1300;
}

// Refresh either stored status selection and synchronize its skill, description and inventory tabs.
void statusPanelRefreshSelection(s32 alternate)
{
    GameData *data = g_gameGlobals.data;
    StatusSelectionRecord *selection = statusPrimarySelection(data);
    if (alternate != 0)
        selection = reinterpret_cast<StatusSelectionRecord *>(data->unk18B0);
    u32 count = 8;
    if (statusPrimarySelection(data)->memberId < 0)
        count = countUnlockedSlots();
    else if (statusPrimarySelection(data)->memberId > 0 && data->unk1E66 != 6)
        count = flagCountUnlockedSlots(0);
    statusReplaceSkills(statusPrimarySelection(data)->skills, count);
    if (alternate != 0)
        statusRefreshSkillsMarkNew(reinterpret_cast<StatusSelectionRecord *>(data->unk18B0)->skills, count);
    u32 result[4] = {0, 0, 0, 0};
    if (selection->memberId > 0 && data->unk1E66 != 6) {
        s32 skip;
        if (data->unk1E66 == 2 || data->unk1E66 == 3) {
            StatusRefreshMemberView *member = partyMemberFindById((u16)statusPrimarySelection(data)->memberId);
            skip = member != NULL && member->available != 0;
        } else {
            skip = 0;
        }
        s8 selected = (s8)statusCollectUnlearnedSkillsAboveLevel(selection->memberId, selection->level, selection->skills, result, skip);
        statusDownSetSelectedIds(result, selected);
    } else {
        statusDownSetSelectedIds(NULL, -1);
    }
    if (data->unk1E67 == 6) {
        GameData *current = g_gameGlobals.data;
        current->unk12E4 = 0;
        statusDownRestoreTabForMode();
        current->unk1E63 = 0;
    }
    if (selection->memberId < 0) {
        FUN_00215a8c(selection->entryData);
        if ((s32)data->unk12E4 > 1) {
            data->unk12E4 = 1;
            statusDownRestoreTabForMode();
        }
    }
    if (selection->memberId > 0) {
        statusDownSetSelectedEntryDescription(selection->memberId);
        statusBuildFlaggedDemonList(selection->flags);
        FUN_001ee8b4(selection->inventory);
        if (FUN_00293aac() == 2) {
            data->unk12E4 = 1;
            statusDownRestoreTabForMode();
        }
    }
    FUN_0026ae64();
}
}
