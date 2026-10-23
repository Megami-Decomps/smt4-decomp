/* NON_MATCHING: Retail unrolls the record search in pairs and places the hour/minute formatting blocks differently. */
#include "gamedata/DataTable.h"

struct StatusDescriptionRecord {
    u8 id;
    u8 unk01[3];
    char text[96];
};

static __inline StatusDescriptionRecord *findStatusDescriptionRecord(u32 id)
{
    void *table = dataTableGet(0x15, 0);
    StatusDescriptionRecord *records = (StatusDescriptionRecord *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    for (s32 index = 0; index < count; ++index) {
        if (records[index].id == id) {
            return &records[index];
        }
    }
    return NULL;
}

extern "C" {
extern char DAT_005e1ebc[];
u32 gameDataBlocksGetSelectedValue(void);
void textFormatBuffer(char *output, const char *format, ...);

/* Finds a status description, appending the rounded-up play time for the duration entry. */
char *dataTable15Sub0FindEntry(u32 id)
{
    StatusDescriptionRecord *match = findStatusDescriptionRecord(id);
    if (match == NULL) {
        return NULL;
    }
    if (id != 53) {
        return match->text;
    }
    char time[128];
    u32 seconds = gameDataBlocksGetSelectedValue() + 59;
    u32 hours = seconds / 3600;
    u32 minutes = (seconds % 3600) / 60;
    if (hours != 0) {
        textFormatBuffer(time, "%d\x82\x67\x81\x40%02d\x82\x6c", hours, minutes);
    } else {
        textFormatBuffer(time, "%02d\x82\x6c", minutes);
    }
    textFormatBuffer(DAT_005e1ebc, "%s%s", match->text, time);
    return DAT_005e1ebc;
}
}
