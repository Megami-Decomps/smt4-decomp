#ifndef CLASSES_OBJ420794_H
#define CLASSES_OBJ420794_H

#include "common.h"
#include "classes/Obj420794Resources.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

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
    virtual void callback();         /* +0x10 */
    virtual void setTarget(u32 first, u32 second, u32 third);   /* +0x14 */
};

/* The base of the screen filters (vtable at 0x420794, named after it until its real name is
 * known; Obj42094c, Obj420990 and others derive from it): a heap block, a buffer handle and a
 * child it releases when destroyed. */
class Obj420794 {
public:
    Obj420794(Obj420794Child *owned) : buffer(NULL), texture(0), unk0C(0), speed(0.01f), child(owned) {}
    /* Releases the texture, the buffer and the child. */
    virtual ~Obj420794()
    {
        if (texture != 0) {
            obj420794ReleaseTexture(texture);
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
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    static void *operator new(u32 bytes, u32 owner) throw() { return asdOperatorNew(bytes, reinterpret_cast<void *>(owner)); }
    static void operator delete(void *block) { obj420794FreeBlock(block); }
    void setBuffer(void *block) { buffer = block; }
    virtual void prepareGeometry() = 0; /* +0x08 */
    virtual void draw() = 0;            /* +0x0C */
    virtual void refreshTextureCoordinates() = 0; /* +0x10 */
    virtual void dispatchChildCallback(); /* +0x14 */
    virtual u32 isReady();             /* +0x18 */

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ void *buffer;       /* heap block */
    /* 0x08 */ u32 texture;        /* buffer handle, released with bufferHandleRelease */
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ f32 speed;
    /* 0x14 */ Obj420794Child *child;
};

typedef char Obj420794SizeCheck[sizeof(Obj420794) == 0x18 ? 1 : -1];

#endif
