/* NON_MATCHING: register allocation only: retail spills the tracks argument (push {r0-r3}, reloaded from the frame), keeps the track index, group index and packed colour in frame slots and uses sl for the frame mode; built keeps tracks and the index in registers */
#include "effect/ParticleBurst.h"

extern "C" {

f32 resourceGetSampleFloat(const BurstTrack *owner);
f32 asdAnimGetTrackLastFrame(const BurstTrack *animation, s32 track);
s32 randBetween(s32 minimum, s32 maximum);

/* Fills `out` with up to `max` particles for the emitter's groups, spaced along the track matching the emitter key.
 * Returns the number of particles written. */
s32 FUN_0038aa84(BurstParticle *out, s32 max, const BurstEmitter *emitter, BurstTrack *tracks, s32 trackCount)
{
    s32 t;

    if (emitter->key > 0 && trackCount > 0) {
        t = 0;
        do {
            if (tracks[t].key == emitter->key) {
                BurstTrack *track = &tracks[t];
                s8 trackIndex = t;
                s32 written;
                f32 base;
                f32 offset;
                f32 zero;
                s32 g;

                if (track == NULL) {
                    return 0;
                }
                written = 0;
                base = resourceGetSampleFloat(track);
                offset = 0.0f;
                zero = offset;
                g = 0;
                if (emitter->groupCount <= 0) {
                    return 0;
                }
                do {
                    const BurstGroup *group = &emitter->groups[g];
                    s32 j = 0;
                    u16 index;
                    u32 channel;
                    u32 color;
                    f32 position;

                    if (g != 0) {
                        offset -= group->gap;
                    }
                    if (group->count > 0) {
                        index = g;
                    }
                    channel = (u32)(group->brightness * 255.0f);
                    color = (channel << 24) | (channel << 16) | (channel << 8) | 0xFF;
                    position = group->spread * base * 0.05f -
                               group->spread * ((f32)(group->step * (group->count - 1)) + base * (f32)group->count) *
                                   0.1f * 0.5f;
                    if (group->count > 0) {
                        do {
                            if (max <= written) {
                                break;
                            }
                            out->emitterKey = emitter->key;
                            out->x = position;
                            out->y = zero;
                            out->z = offset;
                            out->color = color;
                            out->size = group->spread * 0.1f;
                            out->track = trackIndex;
                            out->group = index;
                            out->index = j;
                            if (trackIndex >= 0) {
                                s32 limit = (s32)asdAnimGetTrackLastFrame(&tracks[trackIndex], 0);

                                if (emitter->frameMode == 0) {
                                    out->frame = 0;
                                } else if (emitter->frameMode == 1) {
                                    out->frame = randBetween(0, 4) << 2;
                                } else if (emitter->frameMode == 2) {
                                    out->frame = randBetween(0, limit);
                                }
                                if (limit <= out->frame) {
                                    out->frame = out->frame % limit;
                                }
                            }
                            position += group->spread * (((f32)group->step + base) * 0.1f);
                            j++;
                            out++;
                            written++;
                        } while (j < group->count);
                    }
                    g++;
                } while (g < emitter->groupCount);
                return written;
            }
            t++;
        } while (t < trackCount);
    }
    return 0;
}

} /* extern "C" */
