#include "common.h"
#include "ui/Labels.h"

extern "C" {
/* Reads or updates the requested object state. */
extern Labels g_stickDirectionTable;
void FUN_002d56c4(u16 first, u16 second, u16 third, u16 fourth)
{
    g_stickDirectionTable.flag = 1;
    g_stickDirectionTable.entries[0].text = first;
    g_stickDirectionTable.entries[1].text = second;
    g_stickDirectionTable.entries[2].text = third;
    g_stickDirectionTable.entries[3].text = fourth;
}
}
