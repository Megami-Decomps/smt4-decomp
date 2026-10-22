/* camp/CampCec/CampCecRecv.c: the StreetPass (cec) receive screen of the camp. */
#ifndef CAMP_CAMPCEC_CAMPCECRECV_H
#define CAMP_CAMPCEC_CAMPCECRECV_H

#include "common.h"
#include <stddef.h>

/* The receive (StreetPass download) screen's work area. */
typedef struct CampCecRecv {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    union {
        /* 0x04 */ u8 unk04[0x3E4];
        struct {
            /* 0x004 */ u8 unk004BeforeValue[0x14a];
            /* 0x14E */ u16 value;
        } scriptValue;
        struct {
            /* 0x004 */ u8 unk004BeforeBuffers[0x344];
            /* 0x348 */ void *buffers[6];       /* heap blocks freed with the screen */
            /* 0x360 */ void *scripts[2];       /* script processes destroyed with the screen */
            /* 0x368 */ u8 unk368[0x78];
            /* 0x3E0 */ u32 received;           /* only the received data was set up */
        } resources;
    };
    /* 0x3E8 */ u8 done;                    /* the screen has finished */
    /* 0x3E9 */ u8 unk3E9[0x3];
    /* 0x3EC */ u8 unk3EC[0x3EC];
    /* 0x7D8 */ void *handles;                 /* handle array freed with the screen */
} CampCecRecv;

typedef char CampCecRecvResourceOffsets[offsetof(CampCecRecv, resources.buffers) == 0x348 &&
    offsetof(CampCecRecv, resources.received) == 0x3E0 && offsetof(CampCecRecv, done) == 0x3E8 &&
    offsetof(CampCecRecv, handles) == 0x7D8 ? 1 : -1];

#endif
