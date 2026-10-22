#include "sys/CallbackController.h"
extern "C" void FUN_004816b4(CallbackController* controller, CallbackControllerOwner* owner)
{
    controller->owner = owner;
}
