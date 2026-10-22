#include "shard/Shard0034.h"

extern "C" {

extern MessageGlobalsA g_messageMain;
extern void FUN_00165088(MessageWorkA *obj, u32 value);

void obj04Finish(void)
{
    MessageWorkA *obj = g_messageMain.state;

    if (g_messageMain.state != NULL && g_messageMain.state->state != 0) {
        g_messageMain.state->closeRequested = 1;
        obj->unk19C4 = 1;
        FUN_00165088(obj, obj->mode);
        obj->state = 3;
        obj->unk34 = 0;
        obj->closeRequested = 0;
    }
}

} /* extern "C" */
