/* NON_MATCHING: compiler folds screen offsets and omits retail preserved register. */
#include "battle/BtlUiGlobal.h"
extern "C" {
/* Copies the battle section flag and both value pairs. */
void FUN_004ab80c(u32 unused,u8 *active,BtlUiValuePair *first,BtlUiValuePair *second){BtlUiA *ui=g_btlUi.ui;*active=ui->pairFlag;*first=ui->firstPair;*second=ui->secondPair;}}
