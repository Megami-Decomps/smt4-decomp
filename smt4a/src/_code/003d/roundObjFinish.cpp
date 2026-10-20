#include "shard/Shard003D.h"

extern "C" {

typedef struct RoundObj {
    /* 0x0000 */ u8 unk0000[0x43AC];
    /* 0x43AC */ u32 scriptProcess;
    /* 0x43B0 */ void *buffer;
    /* 0x43B4 */ u8 unk43B4[0x3108];
    /* 0x74BC */ s32 roundCount;
    /* 0x74C0 */ s32 round;
    /* 0x74C4 */ u8 unk74C4[0xA68];
    /* 0x7F2C */ u8 unk7F2C;
} RoundObj;

extern void scrScriptProcessDestroy(u32 process);
extern void asdMemFree(void *ptr);
extern void FUN_00321744(void);
extern void FUN_0020b490(RoundObj *obj, u32 state);
extern void FUN_002c8538(u8 value);
extern void FUN_00215bd0(void);

/* Finishes a round: releases the script process and buffer, advances the round counter, and picks the next state. */
u32 roundObjFinish(RoundObj *obj)
{
    s32 round;

    scrScriptProcessDestroy(obj->scriptProcess);
    asdMemFree(obj->buffer);
    FUN_00321744();
    obj->unk7F2C = 0;
    round = obj->round + 1;
    obj->round = round;
    if (obj->roundCount == round) {
        FUN_0020b490(obj, 0x17);
        return 0;
    }
    FUN_002c8538(1);
    FUN_00215bd0();
    FUN_0020b490(obj, 10);
    return 1;
}

} /* extern "C" */
