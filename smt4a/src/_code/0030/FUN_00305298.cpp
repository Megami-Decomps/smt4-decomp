/* NON_MATCHING: retail computes the record address into r2 before the capacity compare and keeps the loop counter in r5 (stream in r4); the compiler recomputes the address in each branch and swaps r4/r5. */
#include "sys/StreamReader.h"
#include "stl/Obj559edcValues.h"

extern "C" {
int streamReadU32(StreamReader *reader, u32 *value);
void FUN_00117906(StreamReader *reader, Obj559edc *record);

/* Reads a count and that many records into the vector; any read error empties it again. */
void FUN_00305298(StreamReader *reader, Obj559edcValues *values)
{
    values->clear();
    u32 count;
    if (streamReadU32(reader, &count)) {
        values->reserve(count);
        for (u32 i = 0; i < count && !reader->error; ++i) {
            Obj559edc record;
            FUN_00117906(reader, &record);
            if (reader->error) {
                values->clear();
                return;
            }
            values->push_back(record);
        }
    }
}

} /* extern "C" */
