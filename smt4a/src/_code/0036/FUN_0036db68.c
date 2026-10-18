/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036db68` (_code @ 0x36db68, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0057f590; /* 0x57f590 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184b80. */
extern unsigned int FUN_001ba3d4(void);


unsigned int FUN_0036db68(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_0057f590;
  *(unsigned char *)(DAT_0057f590 + 0x8f) = 1;
  *(unsigned char *)(temp_v0 + 0x8d) = 1;
  *(unsigned int *)(temp_v0 + 0x78) = param_1;
  temp_v1 = FUN_001ba3d4();
  *(unsigned int *)(temp_v0 + 0x7c) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x88) = temp_v1;
  FUN_0014e188(temp_v0 + 0xb00,8,0xffffffff,temp_v0 + 0x194,0xb);
  FUN_00184b80(temp_v0 + 0xb00,10);
  FUN_001846d0(temp_v0 + 0xb00,6);
  return 1;
}
