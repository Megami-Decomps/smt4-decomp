/* NON_MATCHING: scheduling only: retail loads the grid column constant 0 right after the owner pointer (mov r1, #0 before the active test) and uses r1/r2 for it; built loads it later into r2 */
#include "common.h"

extern "C" {

typedef struct Gauge {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ f32 value;
    /* 0x3C */ u8 unk3C[0xC];
    /* 0x48 */ f32 limit;
} Gauge;

typedef struct GaugeTable {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ Gauge **gauges;
    /* 0x20 */ u8 unk20[8];
    /* 0x28 */ s32 stride;
} GaugeTable;

typedef struct GaugeOwner {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ GaugeTable *table;
    /* 0x02C */ u8 unk02C[0x11C];
    /* 0x148 */ s32 active;
    /* 0x14C */ s32 index;
} GaugeOwner;

typedef struct Task {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ GaugeOwner *owner;
    /* 0x30 */ u8 unk30[0x28];
    /* 0x58 */ s32 count;
} Task;

/* The gauge at (row, column) of the table's pointer grid. */
static __inline Gauge *gaugeTableGet(const GaugeTable *table, s32 row, s32 column)
{
    return table->gauges[row * table->stride + column];
}

/* True when the task has no running gauge: nothing queued, none active, or its value reached its limit. */
u32 gaugeTaskIsIdle(Task *task)
{
    GaugeOwner *owner;
    Gauge *gauge;

    if (task->count <= 0 || (owner = task->owner, owner->active == 0)
        || (gauge = gaugeTableGet(owner->table, owner->index, 0), gauge == NULL)
        || gauge->value >= gauge->limit) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
