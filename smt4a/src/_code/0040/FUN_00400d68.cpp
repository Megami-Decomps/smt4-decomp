#include "shard/Shard0040.h"
#include "code/Code0040_Smt4a.h"

extern "C" {

typedef struct LinkTarget4 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} LinkTarget4;

typedef struct LinkAt1C {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ LinkTarget4 *link;
} LinkAt1C;

extern s32 FUN_003fdae8(u32 value);

void FUN_00400d68(LinkAt1C *obj)
{
    if (obj->link != NULL) {
        FUN_003fdae8(obj->link->value);
    }
}

} /* extern "C" */
