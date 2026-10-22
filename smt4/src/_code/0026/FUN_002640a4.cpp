/* NON_MATCHING: Native erase folds the removal boolean and schedules the light stack home before the registry guard. */
#include "gfx/LightRegistry.h"
extern "C" u32 g_asdLightCount;

extern "C" void FUN_002640a4(LightRegistrationSlots* slots, s32 index)
{
    LightRegistration* light = slots->entries[index];
    LightRegistry* registry = light->registry;
    if (registry != NULL && registry->remove(light)) {
        light->registry = NULL;
    }
    --g_asdLightCount;
}
