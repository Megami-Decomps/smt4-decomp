#include "ui/MessageMainA.h"
#include "shard/Shard0034.h"

extern "C" {

extern void uiPanelCloseStateSection(MessageWindowA *obj, u32 value);

void obj04Finish(void)
{
    MessageWindowA *obj = g_messageMain.window;

    if (g_messageMain.window != NULL && g_messageMain.window->state != 0) {
        g_messageMain.window->closeRequested = 1;
        obj->displayEnabled = 1;
        uiPanelCloseStateSection(obj, obj->mode);
        obj->state = 3;
        obj->unk0034 = 0;
        obj->closeRequested = 0;
    }
}

} /* extern "C" */
