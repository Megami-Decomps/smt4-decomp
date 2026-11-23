#include <stdio.h>
#include "common.h"
#include "test/BustupViewerState.h"
#include "AsdSDK/asdTextFormatStream.h"

extern "C" {
/* The name format and the empty-entry label, contiguous in .rodata (0x536bd4, 0x536bd8). */
static const struct {
    char nameFormat[4];
    char emptyName[1];
} s_nameStrings = {
    "%s",
    ""
};
extern BustupViewerState *g_bustupViewer;
const char *dataTable01GetRecordWithAocOverride(u16 id);

// Refresh the name line for the viewer's selected portrait, or show the empty-entry label.
void FUN_0028c258(void)
{
    BustupViewerState *viewer = g_bustupViewer;
    u32 id = viewer->portraitIds[viewer->selection];
    const char *name = dataTable01GetRecordWithAocOverride(static_cast<u16>(id));
    char message[68];
    sprintf(message, s_nameStrings.nameFormat, name);
    if (id != 0)
        asdTextFormatStream(viewer->text, 2, static_cast<u32>(-1), 0, 0, message);
    else
        asdTextFormatStream(viewer->text, 2, static_cast<u32>(-1), 0, 0, s_nameStrings.emptyName);
}
}
