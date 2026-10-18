/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001058a4` (_code @ 0x1058a4, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_004e3b1c; /* 0x4e3b1c */
extern int DAT_004e3b30; /* 0x4e3b30 */
extern int DAT_004e3bd4; /* 0x4e3bd4 */

/* Supplied declaration required: FUN_0010a52c. */
/* Supplied declaration required: FUN_0010af10. */
/* Supplied declaration required: FUN_0010ec90. */
/* Supplied declaration required: FUN_00113150. */
/* Supplied declaration required: FUN_00123934. */
/* Supplied declaration required: FUN_002bdb44. */
/* Supplied declaration required: FUN_002bef68. */
/* Supplied declaration required: FUN_002bf0d8. */
/* Supplied declaration required: FUN_002c2424. */
/* Supplied declaration required: FUN_002c2428. */
extern unsigned int FUN_002c3984(void);
extern unsigned int FUN_002c3994(void);


void FUN_001058a4(unsigned int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_002bdb44();
  FUN_002bef68(&DAT_004e3b1c,DAT_004e3b30 == 0);
  FUN_00123934();
  FUN_002c2428();
  FUN_0010af10();
  temp_v0 = FUN_002c3984();
  temp_v1 = FUN_002c3994();
  FUN_002c2424(temp_v1,temp_v0);
  FUN_002bef68(&DAT_004e3b1c,DAT_004e3b30);
  FUN_002bf0d8();
  FUN_00113150();
  DAT_004e3b30 = 1 - DAT_004e3b30;
  FUN_0010a52c();
  FUN_002bef68(&DAT_004e3b1c,DAT_004e3b30);
  if (DAT_004e3bd4 == 0) {
    FUN_0010ec90(0,param_1);
    return;
  }
  FUN_0010ec90(1,param_1);
  return;
}
