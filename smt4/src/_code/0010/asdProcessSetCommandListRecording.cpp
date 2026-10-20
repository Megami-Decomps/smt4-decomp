#include "common.h"

extern "C" {

typedef struct GxTarget {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u32 commandList;
    /* 0x64 */ s32 locked;        /* nonzero: the list must not be touched */
} GxTarget;

typedef struct AsdProcess {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ GxTarget *target;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ s8 recording;      /* 1 while the command list is open */
} AsdProcess;

extern AsdProcess g_asdProcess;

extern void asdGxCommandListBegin(u32 list);
extern void asdGxCommandListEnd(u32 list, s32 arg);

/* Opens (`begin` != 0) or closes the target's command list, tracking it in the process state. */
void asdProcessSetCommandListRecording(s32 begin)
{
    AsdProcess *process = &g_asdProcess;
    GxTarget *target = process->target;

    if (begin != 0) {
        if (process->recording == 0) {
            if (target != NULL && target->locked == 0) {
                asdGxCommandListBegin(target->commandList);
            }
            process->recording = 1;
        }
    } else if (process->recording == 1) {
        if (target != NULL && target->locked == 0) {
            asdGxCommandListEnd(target->commandList, 0);
        }
        process->recording = 0;
    }
}

} /* extern "C" */
