/* DSP sound state used by the nn_snd_CTR_Dspsnd_* setters: a table of command blocks (selected
 * by a 16-bit index) and, behind it, two banks of 24 per-channel command blocks. Each setter writes
 * one field of a block and ORs a flag into its first word. */
#ifndef SHARD_DSPSND_H
#define SHARD_DSPSND_H

#include "common.h"

typedef struct DspCommand {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x0C];
    /* 0x10 */ s16 outputBufferCount;
    /* 0x12 */ u8 unk12[4];
    /* 0x16 */ u16 soundOutputMode;
    /* 0x18 */ u16 clippingMode;
    /* 0x1A */ u16 headsetConnected;
    /* 0x1C */ u8 unk1C[0xA0];
    /* 0xBC */ u16 syncMode;
    /* 0xBE */ u8 unkBE[2];
    /* 0xC0 */ u32 syncFlags;
} DspCommand;

typedef struct DspChannelCommand {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x36];
    /* 0x3A */ u16 iirFilterType;
    /* 0x3C */ u16 iirMonoA;
    /* 0x3E */ u16 iirMonoB;
    /* 0x40 */ u8 unk40[0x62];
    /* 0xA2 */ s16 syncCount;
} DspChannelCommand;

typedef struct DspStatus {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 droppedFrames;
} DspStatus;

typedef struct DspsndState {
    /* 0x0000 */ u8 unk0000[0x10A0];
    /* 0x10A0 */ DspCommand *commands[2];
    /* 0x10A8 */ DspStatus *statuses[2];
    /* 0x10B0 */ DspChannelCommand *channels[2][24];
    /* 0x1170 */ u8 unk1170[0x1AA];
    /* 0x131A */ u16 bank;
    /* 0x131C */ u16 statusIndex;  /* index of the active status block */
    /* 0x131E */ u16 current;      /* index of the active command block */
} DspsndState;

#endif
