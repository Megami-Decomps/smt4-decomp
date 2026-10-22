#ifndef UI_PARTYPANEL_H
#define UI_PARTYPANEL_H

#include "common.h"

struct PartyMember {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 effectSpeed;
    /* 0x24 */ u8 unk24[0x68];
};

struct PartyPanel {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ PartyMember members[0x11];
};

typedef char PartyMemberSizeCheck[sizeof(PartyMember) == 0x8C ? 1 : -1];

#endif
