#include "common.h"

extern "C" {

typedef struct Widget0040792c {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flags;     /* bit 0: hidden/unselected */
} Widget0040792c;

typedef struct Item0040792c {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Widget0040792c *widget;
} Item0040792c;

typedef struct List0040792c {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ Item0040792c *items[10];
    /* 0x4c */ s32 selected;       /* index of the selected item, -1 for none */
} List0040792c;

/* Marks the previously selected item's widget as unselected and the new one as selected (negative = none). */
void listSelectItem(List0040792c *list, s32 index)
{
    if (list->selected >= 0) {
        list->items[list->selected]->widget->flags |= 1;
    }
    list->selected = index;
    if (index >= 0) {
        list->items[index]->widget->flags &= ~1;
    }
}

} /* extern "C" */
