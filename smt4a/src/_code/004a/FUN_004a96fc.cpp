#include "battle/BtlUiGlobal.h"
extern "C" {
void FUN_00336aec(void *section, u32 second, u32 first, u32 third, u32 fourth, u32 flags);
/* Forwards the request to the battle screen's menu section. */
void FUN_004a96fc(u32 unused,u32 first,u32 second,u32 third,u32 fourth){BtlUiA *ui=g_btlUi.ui;FUN_00336aec(&ui->objC,second,first,third,fourth,0);}}
