/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004625c0` (_code @ 0x4625c0, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f5020(unsigned int *, unsigned char *, int, int);
int FUN_00462440(unsigned int *);

extern unsigned char LAB_0046069c; /* 0x46069c */
extern unsigned char DAT_0055c1b0; /* 0x55c1b0 */

/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_00462440. */


unsigned int * FUN_004625c0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055c1b0;
  *(unsigned char *)((int)param_1 + 5) = 0;
  *(unsigned char *)(param_1 + 0x23) = 0;
  *(unsigned char *)((int)param_1 + 0x8d) = 0;
  *(unsigned short *)((int)param_1 + 0x8e) = 0;
  *(unsigned short *)(param_1 + 0x24) = 0;
  *(unsigned char *)((int)param_1 + 0x92) = 0;
  *(unsigned char *)((int)param_1 + 0x93) = 0;
  *(unsigned short *)(param_1 + 0x25) = 0;
  *(unsigned short *)((int)param_1 + 0x96) = 0;
  *(unsigned char *)(param_1 + 0x26) = 0;
  *(unsigned char *)((int)param_1 + 0x99) = 0;
  *(unsigned short *)((int)param_1 + 0x9a) = 0;
  *(unsigned short *)(param_1 + 0x27) = 0;
  *(unsigned char *)((int)param_1 + 0x9e) = 0;
  *(unsigned char *)((int)param_1 + 0x9f) = 0;
  *(unsigned short *)(param_1 + 0x28) = 0;
  *(unsigned short *)((int)param_1 + 0xa2) = 0;
  *(unsigned char *)(param_1 + 0x29) = 0;
  *(unsigned char *)((int)param_1 + 0xa5) = 0;
  *(unsigned short *)((int)param_1 + 0xa6) = 0;
  *(unsigned short *)(param_1 + 0x2a) = 0;
  param_1 = param_1 + 0x2b;
  FUN_002f5020(param_1,&LAB_0046069c,0x10,4);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_00462440(param_1 + -0x2b);
  return param_1 + -0x2b;
}

} /* extern "C" */
