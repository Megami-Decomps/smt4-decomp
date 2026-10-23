#ifndef GFX_KEYEDVECTORTRANSITION_H
#define GFX_KEYEDVECTORTRANSITION_H
#include "shard/W6_W6Match7_VectorKey.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include <stddef.h>

struct KeyedVectorPreset {
    /* 0x00 */ VectorKeyValue value;
    /* 0x2c */ u32 unk2C;
};
struct KeyedVectorTransition {
    /* 0x00 */ s32 elapsed;
    /* 0x04 */ s32 endFrame;
    /* 0x08 */ s32 startFrame;
    /* 0x0c */ VectorKey keys[4];
    /* 0x2c */ Vector4 current;
    /* 0x3c */ KeyVector step;
    /* 0x48 */ u32 unk48;
    /* 0x4c */ KeyVector target;
    /* 0x58 */ u32 unk58;
    /* 0x5c */ s32 keyIndex;
    /* 0x60 */ s32 segmentElapsed;
    /* 0x64 */ s32 segmentDuration;
    /* 0x68 */ u32 active;
    /* 0x6c */ u8 mode;
    /* 0x6d */ s8 recordIndex;
    /* 0x6e */ u8 unk6E[2];
};
typedef char KeyedVectorPresetSizeCheck[sizeof(KeyedVectorPreset) == 0x30 ? 1 : -1];
typedef char KeyedVectorTransitionSizeCheck[sizeof(KeyedVectorTransition) == 0x70 ? 1 : -1];
typedef char KeyedVectorTransitionOffsets[offsetof(KeyedVectorTransition, keys) == 0xc && offsetof(KeyedVectorTransition, current) == 0x2c && offsetof(KeyedVectorTransition, keyIndex) == 0x5c && offsetof(KeyedVectorTransition, recordIndex) == 0x6d ? 1 : -1];
#endif
