/* NON_MATCHING: four conditional-branch directions differ; data loads, comparisons and return paths otherwise match. */
#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

// Check displayed button kinds, including compound actions, for an active requested action.
u32 FUN_002e1a18(u32 action)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    if (work != NULL) {
        // This active-byte tail extends past ButtonHelpCompatibility's recovered prefix.
        struct ActiveView { u8 prefix[0x5da]; u8 active[7]; };
        const ActiveView *state = reinterpret_cast<const ActiveView *>(work);
        for (s32 index = 0; index < 6; ++index) {
            u32 kind = work->kinds[index].kind;
            if (kind == action && state->active[index] != 0) {
                return 1;
            }
            switch (kind) {
            case 8:
                if (action == 4 && state->active[index] != 0) {
                    return 1;
                }
                break;
            case 9:
                if (action == 3 && state->active[index] != 0) {
                    return 1;
                }
                break;
            case 20:
                if (action == 5) {
                    if (state->active[index] != 0) {
                        return 1;
                    }
                } else if (action == 6 && state->active[index + 1] != 0) {
                    return 1;
                }
                break;
            case 21:
                if (action == 5 && state->active[index] != 0) {
                    return 1;
                }
                if (action == 6 && state->active[index + 1] != 0) {
                    return 1;
                }
                break;
            }
        }
    }
    return 0;
}
}
