#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "event/2dEvent/Npc2d.h"

extern "C" {

int questCenterCounterAddSaturating1A(u32 amount);
int gameAddPointsClamped(u32 amount);
int questCenterCounterAddSaturating14(u32 amount);
int questCenterAddPoints(u32 amount);

/* Adds `amount` to counter `index` (saturating at 0xFFFFFFFF) and notifies the counter's handler. */
void gameCounterAddSaturating(int index, u32 amount)
{
    u32 *table = reinterpret_cast<u32 *>(gameGetCounters());
    u32 *counter = &table[index];
    u32 value = *counter;

    if (~value > amount) {
        value = value + amount;
    } else {
        value = 0xffffffff;
    }
    *counter = value;
    switch (index) {
    case 2:
        questCenterCounterAddSaturating14(amount);
        return;
    case 9:
        questCenterAddPoints(amount);
        return;
    case 0x13:
        questCenterCounterAddSaturating1A(amount);
        return;
    case 0x26:
        gameAddPointsClamped(amount);
        return;
    }
}

} /* extern "C" */
