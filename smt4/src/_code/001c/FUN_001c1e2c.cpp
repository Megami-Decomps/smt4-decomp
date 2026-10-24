/* NON_MATCHING: register allocation: retail keeps the table pointer in r4 and the flags base in ip; built swaps them. */
#include "common.h"

/* One entry of the table the queue reads from: a halfword at 2 of every 4 bytes. */
struct TableEntry001c1e2c {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 value;
};

struct Queue001c1e2c {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 readIndex;
    /* 0x1c */ s32 count;
    /* 0x20 */ u8 flags[0x1c];
    /* 0x3c */ u32 values[0x20];
    /* 0xbc */ const TableEntry001c1e2c *table;
};

extern "C" {

/* Queues the next table value: clears its flag, stores the value and advances the read index and count. Returns 1. */
s32 FUN_001c1e2c(Queue001c1e2c *queue)
{
    u16 value = queue->table[queue->readIndex].value;
    queue->flags[queue->count] = 0;
    queue->values[queue->count] = value;
    queue->count++;
    queue->readIndex++;
    return 1;
}

} /* extern "C" */
