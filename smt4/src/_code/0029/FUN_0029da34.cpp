/* NON_MATCHING: only the initial button-help global/work loads are scheduled differently around saved argument moves. */
#include "ui/ButtonHelpGlobal.h"
#include "gamedata/NkmBaseRecord.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "util/MemoryHelpers.h"

extern "C" {
void FUN_001f4568(s32 mode, u32 context, u32 devil, char *output);
void skillFormatTargetLabel(char *output, s32 target);
s32 btlFormatCategoryLabel(char *output, s32 category);
void FUN_002907c4(char *output, s32 value);
void asdTextDrawDirectoryEntry(AsdText *text, u32 font, s32 mode, s32 x, s32 y,
    RelativeDirectory *directory, u32 index);
void FUN_0029ede8(s32 slot, u32 value, u32 mask, u32 flags);
s32 textFormatBuffer(char *output, const char *format, ...);

void FUN_0029da34(RelativeDirectory *directory, u32 entry, u16 devilId, u32 context)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    const NkmBaseRecord *devil = nkmBaseGetRecord(devilId);
    if (devil == NULL) {
        work->unk4CB = 0;
        return;
    }
    work->unk55C = 1;
    work->unk4CB = 1;
    char buffer[128];
    u32 minimumHits = (devil->attackProperties >> 5) & 7;
    if (minimumHits == ((devil->attackProperties >> 8) & 7)) {
        FUN_0029ede8(0x25, minimumHits, ~0u, 0);
    } else {
        char minimum[8];
        char maximum[8];
        FUN_002907c4(minimum, minimumHits);
        FUN_002907c4(maximum, (devil->attackProperties >> 8) & 7);
        textFormatBuffer(buffer, "%s\x81\x60%s", minimum, maximum);
        textEncodeFontSlot(0x25, reinterpret_cast<const u8 *>(buffer));
    }
    btlFormatCategoryLabel(buffer, devil->element);
    textEncodeFontSlot(0x26, reinterpret_cast<const u8 *>(buffer));
    skillFormatTargetLabel(buffer, (devil->attackProperties >> 1) & 15);
    textEncodeFontSlot(0x27, reinterpret_cast<const u8 *>(buffer));
    if (devil->attackAilment == 0)
        textFormatBuffer(buffer, "\x82\x6d\x82\x8f\x82\x8e\x82\x85"); // None
    if (devil->attackAilment == 1)
        textFormatBuffer(buffer, "\x82\x6a\x82\x6e"); // KO
    if (devil->attackAilment == 5)
        textFormatBuffer(buffer, "\x82\x6f\x82\x8f\x82\x89\x82\x93\x82\x8f\x82\x8e"); // Poison
    if (devil->attackAilment == 6)
        textFormatBuffer(buffer, "\x82\x6f\x82\x81\x82\x8e\x82\x89\x82\x83"); // Panic
    if (devil->attackAilment == 7)
        textFormatBuffer(buffer, "\x82\x72\x82\x8c\x82\x85\x82\x85\x82\x90"); // Sleep
    if (devil->attackAilment == 8)
        textFormatBuffer(buffer, "\x82\x61\x82\x89\x82\x8e\x82\x84"); // Bind
    if (devil->attackAilment == 9)
        textFormatBuffer(buffer, "\x82\x72\x82\x89\x82\x83\x82\x8b"); // Sick
    textEncodeFontSlot(0x28, reinterpret_cast<const u8 *>(buffer));
    FUN_001f4568(0, context, devilId, buffer);
    textEncodeFontSlot(0x29, reinterpret_cast<const u8 *>(buffer));
    if (directory == NULL)
        directory = reinterpret_cast<RelativeDirectory *>(g_buttonHelp.mbm);
    asdTextDrawDirectoryEntry(reinterpret_cast<AsdText *>(work->unk558), 3, -1, 0,
        3, directory, entry);
}
}
