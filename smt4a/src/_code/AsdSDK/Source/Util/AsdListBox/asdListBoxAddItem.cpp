/* NON_MATCHING: canonical task accessor and linker-inlined cursor getter agree; listBox/label remain swapped in r7/r6 versus retail r6/r7. */
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/JobWork.h"

extern "C" {
extern const char DAT_0053d960[]; /* AsdListBox.cpp: __FILE__ */

void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);
void *asdListAdd(void *list, void *item, void *func);
void asdListBoxMarkDirty(AsdListBox *listBox);
void asdListBoxViewRefresh(void *view);
s32 asdListBoxGetCursor(void *view);
void asdListBoxFreeItem(void *item);
char *strncpy(char *dst, const char *src, u32 n);

/* Appends a plain item labelled `label` to the list box; returns the item's id. */
u32 asdListBoxAddItem(AsdListBox *listBox, const char *label)
{
    AsdListBoxModel *model = reinterpret_cast<AsdListBoxModel *>(jobGetWork(reinterpret_cast<u32>(listBox)));
    AsdListBoxItem *item;

    asdDebugTrace(DAT_0053d960, 1011);
    item = (AsdListBoxItem *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(AsdListBoxItem), 1);

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
