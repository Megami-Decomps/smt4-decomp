/* NON_MATCHING: retail keeps `mode` live across the process creation (a dead `cmp r5,#0; ldrne r1,[r5]` read of *mode after it) and places the default-form branch out of line; the rest matches. */
#include "AsdSDK/AsdDebug.h"
#include "name/NameEntryWorkA.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "name/nameMain.h"

extern "C" {
extern NameGlobals g_name;
extern const char DAT_00532f40[];
extern const char DAT_00532f70[];
extern const char DAT_00532f80[];
extern const char DAT_00532f8c[];

void *asdMemoryAllocTracked(u32 heap, u32 type, u32 flags, u32 bytes, u32 clear);
void stateSetterConstruct(NameFormStateA *form, s32 mode);
u32 taskCreateDraw(const char *name, u32 priority, u32 flags, u32 argument, void *draw, void *unused, void *work,
                   u32 parent);
u32 nameEntryUpdateTask(void);
void FUN_00316108(void);
void nameDrawIfVisible(void);
void nameFormUpdateCallback(void);

// Starts the name entry screen: allocates its work area, builds the form and creates the update and draw tasks.
void FUN_00275748(const u32 *mode, u32 unused)
{
    asdDebugTrace(DAT_00532f40, 200);
    NameEntryWorkA *work = static_cast<NameEntryWorkA *>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x580, 1));
    g_name.work = &work->state;
    if (mode != NULL) {
        stateSetterConstruct(&work->form, static_cast<s8>(*mode));
    } else {
        stateSetterConstructDefault(&work->form);
    }
    work->state.task = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_00532f70), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>((void *)nameEntryUpdateTask), reinterpret_cast<AsdProcFunc>((void *)FUN_00316108), reinterpret_cast<u32>(g_name.work));
    taskCreateDraw(DAT_00532f80, 0x85, 1, 0, (void *)nameDrawIfVisible, 0, g_name.work, work->state.task);
    taskCreateDraw(DAT_00532f80, 0xE1, 1, 0, (void *)nameDrawIfVisible, 0, g_name.work, work->state.task);
    work->state.unk08 = taskCreateDraw(DAT_00532f8c, 0xEA, 1, 0, (void *)nameFormUpdateCallback, 0, g_name.work, work->state.task);
}

}
