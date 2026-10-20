/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466b00` (_code @ 0x466b00, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001cc6c0(unsigned int, int);
int FUN_002f5020(...);
int FUN_0045fb3c(void);

extern unsigned char LAB_001b5b88; /* 0x1b5b88 */
extern int FUN_00466c00(...); /* 0x466c00 */
extern unsigned char DAT_0055c38c; /* 0x55c38c */

extern unsigned int FUN_001c35d8(void);
/* Supplied declaration required: FUN_001cc6c0. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_0045fb3c. */


int FUN_00466b00(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_002f5020(param_1,&LAB_001b5b88,0x18,4);
  *(unsigned int *)(param_1 + 0x8c) = 0;
  *(unsigned int *)(param_1 + 0x90) = 0;
  *(unsigned char **)(param_1 + 0x88) = &DAT_0055c38c;
  temp_v0 = param_1 + 0x98;
  *(int *)(param_1 + 0x94) = param_1;
  FUN_0045fb3c();
  temp_v0 = temp_v0 + 0x1c;
  FUN_002f5020(temp_v0,FUN_00466c00,0x20,4);
  *(unsigned char *)(temp_v0 + 0x84) = 0;
  *(unsigned char *)(temp_v0 + 0x85) = 0;
  *(unsigned char *)(temp_v0 + 0x86) = 0;
  *(unsigned char *)(temp_v0 + 0xcc) = 0;
  *(unsigned char *)(temp_v0 + 0xcd) = 0;
  *(unsigned short *)(temp_v0 + 0xce) = 0;
  *(unsigned short *)(temp_v0 + 0xd0) = 0;
  *(unsigned int *)(temp_v0 + 0xf4) = 0;
  *(unsigned int *)(temp_v0 + 0xfc) = 0;
  *(unsigned int *)(temp_v0 + 0x100) = 0;
  temp_v1 = FUN_001c35d8();
  FUN_001cc6c0(temp_v1,temp_v0 - 0x2c);
  return temp_v0 - 0xb4;
}

} /* extern "C" */
