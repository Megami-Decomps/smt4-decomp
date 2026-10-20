#include "romwright_types.h"

extern "C" {

int FUN_002c0894(unsigned int);
int asdMemFree(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: asdMemFree. */


void FUN_0025715c(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *param_1;
  temp_v0 = *(int *)(temp_v1 + 0x10) - 1;
  *(int *)(temp_v1 + 0x10) = temp_v0;
  if (temp_v0 == 0) {
    temp_v2 = 0;
    if (temp_v2 < *(int *)(temp_v1 + 0xc)) {
      do {
        FUN_002c0894(*(unsigned int *)(*(int *)(temp_v1 + 0x14) + temp_v2 * 4));
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(int *)(temp_v1 + 0xc));
    }
    asdMemFree(*(unsigned int *)(temp_v1 + 0x18));
  }
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
