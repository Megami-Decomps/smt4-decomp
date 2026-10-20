#ifndef CLASSES_OBJ420794_H
#define CLASSES_OBJ420794_H

#include "common.h"

extern "C" {
int asdMemFree(void *block);
int asdMemFreeNonNull(void *block);
int bufferHandleRelease(u32 handle);
}

/* The child a filter owns: a polymorphic object that deletes itself. Only the two methods the
 * filters call on it are known (slots 0 and 1 are the destructor's). */
class Obj420794Child {
public:
    virtual ~Obj420794Child();
    virtual void refreshOffsets();   /* +0x08 */
    virtual void refreshRects();     /* +0x0C */
};

/* The base of the screen filters (vtable at 0x420794, named after it until its real name is
 * known; Obj42094c, Obj420990 and others derive from it): a heap block, a buffer handle and a
 * child it releases when destroyed. */
class Obj420794 {
public:
    /* Releases the texture, the buffer and the child. */
    virtual ~Obj420794()
    {
        if (texture != 0) {
            bufferHandleRelease(texture);
            texture = 0;
        }
        if (buffer != NULL) {
            asdMemFree(buffer);
            buffer = NULL;
        }
        if (child != NULL) {
            delete child;
            child = NULL;
        }
    }
    static void operator delete(void *block) { asdMemFreeNonNull(block); }

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ void *buffer;       /* heap block */
    /* 0x08 */ u32 texture;        /* buffer handle, released with bufferHandleRelease */
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ Obj420794Child *child;
};

#endif
