/* NON_MATCHING: inlined argument reads retain cursor reloads absent from retail; -O2 candidate. */
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
extern TextCommandCallback DAT_00636f68[8];
extern u16 DAT_0063af98[8];
extern u32 DAT_0063afa8[8];

static __inline u16 nextTextCommandArgument(TextCommandCursor *cursor)
{
    s32 index = ++cursor->index;
    ++cursor->consumed;
    return cursor->tokens[index].value;
}

// Find a registered text control code and invoke it with up to four token arguments.
void asdTextDispatchRegisteredCommand(TextCommandCursor *cursor, u32 code)
{
    for (s32 i = 0; i < 8; ++i) {
        if (DAT_00636f68[i].none && DAT_0063af98[i] == code) {
            switch (DAT_0063afa8[i]) {
            case 0:
                DAT_00636f68[i].none();
                return;
            case 1: {
                u16 first = nextTextCommandArgument(cursor);
                DAT_00636f68[i].one(first);
                return;
            }
            case 2: {
                u16 first = nextTextCommandArgument(cursor);
                u16 second = nextTextCommandArgument(cursor);
                DAT_00636f68[i].two(first, second);
                return;
            }
            case 3: {
                u16 first = nextTextCommandArgument(cursor);
                u16 second = nextTextCommandArgument(cursor);
                u16 third = nextTextCommandArgument(cursor);
                DAT_00636f68[i].three(first, second, third);
                return;
            }
            case 4: {
                u16 first = nextTextCommandArgument(cursor);
                u16 second = nextTextCommandArgument(cursor);
                u16 third = nextTextCommandArgument(cursor);
                u16 fourth = nextTextCommandArgument(cursor);
                DAT_00636f68[i].four(first, second, third, fourth);
                return;
            }
            }
            return;
        }
    }
}
}
