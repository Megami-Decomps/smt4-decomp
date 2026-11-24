#include <stdio.h>
#include <string.h>
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "shard/JobWork.h"

extern "C" {

s32 libc_strlen(const char *text);

/* Recomputes the size of the list box from its title and items: the widest item (with its value
 * text) gives the width, the number of visible rows the height. */
void asdListBoxMarkDirty(u32 job)
{
    AsdListBox *box = (AsdListBox *)jobGetWork(job);
    f32 width = (f32)(libc_strlen(box->title) * box->charWidth);

    for (AsdListNode *node = box->items.first; node != NULL; node = node->next) {
        AsdListBoxItem *item = (AsdListBoxItem *)node->item;
        s32 itemWidth;

        if (box->hasMeasure != 0) {
            /* Formatting scratch is live only for the measurement of that representation. */
            itemWidth = box->measure(item->label);
            switch (item->type) {
            case ASD_LISTBOX_PLAIN:
                break;
            case ASD_LISTBOX_TEXT: {
                char text[ASD_LISTBOX_VALUE_TEXT_CAPACITY];
                sprintf(text, "_%s", item->text);
                itemWidth = box->measure(text) + itemWidth + box->charWidth;
                break;
            }
            case ASD_LISTBOX_TOGGLE: {
                char text[ASD_LISTBOX_VALUE_TEXT_CAPACITY];
                strcpy(text, "_FALSE");
                itemWidth = box->measure(text) + itemWidth + box->charWidth;
                break;
            }
            case ASD_LISTBOX_INT:
                if (item->flags == 0) {
                    char text[ASD_LISTBOX_VALUE_TEXT_CAPACITY];
                    sprintf(text, "_%8d", item->intValue);
                    itemWidth = box->measure(text) + itemWidth + box->charWidth;
                } else {
                    char text[ASD_LISTBOX_VALUE_TEXT_CAPACITY];
                    sprintf(text, "0x%08X", (u32)item->intValue);
                    itemWidth = box->measure(text) + itemWidth + box->charWidth;
                }
                break;
            case ASD_LISTBOX_FLOAT: {
                char text[ASD_LISTBOX_VALUE_TEXT_CAPACITY];
                sprintf(text, "_%4.2f", (double)item->floatValue);
                itemWidth = box->measure(text) + itemWidth + box->charWidth;
                break;
            }
            }
        } else {
            itemWidth = libc_strlen(item->label) * box->charWidth;
            switch (item->type) {
            case ASD_LISTBOX_PLAIN:
                break;
            case ASD_LISTBOX_TEXT:
                itemWidth += (libc_strlen(item->text) + 1) * box->charWidth;
                break;
            case ASD_LISTBOX_TOGGLE:
                itemWidth += box->charWidth * 6;
                break;
            case ASD_LISTBOX_INT:
                if (item->flags == 0) {
                    itemWidth += box->charWidth * 9;
                } else {
                    itemWidth += box->charWidth * 11;
                }
                break;
            case ASD_LISTBOX_FLOAT:
                itemWidth += box->charWidth * 8;
                break;
            }
        }
        if (width < (f32)(itemWidth + 4)) {
            width = (f32)(itemWidth + 4);
        }
    }
    box->width = width;
    s32 rows = box->itemCount < box->visibleRows ? box->itemCount : box->visibleRows;
    box->height = (f32)(box->rowHeight * rows + 4) + (f32)box->rowHeight;
}

} /* extern "C" */
