/* NON_MATCHING: retail uses adds r1, #8 where the compiled block uses beq.n 1c. */
#include "common.h"

struct Entry {
    u32 first;   // 0x00
    u32 second;  // 0x04
};

struct EntryBuffer {
    Entry* begin;        // 0x00
    Entry* end;          // 0x04
    Entry* capacityEnd;  // 0x08
};

extern "C" void FUN_001359a8(EntryBuffer* buffer, Entry* position, const Entry* value);

extern "C" void FUN_00135a7c(EntryBuffer* buffer, const Entry* value)
{
    if (buffer->end != buffer->capacityEnd) {
        Entry* position = buffer->end++;
        if (position != NULL) {
            *position = *value;
        }
    } else {
        FUN_001359a8(buffer, buffer->end, value);
    }
}
