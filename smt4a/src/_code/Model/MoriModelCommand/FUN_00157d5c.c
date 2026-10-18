/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157d5c` (_code @ 0x157d5c, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned char LAB_00157e60; /* 0x157e60 */

extern unsigned int FUN_0016d374(void);
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_0017d184. */
/* Supplied declaration required: FUN_0017d1e4. */
extern unsigned int FUN_0017daf8(unsigned int);
/* Supplied declaration required: FUN_0019d4d8. */


void FUN_00157d5c(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  do {
    temp_v0 = param_1 + temp_v3 * 0x4c;
    temp_v1 = 0x10000;
    FUN_0019d4d8(0x10000,0x100,0,param_2,0x10,1);
    *(unsigned int *)(temp_v0 + 0x48) = temp_v1;
    temp_v1 = FUN_0017daf8(param_3);
    temp_v2 = 0x10000;
    FUN_0019d4d8(0x10000,0x100,0,temp_v1,0x10,1);
    *(unsigned int *)(temp_v0 + 0x4c) = temp_v2;
    FUN_0017d1e4(temp_v0 + 4,param_2,*(unsigned int *)(temp_v0 + 0x48),param_3,temp_v2);
    FUN_0017d184(temp_v0 + 4);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 2);
  temp_v3 = 0x14;
  FUN_00178b04(0x14,&LAB_00157e60,0x59);
  temp_v1 = 0;
  if (temp_v3 != 0) {
    temp_v1 = FUN_0016d374();
  }
  *(unsigned int *)(param_1 + 0xa8) = temp_v1;
  temp_v3 = 0x14;
  FUN_00178b04(0x14,&LAB_00157e60,0x5a);
  temp_v1 = 0;
  if (temp_v3 != 0) {
    temp_v1 = FUN_0016d374();
  }
  *(unsigned int *)(param_1 + 0xac) = temp_v1;
  return;
}
