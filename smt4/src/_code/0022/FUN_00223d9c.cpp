#include "shard/W5_W5Match2_UniteWork.h"

extern "C" {

extern u32 FUN_0029aef0(void *value);


extern UniteWorkIV *g_unite;

void FUN_00223d9c(void)
{
    UniteWorkIV *obj = g_unite;
    u32 value;

    if (obj != NULL) {
        value = FUN_0029aef0(obj->common.context);
        obj->unk9464 = value;
    }
}

} /* extern "C" */
