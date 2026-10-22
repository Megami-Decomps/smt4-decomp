/* NON_MATCHING: Retail sub sp, #28 differs from recovered sub sp, #36. */
#include "common.h"

namespace {

struct OwnerView {
    u8 unk00[0x14C];
    u8 unk14C; // 0x14C
};

struct CreationInfoView {
    u8 unk00[0x1C];
    u8 unk1C; // 0x1C
};

struct CreatedObjectView;
struct CreatedObjectVTableView {
    void* unk00; // 0x00
    void (*unk04)(CreatedObjectView*); // 0x04
};

struct CreatedObjectView {
    CreatedObjectVTableView* unk00; // 0x00
    u8 unk04[0x20];
    u8 unk24; // 0x24
    u8 unk25[0x1F];
    u16 unk44; // 0x44
    u8 unk46[0x3E];
    u8 unk84; // 0x84
    u8 unk85[0xCB];
};

struct Obj55933cView {
    u32 unk00; // 0x00
    u16 unk04; // 0x04
    u8 unk06[2]; // 0x06
};

struct RegistrationResultView {
    u32 unk00[3]; // 0x00
};

}

extern "C" {
void* operatorNew(u32 size);
void* FUN_002eb7d0(u32 size, u32 flags);
CreatedObjectView* FUN_002eb108(void* storage, OwnerView* owner,
                              u32 kind, u32 flags,
                              CreationInfoView* info, u32 extra);
CreatedObjectView* FUN_002eb7e0(void* storage, OwnerView* owner,
                              u32 kind, u32 flags,
                              CreationInfoView* info, u32 extra);
s32 FUN_002eb83c(CreatedObjectView* object);
Obj55933cView* _ZN9Obj55933cC1Et(Obj55933cView* storage, u16 value);
void FUN_002ef34c(RegistrationResultView* result, OwnerView* owner,
                 CreatedObjectView* object);
void sharedRefRelease(CreatedObjectView* object);
}

// Create and register an object, using the alternate allocation path when requested.
extern "C" void FUN_002f012e(OwnerView* owner, CreationInfoView* info,
                             u16 identifier, u32 attribute)
{
    CreatedObjectView* object;
    if (info->unk1C & 4) {
        void* storage = FUN_002eb7d0(0x150, 0);
        if (!storage)
            return;

        object = FUN_002eb7e0(storage, owner, 2, 0x2000, info, 0);
        if (!object)
            return;

        if (!FUN_002eb83c(object)) {
            object->unk00->unk04(object);
            return;
        }
    } else {
        void* storage = operatorNew(0x150);
        if (storage)
            object = FUN_002eb108(storage, owner, 2, 0x2000, info, 0);
        else
            object = 0;
    }

    object->unk24 = owner->unk14C;
    Obj55933cView identifierObject;
    object->unk44 = _ZN9Obj55933cC1Et(&identifierObject, identifier)->unk04;
    object->unk84 = static_cast<u8>(attribute);

    RegistrationResultView result;
    FUN_002ef34c(&result, owner, object);
    sharedRefRelease(object);
}
