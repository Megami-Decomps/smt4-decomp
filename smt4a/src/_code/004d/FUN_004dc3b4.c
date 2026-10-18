/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dc3b4` (_code @ 0x4dc3b4, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_003bb6b0. */
extern unsigned int FUN_004da980(void);
extern unsigned int FUN_004db198(unsigned int, unsigned int, unsigned int, unsigned int *);
extern unsigned int FUN_004db2b8(unsigned int, unsigned int, unsigned int, unsigned int *);


unsigned int FUN_004dc3b4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = 0;
  temp_v0 = FUN_004da980();
  switch(temp_v0) {
  case 1:
    temp_v3 = FUN_004db198(param_1,param_2,param_3,param_4);
    break;
  case 2:
  case 3:
    temp_v3 = FUN_004db2b8(param_1,param_2,param_3,param_4);
    break;
  case 4:
    temp_v1 = param_2;
    FUN_00184310();
    temp_v2 = param_3;
    FUN_00184310();
    temp_v1 = (unsigned int)*(unsigned char *)(temp_v1 + 2);
    FUN_003bb6b0(temp_v1,*(unsigned char *)(temp_v2 + 2));
    temp_v3 = 0;
    if (param_2 != param_3 && temp_v1 != 0) {
      temp_v2 = param_4[1];
      temp_v3 = 1;
      *param_4 = (((*param_4 & 0xffff8000) | (param_2 & 0xffff7fff)) & 0xc0007fff) |
                 ((param_3 & 0x7fff) << 0xf);
      param_4[1] = temp_v2;
      param_4[1] = (temp_v2 & 0xfffe0003) | ((*(unsigned short *)(temp_v1 + 2) & 0x3fff7fff) << 2);
    }
  }
  return temp_v3;
}
