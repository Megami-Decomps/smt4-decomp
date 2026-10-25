/* NON_MATCHING: retail repeats the "measure the text and add the width" tail in every item-type case (ours is merged into one tail) and keeps the buffer address in r8 for the ARM_common_memcpy4_7 call; the frame is 4 bytes larger here */
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "shard/JobWork.h"

/* The list box work object as the size calculation sees it (observed fields). */
struct ListBoxMetrics {
    /* 0x00 */ AsdList items;
    /* 0x0C */ u8 unk0C[0x44];
    /* 0x50 */ f32 width;
    /* 0x54 */ f32 height;
    /* 0x58 */ s32 charWidth;
    /* 0x5C */ s32 rowHeight;
    /* 0x60 */ u8 unk60[8];
    /* 0x68 */ s32 maxRows;
    /* 0x6C */ s32 visibleRows;
    /* 0x70 */ u8 unk70[0xC];
    /* 0x7C */ s32 hasMeasure;
    /* 0x80 */ s32 (*measure)(const char *text);
    /* 0x84 */ u8 unk84[8];
    /* 0x8C */ char title[1];
};

extern "C" {

s32 libc_strlen(const char *text);
void textFormatBuffer(char *buffer, const char *format, ...);
void ARM_common_memcpy4_7(char *destination, const char *source);

/* Recomputes the size of the list box from its title and items: the widest item (with its value
 * text) gives the width, the number of visible rows the height. */
void asdListBoxMarkDirty(u32 listBox)
{
    char text[256];
    ListBoxMetrics *box = reinterpret_cast<ListBoxMetrics *>(jobGetWork(listBox));
    f32 width = (f32)(libc_strlen(box->title) * box->charWidth);

    for (AsdListNode *node = box->items.first; node != NULL; node = node->next) {
        AsdListBoxItem *item = static_cast<AsdListBoxItem *>(node->item);
        s32 itemWidth;

        if (box->hasMeasure != 0) {
            itemWidth = box->measure(item->label);
            switch (item->type) {
            case ASD_LISTBOX_PLAIN:
                break;
            case ASD_LISTBOX_TEXT:
                textFormatBuffer(text, "_%s", item->text);
                itemWidth = box->measure(text) + itemWidth + box->charWidth;
                break;
            case ASD_LISTBOX_TOGGLE:
                ARM_common_memcpy4_7(text, "_FALSE");
                itemWidth = box->measure(text) + itemWidth + box->charWidth;
                break;
            case ASD_LISTBOX_INT:
                if (item->flags != 0) {
                    textFormatBuffer(text, "0x%08X", item->intValue);
                } else {
                    textFormatBuffer(text, "_%8d", item->intValue);
                }
                itemWidth = box->measure(text) + itemWidth + box->charWidth;
                break;
            case ASD_LISTBOX_FLOAT:
                textFormatBuffer(text, "_%4.2f", (double)item->floatValue);
                itemWidth = box->measure(text) + itemWidth + box->charWidth;
                break;
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
                itemWidth += box->charWidth * (item->flags != 0 ? 11 : 9);
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
    s32 rows = box->visibleRows < box->maxRows ? box->visibleRows : box->maxRows;
    box->height = (f32)(box->rowHeight * rows + 4) + (f32)box->rowHeight;
}

}
