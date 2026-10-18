/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002034dc` (_code @ 0x2034dc, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002bf9e8. */


void FUN_002034dc(unsigned short param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_0043dd50;
  *(unsigned short *)(DAT_0043dd50 + 0x97e) = param_1;
  *(unsigned int *)(temp_v0 + 0x5e8) = 0;
  FUN_002bdac0(temp_v0 + 0x34,1,0);
  FUN_002bf030(temp_v0 + 0x2f0,2);
  FUN_002bf030(temp_v0 + 0x37c,3);
  temp_v0 = DAT_0043dd50;
  temp_v1 = *(unsigned int *)(DAT_0043dd50 + 4);
  *(unsigned int *)(DAT_0043dd50 + 4) = 0x11;
  *(unsigned int *)(temp_v0 + 8) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  FUN_002b8b78(0x1a);
  FUN_002bf9e8(0x100025d);
  return;
}
