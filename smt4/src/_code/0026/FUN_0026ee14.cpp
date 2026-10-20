/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ee14` (_code @ 0x26ee14, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023cef0(int, int, int, int, int);
int FUN_0023f2e4(int, int, unsigned char [64], int);
int dataTable08Sub2GetRecord(void);
int FUN_002be624(...);

extern unsigned char LAB_00343df8; /* 0x343df8 */
extern unsigned char LAB_00343e14; /* 0x343e14 */
extern unsigned char LAB_00343e30; /* 0x343e30 */

/* Supplied declaration required: FUN_0023cef0. */
/* Supplied declaration required: FUN_0023f2e4. */
/* Supplied declaration required: dataTable08Sub2GetRecord. */
/* Supplied declaration required: FUN_002be624. */


void FUN_0026ee14(unsigned int *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
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
  temp_v0 = (unsigned int)*(unsigned short *)(param_2 + 6);
  dataTable08Sub2GetRecord();
  temp_v1 = FUN_0023cef0(temp_v2,0,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),0);
  FUN_002be624(temp_v3,&LAB_00343df8,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),
               temp_v1);
  FUN_0023f2e4(temp_v2,0,temp_v3,7);
  temp_v0 = (unsigned int)*(unsigned short *)(param_2 + 8);
  dataTable08Sub2GetRecord();
  FUN_0023cef0(temp_v2,0,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),0);
  FUN_002be624(temp_v3,&LAB_00343e14,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72))
  ;
  FUN_0023f2e4(temp_v2,1,temp_v3,7);
  temp_v0 = (unsigned int)*(unsigned short *)(param_2 + 10);
  dataTable08Sub2GetRecord();
  temp_v1 = FUN_0023cef0(temp_v2,2,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),0);
  FUN_002be624(temp_v3,&LAB_00343e30,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),
               temp_v1);
  FUN_0023f2e4(temp_v2,2,temp_v3,7);
  return;
}

} /* extern "C" */
