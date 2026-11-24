#include "battle/BtlEffectLoad.h"
#include <string.h>

extern "C" {
extern BtlEffectNames g_btlEffect;

/* Finds a named death effect, preferring DEAD_LEGION when requested. */
char *btlEffectFindNamedEntry(BtlEffectWork *owner, s32 preferFirst)
{
    char *result = NULL;
    if (owner->request != NULL) {
        s32 index = 0;
        if (preferFirst > 0) {
            while (index < 4) {
                const BtlDeathEffectEntry *entry = &owner->request->deathEffects[index];
                if (strcmp(entry->name, g_btlEffect.deadLegionName) == 0) {
                    result = owner->request->deathEffects[index].name;
                    return result;
                }
                ++index;
            }
        }
        for (index = 0; index < 4; ++index) {
            const BtlDeathEffectEntry *entry = &owner->request->deathEffects[index];
            if (entry == NULL)
                continue;
            if (strcmp(entry->name, g_btlEffect.deadName) == 0) {
                result = owner->request->deathEffects[index].name;
                return result;
            }
            if (strcmp(entry->name, g_btlEffect.deadLegionName) == 0) {
                result = owner->request->deathEffects[index].name;
                return result;
            }
        }
    }
    return result;
}

} /* extern "C" */
