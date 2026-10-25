#include "common.h"

struct ReadinessRecord {
    u32 unk00;
    u32 state;
    u8 unk08[0x80];
    u8 flags;
    u8 unk89[3];
};
struct PairedReadinessOwner {
    u8 unk0000[0x3284];
    ReadinessRecord records[2];
};

extern "C" {
bool FUN_004fa5ec(const PairedReadinessOwner *owner)
{
    for (s32 i = 0; i < 2; ++i) {
        ReadinessRecord record = owner->records[i];
        if ((record.flags & 1) != 0 && record.state == 0) {
            return false;
        }
    }
    return true;
}
}
