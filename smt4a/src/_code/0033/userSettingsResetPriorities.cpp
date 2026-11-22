#include "common.h"
#include "event/2dEvent/2dEventTex.h"

/* One byte of the user settings block's priority table. */
struct UiPriorityEntry {
    u8 value : 7;
    u8 enabled : 1;
};
typedef char UiPriorityEntrySizeCheck[sizeof(UiPriorityEntry) == 1 ? 1 : -1];

extern "C" {

/* Installs the default priorities (the low seven bits of each entry) in entry order, keeping each entry's enabled
 * flag; then enables entry 18 and sets entry 26 again (retail stores it twice). */
void userSettingsResetPriorities(void)
{
    UiPriorityEntry *priority = (UiPriorityEntry *)saveGetUserSettingsBlock();
    priority[0].value = 2;
    priority[1].value = 11;
    priority[2].value = 11;
    priority[3].value = 12;
    priority[4].value = 33;
    priority[5].value = 6;
    priority[6].value = 6;
    priority[7].value = 6;
    priority[8].value = 4;
    priority[9].value = 4;
    priority[10].value = 4;
    priority[11].value = 51;
    priority[12].value = 1;
    priority[13].value = 33;
    priority[14].value = 34;
    priority[15].value = 1;
    priority[16].value = 11;
    priority[17].value = 1;
    priority[18].value = 2;
    priority[19].value = 1;
    priority[20].value = 0;
    priority[21].value = 1;
    priority[22].value = 1;
    priority[23].value = 0;
    priority[24].value = 1;
    priority[25].value = 35;
    priority[26].value = 33;
    priority[28].value = 0;
    priority[29].value = 0;
    priority[30].value = 52;
    priority[31].value = 0;
    priority[18].enabled = 1;
    priority[26].value = 33;
}
}
