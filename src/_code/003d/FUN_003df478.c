/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df478` (_code @ 0x3df478, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

extern int FUN_0023a0d8(unsigned int, int **, unsigned int);
extern unsigned int FUN_002b5c44(void);
/* Supplied declaration required: FUN_002bcd68. */


int FUN_003df478(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,int *param_4,int param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *temp_v2;
  
  temp_v2 = param_4;
  temp_v0 = FUN_002b5c44();
  temp_v1 = FUN_0023a0d8(temp_v0,&temp_v2,*param_1);
  if (-1 < temp_v1) {
    if ((int *)(temp_v2[2] - param_5) <= param_4) {
      param_4 = (int *)(temp_v2[2] - param_5);
    }
    FUN_002bcd68(param_3,*temp_v2 + param_5 * 8,(int)param_4 << 3);
    temp_v1 = 0;
    *param_2 = (unsigned int)param_4;
  }
  return temp_v1;
}
