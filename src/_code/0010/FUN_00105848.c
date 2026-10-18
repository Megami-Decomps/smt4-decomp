/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105848` (_code @ 0x105848, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_004e3b1c; /* 0x4e3b1c */
extern int DAT_004e3b30; /* 0x4e3b30 */
extern int DAT_004e3bd4; /* 0x4e3bd4 */

/* Supplied declaration required: FUN_0010a4c4. */
/* Supplied declaration required: FUN_0010ae9c. */
/* Supplied declaration required: FUN_0010ec6c. */
/* Supplied declaration required: FUN_0011305c. */
/* Supplied declaration required: FUN_00123858. */
/* Supplied declaration required: FUN_002bdd1c. */
/* Supplied declaration required: FUN_002bf140. */
/* Supplied declaration required: FUN_002bf2b0. */
/* Supplied declaration required: FUN_002c25f0. */
/* Supplied declaration required: FUN_002c25f4. */
extern unsigned int FUN_002c3b88(void);
extern unsigned int FUN_002c3b98(void);


void FUN_00105848(unsigned int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_002bdd1c();
  FUN_002bf140(&DAT_004e3b1c,DAT_004e3b30 == 0);
  FUN_00123858();
  FUN_002c25f4();
  FUN_0010ae9c();
  temp_v0 = FUN_002c3b88();
  temp_v1 = FUN_002c3b98();
  FUN_002c25f0(temp_v1,temp_v0);
  FUN_002bf140(&DAT_004e3b1c,DAT_004e3b30);
  FUN_002bf2b0();
  FUN_0011305c();
  DAT_004e3b30 = 1 - DAT_004e3b30;
  FUN_0010a4c4();
  FUN_002bf140(&DAT_004e3b1c,DAT_004e3b30);
  if (DAT_004e3bd4 == 0) {
    FUN_0010ec6c(0,param_1);
    return;
  }
  FUN_0010ec6c(1,param_1);
  return;
}
