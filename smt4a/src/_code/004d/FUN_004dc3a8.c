/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dc3a8` (_code @ 0x4dc3a8, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_003bb6b0. */
extern unsigned int FUN_004da980(void);
extern unsigned int FUN_004db198(unsigned int, unsigned int, unsigned int, unsigned int *);
extern unsigned int FUN_004db2b8(unsigned int, unsigned int, unsigned int, unsigned int *);


unsigned int FUN_004dc3a8(unsigned int param_1,int param_2,int param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v4 = (unsigned int)*(unsigned short *)(param_3 + 0x62);
  temp_v2 = (unsigned int)*(unsigned short *)(param_2 + 0x62);
  temp_v5 = 0;
  temp_v0 = FUN_004da980();
  switch(temp_v0) {
  case 1:
    temp_v5 = FUN_004db198(param_1,temp_v2,temp_v4,param_4);
    break;
  case 2:
  case 3:
    temp_v5 = FUN_004db2b8(param_1,temp_v2,temp_v4,param_4);
    break;
  case 4:
    temp_v1 = temp_v2;
    FUN_00184310();
    temp_v3 = temp_v4;
    FUN_00184310();
    temp_v1 = (unsigned int)*(unsigned char *)(temp_v1 + 2);
    FUN_003bb6b0(temp_v1,*(unsigned char *)(temp_v3 + 2));
    temp_v5 = 0;
    if (temp_v2 != temp_v4 && temp_v1 != 0) {
      temp_v3 = param_4[1];
      temp_v5 = 1;
      *param_4 = (*param_4 & 0xc0000000) | (temp_v2 & 0xffff7fff) | ((temp_v4 & 0x7fff) << 0xf);
      param_4[1] = temp_v3;
      param_4[1] = (temp_v3 & 0xfffe0003) | ((*(unsigned short *)(temp_v1 + 2) & 0x3fff7fff) << 2);
    }
  }
  return temp_v5;
}
