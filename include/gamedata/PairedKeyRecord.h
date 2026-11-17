#ifndef SMT4_GAMEDATA_PAIREDKEYRECORD_H
#define SMT4_GAMEDATA_PAIREDKEYRECORD_H

#include "common.h"

struct PairedKeyRecord {
    u16 second; // 0x00
    u16 first;  // 0x02
    u32 value;  // 0x04
};

#endif
