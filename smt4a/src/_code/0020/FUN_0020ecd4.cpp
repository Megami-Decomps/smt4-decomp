/* NON_MATCHING: retail keeps shared constants 0 (r8) and 1 (r6) in registers and has one exit for the no-slot and success returns; build rematerialises them (record null select, timer store and epilogue order differ). */
#include "common.h"
#include "gamedata/DataTable.h"
#include "code/Code0015.h"
#include "mapnavi/naviMain.h"
#include "gamedata/SaveSlotTable.h"

struct StatusEventRecord {
    u32 id;
    u32 type;
    s16 requiredFlag;
    s16 forbiddenFlag;
    s16 chance;
    u8 unk0E[0x12];
};

struct StatusPopupState {
    s32 state;
    s32 phase;
    u8 unk08[0x0C];
    char *content;
    s32 value;
    u8 unk1C[9];
    char text[0x40];
};

struct SaveSlotView {
    u8 unk00[0x12C];
    u16 statusId;
};

struct GameStateView {
    u8 unk00[0x390];
    s32 statusTimer;
};

extern "C" {
extern GameStateView g_gameState;
extern StatusPopupState *g_popupState;
s32 gameFlagIsSet(u32 flag);
s32 randRange(s32 max);
char *FUN_002d8b58(u32 kind, u32 id);
void *rt_memcpy(void *dest, const void *src, u32 size);
int textFormatBuffer(char *dest, const char *name, const char *format);

/* Tick the poison/sickness counter and start the status popup when a matching event record fires. */
u32 FUN_0020ecd4(void)
{
    char name[0x48];
    FUN_00152f44();
    if (playerHasFlagBit(5) != 0 || playerHasFlagBit(9) != 0) {
        if (g_gameState.statusTimer != 0) {
            g_gameState.statusTimer = g_gameState.statusTimer + 1;
            if (g_gameState.statusTimer > 10)
                g_gameState.statusTimer = 0;
        }
    }
    if (g_popupState->state == 0) {
        SaveSlotView *slot = (SaveSlotView *)(s32)saveSlotFindSelected();
        if (slot == 0)
            return 0;
        if ((gameFlagIsSet(0x1A2) == 0 || randRange(99) + 1 > 50) &&
            (playerHasFlagBit(5) != 0 || playerHasFlagBit(9) != 0) && g_gameState.statusTimer == 0) {
            g_gameState.statusTimer = 1;
            void *table = dataTableGet(0x43, 0);
            dataTableGetEntries(table);
            s32 count = dataTableGetCount(table);
            for (u32 i = 0; (s32)i < count; i++) {
                void *recordTable = dataTableGet(0x43, 0);
                StatusEventRecord *records = static_cast<StatusEventRecord *>(dataTableGetEntries(recordTable));
                StatusEventRecord *record = i < dataTableGetCount(recordTable) ? records + i : 0;
                if (record->type != 4 || record->id != slot->statusId)
                    continue;
                if (record->requiredFlag != 0 && gameFlagIsSet(record->requiredFlag) == 0)
                    continue;
                if (record->forbiddenFlag != 0 && gameFlagIsSet(record->forbiddenFlag) != 0)
                    continue;
                if (randRange(99) + 1 > record->chance)
                    continue;
                g_popupState->state = 6;
                g_popupState->phase = 0;
                g_popupState->value = slot->statusId;
                g_popupState->content = FUN_002d8b58(4, slot->statusId);
                rt_memcpy(name, g_popupState->content, 0x40);
                if (playerHasFlagBit(5) != 0)
                    textFormatBuffer(g_popupState->text, name, "\x82\x6f\x82\x8f\x82\x89\x82\x93\x82\x8f\x82\x8e");
                else if (playerHasFlagBit(9) != 0)
                    textFormatBuffer(g_popupState->text, name, "\x82\x72\x82\x89\x82\x83\x82\x8b");
                g_popupState->content = g_popupState->text;
                return 1;
            }
        }
    }
    return 0;
}
}
