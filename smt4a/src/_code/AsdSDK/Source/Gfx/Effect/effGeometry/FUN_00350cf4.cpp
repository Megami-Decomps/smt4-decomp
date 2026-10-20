#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_0054baf8[]; /* "c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Effect\\effGeometry.cpp": __FILE__ */

typedef struct Color4 {
    u32 r, g, b, a;
} Color4;

typedef struct GeomState {
    u8 unk00[0x40];
    Color4 color;    /* 0x40 */
    u8 unk50[0x10];
    u32 unk60;       /* 0x60 */
} GeomState;

typedef struct GeomObject {
    u16 kind;         /* 0x00 */
    u16 unk02;        /* 0x02 */
    u8 unk04[8];
    GeomState *state; /* 0x0c */
} GeomObject;

extern Color4 DAT_005c1fb4;

extern void *memAlloc(int, int, int, int size, int align, int);
extern GeomState *FUN_002b3324(GeomState *state, u32 flags, int arg);

/* Creates a geometry object around `state`; flag 0x80000 gives it the default color. */
GeomObject *FUN_00350cf4(GeomState *state, u32 flags)
{
    GeomObject *object;

    asdDebugTrace(DAT_0054baf8, 221);
    object = (GeomObject *)memAlloc(0x10000, 0x100, 0, 0x58, 0x10, 1);
    object->kind = 0x300;
    object->unk02 = 0;
    object->state = FUN_002b3324(state, flags, 0);
    if (flags & 0x80000) {
        GeomState *geom = object->state;

        geom->color = DAT_005c1fb4;
    }
    object->state->unk60 = 0;
    return object;
}

} /* extern "C" */
