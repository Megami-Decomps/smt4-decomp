#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"

extern "C" {
void FUN_004a0bac(s32 a, s32 b);
s32 scrWorkGetValue(s32 index);
void scrWorkSetValue(s32 index, s32 value);
s32 messageForwardDefaultMode(s32 buffer, s32 message, s32 line, s32 a, s32 b);
u32 dataTable01GetRecordWithAocOverride(u32 id);
void messageSetScriptDisplayMode(void);
s32 scrGetCommandFrame(void);
s32 gameSlotTableFindFree(void);
s32 dataTableValueOrZero(s32 slot);
u32 gameGetPlayerName(void);

/* Script command: show the party introduction messages — a header, the player's name, then every party member. */
s32 FUN_00348850(s32 phase)
{
    if (phase == 0) {
        if (scrGetCommandFrame() == 0) {
            FUN_004a0bac(0, 1);
            asdDebugHookVoid();
            scrWorkSetValue(0, 0);
            scrWorkSetValue(1, 0);
            scrWorkSetValue(2, 0);
        }
        s32 result = 0;
        s32 buffer = dataTableValueOrZero(30);
        switch (scrWorkGetValue(0)) {
        case 0: {
            s32 message = 15;
            if (gameSlotTableFindFree() == 0)
                message = 14;
            messageSetScriptDisplayMode();
            result = messageForwardDefaultMode(buffer, message, scrWorkGetValue(1), 6, 0);
            scrWorkSetValue(1, scrWorkGetValue(1) + 1);
            break;
        }
        case 1:
            scrSetStringSlot(0x28, reinterpret_cast<const char *>(gameGetPlayerName()));
            result = messageForwardDefaultMode(buffer, 13, scrWorkGetValue(1), 6, 0);
            scrWorkSetValue(1, scrWorkGetValue(1) + 1);
            break;
        case 2: {
            s32 count = gameSlotTableFindFree();
            SaveSlotTableA *slots = gameGetSlotTable();
            while (scrWorkGetValue(2) < count) {
                gameGetSlotRecord(slots->party[scrWorkGetValue(2)]);
                scrWorkSetValue(2, scrWorkGetValue(2) + 1);
            }
            if (scrWorkGetValue(2) >= count) {
                result = 1;
                break;
            }
        }
        /* fall through */
        case 3: {
            SlotRecordA *unit = gameGetSlotRecord(gameGetSlotTable()->party[scrWorkGetValue(2)]);
            scrSetStringSlot(0x28, reinterpret_cast<const char *>(dataTable01GetRecordWithAocOverride(unit->id)));
            result = messageForwardDefaultMode(buffer, 13, scrWorkGetValue(1), 6, 0);
            scrWorkSetValue(1, scrWorkGetValue(1) + 1);
            if (result == 1) {
                scrWorkSetValue(0, 2);
                scrWorkSetValue(1, 0);
                scrWorkSetValue(2, scrWorkGetValue(2) + 1);
                result = 0;
            }
            break;
        }
        }
        return result;
    }
    if (phase == 1 && scrGetCommandFrame() == 0) {
        FUN_004a0bac(0, 1);
        asdDebugHookVoid();
        scrWorkSetValue(0, 0);
        scrWorkSetValue(1, 0);
        scrWorkSetValue(2, 0);
    }
    return 1;
}
}
