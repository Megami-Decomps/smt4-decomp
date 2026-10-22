/* NON_MATCHING: retail reloads the state byte through a 0x400 base for each compare and builds the message in r0 not r1 */
#include "common.h"

extern "C" {

typedef struct {
    u32 lo, hi;
} CursorPair;

typedef struct {
    u32 kind;    /* 0x0 */
    u8 flag;     /* 0x4 */
    u8 unk5[3];
    u32 value;   /* 0x8 */
} CursorParam;

typedef struct {
    u8 unk0[4];
    u8 type;          /* 0x04 */
    u8 unk5[0xc - 0x5];
    u32 sender;       /* 0x0c */
    void *target;     /* 0x10 */
    CursorPair pair;  /* 0x14 */
    u32 kind;         /* 0x1c */
    u32 flag;         /* 0x20 */
    u32 value;        /* 0x24 */
} CursorMsg;

typedef struct {
    u8 unk0[0x184];
    u32 id;           /* 0x184 */
} MsgQueue;

typedef struct {
    u8 unk0[0xf4];
    u8 target[0x43c - 0xf4]; /* 0x0f4 */
    CursorParam param;       /* 0x43c */
    u8 unk448[0x450 - 0x448];
    CursorPair pair;         /* 0x450 */
    u8 unk458[0x45c - 0x458];
    u8 state;                /* 0x45c */
    u8 unk45d;
    u8 sent;                 /* 0x45e */
} CursorTask;

MsgQueue *FUN_002baed8(void);
void *FUN_002b4f64(MsgQueue *queue, s32 size);
void listAppendNode(MsgQueue *queue, CursorMsg *msg);
void FUN_002bda30(CursorTask *task, s32 arg);

/* Posts a cursor message carrying `pair` and `param` to the queue and remembers the pair. */
static void cursorTaskPost(CursorTask *task, CursorPair pair, CursorParam *param)
{
    MsgQueue *queue = FUN_002baed8();
    CursorMsg *msg = (CursorMsg *)FUN_002b4f64(queue, 10);

    msg->sender = queue->id;
    msg->type = 0x25;
    msg->target = task->target;
    msg->pair = pair;
    msg->kind = param->kind;
    msg->flag = param->flag;
    msg->value = param->value;
    listAppendNode(queue, msg);
    task->pair = pair;
    task->sent = 1;
}

/* Advances the cursor task: in state 2 posts its current pair as a message, in state 4 resets. */
void FUN_003807b0(CursorTask *task)
{
    switch (task->state) {
    case 2:
        cursorTaskPost(task, task->pair, &task->param);
        task->state = 3;
        break;
    case 4:
        FUN_002bda30(task, 0);
        task->state = 0;
        break;
    }
}

} /* extern "C" */
