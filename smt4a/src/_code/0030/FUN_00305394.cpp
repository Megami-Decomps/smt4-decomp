/* NON_MATCHING: retail builds the record in the loop without hoisting its vptr/flag constants (no r7, no spill of the vector pointer); the compiler hoists them and spills. */
#include "sys/StreamReader.h"
#include "stl/Obj55a168Values.h"

extern "C" {
int streamReadU32(StreamReader *reader, u32 *value);
void FUN_0011d518(StreamReader *reader, Obj55a168 *record);

/* Reads a count and that many records into the vector; any read error empties it again. */
void FUN_00305394(StreamReader *reader, Obj55a168Values *values)
{
    values->clear();
    u32 count;
    if (streamReadU32(reader, &count)) {
        values->reserve(count);
        for (u32 i = 0; i < count && !reader->error; ++i) {
            Obj55a168 record;
            FUN_0011d518(reader, &record);
            if (reader->error) {
                values->clear();
                return;
            }
            values->push_back(record);
        }
    }
}

} /* extern "C" */
