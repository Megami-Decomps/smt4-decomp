#ifndef CLASSES_FILTER_DRAW_H
#define CLASSES_FILTER_DRAW_H
#include "common.h"

/* Cached render-state stack used by the screen filters. */
struct FilterDrawState {
    s32 depth;
    u32 reserved;
    u32 values[4];
    u8 dirty;
    u8 unk19[3];
    void (*apply)();

    void push(u32 value)
    {
        s32 index = depth;
        u32 previous = values[index];
        depth = index + 1;
        values[index + 1] = value;
        if (dirty != 0 || previous != value) {
            apply();
            dirty = 0;
        }
    }
    void pop()
    {
        s32 index = depth;
        u32 previous = values[index];
        depth = index - 1;
        if (dirty != 0 || previous != values[index - 1]) {
            apply();
            dirty = 0;
        }
    }
    void replace(u32 value)
    {
        u32 previous = values[depth];
        values[depth] = value;
        if (dirty != 0 || previous != value) {
            apply();
            dirty = 0;
        }
    }
};
struct FilterDrawTexture {
    u8 unk00[8];
    u32 handle;
};
struct FilterDrawChild {
    u8 unk00[8];
    f32 alpha;
};
#endif
