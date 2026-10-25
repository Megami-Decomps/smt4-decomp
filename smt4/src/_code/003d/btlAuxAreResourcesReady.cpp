#include "common.h"

struct ReadinessRecord {
    u32 unk00;
    s32 state;
    u8 unk08[0x80];
    u8 flags;
    u8 unk89[3];
};
struct ReadinessPair {
    u8 unk00[0x2bc4];
    ReadinessRecord records[2];
};

extern "C" {
void __aeabi_memcpy4(void* destination, const void* source, u32 size);

u32 btlAuxAreResourcesReady(const ReadinessPair* pair)
{
    for (s32 index = 0; index < 2; ++index) {
        ReadinessRecord record;
        __aeabi_memcpy4(&record, &pair->records[index], sizeof(record));
        if ((record.flags & 1) != 0 && record.state == 0) {
            return 0;
        }
    }
    return 1;
}
}
