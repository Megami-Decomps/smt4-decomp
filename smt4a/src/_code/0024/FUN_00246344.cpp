/* NON_MATCHING: the readable level-limit test removes retail redundant lower-bound comparisons and changes register allocation. */
/* Prepares an idle party popup from the selected slot when its unit meets the level limit. */
#include "map/mapDepart.h"

struct PopupState {
    u32 state;
    u32 timer;
    u8 unk08[0xC];
    union { u32 key; const char *text; } message;
    u32 slotId;
    u8 unk1C[9];
    char text[72];
};
extern "C" {
extern PopupState *g_popupState;
extern GameStateA g_gameState;
void FUN_00152f44(void);
void *saveSlotFindSelected(void);
s32 gameFlagIsSet(u32 flag);
u32 randRange(u32 maximum);
void *dataTable00FindById(u16 id);
void *gameGetPlayerData(void);
const char *FUN_002d8b58(u32 kind, u16 slot);
void rt_memcpy(void *destination, const void *source, u32 bytes);
u32 FUN_00180118(u32 value);
void textFormatBuffer(char *destination, const char *format, u32 value);

void FUN_00246344(void)
{
    struct SlotView {
        u8 record[0x12C];
        u16 id;
    };
    struct SelectedUnitView {
        u8 unk000[0x308];
        u32 unitId;
    };
    struct TableLevelView { u16 id; u16 level; };
    FUN_00152f44();
    if (g_popupState->state != 0) {
        return;
    }
    SlotView *slot = (SlotView *)saveSlotFindSelected();
    if (slot == NULL || (gameFlagIsSet(418) && randRange(99) + 1 < 51)) {
        return;
    }
    SelectedUnitView *selection = (SelectedUnitView *)&g_gameState;
    u32 unitId = selection->unitId;
    u16 tableLevel = ((TableLevelView *)dataTable00FindById((u16)unitId))->level & 0x7FFF;
    u16 playerLevel = *(u16 *)((u8 *)gameGetPlayerData() + 0x62);
    if (selection->unitId == 0 || playerLevel > tableLevel + 5) {
        return;
    }
    g_popupState->state = 12;
    g_popupState->timer = 0;
    const char *message = FUN_002d8b58(14, slot->id);
    g_popupState->message.text = message;
    g_popupState->slotId = slot->id;
    char format[72];
    rt_memcpy(format, message, sizeof(format));
    u32 value = FUN_00180118((u16)unitId);
    textFormatBuffer(g_popupState->text, format, value);
    g_popupState->message.text = g_popupState->text;
}
}
