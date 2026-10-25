#include "common.h"

extern "C" {

struct FlagRecord {
    /* 0x00 */ u8 unk00[0x8A];
    /* 0x8A */ s8 flags;
};

/* Read the record's flag byte. */
s8 uiSpriteGetCompletionState(const FlagRecord *record)
{
    return record->flags;
}

}
