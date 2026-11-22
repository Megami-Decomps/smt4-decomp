/* NON_MATCHING: 214 lines. The records this function builds are the model's second list at +0x98 (retail stores the
 * count and the array there, not at +0xA0), and the allocation is traced at AsdModel.cpp:1743. Left: as in
 * asdModelBuildAttributeRecordsForKey, retail keeps the two arguments in the stack frame (push {r0, r1}), reloads
 * the file pointer for every container scan and reaches the model through the sub-object pointers. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/AsdMemCopy.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

s32 rt_memcmp(const void *a, const void *b, u32 size);
void *asdMemoryAllocTracked(u32 size, u32 align, u32 arg2, u32 arg3, u32 arg4);
void *effPartCreateFromSource(AsdEplTail *tail);

extern const char g_asdModelContainerAtbcMagic[];  /* "ATBC" */
extern const char g_asdModelContainerAbchMagic[];  /* second container magic */
extern const char DAT_0053d1a0[];  /* "EPLSIGN" */

/* Rebuilds the model's attribute records from the file's containers: one record per id of every entry that has bit 0
 * of its flags set (the key-less sibling of asdModelBuildAttributeRecordsForKey). */
void asdModelBuildFlaggedAttributeRecords(AsdMdlNode *model, u8 *data)
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
    model->flaggedRecords.count = 0;
    for (s32 i = 0; i < model->containers.count; i++) {
        AsdAtbcHeader *atbc = (AsdAtbcHeader *)data;

        if ((rt_memcmp(atbc, g_asdModelContainerAtbcMagic, 4) == 0 ||
             rt_memcmp(atbc, g_asdModelContainerAbchMagic, 4) == 0) && atbc->count > 0 && atbc->count > i) {
            u8 *cursor = (u8 *)atbc + atbc->firstOffset;

            for (s32 j = 0;; j++) {
                if (rt_memcmp(cursor, DAT_0053d1a0, 7) != 0) {
                    break;
                }
                memcpySrcFirst(cursor, &block, sizeof(block));
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
    model->flaggedRecords.count = total;
    if (total == 0) {
        model->flaggedRecords.items = NULL;
        return;
    }
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 1743);
    model->flaggedRecords.items = (AsdModelAttrRecord *)asdMemoryAllocTracked(256, 256, 0, model->flaggedRecords.count * sizeof(AsdModelAttrRecord), 1);

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
                memcpySrcFirst(cursor, &block, sizeof(block));
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
                AsdModelAttrRecord *record = &model->flaggedRecords.items[count];

                record->id = id;
                record->handle = effPartCreateFromSource(tail);
                count++;
                id++;
                record->flags = entry->flags;
            } while (entry->hi >= id);
        }
    }
}

} /* extern "C" */
