#ifndef CAMP_CAMP_H
#define CAMP_CAMP_H

#include "common.h"

/* What the camp reports to the screen that opened it. */
struct CampResult {
    /* 0x00 */ u8 keepUi;          /* the caller's windows stay up */
    /* 0x01 */ u8 startQuestEvent; /* run the event of quest `questId` */
    /* 0x02 */ u8 requestPrimary;
    /* 0x03 */ u8 requestSecondary;
    /* 0x04 */ u8 changed;         /* any of the requests below was made */
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u16 mapValue;       /* stored in the map save block */
    /* 0x08 */ u16 questId;
    /* 0x0A */ u8 keepSlot;        /* nonzero: the caller does not restart its title slot */
    /* 0x0B */ u8 unk0B;
};

extern "C" {
CampResult *campGetState(void);
}

#endif
