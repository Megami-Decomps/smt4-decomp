#include "ui/UiSpriteApi.h"
#include "ui/MessageMain.h"

extern "C" {


/* Starts the message window's open (nonzero `open`) or close animation timer; returns 1. */
u32 messageWindowStartTimer(int open)
{
    MessageWindow *window = g_messageMain.banner;

    if (open != 0) {
        window->transition = 1;
        uiSpriteStateInitFromSource(&window->sprites[13], 0xE, 0, &window->parameters, 0xB, 1.0f);
        uiSpriteSetKeyframe(&window->sprites[13], 8, 0);
    } else {
        window->transition = 2;
        uiSpriteStateInitFromSource(&window->sprites[13], 0xE, 0, &window->parameters, 0xB, 1.0f);
        uiSpriteSetKeyframe(&window->sprites[13], 9, 0);
    }
    return 1;
}

} /* extern "C" */
