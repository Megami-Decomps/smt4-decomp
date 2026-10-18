/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0860` (_code @ 0x3e0860, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern char s_ERROR____004656f1[9]; /* 0x4656f1 */

/* Supplied declaration required: FUN_00238e18. */
/* Supplied declaration required: FUN_0023953c. */
extern int FUN_0023963c(int, int, unsigned int);
extern int FUN_003e0dbc(unsigned int, unsigned int *);


unsigned int FUN_003e0860(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int uStack_2c;
  int temp_v4;
  unsigned int uStack_24;
  
  if (param_2 == 0) {
    temp_v2 = *(unsigned int *)(param_1 + 0x210);
  }
  else {
    temp_v2 = *(unsigned int *)(param_1 + 0x3c0);
  }
  temp_v1 = 0;
  if (temp_v1 < temp_v2) {
    do {
      temp_v0 = FUN_0023963c(param_1,param_2,temp_v1);
      if (!(temp_v0 == 0 || temp_v0 == -0x20)) {
        FUN_00238e18(&temp_v4,temp_v0 + 0x20);
      }
      else {
        FUN_0023953c(&temp_v4,s_ERROR____004656f1);
      }
      temp_v3 = temp_v4;
      uStack_2c = uStack_24;
      temp_v0 = FUN_003e0dbc(param_3,(unsigned int *)&temp_v3);
      if (temp_v0 != 0) {
        return temp_v1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  return 0xffffffff;
}
