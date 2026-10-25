#ifndef EFFECTEDITORCAMERATYPE_H
#define EFFECTEDITORCAMERATYPE_H
#include "AsdSDK/Source/Gfx/Camera/AsdCamera.h"
typedef AsdCamera EffectEditorCamera;
typedef char EffectEditorCameraSizeCheck[sizeof(EffectEditorCamera) == 0x50c ? 1 : -1];
#endif
