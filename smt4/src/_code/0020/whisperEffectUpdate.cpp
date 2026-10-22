/* NON_MATCHING: keyframe interpolation, phase wrapping, and particle/line loops use different VFP and saved-register allocation. */
#include "result/WhisperEffect.h"
#include <stddef.h>

typedef char CheckWhisperParticleSize[sizeof(WhisperParticleAnimation) == 0x20 ? 1 : -1];
typedef char CheckWhisperLineSize[sizeof(WhisperLineAnimation) == 0x34 ? 1 : -1];
typedef char CheckWhisperLinesOffset[offsetof(WhisperAnimationView, lines) == 0xB4 ? 1 : -1];
typedef char CheckWhisperViewSize[sizeof(WhisperAnimationView) == 0x1B8 ? 1 : -1];

extern "C" WhisperAnimationView *jobGetWork(u32 job);
extern "C" f32 randomGetNormalizedFloat(void);
extern "C" s32 asdTMTexTableNodeIsLoaded(u32 table, u32 node);
extern "C" void bgmStopNoForce(u32 handle, s32 frames);

static __inline void updateWhisperLine(WhisperLineAnimation *line)
{
    s32 frame = ++line->positionFrame;
    s32 blinkFrame = ++line->blinkFrame;
    const WhisperPositionKey *keys = line->positions;
    s32 segment = 1;
    if (frame >= keys[0].frame) {
        if (frame < keys[1].frame) {
            segment = 1;
        } else if (frame < keys[2].frame) {
            segment = 2;
        } else if (frame >= keys[2].frame) {
            line->positionFrame = frame - keys[2].frame;
        }
    } else if (frame >= keys[2].frame) {
        line->positionFrame = frame - keys[2].frame;
    }
    f32 elapsed = (f32)(line->positionFrame - keys[segment - 1].frame);
    f32 duration = (f32)(keys[segment].frame - keys[segment - 1].frame);
    if (elapsed < 0.0f) {
        elapsed = 0.0f;
    }
    line->x = ((keys[segment].x - keys[segment - 1].x) * elapsed) / duration + keys[segment - 1].x;
    line->y = ((keys[segment].y - keys[segment - 1].y) * elapsed) / duration + keys[segment - 1].y;
    line->z = ((keys[segment].z - keys[segment - 1].z) * elapsed) / duration + keys[segment - 1].z;
    const WhisperBlinkKey *blink = line->blink;
    s32 blinkIndex = 0;
    if (blinkFrame >= blink[0].frame) {
        if (blinkFrame >= blink[1].frame) {
            line->blinkFrame = blinkFrame - blink[1].frame;
        } else {
            blinkIndex = 1;
        }
    }
    line->alpha = blink[blinkIndex].visible ? 1.0f : 0.0f;
    if (line->alpha != 0.0f && line->visible != 0.0f) {
        if (++line->tick >= 4) {
            ++line->frame;
            line->tick -= 4;
            if (line->frame >= line->frameCount) {
                line->frame -= line->frameCount;
            }
        }
    }
}

/* Animate the result-screen whisper layers, keyframed lines, and final fade-out. */
extern "C" u32 whisperEffectUpdate(u32 job)
{
    WhisperAnimationView *effect = jobGetWork(job);
    if (effect->state == 2 || effect->state == 1) {
        for (u32 index = 0; index < 2; ++index) {
            WhisperParticleAnimation *particle = &effect->particles[index];
            if (++particle->jitterFrame >= 3) {
                particle->jitterFrame -= 3;
                particle->x = 200.0f + (randomGetNormalizedFloat() - 0.5f) * 10.0f;
                particle->y = 128.0f + (randomGetNormalizedFloat() - 0.5f) * 10.0f;
            }
            if (particle->scaleFrame < 300) {
                ++particle->scaleFrame;
            }
            if (particle->alphaFrame < 20) {
                ++particle->alphaFrame;
            }
            particle->phase += particle->rate;
            if (particle->phase > 256.0f) {
                particle->phase -= 256.0f;
            }
        }
        effect->layers[0].advancePhase();
        effect->layers[1].advancePhase();
        effect->layers[2].advancePhase();
        for (s32 index = 0; index < 5; ++index) {
            updateWhisperLine(&effect->lines[index]);
        }
        WhisperLayerAnimation *first = &effect->layers[0];
        if (first->scaleFrame < 28) {
            first->scale = (f32)first->scaleFrame * 0.4f * 0.035714287f + 2.6f;
        } else if (first->scaleFrame >= 328) {
            first->scale = 3.3f;
        } else {
            first->scale = ((f32)first->scaleFrame - 28.0f) * 0.3f * 0.0033333334f + 3.0f;
        }
        if (first->phaseFrame == 27) {
            first->phase = 0.0f;
            first->rate = 0.028444446623325348f;
        }
        if (first->alphaFrame < 28) {
            first->alpha = (f32)first->alphaFrame * 0.86f * 0.035714287f;
        } else if (first->alphaFrame >= 328) {
            first->alpha = 0.45f;
        } else {
            first->alpha = 0.86f - ((f32)first->alphaFrame * 0.41f - 28.0f) * 0.0033333334f;
        }
        WhisperLayerAnimation *second = &effect->layers[1];
        if (second->scaleFrame < 28) {
            second->scale = (f32)second->scaleFrame * 0.2f * 0.035714287f + 1.8f;
        } else if (second->scaleFrame >= 328) {
            second->scale = 5.5f;
        } else {
            second->scale = ((f32)second->scaleFrame * 0.5f - 28.0f) * 0.0033333334f + 5.0f;
        }
        second->alpha = second->alphaFrame < 28 ? 0.0f : 0.5f;
        WhisperLayerAnimation *third = &effect->layers[2];
        if (third->scaleFrame >= 828) {
            third->scale = 2.45f;
        } else {
            third->scale = 2.6f - (f32)third->scaleFrame * 0.15f * 0.0012077295f;
        }
        if (third->alphaFrame < 28) {
            third->alpha = 0.0f;
        } else if (third->alphaFrame >= 40) {
            third->alpha = 0.5f;
        } else {
            third->alpha = ((f32)third->alphaFrame - 28.0f) * 0.5f * 0.083333336f;
        }
    }
    if (effect->state == 0) {
        for (s32 index = 0; index < 5; ++index) {
            if (!asdTMTexTableNodeIsLoaded(0x37, index)) {
                return 0;
            }
        }
        effect->state = 1;
    } else if (effect->state == 1) {
        if (effect->finished) {
            effect->opacity = 1.0f;
            effect->state = 2;
            effect->finished = 0;
            bgmStopNoForce(effect->handle, 15);
        }
    } else if (effect->state == 2) {
        effect->opacity *= 0.7f;
        if (effect->opacity < 0.01f) {
            effect->opacity = 0.0f;
            return ~0u;
        }
    }
    return 0;
}
