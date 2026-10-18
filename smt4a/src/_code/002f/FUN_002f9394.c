/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9394` (_code @ 0x2f9394, 0x7e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 6 slot(s), 21 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

extern int DAT_00594a04; /* 0x594a04 */

/* Supplied declaration required: FUN_00109950. */
/* Supplied declaration required: FUN_002ede60. */
/* Supplied declaration required: FUN_002f9cf2. */


unsigned int FUN_002f9394(unsigned int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [32];
  unsigned int uStack_24;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  if ((*(char *)(DAT_00594a04 + 4) == '\x01') &&
     (*(short *)(param_4 + 6) == *(short *)(DAT_00594a04 + 0x4e) &&
      *(int *)(param_4 + 8) == *(int *)(DAT_00594a04 + 0x50))) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 1;
    uStack_24 = param_1;
    temp_v2 = param_2;
    temp_v3 = param_3;
    temp_v4 = param_4;
    FUN_00109950(param_2,param_3,param_4,param_1 + 0x1d4);
    if ((param_2 == 0) && (*(int *)(temp_v3 + 0x10) != 0)) {
      FUN_002ede60(temp_v1,temp_v4);
      FUN_002f9cf2(param_1,temp_v3,temp_v1);
      temp_v0 = param_1 ^ 1;
    }
  }
  return temp_v0;
}
