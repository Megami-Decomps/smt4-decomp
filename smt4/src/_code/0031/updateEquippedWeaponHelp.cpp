/* NON_MATCHING: only the initial global-address load is scheduled two instructions later; -O2 candidate. */
#include "ui/ButtonHelp.h"
#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

struct EquipmentHelpPlayer { u16 equippedId; };
struct EquipmentHelpHolder {
    ButtonHelpGlobals prefix;
    RelativeDirectory *defaultDirectory;
};
extern "C" {
extern ButtonHelpGlobals g_buttonHelp;
const EquipmentHelpPlayer *gameGetPlayerData();
void FUN_0029ede8(u32, u32, s32, s32);
void FUN_002907c4(char *, u32);
s32 textFormatBuffer(char *, const char *, ...);
void textEncodeFontSlot(u32, const char *);
void btlFormatCategoryLabel(char *, u32);
void skillFormatTargetLabel(char *, s32);
void FUN_001f4568(u32, u32, u32, char *);
void asdTextDrawDirectoryEntry(AsdText *, u32, s32, s32, s32, RelativeDirectory *, u32);

void updateEquippedWeaponHelp(RelativeDirectory *directory, u32 index)
{
    ButtonHelpWork *help = g_buttonHelp.work;
    RankedTableRecord *entry = dataTable08Sub2GetRecord(gameGetPlayerData()->equippedId);
    if (!entry) {
        help->unk4CB = 0;
        return;
    }
    help->unk55C = 1;
    help->unk4CB = 1;
    char text[128];
    u8 hits = entry->unk00[0x58];
    if ((hits & 0xf) == (hits >> 4)) {
        FUN_0029ede8(0x25, hits & 0xf, -1, 0);
    } else {
        char minimum[8], maximum[8];
        FUN_002907c4(minimum, hits & 0xf);
        FUN_002907c4(maximum, entry->unk00[0x58] >> 4);
        textFormatBuffer(text, "%s\x81\x60%s", minimum, maximum); // CP932 full-width wave dash.
        textEncodeFontSlot(0x25, text);
    }
    btlFormatCategoryLabel(text, rankedTableRecordGetSortFlags(entry) >> 20);
    textEncodeFontSlot(0x26, text);
    skillFormatTargetLabel(text, entry->category);
    textEncodeFontSlot(0x27, text);
    // The original labels are full-width Latin characters encoded in CP932.
    if ((s8)entry->rank == 0)
        textFormatBuffer(text, "\x82\x6d\x82\x8f\x82\x8e\x82\x85"); // None
    if ((s8)entry->rank == 1)
        textFormatBuffer(text, "\x82\x6a\x82\x6e"); // KO
    if ((s8)entry->rank == 5)
        textFormatBuffer(text, "\x82\x6f\x82\x8f\x82\x89\x82\x93\x82\x8f\x82\x8e"); // Poison
    if ((s8)entry->rank == 6)
        textFormatBuffer(text, "\x82\x6f\x82\x81\x82\x8e\x82\x89\x82\x83"); // Panic
    if ((s8)entry->rank == 7)
        textFormatBuffer(text, "\x82\x72\x82\x8c\x82\x85\x82\x85\x82\x90"); // Sleep
    if ((s8)entry->rank == 8)
        textFormatBuffer(text, "\x82\x61\x82\x89\x82\x8e\x82\x84"); // Bind
    if ((s8)entry->rank == 9)
        textFormatBuffer(text, "\x82\x72\x82\x89\x82\x83\x82\x8b"); // Sick
    textEncodeFontSlot(0x28, text);
    FUN_001f4568(1, 0, 0, text);
    textEncodeFontSlot(0x29, text);
    if (!directory)
        directory = ((EquipmentHelpHolder *)&g_buttonHelp)->defaultDirectory;
    asdTextDrawDirectoryEntry((AsdText *)help->unk558, 3, -1, 0, 3, directory, index);
}
}
