#include "sys/CallbackController.h"
extern "C" {
extern const u8 DAT_0055c7f4[];
CallbackController* callbackOwnerInitialize(CallbackController* controller)
{
    controller->flags = 0;
    controller->kind = 0;
    controller->owner = NULL;
    controller->vtable = DAT_0055c7f4;
    return controller;
}
}
