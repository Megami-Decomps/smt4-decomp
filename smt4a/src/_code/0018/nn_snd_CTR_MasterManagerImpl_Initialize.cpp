#include "common.h"

extern "C" {

void nn_os_CriticalSection_Initialize(u8 *member);

typedef struct MasterManagerImpl {
    /* 0x00 */ u8 initialized;
    /* 0x01 */ u8 unk01[0x33];
    /* 0x34 */ u8 member34[1];
} MasterManagerImpl;

/* Initialises the manager's embedded member once. */
void nn_snd_CTR_MasterManagerImpl_Initialize(MasterManagerImpl *manager)
{
    if (manager->initialized == 0) {
        nn_os_CriticalSection_Initialize(manager->member34);
        manager->initialized = 1;
    }
}

} /* extern "C" */
