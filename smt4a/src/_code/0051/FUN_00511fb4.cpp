/* NON_MATCHING: 67 vs 67 rows (2 diff lines); all four global initializers, vtables, atexit calls and pool entries match retail except LightEvent::Initialize second arg uses mov r1, #0 before lock store instead of mov r1, r5 after it. */
#include "common.h"
#include "classes/Obj557b68.h"
#include "classes/Obj55c244.h"
#include "nn/os/CriticalSection.h"

struct InitHeapRecord {
    /* 0x00 */ u32 word00;
    /* 0x04 */ u32 word04;
    /* 0x08 */ u32 word08;
    /* 0x0C */ u32 word0C;
    /* 0x10 */ u8 flag10;
    /* 0x14 */ u32 word14;
    /* 0x18 */ u8 flag18;
};

struct InitServiceObj {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u32 word04;
    /* 0x08 */ u32 word08;
    /* 0x0C */ u32 word0C;
    /* 0x10 */ u32 criticalSection[3];
    /* 0x1C */ LightEvent lightEvent;
    /* 0x24 */ u32 word24;
    /* 0x28 */ u32 word28;
    /* 0x2C */ u32 word2C;
    /* 0x30 */ u32 word30;
    /* 0x34 */ u8 unk34[0xD];
    /* 0x41 */ u8 flag41;
    /* 0x42 */ u8 flag42;
    /* 0x43 */ u8 pad43;
    /* 0x44 */ u32 word44;
    /* 0x48 */ u32 word48;
};

extern "C" {
extern InitHeapRecord DAT_0064600c;
extern u32 DAT_005c0b04;
extern InitServiceObj DAT_0064602c;
extern u32 DAT_005c0b08[2];
extern u8 entry;
extern const void *_ZTV9Obj55b404[];
extern const void *_ZTV9Obj55b420[];

void FUN_0042d03c(void *obj);
void FUN_0042d1cc(void *obj);
void FUN_0043eca8(void *obj);
void *FUN_0042d1c0(void *obj);
void FUN_001f3ddc(void *obj);
s32 __aeabi_atexit(void *object, void (*destroy)(void *), void *module);

/* Static initializer for the module's heap record, service object and handle array. */
void FUN_00511fb4(void)
{
    DAT_0064600c.word00 = 0;
    DAT_0064600c.word04 = 0;
    DAT_0064600c.word08 = 0;
    DAT_0064600c.word0C = 0;
    DAT_0064600c.flag10 = 0;
    DAT_0064600c.word14 = 0;
    DAT_0064600c.flag18 = 0;
    __aeabi_atexit(&DAT_0064600c, FUN_0042d03c, &entry);

    DAT_005c0b04 = 0;
    __aeabi_atexit(&DAT_005c0b04, FUN_0042d1cc, &entry);

    InitServiceObj *obj = &DAT_0064602c;
    obj->vtable = &_ZTV9Obj55b404[2];
    obj->word04 = 0;
    obj->word08 = 0;
    obj->word0C = 0;
    obj->criticalSection[0] = 0;
    nn_os_CriticalSection_Initialize(obj->criticalSection);
    LightEvent *ev = &obj->lightEvent;
    ev->state = 0;
    ev->lock = 0;
    nn_os_LightEvent_Initialize(ev, 0);
    obj->word24 = 0;
    obj->word28 = 0;
    obj->word2C = 0;
    obj->word30 = 0;
    obj->flag41 = 0;
    obj->flag42 = 0;
    obj->vtable = &_ZTV9Obj55b420[2];
    obj->word44 = 0;
    obj->word48 = 0;
    __aeabi_atexit(obj, FUN_0043eca8, &entry);

    __aeabi_vec_ctor_nocookie_nodtor(DAT_005c0b08, FUN_0042d1c0, 4, 2);
    __aeabi_atexit(NULL, FUN_001f3ddc, &entry);
}

} /* extern "C" */
