#include "battle/btlCamera.h"
struct CameraEditorWork {
    u8 prefix[0xC];
    u32 list;
    u8 unk10[4];
    s16 mode;
};
typedef char CameraEditorWorkOffsets[offsetof(CameraEditorWork, list) == 0xC &&
    offsetof(CameraEditorWork, mode) == 0x14 ? 1 : -1];
extern "C" {
extern BtlCameraA *g_btlCamera;
extern const char DAT_005281b0[], DAT_005281a4[], DAT_00528198[], DAT_0052818c[], DAT_00528144[];
void fontMeasureFixedWidth(void);
void FUN_0021298c(void);
u32 asdListBoxCreate(u32 parent, s32 width, s32 height, s32 rowHeight, s32 rows);
void jobSetWork7C(u32 job, void (*first)(void), void (*second)(void));
void FUN_002e0898(u32 job, s32 x, s32 y);
void jobSetText(u32 job, const char *text);
void asdListBoxAddItem(u32 job, const char *text);
void asdListBoxSetFloatItem(u32 job, s32 item, s32 minimum, s32 maximum, f32 value);
void asdListBoxSetIntItem(u32 job, s32 item, s32 value, s32 minimum, s32 maximum, s32 flags);
void asdListBoxSetByteValue(u32 job, s32 enabled);

// Build a three-axis or duration editor for the battle camera.
void btlCreateCameraEditor(CameraEditorWork *editor, u32 context, u32 parent, u32 mode)
{
    editor->mode = (s16)mode;
    u32 list = asdListBoxCreate(parent, 240, 16, 32, 4);
    editor->list = list;
    jobSetWork7C(list, FUN_0021298c, fontMeasureFixedWidth);
    FUN_002e0898(list, 12, 12);
    if (mode == 0 || mode == 1) {
        g_btlCamera->vector[2] = 0.0f;
        g_btlCamera->vector[1] = 0.0f;
        g_btlCamera->vector[0] = 0.0f;
        jobSetText(list, DAT_005281b0);
        asdListBoxAddItem(list, DAT_005281a4);
        asdListBoxAddItem(list, DAT_00528198);
        asdListBoxAddItem(list, DAT_0052818c);
        const f32 *values = mode == 0 ? (const f32 *)g_btlCamera->unk1C :
            (const f32 *)(g_btlCamera->unk1C + 12);
        asdListBoxSetFloatItem(list, 0, -1000, 1000, values[0]);
        asdListBoxSetFloatItem(list, 1, -1000, 1000, values[1]);
        asdListBoxSetFloatItem(list, 2, -1000, 1000, values[2]);
    } else if (mode == 2) {
        g_btlCamera->movement.duration = 0;
        jobSetText(list, DAT_005281b0);
        asdListBoxAddItem(list, DAT_00528144);
        asdListBoxSetIntItem(list, 0, g_btlCamera->movement.duration, 0, 1000, 0);
    }
    asdListBoxSetByteValue(list, 1);
}
}
