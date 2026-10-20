#include "romwright_types.h"

extern "C" {

int FUN_00314c38(int, int, int, int, int, int);
int FUN_003fd63c(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00314c38. */
/* Supplied declaration required: FUN_003fd63c. */


void FUN_003bf70c(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  char *p;
  
  p = (char *)(*param_1 + 0x9b4);
  if (*p != '\0') {
    if (*(int *)(p + 0x28) == 0) {
      FUN_00314c38(0x4e,8,0,0,0,0);
    }
    if (*(int *)(p + 0x28) == 4) {
      FUN_00314c38(0xbf,7,0,0,0,0);
    }
    if (*(int *)(p + 0x28) == 8) {
      FUN_00314c38(0xcd,3,0,0,0,0);
    }
    if (*(int *)(p + 0x28) == 0xe) {
      FUN_00314c38(0xda,5,0,0,0,0);
    }
    if (*(int *)(p + 0x28) == 0x12) {
      FUN_00314c38(0xed,4,0,0,0,0);
    }
    FUN_003fd63c(*(unsigned int *)(p + 0x24),1,1);
    return;
  }
  return;
}

} /* extern "C" */
