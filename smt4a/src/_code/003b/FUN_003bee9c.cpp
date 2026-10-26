#include "common.h"

struct Obj00315398Entry {
    s32 value;
    u8 unk04[0x1c];
};

struct Obj00315398Count {
    u8 unk00[0x38];
    s32 count;
};

struct Obj00315398 {
    u8 unk00[0x3c];
    Obj00315398Entry **entries;
    Obj00315398Count *source;
};

/* Resets the value of each entry to -1, one per source count. */
extern "C" void FUN_003bee9c(Obj00315398 *obj)
{
    Obj00315398Entry **handle = obj->entries;
    Obj00315398Count *source = obj->source;
    Obj00315398Entry *entries = *handle;
    s32 count = source->count;
    s32 i;
    for (i = 0; i < count; i++) {
        entries[i].value = -1;
    }
}
