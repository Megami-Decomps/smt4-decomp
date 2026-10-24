/* NON_MATCHING: retail calls out-of-line vector<SerialRecord> members (clear FUN_0030d1bc, reserve FUN_0013395c, construct FUN_0030d19e, _C_insert_aux FUN_0013389c); armcc inlines them here. Needs those instantiations as units with matching names. */
#include "common.h"
#include <vector>
#include "stl/AsdAllocator.h"

struct Stream {
    u8 unk00[4];
    u8 failed; // 0x04
};

class SerialRecord {
public:
    SerialRecord();
    SerialRecord(const SerialRecord &);
    virtual ~SerialRecord();
    u8 unk04;
    u8 unk05[0x1b];
};

extern "C" {
s32 streamReadU32(Stream *stream, u32 *value);
void FUN_0011ee1e(Stream *stream, SerialRecord *record);
}

// Read a count-prefixed list of records from the stream into the vector.
extern "C" void FUN_00304e8e(Stream *stream, std::vector<SerialRecord, AsdAllocator<SerialRecord> > *list)
{
    u32 count;
    list->clear();
    if (streamReadU32(stream, &count)) {
        list->reserve(count);
        for (u32 i = 0; i < count && !stream->failed; i++) {
            SerialRecord record;
            FUN_0011ee1e(stream, &record);
            if (stream->failed) {
                list->clear();
                return;
            }
            list->push_back(record);
        }
    }
}
