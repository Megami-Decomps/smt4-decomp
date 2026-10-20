/* NON_MATCHING: register allocation only: retail keeps the process count in ip and the slot array in r4 (loading it after the early exit); built swaps them. */
#include "common.h"

extern "C" {

typedef struct Process Process;

struct Process {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 flags;
    /* 0x20 */ u8 unk20[0x2C];
    /* 0x4C */ Process *next;
};

typedef struct ProcessSlot {
    /* 0x0 */ Process *head;
    /* 0x4 */ u32 unk4;
} ProcessSlot;

typedef struct ProcessTable {
    /* 0x0 */ ProcessSlot *slots;
    /* 0x4 */ s32 count;
} ProcessTable;

extern ProcessTable g_asdProcess;

/* Marks every process that has flag 0x80000 with flag 0x200000. */
void FUN_00138a08(void)
{
    s32 count = g_asdProcess.count;
    ProcessSlot *slots;
    s32 i = 0;

    if (count <= 0) {
        return;
    }
    slots = g_asdProcess.slots;
    do {
        Process *process;

        for (process = slots[i].head; process != NULL; process = process->next) {
            if ((process->flags & 0x80000) != 0) {
                process->flags |= 0x200000;
            }
        }
        i++;
    } while (count > i);
}

} /* extern "C" */
