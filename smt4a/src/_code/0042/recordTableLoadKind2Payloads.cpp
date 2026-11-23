/* NON_MATCHING: retail loads the file handle and the record index for FUN_00514088 before building its two stack-argument addresses (sp+24/sp+32, strd); armcc here builds them first (only single-use file/index temporaries reorder it). */
#include "record/RecordTable.h"
#include "AsdSDK/AsdMemCopy.h"

/* The table's allocator: slot 0 hands out a block. */
class RecordAllocator {
public:
    virtual void *allocate(u32 size, u32 alignment) = 0;
};

struct RecordLoader : RecordTable {
    /* 0x14 */ RecordAllocator **allocatorSlot() { return (RecordAllocator **)((u8 *)this + 0x14); }
};

extern "C" {
s32 readInnerWord6(u32 file, u32 *value);
void FUN_00514018(u32 file, u32 index, u32 *exists);
u32 FUN_00514088(u32 file, u32 index, u32 **data, u32 *size, u32 *flags, u64 *timestamp);
void resourceQueryLoadStatus(u32 file, u32 index);

/* Loads the data of every kind-2 record the table has not read yet: copies its header, allocates the
 * rest and checks it against the kind-0 records that share its source. Sets the table's state to 1
 * once everything is loaded, or to 7 with an error flag when a record is missing or malformed. */
void recordTableLoadKind2Payloads(RecordLoader *table)
{
    u32 count;
    readInnerWord6(*table->file, &count);
    if (count == 0)
        return;
    if (table->kind2Count <= 0) {
        table->state = 1;
        return;
    }
    bool loaded = true;
    for (s32 i = 0; i < table->kind2Count; i++) {
        if (table->payloads[i].body != NULL)
            continue;
        u32 exists;
        FUN_00514018(*table->file, table->kind2Source[i], &exists);
        if (exists == 0) {
            loaded = false;
            continue;
        }
        u32 *data;
        u32 size;
        u32 flags;
        u64 timestamp;
        if ((u8)FUN_00514088(*table->file, table->kind2Source[i], &data, &size, &flags, &timestamp)) {
            table->state = 7;
            table->errors |= 0x80;
            return;
        }
        if (size < 0x10) {
            table->state = 7;
            table->errors |= 0x100;
            return;
        }
        table->payloads[i].header[0] = data[0];
        table->payloads[i].header[1] = data[1];
        table->payloads[i].header[2] = data[2];
        table->payloads[i].header[3] = data[3];
        data += 4;
        size -= 0x10;
        table->payloads[i].body = (*table->allocatorSlot())->allocate(size, 4);
        if (table->payloads[i].body == NULL) {
            table->state = 7;
            table->errors |= 0x200;
            return;
        }
        __aeabi_memcpy(table->payloads[i].body, data, size);
        resourceQueryLoadStatus(*table->file, table->kind2Source[i]);
        for (s32 j = 0; j < table->kind0Count; j++) {
            if (table->kind2[i].word == table->kind0Source[j]) {
                RecordKind0 *kind0 = &table->kind0[j];
                if (kind0 != NULL && (kind0->words[1] == 0 || kind0->words[1] == 1) &&
                    (table->payloads[i].header[1] & 1) != 0) {
                    table->state = 7;
                    table->errors |= 0x400;
                    return;
                }
            }
        }
    }
    if (!loaded)
        return;
    table->state = 1;
}
}
