/* nw::snd::internal::driver::SoundThread: the sound thread's per-frame state. Each frame it
 * runs the registered callback objects (two intrusive lists, objects keep their vtable at +0 and
 * their list link at +4), updates the driver managers and optionally logs a tick into a
 * profile buffer. */
#ifndef SHARD_S3SOUNDTHREAD_H
#define SHARD_S3SOUNDTHREAD_H

#include "common.h"
#include <stddef.h>

struct SoundThreadCallback;

typedef struct SoundThreadCallbackVtbl {
    /* 0x00 */ void *unk00[2];
    /* 0x08 */ void (*vfunc08)(struct SoundThreadCallback *self);
    /* 0x0C */ void (*vfunc0C)(struct SoundThreadCallback *self);
} SoundThreadCallbackVtbl;

typedef struct SoundThreadListNode {
    /* 0x00 */ struct SoundThreadListNode *next;
    /* 0x04 */ struct SoundThreadListNode *prev;
} SoundThreadListNode;

typedef struct SoundThreadCallback {
    /* 0x00 */ const SoundThreadCallbackVtbl *vtbl;
    /* 0x04 */ SoundThreadListNode node;
} SoundThreadCallback;

typedef struct SoundThreadList {
    /* 0x00 */ SoundThreadListNode node;  /* list head: next == &node when empty */
    /* 0x08 */ s32 count;
} SoundThreadList;

/* Calls vfunc08 / vfunc0C of every callback object linked into `list`. */
static __inline void SoundThreadListCallVfunc08(SoundThreadList *list)
{
    for (SoundThreadListNode *n = list->node.next; n != &list->node;) {
        SoundThreadCallback *cb = (SoundThreadCallback *)((u8 *)n - offsetof(SoundThreadCallback, node));
        SoundThreadListNode *next = cb->node.next;
        cb->vtbl->vfunc08(cb);
        n = next;
    }
}

static __inline void SoundThreadListCallVfunc0C(SoundThreadList *list)
{
    for (SoundThreadListNode *n = list->node.next; n != &list->node;) {
        SoundThreadCallback *cb = (SoundThreadCallback *)((u8 *)n - offsetof(SoundThreadCallback, node));
        SoundThreadListNode *next = cb->node.next;
        cb->vtbl->vfunc0C(cb);
        n = next;
    }
}

/* One profile sample: the system tick at the start of a frame. */
typedef struct SoundThreadTick {
    s64 value;
} SoundThreadTick;

typedef struct SoundThread {
    /* 0x000 */ u8 unk000[0x1B8];
    /* 0x1B8 */ SoundThreadTick *profileBuffer;
    /* 0x1BC */ s32 profileBufferSize;
    /* 0x1C0 */ s32 profileUsed;
    /* 0x1C4 */ u8 lock[0x10];        /* CriticalSection */
    /* 0x1D4 */ SoundThreadList listA;
    /* 0x1E0 */ SoundThreadList listB;
    /* 0x1EC */ u8 unk1EC[0x0A];
    /* 0x1F6 */ u8 profileEnabled;
} SoundThread;

#endif
