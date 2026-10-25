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
struct EffectEditorCameraDefaults {
    PhaseVector eye;       // 0x00
    PhaseVector up;        // 0x0c
    PhaseVector target;    // 0x18
    PhaseVector offset;    // 0x24
    PhaseVector rotation;  // 0x30
};
typedef char EffectEditorStorageLayoutCheck[
    sizeof(EffectEditorVector) == 0x10 &&
    sizeof(EffectEditorSnapshot) == 0x80 &&
    offsetof(EffectEditorCameraDefaults, up) == 0x0c &&
    offsetof(EffectEditorCameraDefaults, target) == 0x18 &&
    offsetof(EffectEditorCameraDefaults, offset) == 0x24 &&
    offsetof(EffectEditorCameraDefaults, rotation) == 0x30 &&
    sizeof(EffectEditorCameraDefaults) == 0x3c ? 1 : -1];

/* The original EffectEditor.cpp owns these objects with internal linkage. */
#ifndef EFFECT_EDITOR_STORAGE_DEFINITIONS
extern "C" {
extern EffectEditorSettings g_effectEditorSettings;
extern char g_effectEditorResourceName[0x40];
extern EffectEditorVector g_effectEditorInitialVector;
extern EffectEditorSnapshot g_effectEditorWorkingSnapshot;
extern EffectEditorSnapshot g_effectEditorSavedSnapshot;
extern EffectEditorCamera g_effectEditorCamera;
extern EffectEditorCameraDefaults g_effectEditorCameraDefaults;
extern EffectEditorVector g_effectEditorVector;
extern EffectEditorVector g_effectEditorRotation;
}
#endif

#endif
