#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

typedef struct EventState001e2240 {
    /* 0x00 */ u32 active;
    /* 0x04 */ u8 unk04[0x28];
    /* 0x2c */ u8 unk2c;
} EventState001e2240;

typedef struct BtlEventTask001e2240 {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 unk04[0x4c];
    /* 0x50 */ u32 drawTask;
    /* 0x54 */ u8 unk54[0xac];
    /* 0x100 */ char script[1];     /* script name; empty when there is none */
} BtlEventTask001e2240;

s32 jobIsValid(u32 handle);
u32 taskCreateDraw(const char *name, s32 priority, s32 a, s32 b, void (*update)(void), void (*destroy)(void), void *owner, u32 id);
s32 libc_strcmp(const char *a, const char *b);
s32 libc_strlen(const char *s);
void btlEventUpdateCurrentWork(void);
void btlEventDestroy(void);

extern EventState001e2240 *g_btlEvent; /* 0x435d48 */
extern char DAT_00400988[]; /* 0x400988 */

/* Creates the battle event's "btlEvent Calc" draw task and its state block, which starts active when the task has a script. */
void btlEventTaskStart(BtlEventTask001e2240 *task)
{
    EventState001e2240 *state;

    if (jobIsValid(task->drawTask) == 0) {
        task->drawTask = taskCreateDraw("btlEvent Calc", 2, 0, 0, btlEventUpdateCurrentWork, btlEventDestroy, task, task->id);
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlEvent.cpp", 653);
        state = g_btlEvent = (EventState001e2240 *)asdMemAlloc(0x100, 0x100, 0, 0x30, 1);
        state->active = 0;
        if (libc_strcmp(task->script, DAT_00400988) != 0 && libc_strlen(task->script) != 0) {
            state->active = 1;
            state->unk2c = 0;
        }
    }
}

} /* extern "C" */
