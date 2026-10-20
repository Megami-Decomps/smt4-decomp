/* NON_MATCHING: retail has a stripped debug call (file/line setup + nop) before the item allocation. */
#include "AsdSDK/Source/Util/AsdListBox.h"

extern "C" {
extern u8 LAB_002e11f0; /* item callback */

AsdListBoxModel *jobGetWork(AsdListBox *listBox);
void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void *asdListAdd(void *list, void *item, void *func);
void asdListBoxMarkDirty(AsdListBox *listBox);
void asdListBoxViewRefresh(void *view);
char *strncpy(char *dst, const char *src, u32 n);

/* Appends a plain item labelled `label` to the list box; returns the item's id. */
u32 asdListBoxAddItem(AsdListBox *listBox, const char *label)
{
    AsdListBoxModel *model = jobGetWork(listBox);
    AsdListBoxItem *item = (AsdListBoxItem *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdListBoxItem), 1);

    strncpy(item->label, label, ASD_LISTBOX_PATH_LEN);
    item->type = 0;
    item->id = model->nextItemId;
    model->nextItemId++;
    asdListAdd(model, item, &LAB_002e11f0);
    asdListBoxMarkDirty(listBox);
    asdListBoxViewRefresh(model->view);
    model->selectedCursor = model->viewCursor;
    return item->id;
}

} /* extern "C" */
