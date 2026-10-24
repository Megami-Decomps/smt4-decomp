/* NON_MATCHING: as in FUN_001ad2a4, retail keeps the two arguments in the stack frame (push {r0, r1}) and reloads the file pointer for every container scan; the allocation and the scan order otherwise follow retail (about 240 diff lines). */
#include "common.h"
#include "shard/S3AsdModelAttr.h"

extern "C" {

s32 rt_memcmp(const void *a, const void *b, u32 size);
void FUN_002e59f8(const void *src, void *dst, s32 size);
void *asdMemoryAllocTracked(u32 size, u32 align, u32 arg2, u32 arg3, u32 arg4);
void *FUN_001abbc4(AsdEplTail *tail);

extern const char g_asdModelContainerAtbcMagic[];  /* "ATBC" */
extern const char g_asdModelContainerAbchMagic[];  /* second container magic */
extern const char DAT_0053d1a0[];  /* "EPLSIGN" */

/* Rebuilds the model's attribute records from the file's containers: one record per id of every entry that has bit 0
 * of its flags set (the key-less sibling of FUN_001ad2a4). */
void FUN_0019d57c(AsdModelAttrModel *model, u8 *data)
{
    AsdEplBlockHeader block;
    AsdEplEntry *entry;
    s32 total = 0;

    {
        AsdAtbcHeader *atbc = (AsdAtbcHeader *)data;
        s32 containers = 0;
        if (rt_memcmp(atbc, g_asdModelContainerAtbcMagic, 4) == 0 ||
            rt_memcmp(atbc, g_asdModelContainerAbchMagic, 4) == 0) {
            containers = atbc->count;
        }
        model->containers.count = containers;
    }
    model->records.count = 0;
    for (s32 i = 0; i < model->containers.count; i++) {
        AsdAtbcHeader *atbc = (AsdAtbcHeader *)data;

        if ((rt_memcmp(atbc, g_asdModelContainerAtbcMagic, 4) == 0 ||
             rt_memcmp(atbc, g_asdModelContainerAbchMagic, 4) == 0) && atbc->count > 0 && atbc->count > i) {
            u8 *cursor = (u8 *)atbc + atbc->firstOffset;

            for (s32 j = 0;; j++) {
                if (rt_memcmp(cursor, DAT_0053d1a0, 7) != 0) {
                    break;
                }
                FUN_002e59f8(cursor, &block, sizeof(block));
                entry = (AsdEplEntry *)(cursor + sizeof(block));
                if (i == j) {
                    break;
                }
                cursor += block.size;
                if (atbc->count == 0) {
                    break;
                }
            }
        }
        if ((entry->flags & 1) != 0) {
            total += entry->hi - entry->lo + 1;
        }
    }
    model->records.count = total;
    if (total == 0) {
        model->records.items = NULL;
        return;
    }
    model->records.items = (AsdModelAttrRecord *)asdMemoryAllocTracked(256, 256, 0, model->records.count * sizeof(AsdModelAttrRecord), 1);

    s32 count = 0;
    for (s32 i = 0; i < model->containers.count; i++) {
        AsdAtbcHeader *atbc = (AsdAtbcHeader *)data;

        if ((rt_memcmp(atbc, g_asdModelContainerAtbcMagic, 4) == 0 ||
             rt_memcmp(atbc, g_asdModelContainerAbchMagic, 4) == 0) && atbc->count > 0 && atbc->count > i) {
            u8 *cursor = (u8 *)atbc + atbc->firstOffset;

            for (s32 j = 0;; j++) {
                if (rt_memcmp(cursor, DAT_0053d1a0, 7) != 0) {
                    break;
                }
                FUN_002e59f8(cursor, &block, sizeof(block));
                entry = (AsdEplEntry *)(cursor + sizeof(block));
                if (i == j) {
                    break;
                }
                cursor += block.size;
                if (atbc->count == 0) {
                    break;
                }
            }
        }
        AsdEplTail *tail = entry != NULL ? &entry->tail : NULL;

        if ((entry->flags & 1) != 0 && entry->lo <= entry->hi) {
            s32 id = entry->lo;

            do {
                AsdModelAttrRecord *record = &model->records.items[count];

                record->id = id;
                record->handle = FUN_001abbc4(tail);
                count++;
                id++;
                record->flags = entry->flags;
            } while (entry->hi >= id);
        }
    }
}

} /* extern "C" */
