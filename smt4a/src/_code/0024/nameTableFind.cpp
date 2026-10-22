#include "common.h"

/* The twelve fixed names used for kind 24. */
struct FixedNameList {
    /* 0x00 */ const char *names[12];
};

/* One (kind, index) -> name row of the name table; kind -1 ends the table. */
struct NameTableEntry {
    /* 0x00 */ s32 kind;
    /* 0x04 */ s32 index;
    /* 0x08 */ u8 unk08[0x14];
    /* 0x1C */ char name[0x40];
};

typedef char NameTableEntrySizeCheck[sizeof(NameTableEntry) == 0x5c ? 1 : -1];

extern "C" {

extern const FixedNameList DAT_00532210;
extern NameTableEntry DAT_00582364[999];

/* The name for (kind, index): a fixed name for kind 24, else the matching name table row; NULL if none. */
const char *nameTableFind(s32 kind, s32 index)
{
    FixedNameList fixed = DAT_00532210;
    if (kind == 24) {
        return fixed.names[index];
    }
    for (s32 i = 0; i < 999; ++i) {
        if (DAT_00582364[i].kind == -1) {
            break;
        }
        if (DAT_00582364[i].kind == kind && DAT_00582364[i].index == index) {
            return DAT_00582364[i].name;
        }
    }
    return NULL;
}

} /* extern "C" */
