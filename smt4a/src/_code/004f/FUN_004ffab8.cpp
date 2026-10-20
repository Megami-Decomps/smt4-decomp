/* Forwards the string `text` and its length to FUN_001a7a20, using the manager located through the owner's link. */
#include "common.h"

extern "C" {

typedef struct Sub {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 buffer[1];
} Sub;

typedef struct Manager {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ Sub sub;
} Manager;

typedef struct Link {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ Manager *manager;
} Link;

typedef struct Owner {
    /* 0x000 */ u8 unk000[0x0C];
    /* 0x00C */ u8 unk00C[0x200];
    /* 0x20C */ Link *link;     /* when non-NULL, the link record starts at +0xC of it */
} Owner;

extern u32 wstrlen(u32 text);
extern void FUN_001a7a20(void *buffer, u32 text, u32 length);

void FUN_004ffab8(Owner *owner, u32 text)
{
    u8 *link = (u8 *)owner->link;
    Sub *sub;

    if (link != NULL) {
        link += 0xC;
    }
    sub = &((Link *)link)->manager->sub;
    FUN_001a7a20(sub->buffer, text, wstrlen(text));
}

}
