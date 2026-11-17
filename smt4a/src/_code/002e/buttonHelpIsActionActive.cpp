#include "ui/ButtonHelpGlobal.h"

extern "C" {

// Check displayed button kinds, including compound actions, for an active requested action.
u32 buttonHelpIsActionActive(u32 action)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    if (work != NULL) {
        // The second panel's active bytes (0x5DA) follow the first; compound kinds read the next one too.
        struct ActiveView { u8 prefix[0x5da]; u8 active[7]; };
        const ActiveView *state = reinterpret_cast<const ActiveView *>(work);
        for (s32 index = 0; index < 6; ++index) {
            u32 kind = work->kinds[index].kind;
            if (kind == action && state->active[index] != 0) {
                return 1;
            }
            if (kind == 8) {
                if (action == 4 && state->active[index] != 0) {
                    return 1;
                }
            } else if (kind == 9) {
                if (action == 3 && state->active[index] != 0) {
                    return 1;
                }
            } else if (kind == 20) {
                if (action == 5 && state->active[index] != 0) {
                    return 1;
                }
                if (action == 6 && state->active[index + 1] != 0) {
                    return 1;
                }
            } else if (kind == 21) {
                if (action == 5 && state->active[index] != 0) {
                    return 1;
                }
                if (action == 6 && state->active[index + 1] != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
}
