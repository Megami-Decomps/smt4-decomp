/* NON_MATCHING: retail spills r0-r3 and d0 on entry (argument block kept on the stack) and uses different register allocation for the delay-line loop; the unit logic is the same. */
#include "common.h"

/* Reverb unit state (accessed fields): per-channel delay lines and their running indices. */
struct ReverbState {
    u8 unk00[0x44];
    s32 *combA[4];          // 0x44
    s32 *combB[4];          // 0x54
    s32 *allpass[4][2];     // 0x64: two lines per channel
    s32 *combE[4];          // 0x84
    u8 unk94[0x10];
    u32 sizeA;              // 0xA4
    u32 indexA;             // 0xA8
    u32 sizeB;              // 0xAC
    u32 indexB;             // 0xB0
    u32 sizeC;              // 0xB4
    u32 sizeD;              // 0xB8
    u32 indexC;             // 0xBC
    u32 indexD;             // 0xC0
    s32 gainC;              // 0xC4
    s32 gainD;              // 0xC8
    u32 sizeE;              // 0xCC
    u32 indexE;             // 0xD0
    s32 gainE;              // 0xD4
    s32 filterState[4];     // 0xD8
    s32 gainWet;            // 0xE8
    s32 gainMixOut;         // 0xEC
    s32 gainFilterIn;       // 0xF0
    s32 gainFilterFeedback; // 0xF4
    u8 unkF8[0x15];
    u8 channelCount;        // 0x10D
    u8 enabled;             // 0x10E
};

/* 25.7 fixed-point multiply that keeps the sign of the sample (magnitude is scaled). */
static __inline s32 reverbScale(s32 gain, s32 value)
{
    if (value >= 0)
        return (gain * value) >> 7;
    return -((gain * -value) >> 7);
}

extern "C" void FUN_00378fb0(ReverbState *reverb, u32 unused, s32 **channels, s32 sampleCount)
{
    if (reverb->enabled == 0)
        return;
    s32 *channelBuffers[4];
    channelBuffers[0] = channels[0];
    channelBuffers[1] = channels[1];
    channelBuffers[2] = channels[2];
    channelBuffers[3] = channels[3];
    u32 indexA = 0;
    u32 indexB = 0;
    u32 indexC = 0;
    u32 indexD = 0;
    u32 indexE = 0;
    for (s32 c = 0; c < reverb->channelCount; c++) {
        s32 *lineA = reverb->combA[c];
        s32 *lineB = reverb->combB[c];
        s32 *lineC = reverb->allpass[c][0];
        s32 *lineD = reverb->allpass[c][1];
        s32 *lineE = reverb->combE[c];
        s32 *samples = channelBuffers[c];
        s32 state = reverb->filterState[c];
        indexA = reverb->indexA;
        indexB = reverb->indexB;
        indexC = reverb->indexC;
        indexD = reverb->indexD;
        indexE = reverb->indexE;
        for (s32 i = 0; i < sampleCount; i++) {
            s32 input = samples[i];
            s32 delayedA = lineA[indexA];
            lineA[indexA] = input;
            s32 delayedB = lineB[indexB];
            lineB[indexB] = input;
            s32 wet = delayedA * reverb->gainWet;
            s32 c0 = lineC[indexC];
            lineC[indexC] = reverbScale(reverb->gainC, c0) + delayedB;
            s32 d0 = lineD[indexD];
            lineD[indexD] = delayedB + reverbScale(reverb->gainD, d0);
            s32 e0 = lineE[indexE];
            s32 e1 = reverbScale(reverb->gainE, e0) + (c0 - d0);
            lineE[indexE] = e1;
            state = (state * reverb->gainFilterFeedback + reverb->gainFilterIn * (e0 - reverbScale(reverb->gainE, e1))) >> 7;
            samples[i] = (reverb->gainMixOut * state + wet) >> 7;
            indexA++;
            indexB++;
            indexC++;
            indexD++;
            indexE++;
        }
        reverb->filterState[c] = state;
    }
    reverb->indexA = indexA >= reverb->sizeA ? 0 : indexA;
    reverb->indexB = indexB >= reverb->sizeB ? 0 : indexB;
    reverb->indexC = indexC >= reverb->sizeC ? 0 : indexC;
    reverb->indexD = indexD >= reverb->sizeD ? 0 : indexD;
    reverb->indexE = indexE >= reverb->sizeE ? 0 : indexE;
}
