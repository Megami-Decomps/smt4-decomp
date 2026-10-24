/* NON_MATCHING: retail zeroes the inner vector through r0 right before the read and keeps no spare registers (push {r0-r6}); the compiler hoists the zero into a callee-saved register and uses a 20-byte frame. */
#include "sys/StreamReader.h"
#include "stl/Obj55a87cValueLists.h"

extern "C" {
int streamReadU32(StreamReader *reader, u32 *value);
void FUN_00303698(StreamReader *reader, Obj55a87cValues *values);

/* Reads a count and that many record lists into the vector; any read error empties it again. */
void FUN_00304d1a(StreamReader *reader, Obj55a87cValueLists *lists)
{
    lists->clear();
    u32 count;
    if (streamReadU32(reader, &count)) {
        lists->reserve(count);
        for (u32 i = 0; i < count && !reader->error; ++i) {
            Obj55a87cValues values;
            FUN_00303698(reader, &values);
            if (reader->error) {
                lists->clear();
                return;
            }
            lists->push_back(values);
        }
    }
}

} /* extern "C" */
