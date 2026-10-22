#ifndef ASD_EFFECT_EDITOR_DEFAULTS_H
#define ASD_EFFECT_EDITOR_DEFAULTS_H
#include "shard/W6_W6Match8_EffectSelection.h"
#include <stddef.h>
struct EffectEditorDefaultSlot {
    EffectSelectionTemplate object; // 0x000
    u8 unk038[0x318]; // 0x038
};
struct EffectEditorDefaultPair {
    EffectEditorDefaultSlot first; // 0x000
    EffectEditorDefaultSlot second; // 0x350
};
#endif
