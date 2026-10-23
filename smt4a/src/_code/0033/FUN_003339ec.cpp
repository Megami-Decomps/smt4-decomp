/* NON_MATCHING: bitfield byte-load scheduling and final enabled-flag store placement differ from retail. */
#include "common.h"

struct UiPriorityEntry {
    u8 value : 7;
    u8 enabled : 1;
};
typedef char UiPriorityEntrySizeCheck[sizeof(UiPriorityEntry) == 1 ? 1 : -1];

extern "C" {
u8 *FUN_0026140c(void);

// Install default low-seven-bit priorities while preserving each entry's enabled flag.
void FUN_003339ec(void)
{
    UiPriorityEntry *priority = (UiPriorityEntry *)FUN_0026140c();
    priority[0x14].value = 0;
    priority[0x17].value = 0;
    priority[0x1C].value = 0;
    priority[0x1D].value = 0;
    priority[0x1F].value = 0;
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
    priority[19].value = 1;
    priority[21].value = 1;
    priority[22].value = 1;
    priority[24].value = 1;
    priority[25].value = 35;
    priority[30].value = 52;
    priority[18].value = 2;
    priority[18].enabled = 1;
    priority[26].value = 33;
}
}
