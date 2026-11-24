#ifndef SMT4A_BATTLE_BT_SCRIPT_PROPERTY_H
#define SMT4A_BATTLE_BT_SCRIPT_PROPERTY_H

#include "common.h"

/* Maps the four battle script property kinds to their columns in BtlCombatantEntryA::properties. */
static __inline s32 btlScriptPropertyColumn(s32 kind)
{
    s32 property = 0;
    if (kind == 0) {
        property = 7;
    } else if (kind == 1) {
        property = 8;
    } else if (kind == 2) {
        property = 10;
    } else if (kind == 3) {
        property = 11;
    }
    return property;
}

#endif
