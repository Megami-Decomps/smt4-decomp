#include "common.h"

extern "C" {

typedef struct Table23Entry {
    /* 0x0 */ s32 first;
    /* 0x4 */ s32 second;
} Table23Entry;

extern s32 dataTable23Count(void);
extern Table23Entry *dataTable23GetEntry(s32 index);

/* Returns the index (from 1) of the first data table 0x23 entry that has `key` as its first or second value; 0 when none. */
s32 dataTable23FindIndexByValue(s32 key)
{
    s32 count = dataTable23Count();
    s32 i;

    if (key != 0) {
        for (i = 1; i < count; i++) {
            Table23Entry *entry = dataTable23GetEntry(i);

            if (entry->first == key || entry->second == key) {
                return (s16)i;
            }
        }
    }
    return 0;
}

} /* extern "C" */
