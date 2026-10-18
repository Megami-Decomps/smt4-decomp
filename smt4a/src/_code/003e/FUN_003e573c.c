/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e573c` (_code @ 0x3e573c, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aea28. */
/* Supplied declaration required: FUN_001cd3ec. */
/* Supplied declaration required: FUN_0030ea58. */
extern int FUN_0040ab8c(unsigned int);


void FUN_003e573c(int param_1,int param_2,unsigned int param_3,unsigned short param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1 + param_2 * 0x5c;
  *(unsigned short *)(temp_v1 + 0x20) = param_4;
  temp_v0 = FUN_0040ab8c(*(unsigned int *)(temp_v1 + 0x24));
  if (temp_v0 != 0) {
    temp_v0 = temp_v1 + 0x38;
    FUN_0030ea58(temp_v0,param_3);
    if (temp_v0 == 0) {
      return;
    }
    temp_v0 = *(int *)(*(int *)(temp_v1 + 0x24) + 4);
    if (temp_v0 != 0) {
      *(unsigned int *)(temp_v1 + 0x1c) = 2;
      *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
      FUN_001aea28(DAT_0056fcc0);
    }
  }
  else {
    if ((*(int *)(param_1 + 4) == 0) &&
       (temp_v0 = FUN_0040ab8c(*(unsigned int *)(param_1 + 8)), temp_v0 != 0)) {
      FUN_001cd3ec(*(unsigned int *)(temp_v1 + 0x24),param_3);
      *(unsigned int *)(temp_v1 + 0x1c) = 4;
      return;
    }
    *(unsigned int *)(temp_v1 + 0x1c) = 5;
  }
  strncpy(temp_v1 + 0x38,param_3,0x40);
  return;
}
