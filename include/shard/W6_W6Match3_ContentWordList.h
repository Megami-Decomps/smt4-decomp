#ifndef W6_W6MATCH3_CONTENT_WORD_LIST_H
#define W6_W6MATCH3_CONTENT_WORD_LIST_H

#include "common.h"

// Data table 5, section 4. Retains the existing lookup's record tag.
struct Entry0035dd74 {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 ids[12];
    /* 0x1a */ u16 value;
};

struct ContentWordList {
    /* 0x00 */ u16 value;
    /* 0x02 */ u16 ids[12];
    /* 0x1a */ u8 unk1a[0xe];
};

// contentBuildWordList takes a u16 ID in SMT IV and a u32 ID in Apocalypse.
// Its declaration therefore belongs with each game's caller, not this shared layout.
#endif
