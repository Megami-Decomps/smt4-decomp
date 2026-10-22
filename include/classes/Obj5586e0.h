#ifndef CLASSES_OBJ5586E0_H
#define CLASSES_OBJ5586E0_H

#include "common.h"

struct QueueTimestamp {
    u32 low;
    u32 high;
};

struct SharedQueueNode {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00C */ SharedQueueNode *next;
    /* 0x010 */ SharedQueueNode *previous;
    /* 0x014 */ u8 unk014[0xf4];
    /* 0x108 */ QueueTimestamp timestamp;
};

class SharedQueueIterator {
public:
    SharedQueueIterator(SharedQueueNode *value = NULL) : node(value) {}
    SharedQueueIterator(const SharedQueueIterator &other) : node(other.node) {}
    /* 0x00 */ SharedQueueNode *node;
};

struct SharedQueueState {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ SharedQueueNode *head;
    /* 0x08 */ SharedQueueNode *tail;
    /* 0x0C */ SharedQueueNode *end;
    /* 0x10 */ u32 count;
};

/* Embedded state object with six cleared work words. */
class Obj55b074 {
public:
    Obj55b074()
    {
        for (u32 index = 0; index < 6; ++index) {
            values[index] = 0;
        }
    }
    virtual ~Obj55b074();
    /* 0x04 */ u32 values[6];
};

/* Parent object owns the embedded polymorphic state at offset four. */
class Obj5586e0 {
public:
    Obj5586e0();
    virtual ~Obj5586e0();
    virtual void clear();
    virtual void append(SharedQueueNode *, bool);
    virtual void linkNode(SharedQueueNode *, bool);
    virtual SharedQueueIterator erase(SharedQueueIterator);
    virtual s32 vfunc18();
    /* 0x04 */ Obj55b074 state;
};

#endif
