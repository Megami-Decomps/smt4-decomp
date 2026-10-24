/* NON_MATCHING: readable rebuild of the NPC shop select script driver (step 0 lists up to three entries and starts the script entry for the count, steps 1-3 wait on the script); the stack frame matches retail (84 bytes) but armcc keeps the constants 0/1 in different registers (sl instead of r9) and orders the branch tests differently; the entry index passed in the unknown-selection case is assumed to be the found index. */
#include "common.h"

/* Record of one shop entry candidate (an id's table record). */
struct ShopEntryRecord {
    /* 0x00 */ u16 saveEntryId;
    /* 0x02 */ u8 unk02[0x3A];
    /* 0x3C */ u16 saveFlags;
    /* 0x3E */ u16 requiredFlag;
};

struct ShopSlot {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u16 id;
};

/* Driver state of the NPC shop select scene. */
struct NpcShopSelect {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 step;
    /* 0x0C */ s32 previousState;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u32 scriptTable;
    /* 0x18 */ u32 script;
    /* 0x1C */ u8 unk1C[0x70];
    /* 0x8C */ s32 choices[3];
    /* 0x98 */ u8 fromCancel;
    /* 0x99 */ u8 unk99[7];
    /* 0xA0 */ s32 selected;
};

extern "C" {
s32 scrRunOpcodesStub(u32 script);
s32 panelIsMissingOrFlagClear(void);
s32 messageGetChoiceResult(void);
s32 tableGroupFindEntryIndex(u32 table, const char *name);
void scrScriptProcessStartEntry(u32 script, s32 entry);
void sysPlaySe(s32 se);
void FUN_003c3e14(void);
void FUN_003c1060(void);
void fillThreeWordsWithByte(s32 *words, u32 value);
ShopEntryRecord *FUN_00184310(u32 id);
u32 FUN_00180118(u32 id);
void FUN_003180c4(s32 index, u32 value);
s32 gameFlagIsSet(u32 flag);
s32 gameDataCopySaveEntry(u16 id, u8 *out);

/* Steps the shop select script: step 0 lists the (up to 3) available entries and starts the script
 * entry for the count, steps 1..3 wait for the script and handle the chosen option. */
void FUN_003e32b0(NpcShopSelect *scene)
{
    switch (scene->step) {
    case 0: {
        s32 count = 0;
        fillThreeWordsWithByte(scene->choices, 0xFFFFFFFF);
        ShopSlot *slots = (ShopSlot *)scene;
        for (s32 i = 0; i < 3; i++) {
            ShopEntryRecord *record = FUN_00184310(slots[i].id);
            if (record == NULL)
                continue;
            if (record->requiredFlag != 0 && gameFlagIsSet(record->requiredFlag) == 0)
                continue;
            if ((record->saveFlags & 1) != 0) {
                u8 save[0x54];
                s32 found;
                if ((record->saveFlags & 0xFFFE) != 0)
                    found = gameDataCopySaveEntry(record->saveFlags >> 1, save);
                else
                    found = gameDataCopySaveEntry(record->saveEntryId, save);
                if (found == 0 || (*(u16 *)(save + 0x36) & 0xFC) == 0)
                    continue;
            }
            FUN_003180c4(count, FUN_00180118(slots[i].id));
            scene->choices[count] = i;
            count++;
        }
        FUN_003c1060();

        bool plain = scene->previousState == 5 || scene->previousState == 4 || scene->fromCancel != 0;
        s32 entry;
        if (count == 0) {
            entry = tableGroupFindEntryIndex(scene->scriptTable, "npcShop_NoSelect");
            if (entry > -1)
                scrScriptProcessStartEntry(scene->script, entry);
            scene->step = 2;
            return;
        }
        if (count == 1)
            entry = tableGroupFindEntryIndex(scene->scriptTable, plain ? "npcShop_Select_01_01" : "npcShop_Select_00_01");
        else if (count == 2)
            entry = tableGroupFindEntryIndex(scene->scriptTable, plain ? "npcShop_Select_01_02" : "npcShop_Select_00_02");
        else if (count == 3)
            entry = tableGroupFindEntryIndex(scene->scriptTable, plain ? "npcShop_Select_01" : "npcShop_Select_00");
        else
            return;
        if (entry < 0) {
            scene->step = 1;
            return;
        }
        scrScriptProcessStartEntry(scene->script, entry);
        scene->step = 1;
        return;
    }
    case 1:
        if (scrRunOpcodesStub(scene->script) == 2 && panelIsMissingOrFlagClear() != 0) {
            s32 choice = messageGetChoiceResult();
            if (choice == -1 || choice == 3) {
                scene->previousState = scene->state;
                scene->state = 6;
                scene->step = 0;
            } else {
                scene->selected = scene->choices[choice];
                if (scene->selected < 0) {
                    s32 entry = tableGroupFindEntryIndex(scene->scriptTable, "npcShop_Select_Unknwn");
                    if (entry > -1)
                        scrScriptProcessStartEntry(scene->script, entry);
                    scene->step = 3;
                    return;
                }
                scene->previousState = scene->state;
                scene->state = 4;
                scene->step = 0;
            }
            FUN_003c3e14();
            sysPlaySe(0);
        }
        return;
    case 2:
        if (scrRunOpcodesStub(scene->script) == 2) {
            scene->previousState = scene->state;
            scene->state = 7;
            scene->step = 0;
        }
        return;
    case 3:
        if (scrRunOpcodesStub(scene->script) == 2) {
            scene->fromCancel = 1;
            scene->step = 0;
        }
        return;
    }
}

} /* extern "C" */
