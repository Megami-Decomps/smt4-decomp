/* NON_MATCHING: retail uses ldr r0, [r0, #524] where the compiled block uses mov r4, #0. */
#include "common.h"

struct TextTable {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ u8 records[1];
};
struct TextStorage {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ TextTable *table;
};
struct TextStorageBlock {
    /* 0x00 */ u8 unk00[12];
    /* 0x0C */ TextStorage data;
};
struct TextOwner {
    /* 0x000 */ u8 unk000[0x20C];
    /* 0x20C */ TextStorageBlock *storage;
};
extern "C" {
s32 wstrlen(const char *text);
s32 FUN_001a7a20(void *table, const char *text, u32 length);
s32 FUN_001a79e8(TextOwner *owner, const char *text)
{
    TextStorage *storage = NULL;
    if (owner->storage != NULL) {
        storage = &owner->storage->data;
    }
    return FUN_001a7a20(storage->table->records, text, wstrlen(text));
}
}
