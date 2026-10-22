/* NON_MATCHING: Entry initialization groups stores and runtime-constructor arguments differently. */
#include "AsdSDK/EntrySystem.h"
extern "C" {
void __aeabi_vec_ctor_nocookie_nodtor(void*, void (*)(void*), u32, u32);
void FUN_002c5d54(void*, void (*)(void*), u32, u32);
void animationInitializeUnitScale(void*);
void entryResetUnset(void*);
extern EntrySystemCounters DAT_00434188;
extern EntrySystemState DAT_00490e4c;
extern UnsetEntryState DAT_00490f48[150];
extern UnsetEntryState DAT_00492258[150];

// Initializes the shared transform defaults and constructs the entry-state arrays.
void FUN_003f1814(u32 first, u32 second, EntrySystemConfig* config)
{
    config->first = first;
    config->second = second;
    DAT_00434188.unk00 = 0;
    DAT_00434188.unk04 = 0;
    DAT_00490e4c.position[0] = 0.0f;
    DAT_00490e4c.position[1] = 0.0f;
    DAT_00490e4c.position[2] = 0.0f;
    DAT_00490e4c.enabledA = 1;
    DAT_00490e4c.state = 0;
    DAT_00490e4c.enabledB = 1;
    DAT_00490e4c.enabledC = 1;
    __aeabi_vec_ctor_nocookie_nodtor(DAT_00490e4c.animations, animationInitializeUnitScale,
                                    sizeof(UnitScaleState), 10);
    __aeabi_vec_ctor_nocookie_nodtor(DAT_00490f48, entryResetUnset, sizeof(UnsetEntryState), 150);
    FUN_002c5d54(DAT_00492258, entryResetUnset, sizeof(UnsetEntryState), 150);
}
}
