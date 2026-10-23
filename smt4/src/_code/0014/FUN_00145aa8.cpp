/* NON_MATCHING: argument consumption reloads cursor fields, changing saved registers and scheduling. */
#include "script/ScriptCallbackDispatch.h"

namespace {
inline u16 consumeArgument(ScriptCallbackCursor *cursor)
{
    ++cursor->current;
    ++cursor->consumed;
    return cursor->arguments[cursor->current].value;
}
}
extern "C" {
extern ScriptCallbackFunction DAT_004daee8[8];
extern const u16 DAT_004def18[8];
extern const u32 DAT_004def28[8];

void FUN_00145aa8(ScriptCallbackCursor *cursor, u32 id)
{
    for (s32 index = 0; index < 8; ++index) {
        if (DAT_004daee8[index].one == NULL || DAT_004def18[index] != id)
            continue;
        u32 count = DAT_004def28[index];
        if (count == 1) {
            DAT_004daee8[index].one(consumeArgument(cursor));
            return;
        }
        if (count == 2) {
            u16 first = consumeArgument(cursor);
            u16 second = consumeArgument(cursor);
            DAT_004daee8[index].two(first, second);
            return;
        }
        if (count == 3) {
            u16 first = consumeArgument(cursor);
            u16 second = consumeArgument(cursor);
            u16 third = consumeArgument(cursor);
            DAT_004daee8[index].three(first, second, third);
            return;
        }
        if (count == 4) {
            u16 first = consumeArgument(cursor);
            u16 second = consumeArgument(cursor);
            u16 third = consumeArgument(cursor);
            u16 fourth = consumeArgument(cursor);
            DAT_004daee8[index].four(first, second, third, fourth);
        }
        return;
    }
}
}
