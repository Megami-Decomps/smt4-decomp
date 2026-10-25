/* NON_MATCHING: native constructors; armcc stores each vtable pointer one slot before retail does and keeps the zero in r5 instead of r4 */
#include "classes/Obj55b39c.h"
#include "classes/Obj536d04.h"

extern const u32 g_moduleDefaultValue;

/* A module word that starts at a given value. */
struct ModuleWord {
    explicit ModuleWord(u32 initial) : value(initial) {}
    u32 value;
};

u32 g_moduleValue = g_moduleDefaultValue;
ModuleWord g_moduleFlags(0);
Obj55b39c g_moduleEventA;
Obj55b39c g_moduleEventB;
Obj55b39c g_moduleEventC;
Obj55b39c g_moduleEventD;
Obj536d04 g_moduleStateHolder;
