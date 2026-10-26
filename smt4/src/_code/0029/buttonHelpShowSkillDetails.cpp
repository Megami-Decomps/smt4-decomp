/* Shows a skill's category, target, and description in the button-help panel. */
#include "ui/ButtonHelp.h"
#include "shard/PassiveSkill.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "gamedata/DataTable40.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;
RelativeDirectory *FUN_002b47ec(void);
s32 idIsAbove400(s32 id);
void btlFormatCategoryLabel(char *buffer, u32 category);
void textEncodeFontSlot(s32 slot, const u8 *text);
void skillFormatTargetLabel(char *buffer, s32 target);
void textFormatBuffer(char *buffer, const char *format, ...);
void asdTextDrawDirectoryEntry(AsdText *text, u32 font, s32 mode, s32 x, s32 y, RelativeDirectory *directory, u32 index);

void buttonHelpShowSkillDetails(s32 skill)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    if (skill == 0) {
        work->unk4CB = 0;
        return;
    }
    g_buttonHelp.work->unk55C = 1;
    work->unk4CB = 1;
    RelativeDirectory *directory = FUN_002b47ec();
    {
        char label[96];
        if (idIsAbove400(skill)) {
            const PassiveSkillRecord *record = passiveSkillLookupRecord(skill);
            btlFormatCategoryLabel(label, (record->affinity & 0xFFFF) >> 11);
            textEncodeFontSlot(36, (const u8 *)label);
            textFormatBuffer(label, "\x82\x72\x82\x85\x82\x8C\x82\x86");
            textEncodeFontSlot(37, (const u8 *)label);
        } else {
            /* The target/category word is past the shared active-skill prefix. */
            struct ActiveSkillView { u8 unk00[0x28]; u32 flags; };
            const ActiveSkillView *record = (const ActiveSkillView *)dataTable40FindById(skill);
            btlFormatCategoryLabel(label, (record->flags >> 12) & 31);
            textEncodeFontSlot(36, (const u8 *)label);
            skillFormatTargetLabel(label, (record->flags >> 5) & 15);
            textEncodeFontSlot(37, (const u8 *)label);
        }
    }
    asdTextDrawDirectoryEntry((AsdText *)work->unk558, 3, -1, 0, 3, directory, skill);
}
}
