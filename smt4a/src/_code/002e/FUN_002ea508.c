/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea508` (_code @ 0x2ea508, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_002e6dd4. */


unsigned int * FUN_002ea508(unsigned int param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_lr; 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  temp_v0 = FUN_00164a9c();
  temp_v1 = 0x100;
  puVar2 = (unsigned int *)(temp_v0 + 0x8c);
  puVar3 = puVar2;
  if (((unsigned int)puVar2 & 3) == 0 && ((unsigned int)param_2 & 3) == 0) {
    while (temp_v1 >= 4) {
      temp_v2 = *param_2;
      if (((temp_v2 + 0xfefefeff) & ~temp_v2 & 0x80808080) != 0) break;
      *puVar3 = temp_v2;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
      temp_v1 = temp_v1 - 4;
    }
  }
  do {
    temp_v0 = temp_v1 - 1;
    if (temp_v1 < 1) {
      return puVar2;
    }
    temp_v2 = *param_2;
    puVar4 = (unsigned int *)((int)puVar3 + 1);
    *(char *)puVar3 = (char)temp_v2;
    puVar3 = puVar4;
    param_2 = (unsigned int *)((int)param_2 + 1);
    temp_v1 = temp_v0;
  } while ((char)temp_v2 != '\0');
  FUN_002e6dd4(puVar4,temp_v0,temp_v0,0,unaff_r4,in_lr);
  return puVar2;
}
