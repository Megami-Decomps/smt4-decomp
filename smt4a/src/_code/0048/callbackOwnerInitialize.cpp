#include "sys/CallbackController.h"
extern "C" {
extern const u8 g_callbackOwnerVtable[];
CallbackController* callbackOwnerInitialize(CallbackController* controller)
{
    controller->flags = 0;
    controller->kind = 0;
    controller->owner = NULL;
    controller->vtable = g_callbackOwnerVtable;
    return controller;
}
}
