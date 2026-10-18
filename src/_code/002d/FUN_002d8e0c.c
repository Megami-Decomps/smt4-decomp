/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8e0c` (_code @ 0x2d8e0c, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp138; /* 0x138: local_138 */
} param_1_stack;

extern unsigned char LAB_002d8ec4; /* 0x2d8ec4 */
extern unsigned char DAT_0043e311; /* 0x43e311 */
extern int DAT_0043e314; /* 0x43e314 */
extern unsigned int DAT_0043e31c; /* 0x43e31c */

/* Supplied declaration required: FUN_0021041c. */
extern int FUN_00214854(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002d5dd4. */


void FUN_002d8e0c(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [140];
  
  DAT_0043e311 = 1;
  temp_v1 = *(int *)(DAT_0043e314 + 4);
  FUN_002be7fc(temp_v4,&LAB_002d8ec4,*(unsigned int *)(DAT_0043e314 + 8));
  temp_v2 = *(unsigned int *)(DAT_0043e314 + 0x14);
  temp_v3 = *(unsigned int *)(DAT_0043e314 + 0x18);
  temp_v0 = 0;
  FUN_002d5dd4(0,temp_v4);
  if (temp_v0 != 0) {
    FUN_0021041c(temp_v1,temp_v4,temp_v5,temp_v2,temp_v3);
    if (temp_v1 != 0) {
      return;
    }
    temp_v0 = FUN_00214854(param_1,temp_v4);
    if (temp_v0 == 1) {
      DAT_0043e311 = 0;
      DAT_0043e31c = 6;
      return;
    }
  }
  DAT_0043e31c = 0xffffffff;
  DAT_0043e311 = 0;
  return;
}
