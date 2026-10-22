/* NON_MATCHING: native global constructor address-load order and stripped finalizer call scheduling differ. */
#include "common.h"
struct ModuleResourceBuffer {
    const void *vtable;
    u32 first;
    u32 second;
    u32 third;
    u32 fourth;
};
struct ModuleResourceState {
    const void *vtable;
    u32 first;
    u32 second;
    u32 third;
};
struct ModuleSettings { u32 value; u32 flags; };
extern "C" {
extern ModuleSettings DAT_00589390;
extern const u32 DAT_00536cf0;
extern const u8 DAT_0055b3a4[];
extern const u8 DAT_00536d0c[];
extern ModuleResourceBuffer DAT_0062d2b0;
extern ModuleResourceBuffer DAT_0062d2c4;
extern ModuleResourceBuffer DAT_0062d2d8;
extern ModuleResourceBuffer DAT_0062d2ec;
extern ModuleResourceState DAT_0062d300;
extern u8 entry;
void FUN_0043a0c4(void *);
void emptyStub_002f4370(void *, void (*)(void *), void *);

/* Initializes each module container and registers its cleanup callback. */
void FUN_0050e0b0(void)
{
    DAT_00589390.value = DAT_00536cf0;
    DAT_00589390.flags = 0;
    DAT_0062d2b0.first = DAT_0062d2b0.second = DAT_0062d2b0.third = 0;
    DAT_0062d2b0.vtable = DAT_0055b3a4;
    DAT_0062d2b0.fourth = 0;
    emptyStub_002f4370(&DAT_0062d2b0, FUN_0043a0c4, &entry);
    DAT_0062d2c4.first = DAT_0062d2c4.second = DAT_0062d2c4.third = 0;
    DAT_0062d2c4.vtable = DAT_0055b3a4;
    DAT_0062d2c4.fourth = 0;
    emptyStub_002f4370(&DAT_0062d2c4, FUN_0043a0c4, &entry);
    DAT_0062d2d8.first = DAT_0062d2d8.second = DAT_0062d2d8.third = 0;
    DAT_0062d2d8.vtable = DAT_0055b3a4;
    DAT_0062d2d8.fourth = 0;
    emptyStub_002f4370(&DAT_0062d2d8, FUN_0043a0c4, &entry);
    DAT_0062d2ec.first = DAT_0062d2ec.second = DAT_0062d2ec.third = 0;
    DAT_0062d2ec.vtable = DAT_0055b3a4;
    DAT_0062d2ec.fourth = 0;
    emptyStub_002f4370(&DAT_0062d2ec, FUN_0043a0c4, &entry);
    DAT_0062d300.first = DAT_0062d300.second = 0;
    DAT_0062d300.vtable = DAT_00536d0c;
    DAT_0062d300.third = 0;
    emptyStub_002f4370(&DAT_0062d300, reinterpret_cast<void (*)(void *)>(0x42a448), &entry);
}
}
