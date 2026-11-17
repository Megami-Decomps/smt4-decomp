#include "battle/BtlUiGlobal.h"

extern "C" {

void menu32QueueAction(BtlUiObjCA *obj);


void btlUiQueueMenuAction(void)
{
    menu32QueueAction(&g_btlUi.ui->objC);
}

} /* extern "C" */
