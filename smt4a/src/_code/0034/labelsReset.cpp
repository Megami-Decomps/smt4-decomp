#include "common.h"
#include "ui/Labels.h"

extern "C" {
/* Reads or updates the requested state. */
extern Labels g_stickDirectionTable;
void labelsReset(void)
{
    g_stickDirectionTable.flag = 0;
    g_stickDirectionTable.entries[0].text = 45;
    g_stickDirectionTable.entries[1].text = 45;
    g_stickDirectionTable.entries[2].text = 45;
    g_stickDirectionTable.entries[3].text = 45;
}
}
