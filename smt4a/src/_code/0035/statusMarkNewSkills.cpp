#include "status/StatusDownA.h"


extern "C" void statusReplaceSkills(const u16 *source, u8 count);

/* Flag nonempty skills absent from the previous eight-slot history. */
extern "C" void statusMarkNewSkills(const u16 *source, u8 count)
{
    s32 index;
    StatusDownStateA *status;
    StatusDownIdHistory previous;
    if (count > 16)
        return;
    status = g_statusDown;
    previous = status->history;
    statusReplaceSkills(source, count);
    for (index = 0; index < (s32)count; ++index) {
        u16 skill = status->ids[index];
        if (skill != 0) {
            s32 oldIndex;
            for (oldIndex = 0; oldIndex < 8; ++oldIndex) {
                if (previous.ids[oldIndex] != 0 && previous.ids[oldIndex] == skill)
                    break;
            }
            if (oldIndex >= 8)
                status->scratch[index] = true;
        }
    }
}
