/* NON_MATCHING: retail addresses the first link record as DAT_0062d2a4 - 24 (the three globals live in one translation-unit data block) and keeps the zero/-1 constants in r5/r4; built loads each global's address from its own pool word */
#include "common.h"

extern "C" {

struct CriticalSection {
    u32 state;
};

struct LinkRecord {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ s32 index;
};

extern LinkRecord DAT_0062d28c;
extern LinkRecord DAT_0062d298;
extern CriticalSection DAT_0062d2a4;
extern u8 entry;

void nn_os_CriticalSection_Initialize(CriticalSection *section);
void FUN_0042ce3c(void *object);
__weak int __aeabi_atexit(void *object, void (*destroy)(void *), void *module);
void emptyStub_002f4370(void *object, void (*destroy)(void *), void *module);

/* Initialises the module's critical section and two link records, registering each one's destructor. */
void FUN_0050fe84(void)
{
    DAT_0062d2a4.state = 0;
    nn_os_CriticalSection_Initialize(&DAT_0062d2a4);
    __aeabi_atexit(&DAT_0062d2a4, FUN_0042ce3c, &entry);

    DAT_0062d28c.first = 0;
    DAT_0062d28c.index = -1;
    DAT_0062d28c.second = 0;
    __aeabi_atexit(&DAT_0062d28c, FUN_0042ce3c, &entry);

    DAT_0062d298.first = 0;
    DAT_0062d298.index = -1;
    DAT_0062d298.second = 0;
    emptyStub_002f4370(&DAT_0062d298, FUN_0042ce3c, &entry);
}

} /* extern "C" */
