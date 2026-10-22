#include "sys/CallbackController.h"
extern "C" {
void* asdOperatorNew(u32);

void callbackCreateControllerForKind(CallbackControllerOwner* owner, s32 kind)
{
    switch (kind) {
    case 0: {
        CallbackController* storage = (CallbackController*)asdOperatorNew(0x24);
        owner->controller = storage != NULL ? callbackOwnerInitialize(storage) : NULL;
        break;
    }
    case 1: {
        CallbackController* storage = (CallbackController*)asdOperatorNew(0x1C);
        owner->controller = storage != NULL ? FUN_004823ec(storage) : NULL;
        break;
    }
    case 2: {
        CallbackController* storage = (CallbackController*)asdOperatorNew(0x10);
        owner->controller = storage != NULL ? FUN_00481b80(storage) : NULL;
        break;
    }
    }
    FUN_004816b4(owner->controller, owner);
}
}
