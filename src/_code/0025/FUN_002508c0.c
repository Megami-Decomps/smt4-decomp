/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002508c0` (_code @ 0x2508c0, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434290; /* 0x434290 */
extern unsigned int DAT_00435d48; /* 0x435d48 */

/* Supplied declaration required: FUN_00226b2c. */
extern int FUN_0027e658(unsigned int, int, unsigned int);
/* Supplied declaration required: FUN_00282b94. */
extern unsigned int *FUN_00293c98(void);


unsigned int FUN_002508c0(short param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  if ((*(unsigned int *)(param_3 + 0x50) & 1) != 0 && (*(unsigned int *)(param_3 + 0x50) & 0x80) != 0) {
    puVar1 = (unsigned int *)FUN_00293c98();
    FUN_00282b94(puVar1,(int)*(short *)(param_3 + 0x62));
    *puVar1 = *puVar1 | 0x240;
    temp_v0 = FUN_0027e658(DAT_00435d48,param_3,1);
    if ((temp_v0 == 0) || ((*puVar1 & 0x10) == 0)) {
      temp_v0 = DAT_00434290;
      FUN_00226b2c(DAT_00434290,(int)param_1,0,param_2);
      *(unsigned char *)(temp_v0 + 4) = 0x24;
      *(unsigned int **)(temp_v0 + 0x18) = puVar1;
      *(unsigned int *)(temp_v0 + 0x28) = 1;
    }
  }
  return 1;
}
