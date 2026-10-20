#include "common.h"

extern "C" {

int FUN_002c38fc(void *obj);

typedef struct MasterManagerImpl {
    /* 0x00 */ u8 initialized;
    /* 0x01 */ u8 unk01[0x33];
    /* 0x34 */ u8 unk34[1];
} MasterManagerImpl;

void nn_snd_CTR_MasterManagerImpl_Initialize(MasterManagerImpl *manager)
{
    if (manager->initialized == 0) {
        FUN_002c38fc(manager->unk34);
        manager->initialized = 1;
    }
}

} /* extern "C" */
