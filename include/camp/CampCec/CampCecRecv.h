/* camp/CampCec/CampCecRecv.c: the StreetPass (cec) receive screen of the camp. */
#ifndef CAMP_CAMPCEC_CAMPCECRECV_H
#define CAMP_CAMPCEC_CAMPCECRECV_H

#include "common.h"

/* The receive (StreetPass download) screen's work area. */
typedef struct CampCecRecv {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    union {
        /* 0x04 */ u8 unk04[0x3E4];
        struct {
            /* 0x004 */ u8 unk004BeforeValue[0x14a];
            /* 0x14E */ u16 value;
        } scriptValue;
    };
    /* 0x3E8 */ u8 done;                    /* the screen has finished */
    /* 0x3E9 */ u8 unk3E9[0x3];
} CampCecRecv;

#endif
