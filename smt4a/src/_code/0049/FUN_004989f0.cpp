/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004989f0` (_code @ 0x4989f0, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(int, unsigned char *, int, unsigned int);
int FUN_001654f8(unsigned int, int);
int FUN_00224880(unsigned int);
int FUN_00275f44(unsigned int, unsigned int);
int FUN_002e6354(int, int);
int FUN_003c5fc4(int);

extern unsigned char LAB_00498aa8; /* 0x498aa8 */
extern unsigned char LAB_00498ab4; /* 0x498ab4 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001654f8. */
/* Supplied declaration required: FUN_00224880. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002e6354. */
extern unsigned int FUN_00357bc8(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_003c5fc4. */
extern unsigned int FUN_0049cfcc(unsigned int *, int);


void FUN_004989f0(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int uStack_20;
  
  uStack_20 = param_4;
  FUN_002e6354(param_1 + 0x194,0x200);
  temp_v2 = 0;
  if (temp_v2 < *(int *)(param_1 + 0x1601c)) {
    do {
      temp_v0 = param_1 + temp_v2 * 4;
      if (param_2 == 0) {
        temp_v0 = *(int *)(temp_v0 + 0x1600c);
      }
      else {
        temp_v0 = *(int *)(temp_v0 + 0x1600c) + 4;
      }
      temp_v1 = FUN_0049cfcc((unsigned int *)&uStack_20,temp_v0);
      FUN_001654f8(temp_v1,0);
      FUN_00100388(param_1 + 0x194,&LAB_00498ab4,param_1 + 0x194,temp_v1);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(param_1 + 0x1601c));
  }
  temp_v1 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x184),&LAB_00498aa8);
  FUN_00275f44(*(unsigned int *)(param_1 + 400),temp_v1);
  FUN_00224880(*(unsigned int *)(param_1 + 400));
  FUN_003c5fc4(1);
  return;
}

} /* extern "C" */
