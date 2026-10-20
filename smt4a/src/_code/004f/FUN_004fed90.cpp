/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fed90` (_code @ 0x4fed90, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_004102d8(int, int, int, unsigned int);

extern int DAT_005712f0; /* 0x5712f0 */

/* Supplied declaration required: FUN_0014aa78. */
extern int FUN_003eb1cc(void);
/* Supplied declaration required: FUN_004102d8. */


int FUN_004fed90(short param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x41;
  FUN_0014aa78();
  temp_v1 = FUN_003eb1cc();
  if (temp_v1 == 0) {
    *(unsigned int *)(temp_v0 + 0x28) = param_3;
  }
  return temp_v0;
}

} /* extern "C" */
