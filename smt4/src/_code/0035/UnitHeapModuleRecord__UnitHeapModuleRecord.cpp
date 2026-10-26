/* NON_MATCHING: retail clears via three zero registers and stm; armcc emits three str from one register. */
#include "common.h"

struct Triple {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
};

/* Clears the three words. */
extern "C" void _ZN20UnitHeapModuleRecordC1Ev(Triple *triple)
{
    triple->a = triple->b = triple->c = 0;
}
