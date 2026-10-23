/* NON_MATCHING: NULL selection uses an immediate; retail retains a saved zero register. */
#include "gamedata/ConditionalMessageRecord.h"
#include "gamedata/DataTable.h"
#include "addon/aocMain.h"

extern "C" {
extern AocSystem *g_aocSystem;
s32 gameFlagIsSet(s32 flag);

/* Find the first matching base/DLC message whose required and excluded flags allow it. */
ConditionalMessageRecord *FUN_0027d614(s32 category, s32 kind)
{
    // The message extension tail lies beyond the shared AocSystem prefix.
    struct MessageExtension {
        u8 prefix[0x424];
        s32 count;
        ConditionalMessageRecord *records;
    };
    u32 index = 0;
    if ((s32)(dataTableGetCount(dataTableGet(0x23, 8)) +
        reinterpret_cast<MessageExtension *>(g_aocSystem)->count) > 0) {
        do {
            void *table = dataTableGet(0x23, 8);
            ConditionalMessageRecord *records =
                static_cast<ConditionalMessageRecord *>(dataTableGetEntries(table));
            u32 count = dataTableGetCount(table);
            ConditionalMessageRecord *record;
            if (index < count) {
                record = records + index;
            } else {
                MessageExtension *extension = reinterpret_cast<MessageExtension *>(g_aocSystem);
                u32 end = count + extension->count;
                records = extension->records;
                record = index < end ? records + (index - count) : NULL;
            }
            if (record->category == -1) {
                return NULL;
            }
            if (record->category == category && record->kind == kind &&
                (!record->requiredFlag || gameFlagIsSet(record->requiredFlag)) &&
                (!record->excludedFlag || !gameFlagIsSet(record->excludedFlag))) {
                return record;
            }
            ++index;
        } while ((s32)index < (s32)(dataTableGetCount(dataTableGet(0x23, 8)) +
                 reinterpret_cast<MessageExtension *>(g_aocSystem)->count));
    }
    return NULL;
}
}
