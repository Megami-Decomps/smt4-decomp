/* AsdSDK/Source/Net/Cec/AsdCec.cpp: StreetPass (nn::cec) message boxes.
 *
 * The game keeps one AsdCec object. It wraps the CEC message box (inbox = kind 0, outbox = kind 1)
 * and reads messages out of it: open the box, find a message's id and size, read it into a
 * temporary buffer and copy its body out. */
#ifndef ASDSDK_SOURCE_NET_CEC_ASDCEC_H
#define ASDSDK_SOURCE_NET_CEC_ASDCEC_H

#include "common.h"

#define ASD_CEC_INBOX 0
#define ASD_CEC_OUTBOX 1

/* nn::cec::CTR::MessageBox as far as the game looks inside it. It has a virtual destructor. */
typedef struct AsdCecMessageBox {
    /* 0x000 */ void **vtable;
    /* 0x004 */ u8 unk004[0x20c];
    /* 0x210 */ u32 inboxCount;
    /* 0x214 */ u8 unk214[0x1ac];
    /* 0x3c0 */ u32 outboxCount;
    /* 0x3c4 */ u8 unk3c4[0x4f8];
} AsdCecMessageBox;

typedef struct AsdCec {
    /* 0x00 */ u32 unk00;                /* passed to the box's open call with unk04 */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ void *work;               /* 8-byte helper object */
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ AsdCecMessageBox *box;
} AsdCec;

/* The module's global: `cec` is the live object (NULL before init). */
typedef struct AsdCecGlobals {
    /* 0x00 */ u8 unk00;
    /* 0x04 */ AsdCec *cec;
} AsdCecGlobals;

/* A message (nn::cec::CTR::Message), 360 bytes. */
typedef struct AsdCecMessage {
    /* 0x00 */ u8 data[360];
} AsdCecMessage;

/* A message id as GetMessageId hands it out. */
typedef struct AsdCecMessageId {
    /* 0x00 */ u8 data[12];
} AsdCecMessageId;

#endif
