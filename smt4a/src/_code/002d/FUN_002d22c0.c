/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d22c0` (_code @ 0x2d22c0, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_005f15fc; /* 0x5f15fc */
extern signed char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f1a5c; /* 0x5f1a5c */

/* Supplied declaration required: FUN_00303460. */
extern int FUN_003135a8(void);
/* Supplied declaration required: FUN_00313648. */
/* Supplied declaration required: FUN_00363c3c. */
/* Supplied declaration required: FUN_003af9f4. */
/* Supplied declaration required: FUN_003b61b0. */


void FUN_002d22c0(char param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  
  temp_v0 = param_1;
  if (DAT_005f1a5c == '\0') {
    if (DAT_005f161d != '\0') {
      DAT_005f161d = param_1;
      FUN_003b61b0();
      FUN_00363c3c();
      FUN_00313648(1);
      FUN_00303460(0);
      return;
    }
    FUN_003af9f4();
    if ((DAT_005f15fc >= 100) || (temp_v1 = FUN_003135a8(), temp_v0 = DAT_005f161d, temp_v1 == 1)) {
      DAT_005f161d = param_1;
      FUN_00313648(0x27);
      FUN_00303460(0x10);
      return;
    }
  }
  DAT_005f161d = temp_v0;
  return;
}
