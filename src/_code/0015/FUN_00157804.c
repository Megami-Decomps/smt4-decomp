/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157804` (_code @ 0x157804, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00159a54(int, int);
/* Supplied declaration required: FUN_00159aac. */
/* Supplied declaration required: FUN_00159b38. */
/* Supplied declaration required: FUN_002a2008. */
/* Supplied declaration required: FUN_002a3178. */
/* Supplied declaration required: FUN_002b4cd4. */


void FUN_00157804(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1 + param_2 * 0x10;
  if (*(char *)(temp_v1 + 0x2ac) == '\0') {
    if (*(int *)(temp_v1 + 0x30) < *(int *)(temp_v1 + 0x2c)) {
      FUN_002b4cd4(param_1,param_2);
    }
    FUN_002a2008(temp_v1 + 0x24,0);
    FUN_002a3178();
    temp_v0 = FUN_00159a54(param_3,(int)(char)param_2);
    if (((temp_v0 != 0) && (temp_v0 = param_3, FUN_00159b38(param_3,param_4), temp_v0 != 0)) &&
       (temp_v0 = param_3, FUN_00159aac(param_3,1), temp_v0 != 0)) {
      *(int *)(temp_v1 + 0x2a8) = param_3;
      *(unsigned char *)(temp_v1 + 0x2ac) = 1;
    }
  }
  return;
}
