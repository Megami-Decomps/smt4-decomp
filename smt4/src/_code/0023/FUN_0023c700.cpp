#include "common.h"

/* A named record: an id byte and a 0x84-byte name. */
struct NamedRecord {
    /* 0x00 */ u8 id;
    /* 0x01 */ u8 unk01[7];
    /* 0x08 */ char name[0x84];
};

struct Vec2 {
    f32 x, y;
};

/* The owner's lists of named records, one list per kind. */
struct NamedRecordOwner {
    /* 0x0000 */ u8 unk0000[0x1d00];
    /* 0x1D00 */ NamedRecord kind0[4];
    /* 0x1F30 */ NamedRecord kind1[4];
    /* 0x2160 */ NamedRecord kind2[4];
    /* 0x2390 */ NamedRecord kind3[4];
    /* 0x25C0 */ NamedRecord kind4[10];
    /* 0x2B38 */ u8 unk2B38[0x8c];
    /* 0x2BC4 */ NamedRecord kind5[2];
    /* 0x2CDC */ NamedRecord kind6[5];
    /* 0x2F98 */ u8 unk2F98[4];
    /* 0x2F9C */ NamedRecord kind9;
    /* 0x3028 */ u8 unk3028[0x48];
    /* 0x3070 */ NamedRecord kind7[3];
    /* 0x3214 */ u8 unk3214[4];
    /* 0x3218 */ NamedRecord kind8;
};

extern "C" {
void *memClear(void *destination, u32 size);
char *libc_strcpy(char *destination, const char *source);
u32 FUN_003d98e0(NamedRecordOwner *owner, u32 effect, u32 arg, s32 index, u32 indexArg, s32 kind, char *target, Vec2 origin);

/* Starts the effect of the named record `slot` of list `list`, naming it after the record. */
u32 FUN_0023c700(NamedRecordOwner *owner, u32 arg, s32 index, s32 list, s32 slot, s32 kind, Vec2 origin)
{
    char name[0x80];
    u8 id = 0xff;
    if (list >= 10) {
        return 0;
    }
    memClear(name, 0x80);
    switch (list) {
    case 0:
        if (slot >= 4) {
            return 0;
        }
        id = owner->kind0[slot].id;
        libc_strcpy(name, owner->kind0[slot].name);
        break;
    case 1:
        if (slot >= 4) {
            return 0;
        }
        id = owner->kind1[slot].id;
        libc_strcpy(name, owner->kind1[slot].name);
        break;
    case 2:
        if (slot >= 4) {
            return 0;
        }
        id = owner->kind2[slot].id;
        libc_strcpy(name, owner->kind2[slot].name);
        break;
    case 3:
        if (slot >= 4) {
            return 0;
        }
        id = owner->kind3[slot].id;
        libc_strcpy(name, owner->kind3[slot].name);
        break;
    case 4:
        if (slot >= 11) {
            return 0;
        }
        id = owner->kind4[slot].id;
        libc_strcpy(name, owner->kind4[slot].name);
        break;
    case 5:
        if (slot >= 2) {
            return 0;
        }
        id = owner->kind5[slot].id;
        libc_strcpy(name, owner->kind5[slot].name);
        break;
    case 6:
        if (slot >= 5) {
            return 0;
        }
        id = owner->kind6[slot].id;
        libc_strcpy(name, owner->kind6[slot].name);
        break;
    case 7:
        if (slot >= 3) {
            return 0;
        }
        id = owner->kind7[slot].id;
        libc_strcpy(name, owner->kind7[slot].name);
        break;
    case 8:
        if (slot != 0) {
            return 0;
        }
        id = owner->kind8.id;
        libc_strcpy(name, owner->kind8.name);
        break;
    case 9:
        if (slot != 0) {
            return 0;
        }
        id = owner->kind9.id;
        libc_strcpy(name, owner->kind9.name);
        break;
    }
    return FUN_003d98e0(owner, id, arg, index, list, kind, name, origin);
}
}
