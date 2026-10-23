#ifndef SCRIPT_SCRIPTCALLBACKDISPATCH_H
#define SCRIPT_SCRIPTCALLBACKDISPATCH_H
#include "common.h"
#include <stddef.h>

struct ScriptCallbackArgument {
    u16 value;
    u8 padding[0x1E];
};
struct ScriptCallbackCursor {
    ScriptCallbackArgument *arguments;
    u32 reserved04;
    s32 current;
    u32 reserved0C;
    s32 consumed;
};
union ScriptCallbackFunction {
    void (*one)(u16);
    void (*two)(u16, u16);
    void (*three)(u16, u16, u16);
    void (*four)(u16, u16, u16, u16);
};
typedef char ScriptCallbackLayouts[
    sizeof(ScriptCallbackArgument) == 0x20 && sizeof(ScriptCallbackCursor) == 0x14 &&
    offsetof(ScriptCallbackCursor, current) == 8 &&
    offsetof(ScriptCallbackCursor, consumed) == 0x10 && sizeof(ScriptCallbackFunction) == 4 ? 1 : -1];
#endif
