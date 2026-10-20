/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004afbe4` (_code @ 0x4afbe4, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004acfc4(unsigned int *);
int FUN_004d92b8(...);

extern unsigned char LAB_00521110; /* 0x521110 */
extern int FUN_00521120(...); /* 0x521120 */

/* Supplied declaration required: FUN_004acfc4. */
/* Supplied declaration required: FUN_004d92b8. */
extern int FUN_005203c0(unsigned int *);


unsigned int * FUN_004afbe4(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[0x507] = param_2;
  param_1[0x508] = 0;
  param_1[0x50c] = 0;
  param_1[0x50d] = 0;
  *(unsigned char *)(param_1 + 0x50e) = 1;
  *(unsigned char *)((int)param_1 + 0x1439) = *(unsigned char *)(param_1 + 0x523);
  param_1[0x50b] = 0;
  param_1[0x50a] = 0;
  param_1[0x509] = 0;
  temp_v0 = FUN_005203c0(param_1 + 0x507);
  param_1[0x50c] = temp_v0;
  *(unsigned int *)(temp_v0 + 4) = 0;
  *(unsigned int *)(param_1[0x50c] + 8) = param_1[0x50c];
  *(unsigned int *)(param_1[0x50c] + 0xc) = param_1[0x50c];
  param_1[0x50f] = param_2;
  param_1[0x510] = 0;
  param_1[0x511] = 0;
  param_1[0x512] = 0;
  param_1 = param_1 + 0x513;
  FUN_004d92b8(param_1,FUN_00521120);
  param_1[9] = param_2;
  param_1[10] = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x40;
  param_1[0xe] = 0x10000;
  param_1[0xf] = param_3;
  *(unsigned char *)((int)param_1 + 0x41) = 1;
  *(unsigned char *)((int)param_1 + 0x42) = 0;
  *(unsigned char *)((int)param_1 + 0x43) = 0;
  *(unsigned char *)(param_1 + 0x11) = 0;
  *(unsigned char *)((int)param_1 + 0x45) = 0;
  puVar2 = param_1 + 0x13;
  param_1[0x12] = param_2;
  FUN_004d92b8(puVar2,&LAB_00521110);
  puVar2[9] = param_2;
  FUN_004acfc4(puVar2 + -1);
  return puVar2 + -0x526;
}

} /* extern "C" */
