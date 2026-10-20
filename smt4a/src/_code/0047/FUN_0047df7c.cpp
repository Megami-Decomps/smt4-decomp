#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int);
int scrScriptProcessDestroy(unsigned int);
int FUN_00342010(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_00342010. */


void FUN_0047df7c(unsigned int *param_1,unsigned char param_2)

{
/* irregular: 3 native warning(s); review required */
  *(unsigned char *)(param_1 + 2) = param_2;
  param_1[1] = 0xc;
  *param_1 = 0;
  if (param_1[3] != 0) {
    asdMemFree(param_1[3]);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    asdMemFree(param_1[4]);
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    scrScriptProcessDestroy(param_1[5]);
    param_1[5] = 0;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_00342010();
    return;
  }
  return;
}

} /* extern "C" */
