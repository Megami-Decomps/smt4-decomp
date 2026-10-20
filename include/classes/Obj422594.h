#ifndef CLASSES_OBJ422594_H
#define CLASSES_OBJ422594_H

#include "common.h"

extern "C" {
int asdMemFreeNonNull(void *block);
int ifTouchRegionRemove(void);
}

struct Obj422594Pair {
    u32 first;
    u32 second;
};

extern "C" int FUN_0026ab64(void *screen, Obj422594Pair pair, int width, int left, int top, int c, int d);

/* The rectangle a window occupies on its screen and the touch regions registered for it. */
class Obj422594Region {
public:
    /* Hands the rectangle to the screen; true when the screen accepted it. */
    bool submit()
    {
        bool accepted = false;

        if (FUN_0026ab64(screen, pair, width, left, top, 0, 1) != 0) {
            accepted = true;
        }
        return accepted;
    }

    s16 getWidth() { return width; }
    s16 getLeft() { return left; }
    s16 getTop() { return top; }

    /* 0x00 */ void *screen;
    /* 0x04 */ s16 left;
    /* 0x06 */ s16 top;
    /* 0x08 */ s16 width;
    /* 0x0A */ s16 touchCount;     /* touch regions registered */
    /* 0x0C */ Obj422594Pair pair;
};

/* A UI object that registers touch regions (vtable at 0x422594, named after it until its real name
 * is known); its destructor removes them all. ObjBase3c2ef0 and the windows derive from it. */
class Obj422594 {
public:
    virtual ~Obj422594();
    static void operator delete(void *block) { asdMemFreeNonNull(block); }

    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x4C];
    /* 0x50 */ Obj422594Region region;
    /* 0x64 */ u8 ready;
};

#endif
