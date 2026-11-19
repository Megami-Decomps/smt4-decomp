/* NON_MATCHING: the vector stores match (NodeVec3 members set through nodeVec3); retail stores the mode right after the vtable pointer and loads its constants first, the build stores the mode late. */
#include "classes/Obj422318.h"

Obj422318::Obj422318(s32 mode)
    : unk04(mode)
{
    unk24 = 0;
    child = NULL;
    handle = NULL;
    flags = 0;
    timerFlags = 1;
    unk0c = 0;
    unk10 = 0;
    unk14 = 0;
    unk18 = 0;
    basePosition = nodeVec3(0.0f, 0.0f, 0.0f);
    rotation = nodeVec3(0.0f, 0.0f, 0.0f);
    scale = nodeVec3(1.0f, 1.0f, 1.0f);
}
