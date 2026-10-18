/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Message_ConfirmAndApplySimple` (_code @ 0x223188, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_002542bc. */
/* Supplied declaration required: FUN_002542d4. */
/* Supplied declaration required: FUN_00254e2c. */
extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_0028ed3c. */
/* Supplied declaration required: FUN_002900d0. */
/* Supplied declaration required: FUN_0029016c. */
extern int FUN_0029022c(void);
/* Supplied declaration required: FUN_00290248. */
extern unsigned int FUN_002903f0(void);
extern int FUN_002b47f4(unsigned int);
/* Supplied declaration required: FUN_002bff50. */


unsigned int scrComm_Message_ConfirmAndApplySimple(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 == 0) {
    temp_v0 = FUN_0029022c();
    if (temp_v0 == 0) {
      return 1;
    }
    FUN_002542d4(0);
    FUN_002542d4(1,0);
  }
  temp_v1 = FUN_002b47f4(0x1e);
  temp_v0 = FUN_002542bc(0);
  if (temp_v0 == 0) {
    temp_v2 = FUN_002903f0();
    FUN_0028ed3c(temp_v2,0,1);
    FUN_002bff50();
    temp_v3 = FUN_002542bc(1);
    FUN_00254e2c(temp_v1,2,temp_v3,6,0);
    temp_v0 = FUN_002542bc(1);
    FUN_002542d4(1,temp_v0 + 1);
    if (temp_v1 == 1) {
      FUN_002542d4(1,0);
      FUN_0029016c(temp_v2,0);
      FUN_00290248(temp_v2);
      FUN_002900d0();
      return 1;
    }
  }
  return 0;
}
