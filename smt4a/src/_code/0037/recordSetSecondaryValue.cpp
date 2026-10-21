#include "shard/W5_W5Match2_ScalarRecord.h"

extern "C" {

/* Store the record's secondary value. */
void recordSetSecondaryValue(SecondaryValueRecord *record, u16 value)
{
    record->secondaryValue = value;
}

}
