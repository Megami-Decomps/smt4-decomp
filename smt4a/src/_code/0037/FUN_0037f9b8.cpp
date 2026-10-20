/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f9b8` (_code @ 0x37f9b8, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int scrGetArg(int);
int FUN_00301a08(unsigned int, int [8], int [2]);
int scrSetResult(void);
int FUN_003eaf20(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

/* Supplied declaration required: btlGetMainState. */
extern unsigned int FUN_00232388(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_00301a08. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_0037f9b8(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2 [2];
  int temp_v3 [8];
  
  scrGetArg(0);
  scrGetArg(1);
  scrGetArg(2);
  temp_v0 = FUN_00232388();
  FUN_00301a08(temp_v0,temp_v3,temp_v2);
  temp_v1 = temp_v3[0];
  if (temp_v3[0] < temp_v2[0] + temp_v3[0]) {
    do {
      btlGetMainState();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v3[0] + temp_v2[0]);
  }
  temp_v1 = btlGetMainState();
  if (*(char *)(temp_v1 + 0x4cd1) != '\0') {
    btlGetMainState();
    FUN_003eaf20();
  }
  scrSetResult();
  return 1;
}

} /* extern "C" */
