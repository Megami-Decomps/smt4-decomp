/* NON_MATCHING: the global-address load moves before the prologue push. */
#include "test/BustupViewerState.h"

extern "C" {
extern const char DAT_00536bd4[];
extern const char DAT_00536bd8[];
extern BustupViewerState *g_bustupViewer;
s32 textFormatBuffer(char *buffer, const char *format, ...);
const char *FUN_00180118(u16 id);
void FUN_0023723c(u32 text, s32 row, u32 color, s32 x, s32 y, const char *message);

// Refresh the name line for the viewer's selected portrait, or show the empty-entry label.
void FUN_0028c258(void)
{
    BustupViewerState *viewer = g_bustupViewer;
    u32 id = viewer->portraitIds[viewer->selection];
    const char *name = FUN_00180118(static_cast<u16>(id));
    char message[68];
    textFormatBuffer(message, DAT_00536bd4, name);
    if (id != 0)
        FUN_0023723c(viewer->text, 2, static_cast<u32>(-1), 0, 0, message);
    else
        FUN_0023723c(viewer->text, 2, static_cast<u32>(-1), 0, 0, DAT_00536bd8);
}
}
