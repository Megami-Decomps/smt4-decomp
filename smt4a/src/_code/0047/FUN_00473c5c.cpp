/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00473c5c` (_code @ 0x473c5c, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3494(int);
int FUN_002e98ea(int, int, unsigned int);
int asdOperatorNewE(int, int);
int FUN_004315a8(...);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

/* Supplied declaration required: FUN_002e3494. */
/* Supplied declaration required: FUN_002e98ea. */
/* Supplied declaration required: asdOperatorNewE. */
/* Supplied declaration required: FUN_004315a8. */


/* WARNING: Type propagation algorithm not settling */

void FUN_00473c5c(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2 [4];
  unsigned int uStack_20;
  int iStack_1c;
  unsigned int temp_v3;
  unsigned int uStack_14;
  
  temp_v2[1] = 0xffffffff;
  temp_v0 = 0;
  uStack_20 = param_1;
  iStack_1c = param_2;
  temp_v3 = param_3;
  uStack_14 = param_4;
  FUN_004315a8(0,temp_v2,param_4,temp_v2 + 1);
  if (-1 < temp_v0) {
    temp_v1 = temp_v2[0] * 2 + 2;
    asdOperatorNewE(temp_v1,param_2);
    temp_v0 = temp_v1;
    FUN_004315a8();
    if (-1 < temp_v0) {
      *(unsigned short *)(temp_v1 + temp_v2[0] * 2) = 0;
      puVar3 = (unsigned int *)(temp_v2 + 2);
      if (temp_v3 < temp_v2[0] + 1U) {
        puVar3 = &temp_v3;
      }
      temp_v2[2] = temp_v2[0] + 1U;
      FUN_002e98ea(param_2,temp_v1,*puVar3);
      *(unsigned short *)((param_2 + temp_v3 * 2) - 2) = 0;
    }
    FUN_002e3494(temp_v1);
  }
  return;
}

} /* extern "C" */
