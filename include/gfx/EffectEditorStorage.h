#ifndef GFX_EFFECTEDITORSTORAGE_H
#define GFX_EFFECTEDITORSTORAGE_H

#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W6_W6Match4_EffectEditorSnapshot.h"
#include "shard/W6_W6Match6_PhaseTrig.h"
#include "EffectEditorCameraType.h"
#include <stddef.h>

/* These are independent objects, not one oversized settings record. */
union EffectEditorVector {
    f32 components[4];
    EffectEditorWords bits;
    EffMenuPosition value;

    void setIdentity()
    {
        bits.words[0] = 0;
        bits.words[1] = 0;
        bits.words[2] = 0;
        bits.words[3] = 0;
        value.w = 1.0f;
    }
};
typedef char EffectEditorStorageLayoutCheck[
    sizeof(EffectEditorVector) == 0x10 &&
    sizeof(EffectEditorSnapshot) == 0x80 ? 1 : -1];

/* The original EffectEditor.cpp owns these objects with internal linkage. */
#ifndef EFFECT_EDITOR_STORAGE_DEFINITIONS
extern "C" {
extern EffectEditorSettings g_effectEditorSettings;
extern char g_effectEditorResourceName[0x40];
extern EffectEditorVector g_effectEditorInitialVector;
extern EffectEditorSnapshot g_effectEditorWorkingSnapshot;
extern EffectEditorSnapshot g_effectEditorSavedSnapshot;
extern EffectEditorCamera g_effectEditorCamera;
/* The free camera's eye, up, target, orbit offset and rotation: five separate 12-byte objects (written as one
 * struct, effectEditorInitialize does not give retail's per-vector stores). */
extern PhaseVector g_effectEditorCameraEye;
extern PhaseVector g_effectEditorCameraUp;
extern PhaseVector g_effectEditorCameraTarget;
extern PhaseVector g_effectEditorCameraOffset;
extern PhaseVector g_effectEditorCameraRotation;
extern EffectEditorVector g_effectEditorVector;
extern EffectEditorVector g_effectEditorRotation;
}
#endif

extern "C" {
/* Reads pad `pad`'s two analog sticks (left x/y, right x/y) for the free camera. The release build's body is a
 * `return 0` stub armlink inlined at its call (inlined.txt), so the outputs are never written there. */
s32 effectEditorReadSticks(f32 *leftX, f32 *leftY, f32 *rightX, f32 *rightY, s32 pad);
}

#endif
