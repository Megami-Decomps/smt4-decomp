#ifndef UI_TOUCH_RECTANGLE_REQUEST_H
#define UI_TOUCH_RECTANGLE_REQUEST_H
#include "ui/IfTouch.h"
#include <stddef.h>

struct TouchRectangleSize { s16 width, height; };
struct TouchRectangleRequest {
    u32 unk00;
    u16 width; // 0x04, high bit encodes a dimension flag
    u16 height; // 0x06, high bit encodes a dimension flag
    s16 x; // 0x08
    s16 y; // 0x0a
    const TouchRectangleSize *dimensions; // 0x0c
};
typedef char TouchRectangleRequestLayoutCheck[sizeof(TouchRectangleRequest) == 0x10 &&
    offsetof(TouchRectangleRequest, dimensions) == 0xc ? 1 : -1];
#endif
