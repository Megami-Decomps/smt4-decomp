/* NON_MATCHING: cursor reads now forward like retail (the reader takes a reference); only the loop-invariant table registers (retail r2/r3 swapped) and the argument registers of the 3- and 4-argument arms differ. */
#include "common.h"

struct TextCommandToken {
    u16 value; // 0x00
    u16 unk02[15];
};
struct TextCommandCursor {
    TextCommandToken *tokens; // 0x00
    u32 unk04;
    s32 index; // 0x08
    u32 unk0c;
    s32 consumed; // 0x10
};
union TextCommandCallback {
    void (*none)();
    void (*one)(u32);
    void (*two)(u32, u32);
    void (*three)(u32, u32, u32);
    void (*four)(u32, u32, u32, u32);
};
extern "C" {
extern TextCommandCallback g_textControlCallbacks[8];
extern u16 g_textControlCallbackCodes[8];
extern u32 g_textControlCallbackArgumentCounts[8];

static __inline u16 nextTextCommandArgument(TextCommandCursor &cursor)
{
    s32 index = ++cursor.index;
    ++cursor.consumed;
    return cursor.tokens[index].value;
}

// Find a registered text control code and invoke it with up to four token arguments.
void asdTextDispatchRegisteredCommand(TextCommandCursor *cursor, u32 code)
{
    for (s32 i = 0; i < 8; ++i) {
        if (g_textControlCallbacks[i].none && g_textControlCallbackCodes[i] == code) {
            switch (g_textControlCallbackArgumentCounts[i]) {
            case 0:
                g_textControlCallbacks[i].none();
                return;
            case 1: {
                u16 first = nextTextCommandArgument(*cursor);
                g_textControlCallbacks[i].one(first);
                return;
            }
            case 2: {
                u16 first = nextTextCommandArgument(*cursor);
                u16 second = nextTextCommandArgument(*cursor);
                g_textControlCallbacks[i].two(first, second);
                return;
            }
            case 3: {
                u16 first = nextTextCommandArgument(*cursor);
                u16 second = nextTextCommandArgument(*cursor);
                u16 third = nextTextCommandArgument(*cursor);
                g_textControlCallbacks[i].three(first, second, third);
                return;
            }
            case 4: {
                u16 first = nextTextCommandArgument(*cursor);
                u16 second = nextTextCommandArgument(*cursor);
                u16 third = nextTextCommandArgument(*cursor);
                u16 fourth = nextTextCommandArgument(*cursor);
                g_textControlCallbacks[i].four(first, second, third, fourth);
                return;
            }
            }
            return;
        }
    }
}
}
