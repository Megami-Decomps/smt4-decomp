#include "addon/aocMain.h"
#include "font/PlaceWin.h"

extern "C" {

int buttonHelpSelectByProgress(void *scene);
int FUN_002305e8(int a);
void scrLoaderReset(AocObjC *loader);
void scrLoaderFreeBuffers(AocObjC *loader);
u32 FUN_002736e8(AocObjC *loader);
int FUN_0027db24(int a);
int dialogOpen(int a, int b);
int infoWinSetMessage(u32 a, int b);
int buttonHelpSetPreset(int preset);

extern AocMain *g_aocMain;

typedef struct SceneLoadText {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 text[0x3D];
    /* 0x3F */ u8 unk3F;
} SceneLoadText;

typedef struct SceneLoad {
    /* 0x0000 */ u8 unk0000[0x28];
    /* 0x0028 */ u32 state;
    /* 0x002C */ u32 substate;
    /* 0x0030 */ u8 unk30[0x69C];
    /* 0x06CC */ u8 unk6CC;
    /* 0x06CD */ u8 unk6CD[0x68F];
    /* 0x0D5C */ SceneLoadText *inner;
    /* 0x0D60 */ u8 unkD60[0x20];
    /* 0x0D80 */ u32 unkD80;
} SceneLoad;

/* Starts the AOC script loader, then once it has loaded frees its buffers and opens the scene's text. */
void sceneLoadAocScriptStep(SceneLoad *scene)
{
    if (scene->substate == 0) {
        scrLoaderReset(&g_aocMain->scriptHolder);
        buttonHelpSetPreset(0x9e);
        scene->substate = 1;
    } else if (scene->substate == 1 && FUN_002736e8(&g_aocMain->scriptHolder) != 0) {
        scrLoaderFreeBuffers(&g_aocMain->scriptHolder);
        buttonHelpSelectByProgress(scene);
        FUN_0027db24(0);
        dialogOpen(0, 0);
        infoWinSetMessage(scene->unkD80, scene->inner->unk3F);
        scene->substate = 0;
        scene->state = 5;
        scene->unk6CC = 0;
        placeWinStartText(scene->inner->text);
        FUN_002305e8(1);
    }
}

} /* extern "C" */
