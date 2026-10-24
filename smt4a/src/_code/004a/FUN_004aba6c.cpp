#include "common.h"

struct BtlUiRootFUN_004aba6c {
    /* 0x0000 */ u8 unk0000[0x28c4];
    /* 0x28c4 */ u8 scene[4];
};

struct BtlUiFUN_004aba6c {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ BtlUiRootFUN_004aba6c *root;
};

extern "C" {

extern BtlUiFUN_004aba6c g_btlUi;

void uiSceneSetSelection(void *scene, s32 selection);

/* Sets the selection of the battle UI's scene state. */
void FUN_004aba6c(void *self, s32 selection)
{
    uiSceneSetSelection(g_btlUi.root->scene, selection);
}

} /* extern "C" */
