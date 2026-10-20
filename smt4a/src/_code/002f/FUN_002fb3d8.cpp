/* NON_MATCHING: only the Thumb push/pop alignment pad differs (retail pads with r3, built with r6) */
/* Constructs an empty ring list with a fresh sentinel node, tagged with `tag`. */
#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 value;
    /* 0x08 */ struct Node *prev;
    /* 0x0C */ struct Node *next;
} Node;

typedef struct List {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ Node *sentinel;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 unk18;
    /* 0x19 */ u8 tag;
} List;

extern Node *FUN_003102ae(void);

List *FUN_002fb3d8(List *list, u8 tag)
{
    list->unk00 = 0;
    list->sentinel = NULL;
    list->unk14 = 0;
    list->unk18 = 0;
    list->tag = tag;
    list->unk0C = 0;
    list->unk08 = 0;
    list->unk04 = 0;
    list->sentinel = FUN_003102ae();
    list->sentinel->value = 0;
    list->sentinel->prev = list->sentinel;
    list->sentinel->next = list->sentinel;
    return list;
}

}
