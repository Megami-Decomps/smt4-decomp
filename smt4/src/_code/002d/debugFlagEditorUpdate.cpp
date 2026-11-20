#include "common.h"
#include "gamedata/GameFlags.h"

extern "C" {


int gameFlagIsSet(int id);
extern int g_debugFlagEditorCursor;
extern int padIsButtonRepeat(u32 button);
extern int padIsButtonPressed(u32 mode);

/* Debug flag editor: moves the cursor g_debugFlagEditorCursor (0-0x7FF) by the pressed directions, toggles the flag, and reports whether mode 1 is active. */
u32 debugFlagEditorUpdate(void)
{
    u32 toggled;
    u32 result;
    int column;
    int row;
    int page;

    if ((padIsButtonRepeat(3) != 0) || (padIsButtonRepeat(0xc) != 0)) {
        g_debugFlagEditorCursor = g_debugFlagEditorCursor + 1;
    }
    if ((padIsButtonRepeat(6) != 0) || (padIsButtonRepeat(0xf) != 0)) {
        g_debugFlagEditorCursor = g_debugFlagEditorCursor + 0x10;
    }
    if ((padIsButtonRepeat(4) != 0) || (padIsButtonRepeat(0xd) != 0)) {
        g_debugFlagEditorCursor = g_debugFlagEditorCursor - 1;
    }
    if ((padIsButtonRepeat(5) != 0) || (padIsButtonRepeat(0xe) != 0)) {
        g_debugFlagEditorCursor = g_debugFlagEditorCursor - 0x10;
    }
    if (padIsButtonRepeat(8) != 0) {
        g_debugFlagEditorCursor = g_debugFlagEditorCursor - 0x100;
    }
    if (padIsButtonRepeat(7) != 0) {
        g_debugFlagEditorCursor = g_debugFlagEditorCursor + 0x100;
    }
    if (g_debugFlagEditorCursor >= 0x800) {
        g_debugFlagEditorCursor = g_debugFlagEditorCursor - 0x800;
    }
    if (g_debugFlagEditorCursor < 0) {
        g_debugFlagEditorCursor = g_debugFlagEditorCursor + 0x800;
    }
    if (padIsButtonPressed(0) != 0) {
        toggled = gameFlagIsSet(g_debugFlagEditorCursor);
        gameFlagSetValue(g_debugFlagEditorCursor, toggled ^ 1, 1);
    }
    if (padIsButtonPressed(1) != 0) {
        result = 1;
    } else {
        row = 0;
        page = g_debugFlagEditorCursor / 0x100;
        do {
            column = 0;
            do {
                gameFlagIsSet(column + row * 0x10 + page * 0x100);
                column = column + 1;
            } while (column < 0x10);
            row = row + 1;
        } while (row < 0x10);
        result = 0;
    }
    return result;
}

} /* extern "C" */
