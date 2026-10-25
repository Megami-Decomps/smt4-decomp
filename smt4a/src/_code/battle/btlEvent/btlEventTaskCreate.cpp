#include "AsdSDK/AsdDebug.h"

/* The battle event work shared with the task (the part this function reads). */
struct BtlEventWork {
    /* 0x00 */ u32 owner;
    /* 0x04 */ u8 unk04[0x70];
    /* 0x74 */ u32 drawTask;
    /* 0x78 */ u8 unk78[0xb8];
    /* 0x130 */ u16 scriptName[1];
};

/* The battle event state block (0x30 bytes). */
struct BtlEventState {
    /* 0x00 */ u32 active;
    /* 0x04 */ u8 unk04[0x28];
    /* 0x2c */ u8 unk2c;
    /* 0x2d */ u8 unk2d[3];
};

extern "C" {

extern BtlEventState *g_btlEvent;
extern const u16 DAT_005285d8[];

s32 jobIsValid(u32 job);
u32 taskCreateDraw(const char *name, s32 priority, u32 arg2, u32 arg3, void (*draw)(void *),
                   void (*destroy)(void *), void *work, u32 job);
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 region, u32 size, u32 option);
s32 libc_strcmp(const u16 *a, const u16 *b);
s32 libc_strlen(const u16 *text);
void FUN_002761fc(void *work);
void btlEventDestroy(void *work);

// Creates the battle event draw task and its state block unless the task already exists; the
// event starts active when a script name is set.
void btlEventTaskCreate(BtlEventWork *work)
{
    if (jobIsValid(work->drawTask) == 0) {
        work->drawTask = taskCreateDraw("btlEvent Calc", 4, 0, 0, FUN_002761fc, btlEventDestroy, work,
                                        work->owner);
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlEvent.cpp", 0x29b);
        BtlEventState *state = g_btlEvent = (BtlEventState *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x30, 1);
        state->active = 0;
        if (libc_strcmp(work->scriptName, DAT_005285d8) != 0 && libc_strlen(work->scriptName) != 0) {
            state->active = 1;
            state->unk2c = 0;
        }
    }
}

}
