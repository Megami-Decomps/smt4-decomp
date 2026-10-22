/* NON_MATCHING: Kind and owner stores are grouped before the dispatch-table store. */
#include "sys/CallbackController.h"
extern "C" {
extern const u8 DAT_0055c80c[];
CallbackController* FUN_004823ec(CallbackController* controller)
{
    controller->flags = 0;
    controller->vtable = DAT_0055c80c;
    controller->owner = NULL;
    controller->kind = 1;
    return controller;
}
}
