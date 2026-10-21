#ifndef SHARD_W6_W6MATCH8_AOCTABLE03_H
#define SHARD_W6_W6MATCH8_AOCTABLE03_H

#include "shard/W6_W6Match1_Table03Record.h"

// Add-on opcode 0x1c records prepend a lookup key to a table 3 payload.
struct AocKeyedTable03Record {
    u32 key;
    Table03Record record;
};

#endif
