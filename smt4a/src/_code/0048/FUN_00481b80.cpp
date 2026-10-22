/* NON_MATCHING: Kind and owner stores are grouped before the dispatch-table store. */
#include "sys/CallbackController.h"
extern "C" {
extern const u8 DAT_0055c7dc[];
CallbackController* FUN_00481b80(CallbackController* controller)
{
    controller->flags = 0;
    controller->vtable = DAT_0055c7dc;
    controller->owner = NULL;
    controller->kind = 2;
    return controller;
}
}
