#include "battle/btlMain.h"
#include "shard/W5_W5Match1_RecordKeys.h"

struct BattleCameraEditorWork {
    u8 unk00[0xc];
    u32 list;
    u32 unk10;
    s16 mode;
};

extern "C" {
extern BtlMain *g_btlMain;
extern const char DAT_004005f4[];
extern const char DAT_004005e8[];
extern const char DAT_004005dc[];
extern const char DAT_004005d0[];
extern const char DAT_00400588[];
u32 asdListBoxCreate(void *parent, s32 group, s32 x, s32 y, u8 flags);
void FUN_00192a9c(const Point2 *position, const u32 *handle, u32 value);
u32 textMeasureFixedWidth(const char *text);
void FUN_00227200(u32 list, void (*draw)(const Point2 *, const u32 *, u32), u32 (*measure)(const char *));
void FUN_002271e8(u32 list, s32 width, s32 height);
void jobSetText(u32 list, const char *text);
void asdListBoxAddItem(u32 list, const char *text);
void asdListBoxSetFloatItem(u32 list, u32 index, s32 minimum, s32 maximum, f32 value);
void asdListBoxSetItemMode3(u32 list, u32 index, u32 value, u32 minimum, u32 maximum, u8 flags);
void asdListBoxSetByteValue(u32 list, u8 value);

void btlCameraEditorInitializeList(BattleCameraEditorWork *work, u32 unused, void *parent, u32 mode)
{
    work->mode = mode;
    u32 list = asdListBoxCreate(parent, 0xeb, 0x10, 0x20, 4);
    work->list = list;
    FUN_00227200(list, FUN_00192a9c, textMeasureFixedWidth);
    FUN_002271e8(list, 0xc, 0x10);
    if (mode == 0 || mode == 1) {
        g_btlMain->cameraPosition[2] = 0.0f;
        g_btlMain->cameraPosition[1] = 0.0f;
        g_btlMain->cameraPosition[0] = 0.0f;
        jobSetText(list, DAT_004005f4);
        asdListBoxAddItem(list, DAT_004005e8);
        asdListBoxAddItem(list, DAT_004005dc);
        asdListBoxAddItem(list, DAT_004005d0);
        const f32 *position = mode == 0 ? g_btlMain->cameraEditor.vectors[0] : g_btlMain->cameraEditor.vectors[1];
        asdListBoxSetFloatItem(list, 0, -1000, 1000, position[0]);
        asdListBoxSetFloatItem(list, 1, -1000, 1000, position[1]);
        asdListBoxSetFloatItem(list, 2, -1000, 1000, position[2]);
    } else if (mode == 2) {
        g_btlMain->cameraEditor.value = 0;
        jobSetText(list, DAT_004005f4);
        asdListBoxAddItem(list, DAT_00400588);
        asdListBoxSetItemMode3(list, 0, g_btlMain->cameraEditor.value, 0, 1000, 0);
    }
    asdListBoxSetByteValue(list, 1);
}
}
