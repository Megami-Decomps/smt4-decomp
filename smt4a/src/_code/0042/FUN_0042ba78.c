/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042ba78` (_code @ 0x42ba78, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_001885b8. */
extern unsigned long long FUN_00500924(unsigned int *);


unsigned int *
FUN_0042ba78(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned long long temp_v2;
  int temp_v3;
  
  *param_1 = (unsigned int)"룜B떨B듼B";
  temp_v0 = param_1[2];
  temp_v1 = param_1[3];
  if (temp_v0 != 0 || temp_v1 != 0) {
    temp_v3 = param_4;
    temp_v2 = FUN_00500924(param_1);
    temp_v3 = (unsigned int)temp_v2;
    FUN_001885b8(&temp_v3,(int)((unsigned long long)temp_v2 >> 0x20),temp_v0,temp_v1);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  param_1[1] = 0;
  return param_1;
}
