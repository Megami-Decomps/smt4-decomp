/* NON_MATCHING: register allocation and frame: retail keeps the three arguments in the stack frame (push {r0-r2}) and reaches the model through sub-object pointers (r8 = &model->records, fp = &model->containers); the scan logic is the same. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/S3AsdModelAttr.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "shard/memCopy.h"

extern "C" {

s32 rt_memcmp(const void *a, const void *b, u32 size);
void *FUN_002a4e98(AsdEplTail *tail);

extern const char DAT_00409428[];  /* "ATBC" */
extern const char DAT_00409430[];  /* "EPLSIGN" */

/* Rebuilds the model's attribute records for `key`: one record per id of every matching entry
 * of the file's containers. */
void FUN_0014edd0(AsdModelAttrModel *model, u8 *data, s32 key)
{
    AsdEplBlockHeader block;
    AsdEplEntry *entry;
    s32 total = 0;

    model->records.count = 0;
    for (s32 i = 0; i < model->containers.count; i++) {
        AsdAtbcHeader *atbc = (AsdAtbcHeader *)data;

        if (rt_memcmp(atbc, DAT_00409428, 4) == 0 && atbc->count > 0 && atbc->count > i) {
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
                if (atbc->count == 0) {
                    break;
                }
            }
        }
        if ((entry->flags & 1) == 0 && entry->key == key) {
            total += entry->hi - entry->lo + 1;
        }
    }
    model->records.count = total;
    if (total == 0) {
        model->records.items = NULL;
        return;
    }
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 1689);
    model->records.items = (AsdModelAttrRecord *)asdMemAlloc(256, 256, 0, model->records.count * sizeof(AsdModelAttrRecord), 1);

    s32 count = 0;
    for (s32 i = 0; i < model->containers.count; i++) {
        AsdAtbcHeader *atbc = (AsdAtbcHeader *)data;

        if (rt_memcmp(atbc, DAT_00409428, 4) == 0 && atbc->count > 0 && atbc->count > i) {
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
                if (atbc->count == 0) {
                    break;
                }
            }
        }
        AsdEplTail *tail = entry != NULL ? &entry->tail : NULL;

        if ((entry->flags & 1) == 0 && entry->key == key && entry->lo <= entry->hi) {
            s32 id = entry->lo;

            do {
                AsdModelAttrRecord *record = &model->records.items[count];

                record->id = id;
                record->handle = FUN_002a4e98(tail);
                count++;
                id++;
                record->flags = entry->flags;
            } while (entry->hi >= id);
        }
    }
}

} /* extern "C" */
