#include "ui/MessageMain.h"

extern "C" {

void spriteStartAnimationByIndex(void *list, s32 mode);

/* Task step: starts the banner's counter-panel list animation 7 and sets the panel state to 4; always finishes. */
u32 FUN_00317a60(void)
{
    MessageWindow *banner = g_messageMain.banner;

    spriteStartAnimationByIndex(&banner->sprites[16], 7);
    banner->panelState = 4;
    return 1;
}

} /* extern "C" */
