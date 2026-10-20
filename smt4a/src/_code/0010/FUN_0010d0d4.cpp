/* NON_MATCHING: the copy of `task` used to address the embedded request is made after the first load instead of before it. */
#include "common.h"

extern "C" {

typedef struct Sink Sink;
typedef struct SinkVtbl {
    /* 0x00 */ void *unk00[9];
    /* 0x24 */ void (*submit)(Sink *self, int priority, u32 value);
} SinkVtbl;
struct Sink {
    /* 0x00 */ SinkVtbl *vtbl;
};

typedef struct Source {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 valueA;
    /* 0x10 */ u32 valueB;
    /* 0x14 */ u8 unk14[0x10];
    /* 0x24 */ struct SinkHolder *holder;
} Source;

typedef struct SinkHolder {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ Sink *sink;
} SinkHolder;

typedef struct Target {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ u32 valueA;
    /* 0x7C */ u32 valueB;
} Target;

typedef struct Request {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Target *target;
    /* 0x08 */ u32 value;
} Request;

typedef struct Task {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ Source *source;
    /* 0x7C */ u32 unk7C;
    /* 0x80 */ Request request;
} Task;

int FUN_0010613a(u32 arg0, Target *target);
u32 FUN_002ecf28(void);

/* Copies the source's two values into the target, registers the target, and submits `value` to the source's sink with priority 100. */
void FUN_0010d0d4(Task *task)
{
    Sink *sink;

    task->request.target->valueA = task->source->valueA;
    task->request.target->valueB = task->source->valueB;
    FUN_0010613a(FUN_002ecf28(), task->request.target);
    sink = task->source->holder->sink;
    sink->vtbl->submit(sink, 100, task->request.value);
}

} /* extern "C" */
