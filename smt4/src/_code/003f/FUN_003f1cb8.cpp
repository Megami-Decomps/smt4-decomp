/* NON_MATCHING: modeled on smt4a FUN_0051159c; middle constructor chain and atexit match, but the initial 64-bit stores use stm instead of strd and the tail section stores offset from listener instead of base+0x11EC. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct SndSystemLayout {
    /* 0x0000 */ u8 archive[0x184];
    /* 0x0184 */ u8 player[0xC0];
    /* 0x0244 */ u8 dataManager[0x278];
    /* 0x04BC */ AsdSndSlotB slotsB[ASD_SND_SLOT_B_COUNT];
    /* 0x05FC */ AsdSndAuxSlot auxSlots[2];
    /* 0x0674 */ AsdSndSlotC slotsC[ASD_SND_SLOT_C_COUNT];
    /* 0x0694 */ AsdSndSlotA slotsA[ASD_SND_SLOT_A_COUNT];
    /* 0x0784 */ u8 manager3d[0x3C];
    /* 0x07C0 */ u8 actors[16][0x84];
    /* 0x1000 */ u8 handles[16][4];
    /* 0x1040 */ u8 pad1040[0xC0];
    /* 0x1100 */ u8 listener[0xD0];
    /* 0x11D0 */ AsdSndDuck duck;
    /* 0x11EC */ u32 status0;
    /* 0x11F0 */ u32 status1;
    /* 0x11F4 */ AsdSndCriticalSection section;
};

extern "C" {

extern s64 DAT_00464ff0;
extern u64 DAT_00464ff8;
extern SndSystemLayout g_asdSound;
extern u8 entry;

typedef void (*ElementCtor)(void *element);

void *__aeabi_vec_ctor_nocookie_nodtor(void *array, ElementCtor ctor, u32 elementSize, u32 count); // declcheck: local (classes/Obj557b68.h types the constructor as returning its element)
void __aeabi_atexit(void *object, void (*destructor)(void *), void *moduleHandle);

u8 *installVtbl55BDE0(u8 *part);
u8 *FUN_00378a54(u8 *part);
u8 *FUN_003773d4(u8 *part);
u8 *FUN_00377174(u8 *part);
u8 *nw_snd_Sound3DListener_Sound3DListener_sub_object(u8 *part);

void FUN_0034068c(void *element);
void objectRegisterPart(void *element);
void FUN_00376d14(void *element);
extern u8 frameHeapInitializeRange, FUN_003494f0, FUN_00376968;
void FUN_0033b66c(void *object);

/* Initializes the sound globals and constructs g_asdSound, then registers its destructor. */
void FUN_003f1cb8(void)
{
    DAT_00464ff0 = -1;
    DAT_00464ff8 = 0;
    u8 *object = installVtbl55BDE0(g_asdSound.archive);
    object = FUN_00378a54(object + 0x184);
    object = FUN_003773d4(object + 0xC0);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x278, FUN_0034068c, 0x50, 4);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x140, (ElementCtor)&frameHeapInitializeRange, 0x3C, 2);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x78, (ElementCtor)&FUN_003494f0, 0x10, 2);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x20, objectRegisterPart, 0x3C, 4);
    object = FUN_00377174(object + 0xF0);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x3C, FUN_00376d14, 0x84, 16);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x840, (ElementCtor)&FUN_00376968, 4, 16);
    object = nw_snd_Sound3DListener_Sound3DListener_sub_object(object + 0x100);
    SndSystemLayout *system = (SndSystemLayout *)(object - offsetof(SndSystemLayout, listener));
    system->section.unk00 = 0;
    system->section.unk04 = 0;
    system->section.unk08 = -1;
    __aeabi_atexit(system, FUN_0033b66c, &entry);
}

} /* extern "C" */
