#ifndef EFFECTEDITORCAMERATYPE_H
#define EFFECTEDITORCAMERATYPE_H
#include "gfx/CameraMatrixCache.h"
typedef CameraMatrixCache EffectEditorCamera;
typedef char EffectEditorCameraSizeCheck[sizeof(EffectEditorCamera) == 0x508 ? 1 : -1];
#endif
