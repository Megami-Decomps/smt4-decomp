/* nn::snd::CTR voice-manager structures used by the status update. */
#ifndef SHARD_S1NNSND_H
#define SHARD_S1NNSND_H

#include "common.h"

/* nn::os::CriticalSection (size not known). */
typedef struct CriticalSection {
    /* 0x00 */ u32 unk00;
} CriticalSection;

/* A buffer node in a voice's playback list. */
typedef struct VoiceNode {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ u8 state;
    /* 0x12 */ u16 id;
    /* 0x14 */ struct VoiceNode *next;
} VoiceNode;

/* The part of a voice that status messages update (reached through Voice::state). */
typedef struct VoiceState {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 serial;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 position;
    /* 0x0C */ u8 active;
    /* 0x0D */ u8 unk0D[0x23];
    /* 0x30 */ VoiceNode *head;
    /* 0x34 */ s16 pending;
    /* 0x36 */ u8 unk36[0x3A];
    /* 0x70 */ CriticalSection lock;
} VoiceState;

/* A voice slot. */
typedef struct Voice {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ VoiceState *state;
} Voice;

/* Status message sent by the sound processor. */
typedef struct VoiceStatusMsg {
    /* 0x00 */ u16 header; /* low byte: kind, high byte: flags */
    /* 0x02 */ s16 serial;
    /* 0x04 */ u32 position; /* halfwords swapped */
    /* 0x08 */ u16 firstId;
    /* 0x0A */ u16 lastId;
} VoiceStatusMsg;

/* nn::snd::CTR::VoiceManager: voice slots start at 0x15DC. */
typedef struct VoiceManager {
    /* 0x0000 */ u8 unk0000[0x15DC];
    /* 0x15DC */ Voice *voices[1];
} VoiceManager;

#endif
