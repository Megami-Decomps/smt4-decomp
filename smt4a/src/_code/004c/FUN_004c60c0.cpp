/* NON_MATCHING: clearing the skill snapshot uses r0 for zero, adding two source-pointer preservation MOVs. */
#include "battle/BtlMainAccess.h"
#include "gamedata/Table04Record.h"
#include <string.h>

struct BtlMainStateA;
struct Source4C;
extern "C" {
Source4C *FUN_003f0e20(BtlMainStateA *, u32);
void source4CCopyHalves(Source4C *, u16 *);
const Table04ExtraRecord *dataTable41FindById(u32);

u32 FUN_004c60c0(u32 unitId, u32 property)
{
    u32 result = 0;
    Source4C *source = FUN_003f0e20(btlGetMainState(), unitId);
    u16 skills[10];
    memset(skills, 0, sizeof(skills));
    source4CCopyHalves(source, skills);
    for (s32 i = 0; i < 9; ++i) {
        if (!skills[i])
            continue;
        const Table04ExtraRecord *skill = dataTable41FindById(skills[i]);
        if (!skill)
            continue;
        switch (property) {
        case 11:
            if (skill->flags & 0x400000)
                result |= 0x10000;
            break;
        case 12:
            if (skill->flags & 0x800000)
                result |= 0x10000;
            break;
        case 13:
            if (skill->flags & 0x1000000)
                result |= 0x10000;
            break;
        case 14:
            if (skill->flags & 0x2000000)
                result |= 0x10000;
            break;
        case 15:
            if (skill->flags & 0x4000000)
                result |= 0x10000;
            break;
        case 16:
            if (skill->flags & 0x8000000)
                result |= 0x10000;
            break;
        case 9:
            if (skill->flags & 0x200000)
                result |= 0x10000;
            break;
        case 17:
            if (skill->flags & 0x10000000)
                result |= 0x10000;
            break;
        case 18:
            if (skill->flags & 0x20000000)
                result |= 0x10000;
            break;
        case 19:
            if (skill->flags & 0x40000000)
                result |= 0x10000;
            break;
        }
    }
    return result;
}
}
