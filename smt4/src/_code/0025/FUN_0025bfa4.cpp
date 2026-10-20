/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025bfa4` (_code @ 0x25bfa4, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c567c(int *);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */

/* Supplied declaration required: FUN_002c567c. */
extern int FUN_003e0c80(unsigned int *);
extern int FUN_003e0ce8(unsigned int *);
extern int FUN_003e0d54(unsigned int *);
extern int nn_fnd_DateTime_DateToDays(int, int, int);
extern int nn_fnd_DateTime_GetDay(unsigned int);
extern int nn_fnd_DateTime_GetMonth(unsigned int);
extern int nn_fnd_DateTime_GetYear(unsigned int);


int FUN_0025bfa4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int uStack_1c;
  int temp_v6;
  unsigned int uStack_14;
  
  if (*(int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0xc)) + 4) == 0) {
    temp_v0 = -1;
  }
  else {
    FUN_002c567c(&temp_v5);
    temp_v6 = temp_v5;
    uStack_14 = uStack_1c;
    temp_v0 = nn_fnd_DateTime_GetDay((unsigned int)&temp_v6);
    temp_v1 = nn_fnd_DateTime_GetMonth((unsigned int)&temp_v6);
    temp_v2 = nn_fnd_DateTime_GetYear((unsigned int)&temp_v6);
    temp_v0 = nn_fnd_DateTime_DateToDays(temp_v2,temp_v1,temp_v0);
    temp_v1 = FUN_003e0c80((unsigned int *)&temp_v6);
    temp_v2 = FUN_003e0ce8((unsigned int *)&temp_v6);
    temp_v3 = FUN_003e0d54((unsigned int *)&temp_v6);
    temp_v4 = temp_v3 + (temp_v2 + (temp_v1 + temp_v0 * 0x18) * 0x3c) * 0x3c;
    if (temp_v4 >= *(unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0xc)) + 4)) {
      temp_v0 = temp_v4 - *(unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0xc)) + 4);
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
