/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003617f8` (_code @ 0x3617f8, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int DAT_0044e368; /* 0x44e368 */
extern romwright_code *DAT_0044e7d0; /* 0x44e7d0 */
extern int DAT_0044e7d8; /* 0x44e7d8 */
extern unsigned int DAT_0044e7dc; /* 0x44e7dc */
extern int DAT_004d4620; /* 0x4d4620 */
extern int DAT_004d462c; /* 0x4d462c */

/* Supplied declaration required: FUN_00100c74. */
/* Supplied declaration required: FUN_003618cc. */


void FUN_003617f8(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned long long temp_v2;
  int temp_v3;
  unsigned int uStack_24;
  
  temp_v1 = 0;
  if (DAT_004d462c != 0) {
    temp_v3 = 0;
    if (DAT_0044e7d0 != (romwright_code *)0x0) {
      temp_v2 = (*DAT_0044e7d0)(&temp_v3,*(int *)(param_3 + 0x144) + DAT_004d4620,
                              *(unsigned short *)(param_3 + 0x148));
      temp_v1 = (int)temp_v2;
      temp_v0 = (int)((unsigned long long)temp_v2 >> 0x20);
      if (temp_v1 != 0) {
        temp_v0 = temp_v3;
      }
      if (!(temp_v1 != 0 && temp_v0 != 0)) {
        *(unsigned short *)(param_3 + 0x150) = 0;
      }
      else {
        FUN_00100c74(param_3 + 0x150,temp_v0,0x100);
        *(unsigned short *)(param_3 + 0x350) = 0;
      }
    }
  }
  *(int *)(param_3 + 0x14c) = temp_v1;
  temp_v3 = DAT_0044e7d8;
  uStack_24 = DAT_0044e7dc;
  FUN_003618cc(param_2,param_3,param_4,DAT_0044e368);
  return;
}
