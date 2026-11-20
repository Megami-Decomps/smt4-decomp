#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
void partyRestoreGroup(s32 a, s32 b);
s32 scrWorkGetValue(s32 index);
void scrWorkSetValue(s32 index, s32 value);
s32 messageForwardDefaultMode(s32 buffer, s32 message, s32 line, s32 a, s32 b);
void textEncodeFontSlot(s32 slot, u32 value);
u32 dataTable01FindByIdWithAoc(u32 id);
void messageSetConfirmDisplayMode(void);
s32 scrGetCommandFrame(void);
s8 *gameGetSlotTable(void);
s32 gameCountUnits(void);
s32 fileSlotGetBuffer(s32 slot);
u32 gameGetPlayerName(void);

/* Script command: show the party introduction messages — a header, the player's name, then every party member. */
s32 FUN_002d8910(s32 phase)
{
    if (phase == 0) {
        if (scrGetCommandFrame() == 0) {
            partyRestoreGroup(0, 1);
            asdDebugHookVoid();
            scrWorkSetValue(0, 0);
            scrWorkSetValue(1, 0);
            scrWorkSetValue(2, 0);
        }
        s32 result = 0;
        s32 buffer = fileSlotGetBuffer(30);
        switch (scrWorkGetValue(0)) {
        case 0: {
            s32 message = 15;
            if (gameCountUnits() == 0)
                message = 14;
            messageSetConfirmDisplayMode();
            result = messageForwardDefaultMode(buffer, message, scrWorkGetValue(1), 6, 0);
            scrWorkSetValue(1, scrWorkGetValue(1) + 1);
            break;
        }
        case 1:
            textEncodeFontSlot(0x28, gameGetPlayerName());
            result = messageForwardDefaultMode(buffer, 13, scrWorkGetValue(1), 6, 0);
            scrWorkSetValue(1, scrWorkGetValue(1) + 1);
            break;
        case 2: {
            s32 count = gameCountUnits();
            s8 *slots = gameGetSlotTable();
            while (scrWorkGetValue(2) < count) {
                gameGetUnitRecord(slots[0x90F0 + scrWorkGetValue(2)]);
                scrWorkSetValue(2, scrWorkGetValue(2) + 1);
            }
            if (scrWorkGetValue(2) >= count) {
                result = 1;
                break;
            }
        }
        /* fall through */
        case 3: {
            StatBlock *unit = gameGetUnitRecord(gameGetSlotTable()[0x90F0 + scrWorkGetValue(2)]);
            textEncodeFontSlot(0x28, dataTable01FindByIdWithAoc(unit->id));
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
        partyRestoreGroup(0, 1);
        asdDebugHookVoid();
        scrWorkSetValue(0, 0);
        scrWorkSetValue(1, 0);
        scrWorkSetValue(2, 0);
    }
    return 1;
}
}
