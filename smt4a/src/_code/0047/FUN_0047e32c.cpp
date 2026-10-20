#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int scrScriptProcessDestroy(void);
int FUN_0037b450(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_0037b450. */


void FUN_0047e32c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(param_1 + 0xc) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    scrScriptProcessDestroy();
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_0037b450();
    return;
  }
  return;
}

} /* extern "C" */
