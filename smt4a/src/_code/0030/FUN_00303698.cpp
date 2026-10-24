/* NON_MATCHING: retail keeps the record's base vptr store (_ZTV9Obj55ad20+8) in the loop through r6 and computes the record address before the capacity compare; the compiler drops the empty destructor store and recomputes the address per branch. */
#include "sys/StreamReader.h"
#include "stl/Obj55a87cValues.h"

extern "C" {
int streamReadU32(StreamReader *reader, u32 *value);
void FUN_0012014a(StreamReader *reader, Obj55a87c *record);

/* Reads a count and that many records into the vector; any read error empties it again. */
void FUN_00303698(StreamReader *reader, Obj55a87cValues *values)
{
    values->clear();
    u32 count;
    if (streamReadU32(reader, &count)) {
        values->reserve(count);
        for (u32 i = 0; i < count && !reader->error; ++i) {
            Obj55a87c record;
            FUN_0012014a(reader, &record);
            if (reader->error) {
                values->clear();
                return;
            }
            values->push_back(record);
        }
    }
}

} /* extern "C" */
