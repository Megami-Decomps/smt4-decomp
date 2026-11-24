/* NON_MATCHING: 419 raw / 335 shape lines (from 585/537), the same source as its Apocalypse twin
 * whisperAdvanceAnimations. The particles, layers, lines and states compute what retail computes; the state cases
 * are in retail's layout order (0, 2, 1: armcc lays case bodies out in source order). Left: the float constants sit
 * in other VFP registers (10 and 256 swap s16/s20); retail loads a layer's three frame counters with one ldm before
 * its phase wrap and stores the wrap through the layer pointer; the key arrays are re-read here; the layer curves
 * place their frames >= 28 arms out of line in retail. */
#include "result/WhisperEffect.h"
#include "shard/JobWork.h"
#include <stddef.h>

typedef char CheckWhisperParticleSize[sizeof(WhisperParticleAnimation) == 0x20 ? 1 : -1];
typedef char CheckWhisperLineSize[sizeof(WhisperLineAnimation) == 0x34 ? 1 : -1];
typedef char CheckWhisperLinesOffset[offsetof(WhisperAnimationView, lines) == 0xb4 ? 1 : -1];
typedef char CheckWhisperViewSize[sizeof(WhisperAnimationView) == 0x1b8 ? 1 : -1];

extern "C" f32 randomGetNormalizedFloat(void);
extern "C" s32 asdTMTexTableNodeIsLoaded(u32 table, u32 node);

/* Animates the result screen's whisper effect: the two jittering particles, the three layers' scale, opacity and
 * phase curves and the five keyframed text lines, then steps the effect's state (wait for the textures, start the
 * fade on request, fade out; returns ~0 once faded). */
extern "C" u32 whisperEffectUpdate(u32 job)
{
    WhisperAnimationView *effect = (WhisperAnimationView *)jobGetWork(job);
    if (effect->state == 2 || effect->state == 1) {
        for (u32 i = 0; i < 2; ++i) {
            WhisperParticleAnimation *particle = &effect->particles[i];
            if (++particle->jitterFrame >= 3) {
                particle->jitterFrame -= 3;
                particle->x = 200.0f + (randomGetNormalizedFloat() - 0.5f) * 10.0f;
                particle->y = 128.0f + (randomGetNormalizedFloat() - 0.5f) * 10.0f;
            }
            if (particle->scaleFrame < 300)
                ++particle->scaleFrame;
            if (particle->alphaFrame < 20)
                ++particle->alphaFrame;
            particle->phase += particle->rate;
            if (particle->phase > 256.0f)
                particle->phase -= 256.0f;
        }
        effect->layers[0].advancePhase();
        effect->layers[1].advancePhase();
        effect->layers[2].advancePhase();
        for (s32 i = 0; i < 5; ++i) {
            WhisperLineAnimation *line = &effect->lines[i];
            s32 frame = ++line->positionFrame;
            s32 blinkFrame = ++line->blinkFrame;
            s32 segment = 1;
            if (frame < line->positions[0].frame) {
                if (frame >= line->positions[2].frame)
                    line->positionFrame = frame - line->positions[2].frame;
            } else if (frame >= line->positions[1].frame) {
                if (frame < line->positions[2].frame)
                    segment = 2;
                else if (frame >= line->positions[2].frame)
                    line->positionFrame = frame - line->positions[2].frame;
            }
            f32 elapsed = static_cast<f32>(line->positionFrame - line->positions[segment - 1].frame);
            f32 duration = static_cast<f32>(line->positions[segment].frame - line->positions[segment - 1].frame);
            if (elapsed < 0.0f)
                elapsed = 0.0f;
            line->x = ((line->positions[segment].x - line->positions[segment - 1].x) * elapsed) / duration + line->positions[segment - 1].x;
            line->y = ((line->positions[segment].y - line->positions[segment - 1].y) * elapsed) / duration + line->positions[segment - 1].y;
            line->z = ((line->positions[segment].z - line->positions[segment - 1].z) * elapsed) / duration + line->positions[segment - 1].z;
            s32 blinkIndex;
            if (blinkFrame < line->blink[0].frame) {
                blinkIndex = 0;
            } else if (blinkFrame >= line->blink[1].frame) {
                line->blinkFrame = blinkFrame - line->blink[1].frame;
                blinkIndex = 0;
            } else {
                blinkIndex = 1;
            }
            line->alpha = line->blink[blinkIndex].visible ? 1.0f : 0.0f;
            if (line->alpha != 0.0f && line->visible != 0.0f) {
                if (++line->tick >= 4) {
                    ++line->frame;
                    line->tick -= 4;
                    if (line->frame >= line->frameCount)
                        line->frame -= line->frameCount;
                }
            }
        }
        if (effect->layers[0].scaleFrame < 28)
            effect->layers[0].scale = static_cast<f32>(effect->layers[0].scaleFrame) * 0.4f * 0.035714287f + 2.6f;
        else if (effect->layers[0].scaleFrame >= 328)
            effect->layers[0].scale = 3.3f;
        else
            effect->layers[0].scale = (static_cast<f32>(effect->layers[0].scaleFrame) - 28.0f) * 0.3f * 0.0033333334f + 3.0f;
        if (effect->layers[0].phaseFrame == 27) {
            effect->layers[0].phase = 0.0f;
            effect->layers[0].rate = 0.028444446623325348f;
        }
        if (effect->layers[0].alphaFrame < 28)
            effect->layers[0].alpha = static_cast<f32>(effect->layers[0].alphaFrame) * 0.86f * 0.035714287f;
        else if (effect->layers[0].alphaFrame >= 328)
            effect->layers[0].alpha = 0.45f;
        else
            effect->layers[0].alpha = 0.86f - (static_cast<f32>(effect->layers[0].alphaFrame) * 0.41f - 28.0f) * 0.0033333334f;
        if (effect->layers[1].scaleFrame < 28)
            effect->layers[1].scale = static_cast<f32>(effect->layers[1].scaleFrame) * 0.2f * 0.035714287f + 1.8f;
        else if (effect->layers[1].scaleFrame >= 328)
            effect->layers[1].scale = 5.5f;
        else
            effect->layers[1].scale = (static_cast<f32>(effect->layers[1].scaleFrame) * 0.5f - 28.0f) * 0.0033333334f + 5.0f;
        effect->layers[1].alpha = effect->layers[1].alphaFrame < 28 ? 0.0f : 0.5f;
        if (effect->layers[2].scaleFrame >= 828)
            effect->layers[2].scale = 2.45f;
        else
            effect->layers[2].scale = 2.6f - static_cast<f32>(effect->layers[2].scaleFrame) * 0.15f * 0.0012077295f;
        if (effect->layers[2].alphaFrame < 28)
            effect->layers[2].alpha = 0.0f;
        else if (effect->layers[2].alphaFrame >= 40)
            effect->layers[2].alpha = 0.5f;
        else
            effect->layers[2].alpha = (static_cast<f32>(effect->layers[2].alphaFrame) - 28.0f) * 0.5f * 0.083333336f;
    }
    switch (effect->state) {
    case 0:
        for (s32 i = 0; i < 5; ++i) {
            if (!asdTMTexTableNodeIsLoaded(0x37, i))
                return 0;
        }
        effect->state = 1;
        break;
    case 2:
        effect->opacity *= 0.7f;
        if (effect->opacity < 0.01f) {
            effect->opacity = 0.0f;
            return ~0u;
        }
        break;
    case 1:
        if (effect->finished) {
            effect->opacity = 1.0f;
            effect->state = 2;
            effect->finished = 0;
            bgmStopNoForce(effect->handle, 15);
        }
        break;
    }
    return 0;
}
