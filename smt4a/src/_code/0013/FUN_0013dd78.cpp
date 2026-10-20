#include "romwright_types.h"

extern "C" {

int asdMemFree(...);

typedef int romwright_code(...);
extern unsigned char g_handlerTable;
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: asdMemFree. */


void FUN_0013dd78(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    (**(romwright_code **)(&g_handlerTable + (unsigned int)*(unsigned short *)(param_1 + 4) * 0x44 + 0x10))(*(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x20) = 0;
    *(unsigned int *)(param_1 + 0x24) = 0;
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
