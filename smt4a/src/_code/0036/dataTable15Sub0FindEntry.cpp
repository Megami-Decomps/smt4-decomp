/* NON_MATCHING: structure, unrolled search and hour/minute blocks match; only the record count lives in r2 where retail keeps it in r3 (and the loop temp swaps with it). */
#include "gamedata/DataTable.h"

struct StatusDescriptionRecord {
    u8 id;
    u8 unk01[3];
    char text[96];
};

static StatusDescriptionRecord *findStatusDescriptionRecord(u32 id)
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
    u32 minutes = (seconds - hours * 3600) / 60;
    if (hours == 0) {
        textFormatBuffer(time, "%02d\x82\x6c", minutes);
    } else {
        textFormatBuffer(time, "%d\x82\x67\x81\x40%02d\x82\x6c", hours, minutes);
    }
    textFormatBuffer(DAT_005e1ebc, "%s%s", match->text, time);
    return DAT_005e1ebc;
}
}
