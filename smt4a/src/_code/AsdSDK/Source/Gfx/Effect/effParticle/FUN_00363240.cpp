/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00363240` (_code @ 0x363240, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, unsigned int, int, int);
int FUN_001836b0(unsigned int);
int asdMemFree(unsigned int);
int FUN_001abbc4(void);
int FUN_00291038(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_001836b0. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_001abbc4. */
/* Supplied declaration required: FUN_00291038. */


void FUN_00363240(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int unaff_r6;
  
  temp_v0 = param_1[0x13];
  if (temp_v0 != 0) {
    unaff_r6 = *(unsigned int *)(temp_v0 + 8);
  }
  if (temp_v0 == 0) {
    unaff_r6 = *param_1;
  }
  if (param_1[0x10] != 0) {
    temp_v0 = 0;
    if (temp_v0 < unaff_r6) {
      do {
        FUN_001836b0(*(unsigned int *)(param_1[0xf] + temp_v0 * 4));
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < unaff_r6);
    }
    asdMemFree(param_1[0x10]);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  if (unaff_r6 << 2 != 0) {
    temp_v0 = 0x10000;
    memAlloc(0x10000,0x100,0,unaff_r6 << 2,0x10,1);
    param_1[0x10] = temp_v0;
    param_1[0xf] = temp_v0;
    FUN_001abbc4();
    temp_v0 = 1;
    *(unsigned int *)param_1[0xf] = param_2;
    if (unaff_r6 >= 2) {
      do {
        temp_v1 = *(unsigned int *)param_1[0xf];
        FUN_00291038();
        *(unsigned int *)(param_1[0xf] + temp_v0 * 4) = temp_v1;
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < unaff_r6);
    }
  }
  return;
}

} /* extern "C" */
