/* NON_MATCHING: retail builds the record in the loop without hoisting its vptr/flag constants (no r7, no spill of the vector pointer); the compiler hoists them and spills. */
#include "sys/StreamReader.h"
#include "stl/Obj559bb0Values.h"

extern "C" {
int streamReadU32(StreamReader *reader, u32 *value);
void FUN_0011bfa6(StreamReader *reader, Obj559bb0 *record);

/* Reads a count and that many records into the vector; any read error empties it again. */
void FUN_00305314(StreamReader *reader, Obj559bb0Values *values)
{
    values->clear();
    u32 count;
    if (streamReadU32(reader, &count)) {
        values->reserve(count);
        for (u32 i = 0; i < count && !reader->error; ++i) {
            Obj559bb0 record;
            FUN_0011bfa6(reader, &record);
            if (reader->error) {
                values->clear();
                return;
            }
            values->push_back(record);
        }
    }
}

} /* extern "C" */
