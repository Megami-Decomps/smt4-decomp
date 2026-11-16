#include "common.h"

extern "C" {

void arousalSkillSceneStart(s32 mode, u32 id);

void campArousalSkillStart(s32 mode, u32 id)
{
    arousalSkillSceneStart(mode, id);
}

} /* extern "C" */
