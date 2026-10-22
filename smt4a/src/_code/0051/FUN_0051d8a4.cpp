/* NON_MATCHING: initial half-frame constant load and VFP division/addition registers differ; key search matches retail. */
#include "shard/W5_W5Match5_TwinRecords.h"

extern "C" f32 hardfp_floorf(f32 value);

using namespace SampleValueDecoding;

/* Find the key at or immediately before the rounded playback frame. */
extern "C" EncodedValue *FUN_0051d8a4(ValueDecoder *decoder, f32 time)
{
    /* The variable-size curve extends past ValueDecoder's fixed header. */
    struct CompactKey {
        u8 frame;
        u8 payload[5];
    };
    struct CompactCurveView {
        u16 keyCount;                 /* 0x00 */
        u16 unk02;
        f32 keyRate;                  /* 0x04 */
        u8 unk08[8];
        f32 frameDuration;            /* 0x10 */
        CompactKey keys[1];           /* 0x14 */
    };
    CompactCurveView *curve = reinterpret_cast<CompactCurveView *>(decoder);
    u32 frame = (u32)hardfp_floorf(time / curve->frameDuration + 0.5f);
    CompactKey *key = curve->keys;
    if (key->frame <= frame) {
        key = &curve->keys[curve->keyCount - 1];
        if (frame < key->frame) {
            u32 estimate = (u32)(curve->keyRate * ((f32)(curve->keyCount - 1) * time));
            key = &curve->keys[estimate];
            if (frame < key->frame) {
                do {
                    --key;
                } while (frame < key->frame);
            } else {
                do {
                    ++key;
                } while (key->frame <= frame);
                return reinterpret_cast<EncodedValue *>(key - 1);
            }
        }
    }
    return reinterpret_cast<EncodedValue *>(key);
}
