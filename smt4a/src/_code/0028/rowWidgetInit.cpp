/* NON_MATCHING: same instructions as retail (zero flags, unclamped then clamped visibleRows); armcc schedules the stores and constant registers differently. */
#include "common.h"

struct RowWidget {
    u32 flags; // 0x00
    u32 unk04; // 0x04
    u32 unk08; // 0x08
    u32 unk0c; // 0x0c
    s32 rowCount; // 0x10
    s32 mode; // 0x14
    s32 visibleRows; // 0x18
    u32 parameter; // 0x1c
    u32 unk20; // 0x20
    u32 unk24; // 0x24
};

extern "C" {
// Initialize a row widget, clamping the visible row count to nonnegative.
void rowWidgetInit(RowWidget *widget, s32 rows, u32 parameter)
{
    widget->parameter = parameter;
    widget->flags = 0;
    widget->unk04 = 0;
    widget->unk08 = 0;
    widget->unk0c = 0;
    widget->unk20 = 0;
    widget->rowCount = rows;
    widget->mode = 2;
    widget->unk24 = 0;
    widget->visibleRows = rows;
    widget->visibleRows = rows > 0 ? rows : 0;
    widget->flags = 6;
}
}
