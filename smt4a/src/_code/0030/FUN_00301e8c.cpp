/* NON_MATCHING: success/failure cleanup blocks and shared return epilogue are laid out differently. */
#include "classes/Obj558c00.h"

struct StreamString {
    /* 0x00 */ u32 state[9];
};

struct FilteredStream {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ Obj558c00 stream;
    /* 0x234 */ u8 filter[1];
};

extern "C" {
StreamString* FUN_002ece14(StreamString* destination, const StreamString* source);
s32 FUN_002fdef8(void* filter, StreamString* string);
void strDestroy(StreamString* string);

// Prepare a copied string before forwarding the range to the underlying stream.
u8 FUN_00301e8c(FilteredStream* object, const StreamString* source, Obj558c00Range* range)
{
    StreamString string;
    FUN_002ece14(&string, source);
    if (FUN_002fdef8(object->filter, &string) != 0) {
        bool success = object->stream.Obj558c00::vfunc10((s32)&string, range) == 0;
        strDestroy(&string);
        return success;
    }
    strDestroy(&string);
    return 0;
}
}
