/* NON_MATCHING: the global-address load moves before the prologue push. */
#include "runtime/Stdio.h"
#include "test/BustupViewerState.h"
#include "AsdSDK/asdTextFormatStream.h"

extern "C" {
extern const char DAT_00536bd4[];
extern const char DAT_00536bd8[];
extern BustupViewerState *g_bustupViewer;
const char *dataTable01GetRecordWithAocOverride(u16 id);

// Refresh the name line for the viewer's selected portrait, or show the empty-entry label.
void FUN_0028c258(void)
{
    BustupViewerState *viewer = g_bustupViewer;
    u32 id = viewer->portraitIds[viewer->selection];
    const char *name = dataTable01GetRecordWithAocOverride(static_cast<u16>(id));
    char message[68];
    __2sprintf(message, DAT_00536bd4, name);
    if (id != 0)
        asdTextFormatStream(viewer->text, 2, static_cast<u32>(-1), 0, 0, message);
    else
        asdTextFormatStream(viewer->text, 2, static_cast<u32>(-1), 0, 0, DAT_00536bd8);
}
}
