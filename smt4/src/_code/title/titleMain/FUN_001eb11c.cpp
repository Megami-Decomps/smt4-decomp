/* NON_MATCHING: global-store scratch register and latter initialization stores use r4 instead of retail's r0; local view covers the allocation tail. */
#include "title/titleMain.h"
#include "AsdSDK/AsdDebug.h"
#include <stddef.h>

extern "C" {
extern TitleMain *g_titleMain;
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 option);
u32 asdProcessCreateSimple(const char *name, s32 priority, u32 flags, u32 stack,
                            u32 (*update)(), void (*destroy)(), void *work);
u32 taskCreateDraw(const char *name, s32 priority, u32 flags, u32 stack,
                   u32 (*draw)(), u32 destroy, void *work, u32 parent);
u32 FUN_001e9990();
void titleMainDestroy();
u32 FUN_0020fec0();
u32 FUN_0021f468();
u32 FUN_002ca7fc();

// Initialize title animation state and start the update and three draw tasks.
void FUN_001eb11c(const u8 *mode)
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
    };
    typedef char TitleInitializationOffsets[offsetof(TitleInitializationView, animation) == 0x40 &&
        offsetof(TitleInitializationView, modelA) == 0x8C &&
        offsetof(TitleInitializationView, initialMode) == 0x95 &&
        offsetof(TitleInitializationView, progress) == 0x98 && sizeof(TitleInitializationView) == 0xA0 ? 1 : -1];
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\title\\titleMain.cpp", 261);
    TitleInitializationView *work = static_cast<TitleInitializationView *>(asdMemoryAlloc(0x10000, 0x100, 0, sizeof(TitleInitializationView), 1));
    g_titleMain = reinterpret_cast<TitleMain *>(work);
    work->state = 0;
    work->phase = 0;
    work->firstRun = 1;
    work->active = 1;
    work->animation[0] = 0.0f;
    work->animation[1] = 0.0f;
    work->animation[2] = 0.0f;
    work->animation[3] = 0.0f;
    work->animation[4] = 0.0f;
    work->animation[5] = 0.0f;
    work->animation[6] = 0.0f;
    work->animation[7] = 0.0f;
    work->unk63 = 0;
    work->unk61 = 0;
    work->unk62 = 0;
    work->screenMode = 2;
    work->selection = 0;
    work->previousSelection = 0;
    work->timer = 0;
    work->value = 0;
    work->elapsed = 0.0f;
    work->duration = 0.0f;
    work->unk7C = 0;
    work->visible = 1;
    work->unk86 = 0;
    work->enabled = 1;
    work->unk96 = 0;
    work->unk94 = 0;
    work->progress = 0.0f;
    work->initialMode = 0;
    work->freeOnEnd = 0;
    if (mode != NULL) {
        work->initialMode = *mode;
        work->firstRun = 0;
    }
    work->job = asdProcessCreateSimple("TITLE C", 2, 0, 0, FUN_001e9990, titleMainDestroy, NULL);
    taskCreateDraw("TITLE UDrawLeft", 0x76, 0, 0, FUN_0020fec0, 0, NULL, work->job);
    taskCreateDraw("TITLE UDrawRight", 0xD4, 0, 0, FUN_0021f468, 0, NULL, work->job);
    taskCreateDraw("TITLE D", 0xE7, 0, 0, FUN_002ca7fc, 0, NULL, work->job);
}
}
