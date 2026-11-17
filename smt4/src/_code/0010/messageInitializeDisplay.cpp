#include "ui/UiSpriteApi.h"
#include "ui/MessageMain.h"
#include "sys/Task.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"

extern "C" {
void asdTMTexTableLoadTmx(u32 table, u32 variant);
void asdTMTexTablePrepareNodeImage(u32 table, s32 index);
void infoWindowCreate(void);
void FUN_0010a7bc(void);
void FUN_0010b3c0(void);
void FUN_0010a9c8(void *work);
Task *taskCreateDraw(const char *name, u16 priority, u32 workSize, TaskFunc update, TaskFunc draw, TaskFunc destroy, void *work, u32 value);
void objFlagsSetBits(u32 object, u32 bits);
void FUN_0010ec70(void (*callback)(void));
void FUN_0010e5e0(void (*callback)(void));
void FUN_0010efd8(void);
void FUN_0010edf8(void);
void FUN_0010f084(void);
void asdTextSetDefaultStyle(u32 style);

// Load message graphics, create the three message panels, and install their draw callbacks.
void messageInitializeDisplay(void)
{
    asdTMTexTableLoadTmx(5, 0);
    asdTMTexTableLoadSprites(14);
    asdTMTexTablePrepareNodeImage(5, 0);
    for (s32 index = 0; index < 3; ++index)
        asdTMTexTablePrepareNodeImage(14, index);
    g_messageMain.window = FUN_002c4a34();
    g_messageMain.banner = FUN_002c4a34();
    g_messageMain.aux = FUN_002c4a34();
    g_messageMain.window->mode = 1;
    g_messageMain.banner->mode = 6;
    g_messageMain.aux->mode = 12;
    infoWindowCreate();
    FUN_0010a7bc();
    FUN_0010b3c0();
    taskCreateDraw("MESS_D", 234, 0, 0, FUN_0010a9c8, 0, g_messageMain.window, g_messageMain.window->job);
    MessageWindow *state = g_messageMain.window;
    state->displayEnabled = 1;
    g_messageMain.banner->displayEnabled = 0;
    g_messageMain.aux->displayEnabled = 0;
    objFlagsSetBits(state->box, 0x100);
    objFlagsSetBits(g_messageMain.banner->box, 0x200);
    objFlagsSetBits(g_messageMain.aux->box, 0x100);
    FUN_0010ec70(FUN_0010efd8);
    FUN_0010e5e0(FUN_0010edf8);
    asdTextSetDefaultStyle((u32)FUN_0010f084);
}
}
