/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2658` (_code @ 0x2c2658, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0057f6a4; /* 0x57f6a4 */

/* Supplied declaration required: FUN_001a1564. */
/* Supplied declaration required: FUN_0030fc80. */
extern int FUN_005020c0(unsigned int *);
extern int FUN_005021d8(unsigned int *);
extern int FUN_00502244(unsigned int *);
/* Supplied declaration required: nn_fnd_DateTime_GetDay. */
/* Supplied declaration required: nn_fnd_DateTime_GetMonth. */
/* Supplied declaration required: nn_fnd_DateTime_GetYear. */


int FUN_002c2658(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int uStack_1c;
  int temp_v5;
  unsigned int uStack_14;
  
  if (*(int *)(DAT_0057f6a4 + 4) == 0) {
    temp_v0 = -1;
  }
  else {
    FUN_0030fc80(&temp_v4);
    temp_v5 = temp_v4;
    uStack_14 = uStack_1c;
    nn_fnd_DateTime_GetDay(&temp_v5);
    nn_fnd_DateTime_GetMonth(&temp_v5);
    puVar2 = (unsigned int *)&temp_v5;
    nn_fnd_DateTime_GetYear();
    FUN_001a1564();
    temp_v0 = FUN_005020c0((unsigned int *)&temp_v5);
    temp_v1 = FUN_005021d8((unsigned int *)&temp_v5);
    temp_v2 = FUN_00502244((unsigned int *)&temp_v5);
    temp_v3 = temp_v2 + (temp_v1 + (temp_v0 + (int)puVar2 * 0x18) * 0x3c) * 0x3c;
    if (temp_v3 >= *(unsigned int *)(DAT_0057f6a4 + 4)) {
      temp_v0 = temp_v3 - *(unsigned int *)(DAT_0057f6a4 + 4);
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}
