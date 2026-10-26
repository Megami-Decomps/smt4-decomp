#ifndef CLASSES_SOUNDVOICEOWNER_H
#define CLASSES_SOUNDVOICEOWNER_H

#include "classes/Obj421aa4.h"
#include "classes/Obj421d74.h"
#include <stddef.h>

/* A parameter fade of the voice owner: from `start` to `target` over `duration` steps. */
struct SoundVoiceFade {
    /* 0x00 */ f32 start;
    /* 0x04 */ f32 target;
    /* 0x08 */ s32 duration;
    /* 0x0C */ s32 elapsed;
};

/* The sound voice owner (an Obj421aa4) the sound-request senders use: the parameter holder at 0xF4
 * (its address names the voice in a request), a request block at 0x1D50, the four parameter fades
 * and the mask of changed parameters. */
class SoundVoiceOwner : public Obj421aa4 {
public:
    /* 0x00D4 */ u8 unk00D4[0xF4 - 0xD4];
    /* 0x00F4 */ Obj421d74 params;
    /* 0x0194 */ u8 unk0194[0x1BBC];
    /* 0x1D50 */ u32 requestBlock[5];
    /* 0x1D64 */ u32 requestValue;
    /* 0x1D68 */ u8 unk1D68[0xC1C];
    /* 0x2984 */ SoundVoiceFade fades[4];
    /* 0x29C4 */ u8 unk29C4[0x204];
    /* 0x2BC8 */ u16 changedMask;
};

typedef char SoundVoiceOwnerLayoutCheck[
    offsetof(SoundVoiceOwner, params) == 0xF4 && offsetof(SoundVoiceOwner, requestBlock) == 0x1D50 &&
    offsetof(SoundVoiceOwner, requestValue) == 0x1D64 && offsetof(SoundVoiceOwner, fades) == 0x2984 &&
    offsetof(SoundVoiceOwner, changedMask) == 0x2BC8 ? 1 : -1];

#endif
