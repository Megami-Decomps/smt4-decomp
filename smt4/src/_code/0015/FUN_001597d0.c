/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001597d0` (_code @ 0x1597d0, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned short sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_00156260. */
extern int FUN_0015d0d8(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bb470. */


int FUN_001597d0(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned short temp_v2 [4];
  unsigned int temp_v3;
  
  if (((*(char *)(param_1 + 0xc) != '\0') && (*(unsigned char *)(param_1 + 0xd) == 0xff)) && (param_2 < 2)) {
    temp_v0 = FUN_002bb470();
    temp_v1 = FUN_0015d0d8(temp_v0,0,param_2);
    if (temp_v1 != 0) {
      temp_v2[0] = 2;
      temp_v3 = (*(unsigned int *)(param_1 + 4) >> 0x10) | (*(unsigned int *)(param_1 + 4) << 0x10);
      temp_v1 = FUN_002bb470();
      FUN_00156260(temp_v1,param_2,temp_v2);
      if (temp_v1 != 0) {
        *(char *)(param_1 + 0xd) = (char)param_2;
      }
      return temp_v1;
    }
  }
  return 0;
}
