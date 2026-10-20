/* NON_MATCHING: the register offset 134 for the two id loads is shared (mov r1, r0) where retail materialises it twice (movs r1, #134); the pool pad also differs in disassembly only. */
#include "common.h"

extern "C" {

typedef struct Config {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 strict;
} Config;

typedef struct Globals {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ Config *config;
} Globals;

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x66];
    /* 0x66 */ u8 kind;
    /* 0x67 */ u8 unk67[0x1F];
    /* 0x86 */ u16 id;
    /* 0x88 */ u8 unk88[0x54];
    /* 0xDC */ u8 data[4];
} Entry;

extern Globals DAT_005949d8;

int FUN_002eb6ae(Entry *entry, u32 flags);
u32 FUN_002f34ac(void *a, void *b);

/* Compares two entries: they must share kind and id; in strict mode both must pass FUN_002eb6ae(flags 0x200), else FUN_002f34ac decides on their data. */
u32 FUN_002f2c38(Entry *a, Entry *b)
{
    if (a->kind != b->kind || a->id != b->id) {
        return 0;
    }
    if (DAT_005949d8.config->strict == 1) {
        if (FUN_002eb6ae(a, 0x200) != 0 && FUN_002eb6ae(b, 0x200) != 0) {
            return 1;
        }
    }
    return FUN_002f34ac(a->data, b->data);
}

} /* extern "C" */
