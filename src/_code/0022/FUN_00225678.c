/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00225678` (_code @ 0x225678, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_8_stack;

/* Supplied declaration required: FUN_00239d2c. */
/* Supplied declaration required: FUN_00239dec. */
/* Supplied declaration required: FUN_0035a420. */


void FUN_00225678(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4,
                 unsigned int param_5,int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned char temp_v3 [12];
  
  temp_v0 = param_8;
  temp_v1 = param_1;
  FUN_00239d2c(param_1,&temp_v2,temp_v3,0,0,param_5);
  if (-1 < temp_v1) {
    *param_3 = temp_v2;
    puVar3 = param_3 + 1;
    FUN_0035a420(puVar3,&param_6,temp_v0);
    if (-1 < (int)puVar3) {
      FUN_00239dec(param_1,param_2,param_4,param_3);
    }
  }
  return;
}
