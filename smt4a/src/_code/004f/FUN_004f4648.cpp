#include "battle/EnemyEditor.h"

extern "C" {
u32 asdListBoxCreate(u32, s32, s32, s32, s32);
void jobSetWork7C(u32, void *, void *);
void FUN_002e0898(u32, s32, s32);
void jobSetText(u32, const char *);
void asdListBoxAddItem(u32, const char *);
const EnemyEditorUnit *FUN_001568f8(EnemyEditorResourceA *, s32 id);
void asdListBoxSetIntItem(u32, s32, s32, s32, s32, s32);
void asdListBoxSetFloatItem(u32, s32, f32, s32, s32);
void asdListBoxSetByteValue(u32, s32);
void FUN_0021298c(void);
s32 fontMeasureFixedWidth(const u16 *text);
extern const char DAT_005281f8[], DAT_005281ec[], DAT_005281dc[], DAT_005281cc[], DAT_005281bc[];

// Build the enemy-id and XYZ position controls for the selected enemy.
void FUN_004f4648(EnemyEditorWork *work, EnemyEditorResourceA *resource, u32 parent)
{
    u32 list = asdListBoxCreate(parent, 0xf0, 16, 32, 4);
    work->list = list;
    jobSetWork7C(list, reinterpret_cast<void *>(FUN_0021298c), reinterpret_cast<void *>(fontMeasureFixedWidth));
    FUN_002e0898(list, 12, 12);
    jobSetText(list, DAT_005281f8);
    asdListBoxAddItem(list, DAT_005281ec);
    asdListBoxAddItem(list, DAT_005281dc);
    asdListBoxAddItem(list, DAT_005281cc);
    asdListBoxAddItem(list, DAT_005281bc);
    EnemyEditorRecordA *record = &resource->records[work->selection];
    const EnemyEditorUnit *unit = FUN_001568f8(resource, work->selection);
    asdListBoxSetIntItem(list, 0, unit->id, 1, 999, 0);
    asdListBoxSetFloatItem(list, 1, record->position[0], -1000, 1000);
    asdListBoxSetFloatItem(list, 2, record->position[1], -1000, 1000);
    asdListBoxSetFloatItem(list, 3, record->position[2], -1000, 1000);
    asdListBoxSetByteValue(list, 1);
}
}
