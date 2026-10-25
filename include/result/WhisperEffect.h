/* result/WhisperEffect.c: the whisper (demon chatter) effect shown on the result screen. */
#ifndef RESULT_WHISPEREFFECT_H
#define RESULT_WHISPEREFFECT_H

#include "common.h"

/* One whisper line: two strings, a count of candidate texts and the one picked. */
typedef struct WhisperLine {
    /* 0x00 */ const char *textA;
    /* 0x04 */ const char *textB;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ const char *name;
    /* 0x14 */ s32 count;     /* number of candidates */
    /* 0x18 */ s32 pick;      /* random index below count, chosen at start */
    /* 0x1C */ u32 unk1C[6];
} WhisperLine;

typedef struct WhisperEffect {
    /* 0x00 */ u32 task;       /* the effect's update task */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 finished;    /* set to end the effect */
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 handle;     /* resource handle, released at the start */
    /* 0x10 */ f32 unk10;
    /* 0x14 */ u32 unk14[3];
    /* 0x20 */ f32 phaseA;     /* random start phase */
    /* 0x24 */ f32 rateA;
    /* 0x28 */ s32 periodA;
    /* 0x2C */ u32 unk2C[5];
    /* 0x40 */ f32 phaseB;     /* random start phase */
    /* 0x44 */ f32 rateB;
    /* 0x48 */ s32 periodB;
    /* 0x4C */ u32 unk4C[9];
    /* 0x70 */ u32 unk70;
    /* 0x74 */ u32 unk74[7];
    /* 0x90 */ u32 unk90;
    /* 0x94 */ u32 unk94[3];
    /* 0xA0 */ f32 rateC;
    /* 0xA4 */ u32 unkA4[3];
    /* 0xB0 */ s32 periodC;
    /* 0xB4 */ u32 unkB4[4];
    /* 0xC4 */ WhisperLine lines[5];
} WhisperEffect;

/* Animation views used by Apocalypse's result-screen update callback. */
struct WhisperPositionKey {
    s32 frame;
    f32 x, y, z;
};
struct WhisperBlinkKey {
    s32 frame;
    u8 visible;
    u8 unk05[3];
};
struct WhisperParticleAnimation {
    s32 jitterFrame;
    s32 scaleFrame;
    s32 alphaFrame;
    f32 phase;
    f32 rate;
    s32 period;
    f32 x, y;
};
struct WhisperLayerAnimation {
    f32 scale;
    f32 alpha;
    f32 phase;
    f32 rate;
    s32 scaleFrame;
    s32 alphaFrame;
    s32 phaseFrame;
    s32 period;

    void advancePhase()
    {
        ++phaseFrame;
        ++scaleFrame;
        ++alphaFrame;
        phase += rate;
        if (phase > 256.0f)
            phase -= 256.0f;
    }
};
struct WhisperLineAnimation {
    f32 x, y, z;
    f32 alpha;
    const WhisperPositionKey *positions;
    const WhisperBlinkKey *blink;
    s32 positionFrame;
    s32 blinkFrame;
    u32 unk20;
    s32 frameCount;
    s32 frame;
    s32 tick;
    f32 visible;
};
struct WhisperAnimationView {
    u32 task; // 0x00
    s32 state; // 0x04
    u8 finished; // 0x08
    u8 unk09[3];
    u32 handle; // 0x0c
    f32 opacity; // 0x10
    WhisperParticleAnimation particles[2]; // 0x14
    WhisperLayerAnimation layers[3]; // 0x54
    WhisperLineAnimation lines[5]; // 0xb4
};

extern "C" {
u8 partyPanelGetFlag(void);
}

extern "C" {
u8 *gameDataBlockGetArea28350(void);
}

#endif
