#include "battle/EnemyEditor.h"

extern "C" {
u32 asdListBoxCreate(u32, s32, s32, s32, s32);
void FUN_00227200(u32, void *, void *);
void FUN_002271e8(u32, s32, s32);
void jobSetText(u32, const char *);
void asdListBoxAddItem(u32, const char *);
const EnemyEditorUnit *FUN_0027da30(EnemyEditorResourceIV *, s32 id);
void asdListBoxSetItemMode3(u32, s32, s32, s32, s32, s32);
void asdListBoxSetFloatItem(u32, s32, s32, s32, f32);
void asdListBoxSetByteValue(u32, s32);
void FUN_00192a9c(void);
u32 textMeasureFixedWidth(const char *text);
extern const char DAT_0040063c[], DAT_00400630[], DAT_00400620[], DAT_00400610[], DAT_00400600[];

// Build the enemy-id and XYZ position controls for the selected enemy.
void FUN_003d8b34(EnemyEditorWork *work, EnemyEditorResourceIV *resource, u32 parent)
{
    u32 list = asdListBoxCreate(parent, 0xeb, 16, 32, 4);
    work->list = list;
    FUN_00227200(list, reinterpret_cast<void *>(FUN_00192a9c), reinterpret_cast<void *>(textMeasureFixedWidth));
    FUN_002271e8(list, 12, 16);
    jobSetText(list, DAT_0040063c);
    asdListBoxAddItem(list, DAT_00400630);
    asdListBoxAddItem(list, DAT_00400620);
    asdListBoxAddItem(list, DAT_00400610);
    asdListBoxAddItem(list, DAT_00400600);
    EnemyEditorRecordIV *record = &resource->records[work->selection];
    const EnemyEditorUnit *unit = FUN_0027da30(resource, work->selection);
    asdListBoxSetItemMode3(list, 0, unit->id, 1, 999, 0);
    asdListBoxSetFloatItem(list, 1, -1000, 1000, record->position[0]);
    asdListBoxSetFloatItem(list, 2, -1000, 1000, record->position[1]);
    asdListBoxSetFloatItem(list, 3, -1000, 1000, record->position[2]);
    asdListBoxSetByteValue(list, 1);
}
}
