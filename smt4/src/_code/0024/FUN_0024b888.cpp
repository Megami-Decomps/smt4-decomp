/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024b888` (_code @ 0x24b888, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(int, int, int, unsigned int);
int btlGetMainState(void);

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */
/* Supplied declaration required: btlGetMainState. */


unsigned int
FUN_0024b888(short param_1,unsigned int param_2,unsigned short param_3,unsigned short param_4,
            unsigned short param_5,unsigned short param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  btlGetMainState();
  temp_v0 = DAT_00434290;
  FUN_0022699c(DAT_00434290,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x23;
  *(unsigned short *)(temp_v0 + 0x24) = param_3;
  *(unsigned short *)(temp_v0 + 0x26) = param_4;
  *(unsigned short *)(temp_v0 + 0x48) = param_5;
  *(unsigned short *)(temp_v0 + 0x4a) = param_6;
  return 1;
}

} /* extern "C" */
