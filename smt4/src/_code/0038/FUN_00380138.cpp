/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380138` (_code @ 0x380138, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a2164(unsigned int, int);
int FUN_002c5d5c(int, unsigned char *, int, int);
int FUN_00379ca4(void);
int nw_snd_internal_CurveLfoParam_Initialize(int);

extern unsigned char LAB_0015329c; /* 0x15329c */
extern unsigned char DAT_00421ee0; /* 0x421ee0 */

/* Supplied declaration required: FUN_002a2164. */
extern unsigned int FUN_002a2174(void);
/* Supplied declaration required: FUN_002c5d5c. */
/* Supplied declaration required: FUN_00379ca4. */
/* Supplied declaration required: nw_snd_internal_CurveLfoParam_Initialize. */


int FUN_00380138(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_002c5d5c(param_1,&LAB_0015329c,0x18,4);
  *(unsigned int *)(param_1 + 0x84) = 0;
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(unsigned char **)(param_1 + 0x80) = &DAT_00421ee0;
  temp_v0 = param_1 + 0x90;
  *(int *)(param_1 + 0x8c) = param_1;
  FUN_00379ca4();
  nw_snd_internal_CurveLfoParam_Initialize(temp_v0 + 0x1c);
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned char *)(temp_v0 + 0x35) = 0;
  *(unsigned char *)(temp_v0 + 0x36) = 0;
  *(unsigned char *)(temp_v0 + 0x37) = 0;
  *(unsigned char *)(temp_v0 + 0x80) = 0;
  *(unsigned char *)(temp_v0 + 0x81) = 0;
  *(unsigned short *)(temp_v0 + 0x82) = 0;
  *(unsigned short *)(temp_v0 + 0x84) = 0;
  *(unsigned int *)(temp_v0 + 0xa4) = 0;
  *(unsigned int *)(temp_v0 + 0xac) = 0;
  *(unsigned int *)(temp_v0 + 0xb0) = 0;
  temp_v1 = FUN_002a2174();
  FUN_002a2164(temp_v1,temp_v0 - 0x10);
  return temp_v0 - 0x90;
}

} /* extern "C" */
