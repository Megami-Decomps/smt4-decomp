#include "common.h"

extern "C" {

int memClear(void *ptr, int size);

typedef struct GpuState {
    /* 0x000 */ u32 dirty;      /* registers to rewrite */
    /* 0x004 */ u32 requested;  /* groups requested so far */
    /* 0x008 */ u32 locked;     /* groups that must not be touched */
    /* 0x00C */ u8 unk00C[0x100];
    /* 0x10C */ u8 blockA[0x84];
    /* 0x190 */ u8 blockB[0x84];
} GpuState;

extern GpuState *DAT_004655c0;

/* Marks the register groups selected by `groups` (minus the locked ones) dirty. */
void registerBlockRequestGroups(u32 groups)
{
    GpuState *gpu = DAT_004655c0;

    groups = groups & ~gpu->locked;
    if ((groups & 1) != 0) {
        gpu->dirty = gpu->dirty | 0x100000;
    }
    if ((groups & 2) != 0) {
        gpu->dirty = gpu->dirty | 0x10000;
    }
    if ((groups & 4) != 0) {
        gpu->dirty = gpu->dirty | 0x1800000;
    }
    if ((groups & 8) != 0) {
        gpu->dirty = gpu->dirty | 0x600000;
    }
    if ((groups & 0x10) != 0) {
        gpu->dirty = gpu->dirty | 0x10000;
    }
    if ((groups & 0x20) != 0) {
        gpu->dirty = gpu->dirty | 0x80000;
    }
    if ((groups & 0x40) != 0) {
        gpu->dirty = gpu->dirty | 0x2004038;
        memClear(gpu->blockA, 0x84);
        memClear(gpu->blockB, 0x84);
    }
    if ((groups & 0x80) != 0) {
        gpu->dirty = gpu->dirty | 0x1c00;
    }
    if ((groups & 0x100) != 0) {
        gpu->dirty = gpu->dirty | 1;
    }
    if ((groups & 0x200) != 0) {
        gpu->dirty = gpu->dirty | 0x80c2;
    }
    if ((groups & 0x400) != 0) {
        gpu->dirty = gpu->dirty | 4;
    }
    if ((groups & 0x800) != 0) {
        gpu->dirty = gpu->dirty | 0x100;
    }
    if ((groups & 0x1000) != 0) {
        gpu->dirty = gpu->dirty | 0x200;
    }
    gpu->requested = gpu->requested | groups;
}

} /* extern "C" */
