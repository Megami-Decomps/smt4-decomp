/* NON_MATCHING: retail has the view-cursor getter inlined by armlink (`add r0,r4,#12; ldr r0,[r0,#28]` where this loads the cursor directly), and keeps listBox/label in r6/r7 the other way round. */
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00409d40[]; /* AsdListBox.cpp: __FILE__ */

AsdListBoxModel *jobGetWork(AsdListBox *listBox);
void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void *asdListAdd(void *list, void *item, void *func);
void asdListBoxMarkDirty(AsdListBox *listBox);
void asdListBoxViewRefresh(void *view);
s32 asdListBoxGetCursor(void *view);
void asdListBoxFreeItem(void *item);
char *strncpy(char *dst, const char *src, u32 n);

/* Appends a plain item labelled `label` to the list box; returns the item's id. */
u32 asdListBoxAddItem(AsdListBox *listBox, const char *label)
{
    AsdListBoxModel *model = jobGetWork(listBox);
    AsdListBoxItem *item;

    asdDebugTrace(DAT_00409d40, 1011);
    item = (AsdListBoxItem *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdListBoxItem), 1);

    strncpy(item->label, label, ASD_LISTBOX_PATH_LEN);
    item->type = 0;
    item->id = model->nextItemId;
    model->nextItemId++;
    asdListAdd(model, item, (void *)asdListBoxFreeItem);
    asdListBoxMarkDirty(listBox);
    asdListBoxViewRefresh(model->view);
    model->selectedCursor = asdListBoxGetCursor(model->view);
    return item->id;
}

} /* extern "C" */
