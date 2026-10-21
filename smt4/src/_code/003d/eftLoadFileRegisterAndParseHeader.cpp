#include "common.h"

struct EffectFileHeader {
    u8 recordIndex; // 0x00
    u8 unk01[3];
    char *data; // 0x04
    char name[0x20]; // 0x08
};
struct EffectFileOwner {
    u8 unk0000[0x2f9c];
    EffectFileHeader header; // 0x2f9c
};

extern "C" {
u32 keyedRecordRegisterName(const char *name);
u32 FUN_00249e54(u32 index, char *data);
u32 FUN_0024679c(void);

// Register and parse a VER-prefixed effect resource, then update texture readiness.
u32 eftLoadFileRegisterAndParseHeader(EffectFileOwner *owner)
{
    EffectFileHeader *header = &owner->header;
    char *data = header->data;
    if (data[0] == 'V' && data[1] == 'E' && data[2] == 'R') {
        u32 index = keyedRecordRegisterName(header->name);
        header->recordIndex = index;
        header->recordIndex = FUN_00249e54(index, data);
    }
    FUN_0024679c();
    return 1;
}
}
