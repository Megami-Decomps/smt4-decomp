#pragma once
#include "common.h"

/* Functions in the 0x00410000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct SceneObj;
extern "C" {

u32 FUN_00418070(u32 index, s32 force);

void sceneObjDestroy(SceneObj *scene);

} /* extern "C" */
