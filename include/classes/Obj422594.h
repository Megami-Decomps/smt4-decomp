#ifndef CLASSES_OBJ422594_H
#define CLASSES_OBJ422594_H

#include "common.h"
#include <stddef.h>

#include "classes/Obj422594Delete.h"

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
    Obj422594();
    virtual ~Obj422594();
    virtual void initialize(const void *source); /* +0x08 */
    static void operator delete(void *block) { obj422594FreeBlock(block); }

    /* 0x00: vtable pointer */
    /* 0x04 */ u16 state;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 slots[12];
    /* 0x38 */ u32 sourceWord1;
    /* 0x3C */ u32 sourceWord2;
    /* 0x40 */ u8 unk40[0xC];
    /* 0x4C */ u8 mode;
    /* 0x4D */ u8 unk4d[3];
    /* 0x50 */ Obj422594Region region;
};

typedef char Obj422594LayoutCheck[
    sizeof(Obj422594) == 0x64 && offsetof(Obj422594, region) == 0x50 ? 1 : -1];

#endif
