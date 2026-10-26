/* NON_MATCHING: the inlined asdListBoxAddItem/SetText/SetToggle/SetInt/SetFloat bodies and the stripped asdDebugTrace now match retail's code; only register assignment differs (retail keeps entries in fp and leaves count in its argument home [sp,#32] instead of spilling entries). */
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/JobWork.h"
#include "shard/W6_W6Match2_GeometryResources.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Util/AsdListHelpers_VariantA.h"

extern "C" {
extern u8 asdListBoxFreeItem; /* item callback */
extern const char DAT_00409d40[]; /* AsdListBox.cpp: __FILE__ */

void *asdListAdd(void *list, void *item, void *func);
void asdListBoxMarkDirty(u32 listBox);
s32 asdListBoxGetCursor(void *view);
char *strncpy(char *dst, const char *src, u32 n);

/* Appends a plain item labelled `label` to the list box (the body of asdListBoxAddItem); returns the item's id. */
static __inline u32 listBoxAppendItem(u32 listBox, const char *label)
{
    AsdListBoxModel *model = reinterpret_cast<AsdListBoxModel *>(jobGetWork(listBox));
    AsdListBoxItem *item;

    asdDebugTrace(DAT_00409d40, 1011);
    item = (AsdListBoxItem *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdListBoxItem), 1);
    strncpy(item->label, label, ASD_LISTBOX_PATH_LEN);
    item->type = 0;
    item->id = model->nextItemId;
    model->nextItemId++;
    asdListAdd(model, item, &asdListBoxFreeItem);
    asdListBoxMarkDirty(listBox);
    asdListBoxViewRefresh(model->view);
    model->selectedCursor = asdListBoxGetCursor(model->view);
    return item->id;
}

/* Turns an existing row into a text row. */
static __inline void listBoxSetText(u32 listBox, u32 id, const char *text)
{
    AsdListBoxItem *item = asdListBoxFindItem(listBox, id);
    if (item != NULL) {
        item->type = ASD_LISTBOX_TEXT;
        if (text != NULL) {
            strncpy(item->text, text, ASD_LISTBOX_PATH_LEN);
        }
        asdListBoxMarkDirty(listBox);
    }
}

/* Turns an existing row into an on/off row. */
static __inline void listBoxSetToggle(u32 listBox, u32 id, u32 value)
{
    AsdListBoxItem *item = asdListBoxFindItem(listBox, id);
    if (item != NULL) {
        item->type = ASD_LISTBOX_TOGGLE;
        item->intValue = value;
        item->min.i = 0;
        item->max.i = 1;
        asdListBoxMarkDirty(listBox);
    }
}

/* Turns an existing row into a ranged integer row. */
static __inline void listBoxSetInt(u32 listBox, u32 id, s32 minimum, s32 maximum, s32 value, u8 flags)
{
    AsdListBoxItem *item = asdListBoxFindItem(listBox, id);
    if (item != NULL) {
        item->intValue = value;
        item->type = ASD_LISTBOX_INT;
        item->min.i = minimum;
        item->max.i = maximum;
        item->flags = flags;
        asdListBoxMarkDirty(listBox);
    }
}

/* Turns an existing row into a ranged float row. */
static __inline void listBoxSetFloat(u32 listBox, u32 id, s32 minimum, s32 maximum, f32 value)
{
    AsdListBoxItem *item = asdListBoxFindItem(listBox, id);
    if (item != NULL) {
        item->floatValue = value;
        item->min.i = minimum;
        item->type = ASD_LISTBOX_FLOAT;
        item->max.i = maximum;
        asdListBoxMarkDirty(listBox);
    }
}

/* Stores a nonzero callback in an existing row. */
static __inline void listBoxSetCallback(u32 listBox, u32 id, u32 callback)
{
    if (callback != 0) {
        AsdListBoxItem *item = asdListBoxFindItem(listBox, id);
        if (item != NULL) {
            item->callback = callback;
        }
    }
}

/* Adds one item per table row (label, kind, value and range) to the list box. */
void asdListBoxAddItems(u32 listBox, const AsdListBoxEntry *entries, s32 count)
{
    s32 i;
    const AsdListBoxEntry *entry;
    u32 id;

    for (i = 0; i < count; i++) {
        entry = &entries[i];

        id = listBoxAppendItem(listBox, entry->label);

        switch (entry->type) {
        case ASD_LISTBOX_PLAIN:
            break;
        case ASD_LISTBOX_TEXT:
            listBoxSetText(listBox, id, entry->text);
            break;
        case ASD_LISTBOX_TOGGLE:
            listBoxSetToggle(listBox, id, entry->value != 0);
            break;
        case ASD_LISTBOX_INT:
            listBoxSetInt(listBox, id, entry->min.i, entry->max.i, entry->value, entry->flags);
            break;
        case ASD_LISTBOX_FLOAT:
            listBoxSetFloat(listBox, id, entry->min.i, entry->max.i, (f32)entry->value);
        }

        listBoxSetCallback(listBox, id, entry->callback);
    }
}

} /* extern "C" */
