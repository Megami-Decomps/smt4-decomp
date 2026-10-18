/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d448` (_code @ 0x14d448, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00151ff4. */
/* Supplied declaration required: FUN_00152054. */
/* Supplied declaration required: FUN_00152074. */
/* Supplied declaration required: FUN_0015209c. */
extern int FUN_001521a4(int);
extern int FUN_002a6d28(void);
extern int FUN_002a6d58(unsigned int);


unsigned int FUN_0014d448(int param_1,unsigned int param_2,int *param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002a6d58(*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002a6d28();
    if (temp_v1 != 1) {
      temp_v2 = 0;
    }
    else {
      temp_v1 = FUN_001521a4(temp_v0);
      temp_v0 = temp_v1;
      FUN_00152054();
      *param_3 = temp_v0;
      param_3[5] = *(int *)(temp_v1 + 8);
      temp_v0 = temp_v1;
      FUN_00152074();
      *(char *)(param_3 + 6) = (char)temp_v0;
      temp_v0 = temp_v1;
      FUN_0015209c();
      *(char *)((int)param_3 + 0x19) = (char)temp_v0;
      FUN_00151ff4(temp_v1,param_3 + 1);
      temp_v2 = 1;
    }
  }
  return temp_v2;
}
