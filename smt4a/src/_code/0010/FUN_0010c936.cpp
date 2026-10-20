#include "common.h"

extern "C" {

typedef struct Name {
    /* 0x00 */ u8 data[12];
} Name;

typedef struct Source Source;
typedef struct SourceVtbl {
    /* 0x00 */ void *unk00[23];
    /* 0x5C */ void (*getName)(Name *out, Source *source, u32 key);
} SourceVtbl;
struct Source {
    /* 0x00 */ const SourceVtbl *vtbl;
};

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ u32 key;
    /* 0x74 */ u8 unk74[0x1C];
    /* 0x90 */ Source *source;
} Entry;

void FUN_001221e4(void);
s32 FUN_002ea6fc(u32 object, u8 *status);
void vectorCopyHeader(u32 object, Name *name);

/* Clears `object`'s status and, when that succeeds and the entry has a source, stores the source's name for the entry's key and clears the status again. */
void FUN_0010c936(u32 object, Entry *entry)
{
    Name name;
    u8 status;
    u8 statusAfter;
    s32 failed;

    FUN_001221e4();
    status = 0;
    failed = FUN_002ea6fc(object, &status);
    if (failed == 0 && entry->source != NULL) {
        entry->source->vtbl->getName(&name, entry->source, entry->key);
        vectorCopyHeader(object, &name);
        statusAfter = 0;
        FUN_002ea6fc(object, &statusAfter);
    }
}

} /* extern "C" */
