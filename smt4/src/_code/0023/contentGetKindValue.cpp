#include "common.h"

struct ContentKindValueRecord {
    /* 0x00 */ u8 unk00[0x66];
    /* 0x66 */ s16 primary;
    /* 0x68 */ s16 alternate;
};

extern "C" s32 aocEntryGetKind(u32 id);
extern "C" ContentKindValueRecord *dataTable08Sub2GetRecord(u32 id);
extern "C" s32 recordGetPercentageScaledBase(const ContentKindValueRecord *record);

/* Select the content record's value according to its downloadable-content kind. */
extern "C" s32 contentGetKindValue(u32 id)
{
    if (id == 0)
        return 0;
    s32 value = 0;
    switch (aocEntryGetKind(id)) {
    case 4:
    case 5:
    case 6:
        value = dataTable08Sub2GetRecord(id)->primary;
        break;
    case 7:
        value = dataTable08Sub2GetRecord(id)->alternate;
        break;
    default:
        ContentKindValueRecord *record = dataTable08Sub2GetRecord(id);
        if (record != NULL)
            value = recordGetPercentageScaledBase(record);
        break;
    }
    return value;
}
