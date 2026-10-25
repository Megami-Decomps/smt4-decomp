/* NON_MATCHING: readable rewrite from retail disassembly compiles (211 vs 212 rows); retail loads the g_ifTouch address before the prologue and shares base-address adds differently */
#include "common.h"
#include <math.h>
#include "shard/W6_W6Match5_EntryCollection.h"
#include "util/CalleeContracts.h"

// Hit rectangle of one touch item (x, y, width, height); stored 8 bytes apart.
struct TouchRect {
    s16 x;
    s16 y;
    s16 w;
    s16 h;
};

// Touch-driven list/scroll widget. Item rectangles start at +0x0a with an 8-byte stride.
struct TouchWidget {
    u8 unk00[8];
    u8 state;                   // 0x008: 0 idle, 1 pressed, 2 dragging, 4/5 slide-out, 6 released
    u8 unk09;
    TouchRect items[1];         // 0x00a: indexed by 8-byte stride (see itemRect)
    u8 unk12[0x64a - 0x12];
    s16 itemCount;              // 0x64a
    s16 hitLimit;               // 0x64c: items below this index are always hit-tested
    s16 selected;               // 0x64e
    s16 holdTime;               // 0x650
    s16 unk652;
    u16 frame;                  // 0x654
    u8 unk656[2];
    s32 startX;                 // 0x658
    s32 startY;                 // 0x65c
    s32 curX;                   // 0x660
    s32 curY;                   // 0x664
    s32 lastX;                  // 0x668
    s32 lastY;                  // 0x66c
    s32 velX;                   // 0x670
    s32 velY;                   // 0x674
    s32 unk678;
};

struct TouchOwner {
    u8 unk00[4];
    TouchWidget* widget;        // 0x04
};

extern "C" {

extern TouchOwner g_ifTouch;


static inline TouchRect* itemRect(TouchWidget* t, s32 index)
{
    return reinterpret_cast<TouchRect*>(reinterpret_cast<u8*>(t) + index * 8 + 10);
}

// One frame of the touch widget: press detection, drag, release and the kinetic slide-out.
u32 FUN_00107d28(void)
{
    TouchWidget* t = g_ifTouch.widget;
    switch (t->state) {
    case 0:
        if (FUN_002bffe0(&t->startX, &t->startY, 1) != 0) {
            for (s16 i = 0; i < t->itemCount; i++) {
                if (i >= 10 || i < t->hitLimit) {
                    TouchRect* r = itemRect(t, i);
                    if (uiPointerHitsRect(r->x, r->y, r->w, r->h, 0) != 0) {
                        t->state = 1;
                        t->selected = i;
                        t->holdTime = 0;
                        t->unk652 = 0;
                    }
                }
            }
        }
        t->lastX = t->startX;
        t->lastY = t->startY;
        t->unk678 = 0;
        t->curX = t->startX;
        t->curY = t->startY;
        break;
    case 1:
        t->holdTime = t->holdTime + 1;
        if (t->holdTime >= 10) {
            t->state = 2;
        } else if (FUN_002bffe0(&t->curX, &t->curY, 0) != 0) {
            s32 dx = t->curX - t->startX;
            s32 dy = t->curY - t->startY;
            if ((u32)sqrt((double)(dx * dx + dy * dy)) > 8) {
                t->state = 2;
            }
        }
        if (FUN_002bffe0(0, 0, 3) != 0) {
            t->state = 6;
            t->holdTime = 0;
        }
        break;
    case 2:
        t->holdTime = t->holdTime + 1;
        if (FUN_002bffe0(&t->curX, &t->curY, 0) == 0) {
            t->state = 0;
            t->holdTime = 0;
        } else {
            for (s16 i = 0; i < t->itemCount; i++) {
                if (i >= 10 || i < t->hitLimit) {
                    TouchRect* r = itemRect(t, i);
                    if (uiPointerHitsRect(r->x, r->y, r->w, r->h, 0) != 0) {
                        t->state = 2;
                        t->selected = i;
                    }
                }
            }
        }
        break;
    case 4:
        t->curX += t->velX;
        if (t->velX < 0) {
            if ((t->frame & 1) == 0) t->velX++;
            if (t->velX > -5) t->velX = -5;
            if ((s16)(t->curX - t->startX) < -320) t->state = 0;
        }
        if (t->velX > 0) {
            if ((t->frame & 1) == 0) t->velX--;
            if (t->velX <= 5) t->velX = 5;
            if ((s16)(t->curX - t->startX) > 320) t->state = 0;
        }
        t->frame++;
        break;
    case 5:
        t->curY += t->velY;
        if (t->velY < 0) {
            t->velY++;
            if (t->velY < 0) {
                t->frame++;
                break;
            }
            t->state = 0;
        }
        if (t->velY > 0) {
            t->velY--;
            if (t->velY <= 0) t->state = 0;
        }
        t->frame++;
        break;
    case 6:
        t->state = 0;
        break;
    }
    return 0;
}

} /* extern "C" */
