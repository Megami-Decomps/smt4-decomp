/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c50f4` (_code @ 0x2c50f4, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001260b0(int);
int FUN_001373f0(int, unsigned int, unsigned int);
int FUN_0013764c(void);
int FUN_001376d8(int, int, int, int);
int FUN_002bc7f4(int, int *);
int FUN_002bdb48(void);
int FUN_002bef70(unsigned int);
int FUN_002bf0dc(void);
int FUN_002c2428(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int DAT_00465060; /* 0x465060 */

/* Supplied declaration required: FUN_001260b0. */
/* Supplied declaration required: FUN_001373f0. */
/* Supplied declaration required: FUN_0013764c. */
/* Supplied declaration required: FUN_001376d8. */
/* Supplied declaration required: FUN_002bc7f4. */
/* Supplied declaration required: FUN_002bdb48. */
/* Supplied declaration required: FUN_002bef70. */
/* Supplied declaration required: FUN_002bf0dc. */
/* Supplied declaration required: FUN_002c2428. */


void FUN_002c50f4(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = param_4;
  FUN_002bdb48();
  temp_v0 = param_1 + *(int *)(param_1 + 0x304) * 0x18;
  FUN_001376d8(temp_v0 + 4,temp_v0 + 8,temp_v0 + 0xc,temp_v0 + 0x10);
  *(unsigned int *)(param_1 + 0x30c) = 2;
  FUN_001260b0(param_1);
  temp_v0 = *(int *)(param_1 + 0x304) + 1;
  *(int *)(param_1 + 0x304) = temp_v0;
  DAT_00465060 = DAT_00465060 - 1;
  if (DAT_00465060 != 0) {
    temp_v1 = *(int *)(DAT_00465060 * 4 + 0x4e399c);
    *(unsigned int *)(param_1 + *(int *)(temp_v1 + 0x304) * 0x18 + 4) =
         *(unsigned int *)(param_1 + temp_v0 * 0x18 + 4);
    *(unsigned int *)(param_1 + *(int *)(temp_v1 + 0x304) * 0x18 + 8) =
         *(unsigned int *)(param_1 + *(int *)(param_1 + 0x304) * 0x18 + 8);
    FUN_0013764c();
    *(unsigned int *)(temp_v1 + 0x30c) = 1;
  }
  else {
    FUN_002c2428();
    FUN_002bef70(*(unsigned int *)(param_1 + 0x308));
    if ((param_2 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
      FUN_002bc7f4(0x207,&temp_v2);
      FUN_001373f0(temp_v2,*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18));
      FUN_002bf0dc();
      return;
    }
  }
  return;
}

} /* extern "C" */
