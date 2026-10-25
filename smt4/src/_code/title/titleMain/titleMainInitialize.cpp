#include "title/titleMain.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include <stddef.h>

extern "C" {
extern TitleMain *g_titleMain;
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 option);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, void *owner);
s32 FUN_001e9990(u32 handle);
void titleMainDestroy(u32 handle);
s32 FUN_0020fec0(u32 handle);
s32 FUN_0021f468(u32 handle);
s32 FUN_002ca7fc(u32 handle);

// Initialize title animation state and start the update and three draw tasks.
void titleMainInitialize(const u8 *mode)
{
    // Initialization reaches beyond the canonical model-owning title prefix.
    struct TitleInitializationView {
        u32 job;
        u8 freeOnEnd;
        u8 unk05[3];
        u32 state, phase;
        u8 firstRun;
        u8 unk11[0x2F];
        f32 animation[8];
        u8 active, unk61, unk62, unk63;
        f32 elapsed, duration;
        u8 unk6C[4];
        u16 selection, previousSelection;
        u32 timer, value;
        u8 unk7C;
        u8 unk7D[3];
        u32 screenMode;
        u8 visible, enabled, unk86, unk87;
        u32 unk88;
        AsdMdlObject *modelA, *modelB;
        u8 unk94, initialMode, unk96, unk97;
        f32 progress;
        u8 unk9C[4];

        // The process owns the job/freeOnEnd prefix; this resets only its display state.
        TitleInitializationView *initializeState()
        {
            state = 0;
            phase = 0;
            firstRun = 1;
            active = 1;
            animation[0] = 0.0f;
            animation[1] = 0.0f;
            animation[2] = 0.0f;
            animation[3] = 0.0f;
            animation[4] = 0.0f;
            animation[5] = 0.0f;
            animation[6] = 0.0f;
            animation[7] = 0.0f;
            unk63 = 0;
            unk61 = 0;
            unk62 = 0;
            screenMode = 2;
            selection = 0;
            previousSelection = 0;
            timer = 0;
            value = 0;
            elapsed = 0.0f;
            duration = 0.0f;
            unk7C = 0;
            visible = 1;
            unk86 = 0;
            enabled = 1;
            unk96 = 0;
            unk94 = 0;
            progress = 0.0f;
            initialMode = 0;
            return this;
        }
    };
    typedef char TitleInitializationOffsets[offsetof(TitleInitializationView, animation) == 0x40 &&
        offsetof(TitleInitializationView, modelA) == 0x8C &&
        offsetof(TitleInitializationView, initialMode) == 0x95 &&
        offsetof(TitleInitializationView, progress) == 0x98 && sizeof(TitleInitializationView) == 0xA0 ? 1 : -1];
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\title\\titleMain.cpp", 261);
    TitleInitializationView *work = static_cast<TitleInitializationView *>(asdMemoryAlloc(0x10000, 0x100, 0, sizeof(TitleInitializationView), 1));
    g_titleMain = reinterpret_cast<TitleMain *>(work);
    work->initializeState();
    work->freeOnEnd = 0;
    if (mode != NULL) {
        work->initialMode = *mode;
        work->firstRun = 0;
    }
    work->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("TITLE C"), 2, 0, 0, FUN_001e9990, titleMainDestroy, 0);
    taskCreateDraw(reinterpret_cast<const s8 *>("TITLE UDrawLeft"), 0x76, 0, 0, FUN_0020fec0, NULL, 0, reinterpret_cast<void *>(work->job));
    taskCreateDraw(reinterpret_cast<const s8 *>("TITLE UDrawRight"), 0xD4, 0, 0, FUN_0021f468, NULL, 0, reinterpret_cast<void *>(work->job));
    taskCreateDraw(reinterpret_cast<const s8 *>("TITLE D"), 0xE7, 0, 0, FUN_002ca7fc, NULL, 0, reinterpret_cast<void *>(work->job));
}
}
