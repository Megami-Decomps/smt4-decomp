#include "Terminal/tmnlMain.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern TmnlWorkA* g_tmnl;
void* asdMemoryAllocTracked(u32, u32, u32, u32, u32);
void gameFlagSetValue(u32, u32, u32);
bool gameFlagIsSet(u32);
void messageSetMode(u32);
void questSetPackedFlag(u32, u32);
void FUN_00408184(u32, u32);
void FUN_0022677c(u32, u32);
void FUN_0027e0d8(void);
void terminalSignalComplete(void);
void FUN_002bd4f8(void);
void FUN_00358a40(void);
void FUN_003161b4(void);
u32 asdProcessCreateSimple(const char*, u32, u32, u32, void (*)(void), void (*)(void), u32);
u32 taskCreateDraw(const char*, u32, u32, u32, void (*)(void), u32, u32, u32);

void FUN_0027fdb8(const u32* destination)
{
    // The published padding starts at byte five; a word-aligned union there would move it.
    struct DrawBinding { u32 reserved; u32 primary; u32 secondary; };
    struct InitializationView {
        u32 task;
        u8 done;
        u8 initialVisit;
        u8 reservedHead[3];
        u8 destination;
        u8 reservedDestination[2];
        u32 phase;
        u32 openingMode;
        u32 transition;
        u8 reservedOpening[8];
        u32 graphicsState[3];
        u8 reservedGraphics[12];
        u32 selectionState[8];
        u8 reservedBody[0x50C];
        u32 pendingState;
        u8 active;
        u8 reservedActive[3];
        u32 completionState;
        u32 reservedBindings;
        DrawBinding drawBindings[4];
    };
    typedef char ViewFits[sizeof(InitializationView) <= sizeof(TmnlWorkA) ? 1 : -1];
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Terminal\\tmnlMain.cpp", 0x176);
    g_tmnl = static_cast<TmnlWorkA*>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x604, 1));
    InitializationView* work = reinterpret_cast<InitializationView*>(g_tmnl);
    gameFlagSetValue(0x465, 0, 1);
    work->initialVisit = 1;
    work->openingMode = 0;
    work->transition = 0;
    work->destination = 20;
    work->phase = 0;
    work->graphicsState[0] = 0;
    work->graphicsState[1] = 0;
    work->graphicsState[2] = 0;
    for (u32 index = 0; index < 7; ++index) {
        work->selectionState[index] = 0;
    }
    work->pendingState = 0;
    work->active = 0;
    work->completionState = 0;
    for (u32 index = 0; index < 4; ++index) {
        work->drawBindings[index].secondary = 0;
        work->drawBindings[index].primary = 0;
    }
    messageSetMode(0);
    work->selectionState[7] = 0;
    work->done = 0;
    if (destination) {
        work->destination = *destination;
        work->initialVisit = 0;
        if (!gameFlagIsSet(0x304)) {
            questSetPackedFlag(work->destination, 1);
            FUN_00408184(0x1C, 1);
        }
        work->openingMode = 0;
        work->transition = 0;
    } else {
        work->transition = 0;
        work->openingMode = 1;
        FUN_0022677c(0, 0xFF);
    }
    work->task = asdProcessCreateSimple("TMNL C", 4, 0, 0, FUN_0027e0d8, terminalSignalComplete, 0);
    taskCreateDraw("TMNL UD", 0x77, 0, 0, FUN_002bd4f8, 0, 0, work->task);
    taskCreateDraw("TMNL UD", 0xD3, 0, 0, FUN_00358a40, 0, 0, work->task);
    taskCreateDraw("TMNL DD", 0xEB, 0, 0, FUN_003161b4, 0, 0, work->task);
}
}
