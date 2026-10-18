/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e7340` (_code @ 0x3e7340, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a6d28(void);
extern int FUN_002a6d58(unsigned int);
/* Supplied declaration required: FUN_003e6acc. */
extern unsigned short *FUN_003e6b74(int);


unsigned int FUN_003e7340(int param_1,unsigned int param_2,unsigned short *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  
  temp_v0 = FUN_002a6d58(*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002a6d28();
    if (temp_v1 != 2) {
      temp_v2 = 0;
    }
    else {
      puVar4 = (unsigned short *)FUN_003e6b74(temp_v0);
      *param_3 = *puVar4;
      param_3[1] = puVar4[1];
      FUN_003e6acc();
      *(char *)(param_3 + 2) = (char)puVar4;
      temp_v2 = 1;
    }
  }
  return temp_v2;
}
