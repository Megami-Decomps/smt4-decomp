#include "common.h"

struct BattleRecord {
    u16 first;  // 0x00
    u16 second; // 0x02
    u32 third;  // 0x04
    u32 fourth; // 0x08
    u32 unk0c;  // 0x0c
};
struct BattleRecordUnit {
    u8 unk000[0x9e4];        // 0x000
    BattleRecord records[133]; // 0x9e4
    u8 unk1234[0x20];        // 0x1234
};

// Clears the active fields of all records in the selected battle-unit slot.
extern "C" void btlUnitClearRecordFields(BattleRecordUnit* units, s32 unitIndex)
{
    for (s32 i = 0; i < 133; ++i) {
        units[unitIndex].records[i].first = 0;
        units[unitIndex].records[i].second = 0;
        units[unitIndex].records[i].third = 0;
        units[unitIndex].records[i].fourth = 0;
    }
}
