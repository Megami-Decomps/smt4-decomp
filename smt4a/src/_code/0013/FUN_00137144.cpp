/* NON_MATCHING: identical except the register pair (r2/r3) armcc picks for the unrolled layer-13 loop over the line windows. */
#include "ui/MessageMainA.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "text/TextDraw.h"
#include "event/bustupEvent/BustupTex.h"
#include "code/Code0015_Smt4a.h"

extern "C" {
extern MessageWindowA *g_messageWindows[12];

void asdTMTexTableLoadTmx(s32 table, s32 arg);
void asdTMTexTableLoadSprites(s32 table);
void infoWindowInitialize(void);
void comWinInitialize(void);
void FUN_001409e4(void);
s32 FUN_0013f7c4(u32 handle);
void FUN_00144efc(void (*callback)(void));
void FUN_001445a0(void (*callback)(void));
void FUN_001456fc(void);
void FUN_00145534(void);
void asdTextSetDefaultValue(s32 (*callback)(void));
s32 msgIsSkipInputActive(void);
void objFlagsSetBits(u32 handle, u32 bits);

/* Starts the message system: loads its textures, creates the main, second and third windows and
 * twelve line windows, assigns their layers, starts the draw task and installs the message callbacks. */
void FUN_00137144(void)
{
    asdTMTexTableLoadTmx(3, 0);
    asdTMTexTableLoadSprites(8);
    for (s32 i = 0; i < 3; i++)
        asdTMTexTablePrepareNodeImage(8, i);
    g_messageMain.window = FUN_00145280();
    g_messageMain.banner = FUN_00145280();
    g_messageMain.aux = FUN_00145280();
    for (s32 i = 0; i < 12; i++)
        g_messageWindows[i] = FUN_00145280();
    g_messageMain.window->mode = 1;
    g_messageMain.banner->mode = 6;
    g_messageMain.aux->mode = 12;
    uiObjectSetColorRgb(g_messageMain.aux->box, 0xFF);
    for (s32 i = 0; i < 12; i++)
        g_messageWindows[i]->mode = 13;
    infoWindowInitialize();
    comWinInitialize();
    FUN_001409e4();
    taskCreateDraw((const s8 *)"MESS_D", 239, 0, 0, FUN_0013f7c4, NULL, (u32)g_messageMain.window, (void *)g_messageMain.window->job);
    MessageWindowA *window = g_messageMain.window;
    window->displayEnabled = 1;
    g_messageMain.banner->displayEnabled = 0;
    g_messageMain.aux->displayEnabled = 0;
    for (s32 i = 0; i < 12; i++)
        g_messageWindows[i]->displayEnabled = 0;
    objFlagsSetBits(window->box, 0x100);
    objFlagsSetBits(g_messageMain.banner->box, 0x200);
    objFlagsSetBits(g_messageMain.aux->box, 0x100);
    for (s32 i = 0; i < 12; i++)
        objFlagsSetBits(g_messageWindows[i]->box, 0x100);
    FUN_00144efc(FUN_001456fc);
    FUN_001445a0(FUN_00145534);
    asdTextSetDefaultValue(msgIsSkipInputActive);
}

} /* extern "C" */
