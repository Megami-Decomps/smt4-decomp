/* NON_MATCHING: the task callbacks are local code labels (LAB_*) that are not decompiled, so their addresses are built differently */
/* Opens the save/load screen: allocates its work area and creates its task. */
#include "common.h"
#include "saveLoadUI/saveLoadUI.h"

extern "C" {

typedef void (*VoidFunc)(void);

void *asdMemAlloc(int heap, int align, int arg2, int size, int arg4);
u32 asdProcessCreateSimple(VoidFunc fn, int priority, int arg2, int arg3, VoidFunc cb, VoidFunc destroy, int arg6);
void LAB_00192074(void);
void LAB_001c8e28(void);
void LAB_00214a5c(void);

extern SaveLoadUIWork *g_saveLoadUI;

void saveLoadUIOpen(void)
{
    SaveLoadUIWork *ui = (SaveLoadUIWork *)asdMemAlloc(0x10000, 0x100, 0, 0x388, 1);

    g_saveLoadUI = ui;
    ui->unk04 = 0;
    ui->task = asdProcessCreateSimple(LAB_00192074, 2, 0, 0, LAB_001c8e28, LAB_00214a5c, 0);
    ui->state = 0x11;
    ui->unk0C = 0;
}

} /* extern "C" */
