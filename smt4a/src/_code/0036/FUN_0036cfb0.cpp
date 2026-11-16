#include "shard/W6_W6Match4_CampCecResumeState.h"
#include "shard/Shard0031.h"

struct SlotRecord;
extern "C" {
ScriptRunState *FUN_00275bc8(void *resource, u32 entry);
void scrScriptProcessStartEntry(ScriptRunState *script, s32 entry);
s32 scrRunOpcodesStub(ScriptRunState *script);
void sysPlaySe(s32 sound);
void cecProcessStart(void);
void cecProcessCall4(void);
void cecProcessDestroy(void);
void FUN_002a6480(u16 value);
void FUN_0031d890(void);
SlotTable *gameGetSlotTable(void);
SlotRecord *gameGetSlotRecord(s32 slot);
s32 bitsAt60Test(SlotRecord *record, u32 flags);
void bitsAt60Clear(SlotRecord *record, u32 flags);

// Run the CEC exchange scripts and clear exchanged party flags before returning to camp.
u32 FUN_0036cfb0(CampCecResumeState *state)
{
    u32 result = 0;
    switch (state->exchange.scriptStep) {
    case 0:
        if (state->launch.resource != NULL && state->launch.entry != 0) {
            ScriptRunState *script = FUN_00275bc8(state->launch.resource, state->launch.entry);
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
            SlotTable *slots = gameGetSlotTable();
            for (s32 index = 0; index < 24; ++index) {
                if (slots->slots[index] >= 0) {
                    if (bitsAt60Test(gameGetSlotRecord(slots->slots[index]), 2) != 0) {
                        bitsAt60Clear(gameGetSlotRecord(slots->slots[index]), 4);
                    }
                }
            }
            FUN_002a6480(0);
            FUN_0031d890();
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
