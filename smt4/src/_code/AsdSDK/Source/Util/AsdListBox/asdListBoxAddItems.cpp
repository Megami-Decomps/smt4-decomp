/* NON_MATCHING: retail has a stripped debug call (file/line setup + nop) before each item allocation. */
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "shard/JobWork.h"
#include "shard/W6_W6Match2_GeometryResources.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Util/AsdListHelpers_VariantA.h"

extern "C" {
extern u8 asdListBoxFreeItem; /* item callback */

void *asdListAdd(void *list, void *item, void *func);
void asdListBoxMarkDirty(u32 listBox);
char *strncpy(char *dst, const char *src, u32 n);

/* Adds one item per table row (label, kind, value and range) to the list box. */
void asdListBoxAddItems(u32 listBox, const AsdListBoxEntry *entries, s32 count)
{
    s32 i;
    const AsdListBoxEntry *entry;
    AsdListBoxModel *model;
    AsdListBoxItem *item;
    AsdListBoxItem *found;
    u32 id;

    for (i = 0; i < count; i++) {
        entry = &entries[i];

        /* The new item starts as a plain labelled row. */
        model = reinterpret_cast<AsdListBoxModel *>(jobGetWork(listBox));
        item = (AsdListBoxItem *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdListBoxItem), 1);
        strncpy(item->label, entry->label, ASD_LISTBOX_PATH_LEN);
        item->type = 0;
        item->id = model->nextItemId;
        model->nextItemId++;
        asdListAdd(model, item, &asdListBoxFreeItem);
        asdListBoxMarkDirty(listBox);
        asdListBoxViewRefresh(model->view);
        model->selectedCursor = model->viewCursor;
        id = item->id;

        switch (entry->type) {
        case ASD_LISTBOX_PLAIN:
            break;
        case ASD_LISTBOX_TEXT:
            found = asdListBoxFindItem(listBox, id);
            if (found != NULL) {
                found->type = ASD_LISTBOX_TEXT;
                if (entry->text != NULL) {
                    strncpy(found->text, entry->text, ASD_LISTBOX_PATH_LEN);
                }
                asdListBoxMarkDirty(listBox);
            }
            break;
        case ASD_LISTBOX_TOGGLE:
            found = asdListBoxFindItem(listBox, id);
            if (found != NULL) {
                found->type = ASD_LISTBOX_TOGGLE;
                found->intValue = entry->value != 0;
                found->min.i = 0;
                found->max.i = 1;
                asdListBoxMarkDirty(listBox);
            }
            break;
        case ASD_LISTBOX_INT:
            found = asdListBoxFindItem(listBox, id);
            if (found != NULL) {
                found->intValue = entry->value;
                found->type = ASD_LISTBOX_INT;
                found->min = entry->min;
                found->max = entry->max;
                found->flags = entry->flags;
                asdListBoxMarkDirty(listBox);
            }
            break;
        case ASD_LISTBOX_FLOAT:
            found = asdListBoxFindItem(listBox, id);
            if (found != NULL) {
                found->floatValue = (f32)entry->value;
                found->min = entry->min;
                found->type = ASD_LISTBOX_FLOAT;
                found->max = entry->max;
                asdListBoxMarkDirty(listBox);
            }
        }

        if (entry->callback != 0) {
            found = asdListBoxFindItem(listBox, id);
            if (found != NULL) {
                found->callback = entry->callback;
            }
        }
    }
}

} /* extern "C" */
