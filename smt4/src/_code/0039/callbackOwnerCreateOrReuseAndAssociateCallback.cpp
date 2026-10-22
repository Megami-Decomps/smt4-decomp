#include "common.h"

struct CallbackView;

// Private view of the owner layout used by this function.
struct CallbackOwnerView {
    u8 unk00[0x68]; // 0x00
    CallbackView* unk68; // 0x68
};

extern "C" {
void* asdOperatorNew(u32 size);
CallbackView* callbackOwnerInitialize(void* storage);
CallbackView* FUN_00395e44(void* storage);
CallbackView* FUN_003955e4(void* storage);
void FUN_00395280(CallbackView* callback, CallbackOwnerView* owner);

// Creates the selected callback, or reuses the existing one, and associates it with the owner.
void callbackOwnerCreateOrReuseAndAssociateCallback(CallbackOwnerView* owner, s32 callbackKind)
{
    switch (callbackKind) {
    case 0: {
        void* storage = asdOperatorNew(0x24);
        owner->unk68 = storage ? callbackOwnerInitialize(storage) : 0;
        break;
    }
    case 1: {
        void* storage = asdOperatorNew(0x1c);
        owner->unk68 = storage ? FUN_00395e44(storage) : 0;
        break;
    }
    case 2: {
        void* storage = asdOperatorNew(0x10);
        owner->unk68 = storage ? FUN_003955e4(storage) : 0;
        break;
    }
    }

    FUN_00395280(owner->unk68, owner);
}
}
