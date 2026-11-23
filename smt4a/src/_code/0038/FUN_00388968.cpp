/* NON_MATCHING: the cached banner and script value use opposite saved registers; the close-state stores use different scratch registers. */
#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Opens the banner's animated panel and waits for its busy flag to clear. */
u8 FUN_00388968(void)
{
    MessageWindowA *banner = g_messageMain.banner;
    if (scrGetCommandFrame() == 0) {
        u32 value = scrGetArg(0);
        MessageWindowA *panel = g_messageMain.banner;
        uiSpriteStateInitFromSource(&panel->sprites[34], 4, 0xabe1, &panel->parameters, 11, 1.0f);
        uiSpriteSelectAnim(&panel->sprites[34], 11);
        panel->panelTextureVariant = value;
        panel->closeBusy = 1;
        panel->closePending = 1;
        panel->closeMode = 1;
    }
    return banner->closeBusy == 0;
}

} /* extern "C" */
