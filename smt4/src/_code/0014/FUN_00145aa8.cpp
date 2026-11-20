/* NON_MATCHING: every case but count == 3 matches (116 rows each); in the three-argument case retail steps the cursor index in place and derives the next two argument indices from it, the build derives them from the old index. */
#include "script/ScriptCallbackDispatch.h"

extern "C" {
extern ScriptCallbackFunction g_textControlCallbacks[8];
extern const u16 g_textControlCallbackCodes[8];
extern const u32 g_textControlCallbackArgumentCounts[8];

/* Calls the script callback registered for `id`, passing the next 1-4 arguments (a 16-bit value from each 0x20-byte slot) and advancing the cursor past them. */
void FUN_00145aa8(ScriptCallbackCursor *cursor, u32 id)
{
    for (s32 index = 0; index < 8; ++index) {
        if (g_textControlCallbacks[index].one != NULL && g_textControlCallbackCodes[index] == id) {
            u32 count = g_textControlCallbackArgumentCounts[index];
            if (count == 1) {
                ++cursor->current;
                ++cursor->consumed;
                g_textControlCallbacks[index].one(cursor->arguments[cursor->current].value);
                return;
            }
            if (count == 2) {
                ++cursor->current;
                ++cursor->consumed;
                u16 first = cursor->arguments[cursor->current].value;
                ++cursor->current;
                ++cursor->consumed;
                u16 second = cursor->arguments[cursor->current].value;
                g_textControlCallbacks[index].two(first, second);
                return;
            }
            if (count == 3) {
                ++cursor->current;
                ++cursor->consumed;
                u16 first = cursor->arguments[cursor->current].value;
                ++cursor->current;
                ++cursor->consumed;
                u16 second = cursor->arguments[cursor->current].value;
                ++cursor->current;
                ++cursor->consumed;
                u16 third = cursor->arguments[cursor->current].value;
                g_textControlCallbacks[index].three(first, second, third);
                return;
            }
            if (count == 4) {
                ++cursor->current;
                ++cursor->consumed;
                u16 first = cursor->arguments[cursor->current].value;
                ++cursor->current;
                ++cursor->consumed;
                u16 second = cursor->arguments[cursor->current].value;
                ++cursor->current;
                ++cursor->consumed;
                u16 third = cursor->arguments[cursor->current].value;
                ++cursor->current;
                ++cursor->consumed;
                u16 fourth = cursor->arguments[cursor->current].value;
                g_textControlCallbacks[index].four(first, second, third, fourth);
            }
            return;
        }
    }
}
}
