/* NON_MATCHING: retail keeps the (empty) element-destruction loop of MoveArray<Point>::reserve, unrolled by two with a parity prologue, which armcc deletes for this element type; everything else matches. */
#include "nw/ut/MoveArray.h"

/* A position and the id of what it was taken from; `x` and `z` stay unset in the one place it is built. */
struct Point {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
    /* 0x0C */ u32 id;

    ~Point() {}
};

struct PointSource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ f32 y;
};

struct PointOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ nw::ut::MoveArray<Point> points;
};

/* Virtual method of an object that keeps a list of points: records one for `source`. */
extern "C" void FUN_0044f2c8(PointOwner *owner, PointSource *source)
{
    Point point;
    point.y = source->y;
    point.id = (u32)source;
    owner->points.push_back(point);
}
