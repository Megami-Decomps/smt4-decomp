#ifndef SHARD_W6_W6MATCH4_EFFECTEDITORSNAPSHOT_H
#define SHARD_W6_W6MATCH4_EFFECTEDITORSNAPSHOT_H

#include "common.h"

struct EffectEditorWords {
    u32 words[4];
};
struct EffectEditorSnapshot {
    u8 unk00[0x40];
    EffectEditorWords saved; // 0x40
    u8 unk50[0x30];
};
struct EffectEditorGlobalState {
    u8 unk00[0xe0];
    EffectEditorWords words; // 0xe0
};

#endif
