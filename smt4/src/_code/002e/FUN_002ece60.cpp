/* NON_MATCHING: Script-kind load versus process-store scheduling and the final state/reset value registers differ. */
#include "camp/CecMenu.h"
#include "shard/W7_W7Match2_PartyDamage.h"

extern "C" {
u32 FUN_00297060(u32 resource, u32 screen);
void scrScriptProcessStartEntry(u32 process, s32 entry);
void buttonHelpSetPreset(s32 preset);
void cecProcessStart(void);
void FUN_0025461c(void);
void cecProcessDestroy(void);
void FUN_00254600(s32 mode);
s32 scrRunOpcodesStub(u32 process);
PartyDamageSlotsIV *gameGetSlotTable(void);
void *gameGetUnitRecord(s32 slot);
s32 flagWordTestBit(const void *record, u32 flag);
void objectFlagsClear(void *record, u32 flag);
void FUN_0026b9bc(void);

/* Runs the communication operation, clears the affected stock flags, then runs its closing script. */
u32 FUN_002ece60(CampCecMenu *work)
{
    u32 result = 0;
    switch (work->scriptFlow.phase) {
    case 0:
        if (work->scriptResource != 0 && work->unkCF8 != 0) {
            work->script.process = FUN_00297060(work->scriptResource, work->unkCF8);
            scrScriptProcessStartEntry(work->script.process, work->scriptFlow.kind == 1 ? 0x1C : 0x1D);
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
            PartyDamageSlotsIV *slots = gameGetSlotTable();
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
            work->state = 15;
            result = 2;
            work->scriptFlow.phase = 0;
        }
        break;
    }
    return result;
}
}
