#ifndef GAMEDATA_AOCITEMREF_H
#define GAMEDATA_AOCITEMREF_H

#include "common.h"

/* An item reference: the item id and its price scaling. */
struct AocItemRef {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 unk02Bit0 : 1;
    /* 0x02 */ u16 scaled : 1;  /* the price is scaled by `percent` */
    /* 0x02 */ u16 percent : 8;
    /* 0x02 */ u16 unk02Bits10 : 6;
};

#endif
