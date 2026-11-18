#include "camp/CecMenu.h"

#include "event/2dEvent/Npc2d.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/SaveSlotTableIV.h"
#include "script/scrScriptProcess.h"

extern "C" {
void scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
void buttonHelpSetPreset(s32 preset);
void cecProcessStart(void);
void FUN_0025461c(void);
void cecProcessDestroy(void);
s32 flagWordTestBit(const void *record, u32 flag);
void objectFlagsClear(void *record, u32 flag);
void FUN_0026b9bc(void);

/* Runs the communication operation, clears the affected stock flags, then runs its closing script. */
u32 FUN_002ece60(CampCecMenu *work)
{
    u32 result = 0;
    switch (work->scriptFlow.phase) {
    case 0:
        if (work->scriptResource != 0 && work->messageFile != 0) {
            ScriptProcess *process = scrScriptProcessCreate(work->scriptResource, (void *)work->messageFile);
            s32 entry = work->scriptFlow.kind == 1 ? 0x1C : 0x1D;
            work->script.process = process;
            scrScriptProcessStartEntry(process, entry);
            buttonHelpSetPreset(0x3C);
            cecProcessStart();
            FUN_0025461c();
            cecProcessDestroy();
            FUN_00254600(0);
            ++work->scriptFlow.phase;
        }
        break;
    case 1:
        if (scrRunOpcodesStub(work->script.process) == 2) {
            SaveSlotTableIV *slots = gameGetSlotTable();
            for (s32 index = 0; index < 24; ++index) {
                if (slots->stock[index] >= 0) {
                    if (flagWordTestBit(gameGetUnitRecord(slots->stock[index]), 2) != 0) {
                        objectFlagsClear(gameGetUnitRecord(slots->stock[index]), 4);
                    }
                }
            }
            FUN_00254600(0);
            FUN_0026b9bc();
            scrScriptProcessStartEntry(work->script.process, 0x1E);
            ++work->scriptFlow.phase;
        }
        break;
    case 2:
        if (scrRunOpcodesStub(work->script.process) == 2) {
            work->scriptFlow.phase = 0;
            work->state = 15;
            result = 2;
        }
        break;
    }
    return result;
}
}
