#include "common.h"

struct EntryValue {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ u16 value;
};

struct EntryBody {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ EntryValue *value;
};

struct OptionalEntry {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ EntryBody body;
};

struct OptionalOwner {
    /* 0x000 */ u8 unk000[0x20C];
    /* 0x20C */ OptionalEntry *entry;
};

/* Reads the value through the optional entry's body. */
extern "C" u16 FUN_003fdb00(OptionalOwner *owner)
{
    EntryBody *body = owner->entry != NULL ? &owner->entry->body : NULL;
    return body->value->value;
}
