#include "sys/CallbackController.h"
extern "C" void callbackControllerSetOwner(CallbackController* controller, CallbackControllerOwner* owner)
{
    controller->owner = owner;
}
