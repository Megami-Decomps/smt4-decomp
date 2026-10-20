/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c9104` (_code @ 0x2c9104, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1564(int, int, int);
int FUN_0030fc80(int *);

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
extern int nn_fnd_DateTime_GetDay(unsigned int);
extern int nn_fnd_DateTime_GetMonth(unsigned int);
extern int nn_fnd_DateTime_GetYear(unsigned int);


void FUN_002c9104(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int uStack_1c;
  int temp_v5;
  unsigned int uStack_14;
  
  FUN_0030fc80(&temp_v4);
  temp_v5 = temp_v4;
  uStack_14 = uStack_1c;
  temp_v0 = nn_fnd_DateTime_GetDay((unsigned int)&temp_v5);
  temp_v1 = nn_fnd_DateTime_GetMonth((unsigned int)&temp_v5);
  temp_v2 = nn_fnd_DateTime_GetYear((unsigned int)&temp_v5);
  FUN_001a1564(temp_v2,temp_v1,temp_v0);
  temp_v0 = FUN_005020c0((unsigned int *)&temp_v5);
  temp_v1 = FUN_005021d8((unsigned int *)&temp_v5);
  temp_v3 = FUN_00502244((unsigned int *)&temp_v5);
  *(int *)(DAT_0057f6a4 + 4) = temp_v3 + (temp_v1 + (temp_v0 + temp_v2 * 0x18) * 0x3c) * 0x3c;
  return;
}

} /* extern "C" */
