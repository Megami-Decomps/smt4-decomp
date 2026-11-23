#ifndef UI_PARTNER_CARD_H
#define UI_PARTNER_CARD_H

#include "gamedata/GameSaveDataA.h"

struct PartnerCardScreen {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 mode;
    /* 0x005 */ u8 unk005[0x333];
    /* 0x338 */ u8 active[16];
    /* 0x348 */ s32 cycle[12]; /* Frames each slot's marker has been shown. */
    /* 0x378 */ s32 marker[12]; /* Which owned marker each slot shows. */
};

typedef char PartnerCardScreenCycleCheck[offsetof(PartnerCardScreen, cycle) == 0x348 ? 1 : -1];
typedef char PartnerCardScreenMarkerCheck[offsetof(PartnerCardScreen, marker) == 0x378 ? 1 : -1];

extern "C" void partnerCardDrawAilmentMarker(PartnerCardScreen *screen, SlotRecordA *unit, s32 slot, s32 x, s32 y, f32 scale);

#endif
