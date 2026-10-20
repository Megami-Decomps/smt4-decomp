/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003de9e4` (_code @ 0x3de9e4, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(int, int, int, unsigned int);

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */
extern int FUN_002939f4(void);


unsigned int FUN_003de9e4(short param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0x43;
  do {
    temp_v0 = FUN_002939f4();
    temp_v0 = *(int *)(temp_v0 + 0x1e98) + temp_v2 * 0x114;
    if ((*(unsigned int *)(temp_v0 + 0x50) & 0x8000) != 0) {
      temp_v1 = DAT_00434290;
      FUN_0022699c(DAT_00434290,(int)param_1,0,param_2);
      *(unsigned char *)(temp_v1 + 5) = *(unsigned char *)(temp_v1 + 5) | 4;
      *(int *)(temp_v1 + 0x14) = temp_v0;
      *(unsigned char *)(temp_v1 + 4) = 0x22;
      *(unsigned int *)(temp_v1 + 0x28) = param_3;
      *(unsigned int *)(temp_v1 + 0x4c) = 0xff;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x6d);
  return 1;
}

} /* extern "C" */
