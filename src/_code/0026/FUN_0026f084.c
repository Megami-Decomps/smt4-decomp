/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f084` (_code @ 0x26f084, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00344030; /* 0x344030 */
extern unsigned char LAB_0034404c; /* 0x34404c */
extern unsigned char LAB_00344068; /* 0x344068 */

/* Supplied declaration required: FUN_0023d04c. */
/* Supplied declaration required: FUN_0023f440. */
extern int FUN_002b47cc(unsigned short);
/* Supplied declaration required: FUN_002be7fc. */


void FUN_0026f084(unsigned int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [64];
  
  temp_v2 = param_1[7];
  if (temp_v2 == 0) {
    return;
  }
  param_1[8] = param_2;
  param_1[6] = 0x3c449ba6;
  param_1[4] = 0x43af0000;
  *param_1 = 0x3f99999a;
  param_1[1] = 0x40a9999a;
  param_1[2] = 0x3f000000;
  if (param_2 == 0) {
    return;
  }
  temp_v0 = FUN_002b47cc(*(unsigned short *)(param_2 + 6));
  temp_v1 = FUN_0023d04c(temp_v2,0,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),0);
  FUN_002be7fc(temp_v3,&LAB_00344030,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),
               temp_v1);
  FUN_0023f440(temp_v2,0,temp_v3,7);
  temp_v0 = FUN_002b47cc(*(unsigned short *)(param_2 + 8));
  FUN_0023d04c(temp_v2,0,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),0);
  FUN_002be7fc(temp_v3,&LAB_0034404c,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72))
  ;
  FUN_0023f440(temp_v2,1,temp_v3,7);
  temp_v0 = FUN_002b47cc(*(unsigned short *)(param_2 + 10));
  temp_v1 = FUN_0023d04c(temp_v2,2,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),0);
  FUN_002be7fc(temp_v3,&LAB_00344068,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),
               temp_v1);
  FUN_0023f440(temp_v2,2,temp_v3,7);
  return;
}
