/* NON_MATCHING: readable rebuild of the title button-help draw; retail's inlined state push/pop uses pointer arithmetic on the stack top (`piVar[top + 2]`) in a different register assignment and the float x/y order of textDrawString is inferred, not verified. */
#include "gfx/RenderStateStack.h"
#include "shard/TextureDrawCall.h"

/* The title scene (its state stack lives at 0x124C). */
struct TitleScene {
    /* 0x0000 */ u8 unk0000[0x124C];
    /* 0x124C */ RenderStateStack stack;
};

struct LayoutPoint {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

/* The button help block (g_buttonHelp + 4). */
struct ButtonHelp {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ u32 mode;
    /* 0x014 */ u8 unk014[0x368];
    /* 0x37C */ u8 anchor[0x2C];
    /* 0x3A8 */ f32 fade;
    /* 0x3AC */ u8 unk3AC[0x5C];
    /* 0x408 */ u8 fadeObject[0xBC];
    /* 0x4C4 */ u8 enabled;
    /* 0x4C5 */ u8 visible;
    /* 0x4C6 */ u8 unk4C6[2];
    /* 0x4C8 */ u8 kind;
    /* 0x4C9 */ u8 unk4C9[2];
    /* 0x4CB */ u8 showIcons;
    /* 0x4CC */ u32 icon;
    /* 0x4D0 */ u8 firstIcon[0x40];
    /* 0x510 */ u8 secondIcon[0x40];
    /* 0x550 */ u8 unk550[4];
    /* 0x554 */ u8 iconMode;
    /* 0x555 */ u8 unk555[3];
    /* 0x558 */ u32 iconSprite;
    /* 0x55C */ u8 spriteIcons;
};

struct ButtonHelpRef {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ButtonHelp *block;
};

extern "C" {
extern ButtonHelpRef g_buttonHelp;
extern TitleScene *g_titleScene;

void FUN_00190e48(void);
void FUN_001f40fc(void *icon, s32 x, s32 y);
void fadeObjectResetIfActive(void *object);
void FUN_002b75ec(u32 sprite, s32 x, s32 y, s32 a, s32 b, s32 c);
void textDrawString(s32 a, u32 icon, void *object, f32 x, f32 y);
LayoutPoint *asdTMTexTableEntryAt(s32 group, s32 part);
void FUN_002c18e4(TitleScene *scene);
void FUN_002c198c(TitleScene *scene);
void renderCtxSelectStereoLayout(TitleScene *scene);
s32 FUN_002c5d80(s32 a, s32 b);
u32 vec2GetXInt(void *vec);
u32 vec2GetYInt(void *vec);

/* Draws the title screen's button help: its fade or icon sprites and the two button icons. */
u8 FUN_002109cc(void)
{
    ButtonHelp *help = g_buttonHelp.block;
    if (help->enabled) {
        renderCtxSelectStereoLayout(g_titleScene);
        renderStackPush(&g_titleScene->stack, FUN_002c5d80(1, 0));
        if (help->mode <= 3 && (help->mode < 2 || help->mode == 2 || help->mode == 3)) {
            FUN_00190e48();
            if (help->visible) {
                if (help->kind != 1) {
                    fadeObjectResetIfActive(NULL);
                    fadeObjectResetIfActive(help->fadeObject);
                } else {
                    u32 x = vec2GetXInt(help->anchor);
                    u32 y = vec2GetYInt(help->anchor);
                    FUN_002bf288(2, 0x12, 0, x, y, 0x10);
                    FUN_002bf288(2, 0x12, 1, x, y, 0x10);
                }
                if (help->visible && help->showIcons && help->fade >= 1.0f) {
                    LayoutPoint *first = asdTMTexTableEntryAt(0x12, 0x1D);
                    if (help->spriteIcons)
                        FUN_002b75ec(help->iconSprite, first->x, first->y, 0x15, 6, 0);
                    else if (help->iconMode)
                        textDrawString(3, help->icon, help->firstIcon, (f32)first->x, (f32)first->y);
                    else
                        FUN_001f40fc(help->firstIcon, first->x, first->y);
                    LayoutPoint *second = asdTMTexTableEntryAt(0x12, 0x1E);
                    if (help->spriteIcons)
                        FUN_002b75ec(help->iconSprite, second->x, second->y, 0x15, 6, 1);
                    else if (help->iconMode != 1)
                        textDrawString(3, help->icon, help->secondIcon, (f32)second->x, (f32)second->y);
                    else
                        FUN_001f40fc(help->secondIcon, second->x, second->y);
                }
            }
        }
        renderStackPop(&g_titleScene->stack);
        FUN_002c198c(g_titleScene);
        FUN_002c18e4(g_titleScene);
    }
    return 0;
}

} /* extern "C" */
