/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8ed4` (_code @ 0x2d8ed4, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp128; /* 0x128: local_128 */
} param_1_stack;

extern unsigned char LAB_002d8f94; /* 0x2d8f94 */
extern unsigned char DAT_0043e311; /* 0x43e311 */
extern int DAT_0043e314; /* 0x43e314 */
extern unsigned int DAT_0043e31c; /* 0x43e31c */

/* Supplied declaration required: FUN_001db804. */
/* Supplied declaration required: FUN_002104e8. */
extern int FUN_00214854(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002cbdc0. */


void FUN_002d8ed4(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [128];
  unsigned char temp_v3 [128];
  
  temp_v1 = *(int *)(DAT_0043e314 + 4);
  DAT_0043e311 = 1;
  FUN_002be7fc(temp_v3,&LAB_002d8f94,*(unsigned int *)(DAT_0043e314 + 8));
  FUN_001db804(temp_v2,0x34534444,0x454d4147,0,*(unsigned int *)(DAT_0043e314 + 0x18),0,0);
  temp_v0 = temp_v1;
  FUN_002104e8(temp_v1,temp_v3,temp_v2,*(unsigned int *)(DAT_0043e314 + 0x14),
               *(unsigned int *)(DAT_0043e314 + 0x18));
  if (temp_v0 == 0) {
    if (temp_v1 == 0) {
      temp_v0 = FUN_00214854(param_1,temp_v3);
      if (temp_v0 == 1) {
        DAT_0043e31c = 6;
      }
      else {
        DAT_0043e31c = 0xffffffff;
      }
    }
    DAT_0043e311 = 0;
  }
  FUN_002cbdc0(temp_v1);
  return;
}
