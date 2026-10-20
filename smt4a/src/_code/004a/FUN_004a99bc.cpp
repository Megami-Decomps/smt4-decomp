/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a99bc` (_code @ 0x4a99bc, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [64], unsigned char *, unsigned int);
int FUN_00227af0(unsigned char [64]);
int FUN_002a3274(int);
int FUN_003d8bc4(int);

/* stack frame of param_3: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp48; /* 0x48: local_48 */
} param_3_stack;

extern unsigned char LAB_004a9a34; /* 0x4a9a34 */
extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_00186f54(unsigned short);
/* Supplied declaration required: FUN_00227af0. */
/* Supplied declaration required: FUN_002a3274. */
/* Supplied declaration required: FUN_003d8bc4. */


void FUN_004a99bc(unsigned int param_1,short param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [64];
  
  temp_v0 = DAT_0057a9c8;
  *(unsigned char *)(DAT_0057a9c8 + 0xc040) = 1;
  *(unsigned int *)(temp_v0 + 0xc04c) = 0x12;
  *(short *)(temp_v0 + 0xc050) = param_2;
  *(unsigned int *)(temp_v0 + 0xc048) = 0;
  *(unsigned int *)(temp_v0 + 0xc044) = param_3;
  temp_v2[0] = 0;
  temp_v1 = FUN_00186f54(*(unsigned short *)(temp_v0 + 0xc050));
  FUN_00100388(temp_v2,&LAB_004a9a34,temp_v1);
  FUN_002a3274((int)param_2);
  FUN_00227af0(temp_v2);
  FUN_003d8bc4(0);
  return;
}

} /* extern "C" */
