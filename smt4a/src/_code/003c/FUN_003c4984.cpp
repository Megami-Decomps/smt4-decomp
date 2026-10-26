#include "common.h"
#include "code/Code003c_Smt4a.h"

extern "C" {

typedef struct NamedEntry {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ char name[1];
} NamedEntry;

typedef struct EntryOwner {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ NamedEntry *entry;
} EntryOwner;

int textFormatBuffer(char *dst, const char *format, ...);
extern u32 libc_strlen(const char *s);

/* Copies the entry's name into `buffer` without its extension and returns the entry's id. */
u32 FUN_003c4984(EntryOwner *owner, char *buffer)
{
    u32 length;
    u32 i;

    textFormatBuffer(buffer, "%s", owner->entry->name);
    length = libc_strlen(buffer);
    for (i = 0; i < length && buffer[i] != '.'; i++) {
    }
    if (length != i) {
        buffer[i] = 0;
    }
    return owner->entry->id;
}

} /* extern "C" */
