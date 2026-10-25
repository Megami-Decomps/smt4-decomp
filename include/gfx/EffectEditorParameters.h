#ifndef GFX_EFFECT_EDITOR_PARAMETERS_H
#define GFX_EFFECT_EDITOR_PARAMETERS_H

#include "AsdSDK/EffectEditorSelectionTransfer.h"

/* Edit a parameter block using its primary and secondary option lists.
 * The result is a status bit mask, not a pointer. */
extern "C" {
u32 FUN_0024330c(u32 *values, s32 value, EffectEditorOptions *primary, EffectEditorOptions *secondary);
u32 FUN_0031ab38(u32 *values, s32 value, EffectEditorOptions *primary, EffectEditorOptions *secondary);
}

#endif
