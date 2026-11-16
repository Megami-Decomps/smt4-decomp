#include "gamedata/ConditionalMessageRecord.h"
#include "gamedata/DataTable.h"
#include "addon/aocMain.h"

extern "C" {
extern AocSystemA *g_aocSystem;
s32 gameFlagIsSet(s32 flag);
}

/* The message extension tail lies beyond the shared AocSystem prefix. */
struct MessageExtension {
    u8 prefix[0x424];
    s32 count;
    ConditionalMessageRecord *records;
};

static u32 tableSectionCount(s32 table, s32 section)
{
    return dataTableGetCount(dataTableGet(table, section));
}

/* Message `index` of table 0x23's section 8, continued by the add-on extension; NULL past both. */
static ConditionalMessageRecord *messageRecordAt(u32 index)
{
    void *table = dataTableGet(0x23, 8);
    ConditionalMessageRecord *records = static_cast<ConditionalMessageRecord *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);
    if (index < count)
        return &records[index];
    MessageExtension *extension = reinterpret_cast<MessageExtension *>(g_aocSystem);
    ConditionalMessageRecord *extra = extension->records;
    u32 extensionCount = extension->count;
    if (index < count + extensionCount)
        return &extra[index - count];
    return NULL;
}

/* Find the first matching base/DLC message whose required and excluded flags allow it. */
extern "C" ConditionalMessageRecord *conditionalMessageFind(s32 category, s32 kind)
{
    for (u32 index = 0;
         (s32)index < (s32)(tableSectionCount(0x23, 8) + reinterpret_cast<MessageExtension *>(g_aocSystem)->count);
         ++index) {
        ConditionalMessageRecord *record = messageRecordAt(index);
        if (record->category == -1) {
            return NULL;
        }
        if (record->category == category && record->kind == kind &&
            (!record->requiredFlag || gameFlagIsSet(record->requiredFlag)) &&
            (!record->excludedFlag || !gameFlagIsSet(record->excludedFlag))) {
            return record;
        }
    }
    return NULL;
}
