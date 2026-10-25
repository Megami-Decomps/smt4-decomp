/* NON_MATCHING: register allocation only: retail spills the data argument to the frame ([sp,#24], block at sp+0) and keeps the running total in sl; built keeps data in a register and spills the total */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/S3AsdModelAttr.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

s32 rt_memcmp(const void *a, const void *b, u32 size);
void *FUN_002a4e98(AsdEplTail *tail);

extern const char DAT_00409428[];  /* "ATBC" */
extern const char DAT_00409430[];  /* "EPLSIGN" */

/* Rebuilds the model's attribute records: one record per id of every used entry of the file's containers. */
void FUN_001457ec(AsdModelAttrModelB *model, u8 *data)
{
    AsdEplBlockHeader block;
    AsdEplEntry *entry;
    AsdModelAttrSet &attr = model->attr;
    s32 total = 0;

    if (rt_memcmp(data, DAT_00409428, 4) == 0) {
        total = ((AsdAtbcHeader *)data)->count;
    }
    attr.containers.count = total;
    AsdModelAttrRecords &records = attr.records;
    records.count = 0;
    total = 0;
    for (s32 i = 0; i < attr.containers.count; i++) {
        AsdAtbcHeader *atbc = (AsdAtbcHeader *)data;

        if (rt_memcmp(atbc, DAT_00409428, 4) == 0 && atbc->count > 0 && atbc->count > i) {
            s32 blockCount = atbc->count;
            u8 *cursor = (u8 *)atbc + atbc->firstOffset;

            for (s32 j = 0;; j++) {
                if (rt_memcmp(cursor, DAT_00409430, 7) != 0) {
                    break;
                }
                memCopy(cursor, &block, sizeof(block));
                entry = (AsdEplEntry *)(cursor + sizeof(block));
                if (i == j) {
                    break;
                }
                cursor += block.size;
                if (blockCount == 0) {
                    break;
                }
            }
        }
        if ((entry->flags & 1) != 0) {
            total += entry->hi - entry->lo + 1;
        }
    }
    records.count = total;
    if (total == 0) {
        records.items = NULL;
    } else {
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 1739);
    records.items = (AsdModelAttrRecord *)asdMemAlloc(256, 256, 0, records.count * sizeof(AsdModelAttrRecord), 1);

    s32 count = 0;
    for (s32 i = 0; i < attr.containers.count; i++) {
        AsdAtbcHeader *atbc = (AsdAtbcHeader *)data;

        if (rt_memcmp(atbc, DAT_00409428, 4) == 0 && atbc->count > 0 && atbc->count > i) {
            s32 blockCount = atbc->count;
            u8 *cursor = (u8 *)atbc + atbc->firstOffset;

            for (s32 j = 0;; j++) {
                if (rt_memcmp(cursor, DAT_00409430, 7) != 0) {
                    break;
                }
                memCopy(cursor, &block, sizeof(block));
                entry = (AsdEplEntry *)(cursor + sizeof(block));
                if (i == j) {
                    break;
                }
                cursor += block.size;
                if (blockCount == 0) {
                    break;
                }
            }
        }
        AsdEplTail *tail = entry != NULL ? &entry->tail : NULL;

        if ((entry->flags & 1) != 0 && entry->lo <= entry->hi) {
            s32 id = entry->lo;

            do {
                AsdModelAttrRecord *record = &records.items[count];

                record->id = id;
                record->handle = FUN_002a4e98(tail);
                count++;
                id++;
                record->flags = entry->flags;
            } while (entry->hi >= id);
        }
    }
    }
}

} /* extern "C" */
