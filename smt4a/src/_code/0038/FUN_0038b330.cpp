#include "common.h"

extern "C" {

typedef struct SaveLoadProcess {
    /* 0x0 */ u8 unk0[5];
    /* 0x5 */ u8 slot;
} SaveLoadProcess;

extern u8 FUN_00429f38(void);

extern SaveLoadProcess g_saveLoadProcess; /* 0x57f6bc */

/* Stores the slot FUN_00429f38 selects into the save/load process. */
void FUN_0038b330(void)
{
    g_saveLoadProcess.slot = FUN_00429f38();
}

}
