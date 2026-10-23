/* NON_MATCHING: retail retains a separate primary-skill base and different saved registers; refresh behavior is reconstructed. */
#include "shard/GameGlobals.h"

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
u32 FUN_0029aafc();
u32 flagCountUnlockedSlots(u32 flags);
void FUN_00215b5c(u16 *skills, u8 count);
void FUN_002e2fb0(u16 *skills, u8 count);
StatusRefreshMemberView *partyMemberFindById(u32 id);
s32 FUN_0026a9cc(u16 memberId, u32 level, const u16 *skills, u32 *result, s32 skip);
void FUN_0026a978(const u32 *result, s32 selection);
void statusDownRestoreTabForMode();
void FUN_00215a8c(const void *entry);
void statusDownSetSelectedEntryDescription(s32 id);
void statusBuildFlaggedDemonList(const u8 *flags);
void FUN_001ee8b4(const u8 *inventory);
s32 FUN_00293aac();
void FUN_0026ae64();

// Refresh either stored status selection and synchronize its skill, description and inventory tabs.
void FUN_00258a24(s32 alternate)
{
    GameData *data = g_gameGlobals.data;
    StatusSelectionRecord *primary = reinterpret_cast<StatusSelectionRecord *>(&data->unk1300);
    StatusSelectionRecord *selection = primary;
    if (alternate != 0)
        selection = reinterpret_cast<StatusSelectionRecord *>(data->unk18B0);
    u32 count = 8;
    if (primary->memberId < 0)
        count = FUN_0029aafc();
    else if (primary->memberId > 0 && data->unk1E66 != 6)
        count = flagCountUnlockedSlots(0);
    FUN_00215b5c(primary->skills, count);
    if (alternate != 0)
        FUN_002e2fb0(reinterpret_cast<StatusSelectionRecord *>(data->unk18B0)->skills, count);
    u32 result[4] = {0, 0, 0, 0};
    if (selection->memberId > 0 && data->unk1E66 != 6) {
        s32 skip;
        if (data->unk1E66 == 2 || data->unk1E66 == 3) {
            StatusRefreshMemberView *member = partyMemberFindById((u16)primary->memberId);
            skip = member != NULL && member->available != 0;
        } else {
            skip = 0;
        }
        s8 selected = (s8)FUN_0026a9cc(selection->memberId, selection->level, selection->skills, result, skip);
        FUN_0026a978(result, selected);
    } else {
        FUN_0026a978(NULL, -1);
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
