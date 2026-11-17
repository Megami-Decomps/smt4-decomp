/* NON_MATCHING: saved skill-history base and comparison scratch use ip/r6 instead of retail's r6/ip. */
#include "status/StatusDownA.h"


extern "C" void statusReplaceSkills(const u16 *source, u8 count);

/* Flag nonempty skills absent from the previous eight-slot history. */
extern "C" void statusMarkNewSkills(const u16 *source, u8 count)
{
    if (count > 16)
        return;
    StatusDownStateA *status = g_statusDown;
    StatusDownIdHistory previous = status->history;
    statusReplaceSkills(source, count);
    for (s32 index = 0; index < (s32)count; ++index) {
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
