/* NON_MATCHING: retail's frame has 16 unused bytes below the count and computes the record address before the capacity compare; the compiler uses a 32-byte frame and recomputes the address per branch. */
#include "sys/StreamReader.h"
#include "stl/Obj55a88cValues.h"

extern "C" {
int streamReadU32(StreamReader *reader, u32 *value);
void FUN_001201d8(StreamReader *reader, Obj55a88c *record);

/* Reads a count and that many records into the vector; any read error empties it again. */
void FUN_00304f04(StreamReader *reader, Obj55a88cValues *values)
{
    values->clear();
    u32 count;
    if (streamReadU32(reader, &count)) {
        values->reserve(count);
        for (u32 i = 0; i < count && !reader->error; ++i) {
            Obj55a88c record;
            FUN_001201d8(reader, &record);
            if (reader->error) {
                values->clear();
                return;
            }
            values->push_back(record);
        }
    }
}

} /* extern "C" */
