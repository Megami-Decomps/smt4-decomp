/* NON_MATCHING: register allocation and spill slots differ (retail reserves its frame with vpush {d0}, keeps lineA/lineB per channel and reloads the all-pass and comb E lines from the state each sample, as written here; it reads the index pair C/D with ldm where this build uses ldrd). The unit logic is the same. */
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

extern "C" void reverbProcessChannels(ReverbState *reverb, u32 unused, s32 **channels, s32 sampleCount)
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
        s32 *samples = channelBuffers[c];
        s32 state = reverb->filterState[c];
        indexA = reverb->indexA;
        indexB = reverb->indexB;
        indexC = reverb->indexC;
        indexD = reverb->indexD;
        indexE = reverb->indexE;
        for (s32 i = 0; i < sampleCount; i++) {
            s32 input = samples[i];
            s32 wet = lineA[indexA] * reverb->gainWet;
            lineA[indexA] = input;
            s32 delayedB = lineB[indexB];
            lineB[indexB] = input;
            s32 c0 = reverb->allpass[c][0][indexC];
            reverb->allpass[c][0][indexC] = reverbScale(reverb->gainC, c0) + delayedB;
            s32 d0 = reverb->allpass[c][1][indexD];
            reverb->allpass[c][1][indexD] = delayedB + reverbScale(reverb->gainD, d0);
            s32 e0 = reverb->combE[c][indexE];
            s32 e1 = reverbScale(reverb->gainE, e0) + (c0 - d0);
            s32 diffused = e0 - reverbScale(reverb->gainE, e1);
            reverb->combE[c][indexE] = e1;
            state = (state * reverb->gainFilterFeedback + reverb->gainFilterIn * diffused) >> 7;
            samples[i] = (reverb->gainMixOut * state + wet) >> 7;
            indexA++;
            indexB++;
            indexC++;
            indexD++;
            indexE++;
        }
        reverb->filterState[c] = state;
    }
    if (indexA >= reverb->sizeA)
        reverb->indexA = 0;
    else
        reverb->indexA = indexA;
    if (indexB >= reverb->sizeB)
        reverb->indexB = 0;
    else
        reverb->indexB = indexB;
    if (indexC >= reverb->sizeC)
        reverb->indexC = 0;
    else
        reverb->indexC = indexC;
    if (indexD >= reverb->sizeD)
        reverb->indexD = 0;
    else
        reverb->indexD = indexD;
    if (indexE >= reverb->sizeE)
        reverb->indexE = 0;
    else
        reverb->indexE = indexE;
}
