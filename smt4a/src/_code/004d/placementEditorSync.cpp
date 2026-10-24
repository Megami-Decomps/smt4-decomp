#include "common.h"

extern "C" {

/* The debug placement table edited by the list box: four position triples, four rotation triples
 * (degrees), four scales and the per-entry model index. */
typedef struct PlacementVec3 {
    f32 x, y, z;
} PlacementVec3;

typedef struct PlacementTable {
    /* 0x0000 */ u8 unk0000[0x22D0];
    /* 0x22D0 */ PlacementVec3 position[4];
    /* 0x2300 */ PlacementVec3 rotation[4];
    /* 0x2330 */ f32 scale[4];
    /* 0x2340 */ u8 unk2340[4];
    /* 0x2344 */ s16 model[4];
} PlacementTable;

/* The list box editor: its list box handle and the selected table entry. */
typedef struct PlacementEditor {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 listBox;
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ s32 entry;
} PlacementEditor;

u32 asdListBoxGetSelectedItemId(u32 listBox);
s32 *asdListBoxGetIntValuePtr(u32 listBox, u32 item);
f32 *asdListBoxGetFloatValuePtr(u32 listBox);
void asdListBoxSetFloatItem(u32 listBox, u32 item, f32 value, s32 minimum, s32 maximum);
void asdListBoxSetIntItem(u32 listBox, u32 item, s32 value, s32 minimum, s32 maximum, s32 step);

/* Syncs the placement editor with the list box: selecting the entry item (0) loads the entry's
 * values into the other items, and editing an item writes its value back into the table. */
void placementEditorSync(PlacementEditor *editor, PlacementTable *table)
{
    u32 item = asdListBoxGetSelectedItemId(editor->listBox);

    switch (item) {
    case 0:
        editor->entry = *asdListBoxGetIntValuePtr(editor->listBox, item);
        PlacementVec3 position = table->position[editor->entry];

        asdListBoxSetFloatItem(editor->listBox, 1, position.x, -255, 255);
        asdListBoxSetFloatItem(editor->listBox, 2, position.y, -255, 255);
        asdListBoxSetFloatItem(editor->listBox, 3, position.z, -255, 255);
        PlacementVec3 rotation = table->rotation[editor->entry];

        asdListBoxSetFloatItem(editor->listBox, 4, rotation.x, 0, 360);
        asdListBoxSetFloatItem(editor->listBox, 5, rotation.y, 0, 360);
        asdListBoxSetFloatItem(editor->listBox, 6, rotation.z, 0, 360);
        f32 scale = table->scale[editor->entry];

        asdListBoxSetFloatItem(editor->listBox, 7, scale, 0, 10);
        asdListBoxSetIntItem(editor->listBox, 8, table->model[editor->entry], -1, 255, 0);
        break;
    case 1:
        table->position[editor->entry].x = *asdListBoxGetFloatValuePtr(editor->listBox);
        break;
    case 2:
        table->position[editor->entry].y = *asdListBoxGetFloatValuePtr(editor->listBox);
        break;
    case 3:
        table->position[editor->entry].z = *asdListBoxGetFloatValuePtr(editor->listBox);
        break;
    case 4:
        table->rotation[editor->entry].x = *asdListBoxGetFloatValuePtr(editor->listBox);
        break;
    case 5:
        table->rotation[editor->entry].y = *asdListBoxGetFloatValuePtr(editor->listBox);
        break;
    case 6:
        table->rotation[editor->entry].z = *asdListBoxGetFloatValuePtr(editor->listBox);
        break;
    case 7:
        table->scale[editor->entry] = *asdListBoxGetFloatValuePtr(editor->listBox);
        break;
    case 8:
        table->model[editor->entry] = (s16)*asdListBoxGetIntValuePtr(editor->listBox, item);
        break;
    }
}

}
