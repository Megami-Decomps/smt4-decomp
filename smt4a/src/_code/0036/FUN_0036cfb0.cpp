#include "shard/W6_W6Match4_CampCecResumeState.h"
#include "shard/Shard0031.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
void scrScriptProcessStartEntry(ScriptProcess *script, s32 entry);
s32 scrRunOpcodesStub(ScriptProcess *script);
void sysPlaySe(s32 sound);
void cecProcessStart(void);
void cecProcessCall4(void);
void cecProcessDestroy(void);
void FUN_002a6480(u16 value);
void partyPanelRefreshFromSlotTable(void);
s32 bitsAt60Test(SlotRecordA *record, u32 flags);
void bitsAt60Clear(SlotRecordA *record, u32 flags);

// Run the CEC exchange scripts and clear exchanged party flags before returning to camp.
u32 FUN_0036cfb0(CampCecResumeState *state)
{
    u32 result = 0;
    switch (state->exchange.scriptStep) {
    case 0:
        if (state->launch.resource != NULL && state->launch.entry != 0) {
            ScriptProcess *script = scrScriptProcessCreate(state->launch.resource, state->launch.entry);
            s32 entry = state->exchange.exchangeKind == 1 ? 25 : 26;
            state->launch.script = script;
            scrScriptProcessStartEntry(script, entry);
            sysPlaySe(0x3e);
            cecProcessStart();
            cecProcessCall4();
            cecProcessDestroy();
            FUN_002a6480(0);
            ++state->exchange.scriptStep;
        }
        break;
    case 1:
        if (scrRunOpcodesStub(state->launch.script) == 2) {
            SaveSlotTableA *slots = gameGetSlotTable();
            for (s32 index = 0; index < 24; ++index) {
                if (slots->party[index] >= 0) {
                    if (bitsAt60Test(gameGetSlotRecord(slots->party[index]), 2) != 0) {
                        bitsAt60Clear(gameGetSlotRecord(slots->party[index]), 4);
                    }
                }
            }
            FUN_002a6480(0);
            partyPanelRefreshFromSlotTable();
            scrScriptProcessStartEntry(state->launch.script, 30);
            ++state->exchange.scriptStep;
        }
        break;
    case 2:
        if (scrRunOpcodesStub(state->launch.script) == 2) {
            state->exchange.scriptStep = 0;
            state->state = 12;
            result = 3;
        }
        break;
    }
    return result;
}
}
