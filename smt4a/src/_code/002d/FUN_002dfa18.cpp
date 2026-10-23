#include "map/lmapMain.h"
#include "script/scrScriptProcess.h"
struct ScriptState;
/* The script fields are beyond the shared map-state prefix. */
struct LmapScriptRuntimeView {
    LmapMainStateA map;
    u8 unk0F8[0x934];
    void *code;
    void *strings;
    ScriptResource *script;
    u32 completionFlag;
    u8 unkA3C[0x8918];
    s32 state;
};
typedef char LmapScriptRuntimeOffsets[(offsetof(LmapScriptRuntimeView, code) == 0xA2C && offsetof(LmapScriptRuntimeView, state) == 0x9354) ? 1 : -1];
extern "C" {
extern LmapMainStateA *g_lmapMainState;
s32 FUN_0013def0(s32 display);
u32 getByteTableAValue(void);
void byteTableASetValue(u32 value);
u32 byteTableAGetValue3(void);
void byteTableASetValue3(u32 value);
s32 FUN_00162ea4(void);
void FUN_003d54f8(s32 display, s32 mode);
u32 scrRunOpcodesStub(ScriptState *state);
void gameFlagSetValue(u32 flag, s32 value, s32 persistent);
void messageSlotSet(s32 slot);
void scrScriptProcessDestroy(ScriptResource *script);
void asdMemFree(void *memory);
s32 FUN_002e07f4(void);

u32 FUN_002dfa18(void)
{
    LmapScriptRuntimeView *work = reinterpret_cast<LmapScriptRuntimeView *>(g_lmapMainState);
    switch (work->state) {
    case 0:
        if ((FUN_0013def0(0) != 3 || FUN_0013def0(1) != 3) && getByteTableAValue())
            byteTableASetValue(0);
        if (byteTableAGetValue3()) {
            byteTableASetValue3(0);
            byteTableASetValue(0);
        }
        if (getByteTableAValue() && !FUN_00162ea4()) {
            FUN_003d54f8(0, 5);
            FUN_003d54f8(1, 5);
            byteTableASetValue(0);
            work->state = 2;
            return 0;
        }
        if (scrRunOpcodesStub(reinterpret_cast<ScriptState *>(work->script)) == 2) {
            if (work->completionFlag)
                gameFlagSetValue(work->completionFlag, 1, 1);
            messageSlotSet(0);
            scrScriptProcessDestroy(work->script);
            work->script = 0;
            asdMemFree(work->code);
            work->code = 0;
            asdMemFree(work->strings);
            work->strings = 0;
            return 1;
        }
        break;
    case 1:
        break;
    case 2:
        if (FUN_002e07f4())
            work->state = 0;
        break;
    }
    return 0;
}
}
