#include "battle/btlCamera.h"

extern "C" u32 btlCameraHasDefaultParameters(const BtlCameraA *camera)
{
    // The floating fields overlap the unaligned opaque padding at 0x68B.
    struct CameraDefaultsView {
        u8 unk400[0x180];
        f32 unk580;
        u32 unk584;
        u32 unk588;
        u8 unk58C[0xC];
        f32 unk598;
        f32 unk59C;
        u32 unk5A0;
        u8 unk5A4[0xC];
        u32 unk5B0;
        u8 unk5B4[0xC];
        u32 unk5C0;
        u8 unk5C4[0x140];
        f32 unk704;
        u8 unk708[0xC];
        f32 unk714;
        u8 unk718[0x20];
        f32 unk738;
        f32 unk73C;
        f32 unk740;
        u8 unk744[0xC];
        f32 unk750;
        f32 unk754;
        f32 unk758;
    };
    struct CameraDefaultsOwner {
        u8 unk000[0x400];
        CameraDefaultsView defaults;
    };
    typedef char CameraDefaultsLayoutCheck[
        offsetof(CameraDefaultsOwner, defaults) == 0x400 &&
        offsetof(CameraDefaultsView, unk5C0) == 0x1C0 &&
        offsetof(CameraDefaultsView, unk758) == 0x358 &&
        sizeof(CameraDefaultsOwner) == 0x75C ? 1 : -1];
    const CameraDefaultsView *parameters = &reinterpret_cast<const CameraDefaultsOwner *>(camera)->defaults;
    u32 fieldOfView = parameters->unk5C0;
    return fieldOfView == 0x420C0000 &&
           parameters->unk598 == 0.0f && parameters->unk59C == 0.0f &&
           parameters->unk5A0 == 0xBF800000 && parameters->unk580 == 0.0f &&
           parameters->unk584 == 0x40F00000 && parameters->unk588 == 0x42320000 &&
           parameters->unk5B0 == 0x42320000 &&
           parameters->unk750 == 0.0f && parameters->unk754 == 0.0f &&
           parameters->unk758 == 0.0f && parameters->unk704 == 0.0f &&
           parameters->unk714 == 0.0f && parameters->unk738 == 0.0f &&
           parameters->unk73C == 0.0f && parameters->unk740 == 0.0f;
}
