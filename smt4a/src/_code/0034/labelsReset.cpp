#include "common.h"
#include "ui/Labels.h"

extern "C" {
/* Reads or updates the requested state. */
extern Labels DAT_005b40cc;
void labelsReset(void)
{
    DAT_005b40cc.flag = 0;
    DAT_005b40cc.entries[0].text = 45;
    DAT_005b40cc.entries[1].text = 45;
    DAT_005b40cc.entries[2].text = 45;
    DAT_005b40cc.entries[3].text = 45;
}
}
