/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115baa` (_code @ 0x115baa, 0xa6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002f9f28. */
/* Supplied declaration required: FUN_002f9f4e. */
/* Supplied declaration required: FUN_002fd210. */
extern int FUN_0030161c(int);
extern int FUN_00301744(unsigned int **, unsigned int *);
extern int FUN_003017f0(int);


void FUN_00115baa(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *temp_v1;
  int temp_v2;
  
  temp_v1 = param_3;
  temp_v2 = param_4;
  if (*(short *)(param_1 + 0x14) == 0x10) {
    temp_v0 = FUN_0030161c(param_1);
    if ((temp_v0 == 0x40) || (temp_v0 = FUN_003017f0(param_1 + 0x20), temp_v0 != 0)) {
      FUN_002f9f28(param_1,0x40,0);
    }
    else {
      temp_v1 = *(unsigned int **)(param_1 + 0x30);
      while( 1 ) {
        temp_v1 = (unsigned int *)*temp_v1;
        temp_v2 = *(unsigned int *)(param_1 + 0x30);
        temp_v0 = FUN_00301744(&temp_v1,(unsigned int *)&temp_v2);
        if (temp_v0 == 0) break;
        if (*(short *)(temp_v1[2] + 0x14) != 0x40) {
          FUN_002f9f4e();
        }
      }
    }
  }
  if (*(short *)(param_1 + 0x14) == 2) {
    temp_v0 = FUN_0030161c(param_1);
    if ((temp_v0 != 4) && (temp_v0 = FUN_003017f0(param_1 + 0x20), temp_v0 == 0)) {
      temp_v1 = *(unsigned int **)(param_1 + 0x30);
      while( 1 ) {
        temp_v1 = (unsigned int *)*temp_v1;
        temp_v2 = *(unsigned int *)(param_1 + 0x30);
        temp_v0 = FUN_00301744(&temp_v1,(unsigned int *)&temp_v2);
        if (temp_v0 == 0) break;
        if (*(short *)(temp_v1[2] + 0x14) != 4) {
          FUN_002fd210();
        }
      }
      return;
    }
    FUN_002f9f28(param_1,4,0);
  }
  return;
}
