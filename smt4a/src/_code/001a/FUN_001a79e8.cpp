#include "common.h"

struct TextRecordList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 records[1];
};
struct TextTable {
    /* 0x00 */ u8 unk00[0x6c];
    /* 0x6c */ TextRecordList list;
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
s32 libc_strlen(const char *text);
s32 FUN_001a7a20(void *table, const char *text, u32 length);
s32 FUN_001a79e8(TextOwner *owner, const char *text)
{
    TextStorageBlock *block = owner->storage;
    TextStorage *storage = (TextStorage *)block;
    if (block != NULL) {
        storage = &block->data;
    }
    TextRecordList *list = &storage->table->list;
    return FUN_001a7a20(list->records, text, libc_strlen(text));
}
}
