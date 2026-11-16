#include "common.h"

extern "C" {

void arousalSkillSceneStart(s32 mode, u32 id);

/* Open the Arousal Skill scene with no mode selected. */
void arousalSkillOpen(u32 id)
{
    arousalSkillSceneStart(-1, id);
}

} /* extern "C" */
