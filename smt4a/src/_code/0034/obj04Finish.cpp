#include "shard/Shard0034.h"

extern "C" {

extern PanelRef g_messageMain;
extern void FUN_00165088(Obj04 *obj, u32 value);

void obj04Finish(void)
{
    Obj04 *obj = g_messageMain.unk04;

    if (g_messageMain.unk04 != NULL && g_messageMain.unk04->state != 0) {
        g_messageMain.unk04->unk35 = 1;
        obj->unk19C4 = 1;
        FUN_00165088(obj, obj->unk09);
        obj->state = 3;
        obj->unk34 = 0;
        obj->unk35 = 0;
    }
}

} /* extern "C" */
