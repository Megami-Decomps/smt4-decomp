/* NON_MATCHING: Native constructor store ordering and combined VFP stores differ from retail. */
#include "classes/Obj422318.h"

Obj422318::Obj422318(s32 mode)
{
    unk04 = mode;
    unk24 = 0;
    child = NULL;
    handle = 0;
    flags = 0;
    timerFlags = 1;
    unk0c = 0;
    unk10 = 0;
    unk14 = 0;
    unk18 = 0;
    basePosition[0] = 0.0f;
    basePosition[1] = 0.0f;
    basePosition[2] = 0.0f;
    scale[0] = 0.0f;
    scale[1] = 0.0f;
    scale[2] = 0.0f;
    rotation[0] = 1.0f;
    rotation[1] = 1.0f;
    rotation[2] = 1.0f;
}
