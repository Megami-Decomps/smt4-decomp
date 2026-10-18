/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026b4cc` (_code @ 0x26b4cc, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0043e2b4; /* 0x43e2b4 */

/* Supplied declaration required: FUN_002c567c. */
extern int FUN_003e0c80(unsigned int *);
extern int FUN_003e0ce8(unsigned int *);
extern int FUN_003e0d54(unsigned int *);
/* Supplied declaration required: nn_fnd_DateTime_DateToDays. */
/* Supplied declaration required: nn_fnd_DateTime_GetDay. */
/* Supplied declaration required: nn_fnd_DateTime_GetMonth. */
/* Supplied declaration required: nn_fnd_DateTime_GetYear. */


void FUN_0026b4cc(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_1c;
  int temp_v4;
  unsigned int uStack_14;
  
  FUN_002c567c(&temp_v3);
  temp_v4 = temp_v3;
  uStack_14 = uStack_1c;
  nn_fnd_DateTime_GetDay(&temp_v4);
  nn_fnd_DateTime_GetMonth(&temp_v4);
  puVar1 = (unsigned int *)&temp_v4;
  nn_fnd_DateTime_GetYear();
  nn_fnd_DateTime_DateToDays();
  temp_v0 = FUN_003e0c80((unsigned int *)&temp_v4);
  temp_v1 = FUN_003e0ce8((unsigned int *)&temp_v4);
  temp_v2 = FUN_003e0d54((unsigned int *)&temp_v4);
  *(int *)(DAT_0043e2b4 + 4) = temp_v2 + (temp_v1 + (temp_v0 + (int)puVar1 * 0x18) * 0x3c) * 0x3c;
  return;
}
