#ifndef GAMEDATA_NAVI_DESTINATION_RECORD_H
#define GAMEDATA_NAVI_DESTINATION_RECORD_H
#include "common.h"

struct NaviDestinationRecord {
    u8 unk00[0x2E]; // 0x00
    s16 mapId; // 0x2E
    s16 unk30; // 0x30
    s16 unk32; // 0x32
    s16 unk34; // 0x34
    s16 unk36; // 0x36
};
#endif
