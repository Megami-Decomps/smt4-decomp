/* NON_MATCHING: menu tail addressing and count-clamp condition scheduling differ from retail. */
#include "shard/Shard0033.h"
#include "shard/PassiveSkill.h"

extern "C" {
extern MenuState *g_menuState;
void sysMemClear(void *destination, u32 size);
void rt_memcpy(void *destination, const void *source, u32 size);
s32 padGetMappedValue(s32 id);
void *gameGetSlotRecord(s32 index);
s32 partyFindSlotById(u32 id);
s32 FUN_004bd098(void *unit, s32 skillId);
s32 FUN_004c6bd0(s16 id, const ActiveSkillRecord *skill);
const ActiveSkillRecord *dataTable04FindById(s32 id);

// Set the short menu message and refresh its skill-use count for the current unit.
void FUN_00227af0(const char *text)
{
    // The menu's message/count tail extends beyond the shared MenuState prefix.
    struct MessageView {
        u8 unk000[0x10];
        u8 hasText;
        u8 useMappedCount;
        u8 unk012[2];
        s32 mode;
        s16 skillId;
        u8 unk01A[0x252];
        char text[61];
        u8 unk2A9[3];
        s32 unitId;
        u8 usePartySlot;
        u8 unk2B1[3];
        s32 count;
        u8 hideCount;
    };
    MessageView *menu = reinterpret_cast<MessageView *>(g_menuState);
    menu->hasText = 0;
    if (text != NULL) {
        sysMemClear(menu->text, sizeof(menu->text));
        for (s32 length = 0; length < 61; ++length) {
            if (text[length] == '\0') {
                rt_memcpy(menu->text, text, length + 1);
                menu->hasText = 1;
                break;
            }
        }
        menu = reinterpret_cast<MessageView *>(g_menuState);
        menu->count = 0;
        if (menu->mode == 2 && menu->hideCount != 1) {
            s32 count;
            if (menu->useMappedCount != 0) {
                count = padGetMappedValue(menu->skillId) - 1;
                menu->count = count;
                if (count <= 0) {
                    count = 0;
                }
            } else {
                if (menu->unitId <= 0) {
                    return;
                }
                if (menu->usePartySlot != 0) {
                    s32 slot = partyFindSlotById(static_cast<u16>(menu->unitId));
                    if (slot < 0) {
                        return;
                    }
                    void *unit = gameGetSlotRecord(slot);
                    count = FUN_004bd098(unit, menu->skillId);
                } else {
                    const ActiveSkillRecord *skill = dataTable04FindById(menu->skillId);
                    count = FUN_004c6bd0(static_cast<s16>(menu->unitId), skill);
                }
            }
            menu->count = count;
        }
    }
}
}
