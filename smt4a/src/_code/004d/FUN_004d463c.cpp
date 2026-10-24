/* NON_MATCHING: retail keeps the selected id in r1 and the stage pointer in r2 (mov r1,r0 / ldr r0,[g] / ldr r2,[r0]); armcc here leaves the id in r0 */
#include "common.h"

extern "C" {

struct Vec3F { f32 x, y, z; };

/* The stage model's light/fog work block that the debug list box edits. */
struct BtlStageLightWork {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ u32 lightMode;
    /* 0x5C */ u32 colorR;
    /* 0x60 */ u32 colorG;
    /* 0x64 */ u32 colorB;
    /* 0x68 */ u32 nearDist;
    /* 0x6C */ u32 farDist;
    /* 0x70 */ f32 unk70;
    /* 0x74 */ f32 unk74;
    /* 0x78 */ f32 unk78;
    /* 0x7C */ u32 unk7C;
    /* 0x80 */ u32 unk80;
    /* 0x84 */ u32 unk84;
    /* 0x88 */ u32 unk88;
    /* 0x8C */ u32 unk8C;
    /* 0x90 */ u32 unk90;
    /* 0x94 */ u8 unk94[0xB0 - 0x94];
    /* 0xB0 */ Vec3F position;
};

struct BtlStageLightEditor {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 listBox;
};

extern BtlStageLightWork *g_btlStageModel; /* 0x57a4f8 */

s32 padButtonIsPressed(u32 button);
u32 *asdListBoxGetIntValuePtr(u32 listBox);
f32 *asdListBoxGetFloatValuePtr(u32 listBox);
u32 asdListBoxGetSelectedItemId(u32 listBox);
void childrenLowerToLevel(BtlStageLightWork *stage, u32 level);

/* Writes the list box item that was just edited back into the stage model. */
void FUN_004d463c(BtlStageLightEditor *editor)
{
    u32 selected = asdListBoxGetSelectedItemId(editor->listBox);
    Vec3F *position = &g_btlStageModel->position;

    switch (selected) {
    case 0:  position->x = *asdListBoxGetFloatValuePtr(editor->listBox); break;
    case 1:  position->y = *asdListBoxGetFloatValuePtr(editor->listBox); break;
    case 2:  position->z = *asdListBoxGetFloatValuePtr(editor->listBox); break;
    case 3:  g_btlStageModel->lightMode = *asdListBoxGetIntValuePtr(editor->listBox); break;
    case 4:  g_btlStageModel->colorR = *asdListBoxGetIntValuePtr(editor->listBox); break;
    case 5:  g_btlStageModel->colorG = *asdListBoxGetIntValuePtr(editor->listBox); break;
    case 6:  g_btlStageModel->colorB = *asdListBoxGetIntValuePtr(editor->listBox); break;
    case 7:  g_btlStageModel->nearDist = *asdListBoxGetIntValuePtr(editor->listBox); break;
    case 8:  g_btlStageModel->farDist = *asdListBoxGetIntValuePtr(editor->listBox); break;
    case 9:  g_btlStageModel->unk70 = *asdListBoxGetFloatValuePtr(editor->listBox); break;
    case 11: g_btlStageModel->unk74 = *asdListBoxGetFloatValuePtr(editor->listBox); break;
    case 12: g_btlStageModel->unk78 = *asdListBoxGetFloatValuePtr(editor->listBox); break;
    case 13: g_btlStageModel->unk7C = *asdListBoxGetIntValuePtr(editor->listBox); break;
    case 14: g_btlStageModel->unk80 = *asdListBoxGetIntValuePtr(editor->listBox); break;
    case 15: g_btlStageModel->unk84 = *asdListBoxGetIntValuePtr(editor->listBox); break;
    case 16: g_btlStageModel->unk88 = *asdListBoxGetIntValuePtr(editor->listBox); break;
    case 17: g_btlStageModel->unk8C = *asdListBoxGetIntValuePtr(editor->listBox); break;
    case 18: g_btlStageModel->unk90 = *asdListBoxGetIntValuePtr(editor->listBox); break;
    case 19: {
        u32 level = *asdListBoxGetIntValuePtr(editor->listBox);
        if (padButtonIsPressed(9)) {
            childrenLowerToLevel(g_btlStageModel, level);
        }
        break;
    }
    }
}

} /* extern "C" */
