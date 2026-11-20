#include "code/Code002c.h"
#include "map/LmapMainGlobals.h"
#include "gamedata/GameFlags.h"
#include "script/scrScriptProcess.h"
#include "code/Code0013.h"

extern "C" {
s32 FUN_002897e0();
void FUN_002897d0(s32 enabled);
s32 FUN_002897c0();
void FUN_002897b0(s32 enabled);
s32 eventIsSkipping();
void titleSetSlotValueState2(u32 channel, u32 duration);

void messageSlotSet(u32 slot);
void asdMemFree(void *allocation);
s32 screenFadesAllReady();

u32 lmapMainUpdateScriptTransition()
{
    // The script owner and transition state extend beyond the shared map-state prefix.
    struct ScriptView {
        u8 unk0000[0x9e4];
        void *firstBuffer;
        void *secondBuffer;
        ScriptProcess *script;
        u32 completionFlag;
        u8 unk09f4[0x450c];
        s32 state;
    };
    typedef char ScriptViewOffsets[offsetof(ScriptView, firstBuffer) == 0x9e4 &&
        offsetof(ScriptView, secondBuffer) == 0x9e8 && offsetof(ScriptView, script) == 0x9ec &&
        offsetof(ScriptView, completionFlag) == 0x9f0 && offsetof(ScriptView, state) == 0x4f00 ? 1 : -1];
    ScriptView *work = reinterpret_cast<ScriptView *>(g_lmapMainState);
    switch (work->state) {
    case 0:
        if ((pairedAvailabilityGetState(0) != 3 || pairedAvailabilityGetState(1) != 3) && FUN_002897e0()) {
            FUN_002897d0(0);
        }
        if (FUN_002897c0()) {
            FUN_002897b0(0);
            FUN_002897d0(0);
        }
        if (FUN_002897e0() && !eventIsSkipping()) {
            titleSetSlotValueState2(0, 5);
            titleSetSlotValueState2(1, 5);
            FUN_002897d0(0);
            work->state = 2;
            return 0;
        }
        if (scrRunOpcodesStub(work->script) == 2) {
            if (work->completionFlag) {
                gameFlagSetValue(work->completionFlag, 1, 1);
            }
            messageSlotSet(0);
            scrScriptProcessDestroy(work->script);
            work->script = NULL;
            asdMemFree(work->firstBuffer);
            work->firstBuffer = NULL;
            asdMemFree(work->secondBuffer);
            work->secondBuffer = NULL;
            return 1;
        }
        break;
    case 1: /* nothing to do while the transition runs */
        break;
    case 2:
        if (screenFadesAllReady()) {
            work->state = 0;
        }
        break;
    }
    return 0;
}
}
