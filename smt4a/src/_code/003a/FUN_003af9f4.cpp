/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003af9f4` (_code @ 0x3af9f4, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(int, int, unsigned int, int, int);
int FUN_001846d0(int, int);
int FUN_00184b80(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_0057f588; /* 0x57f588 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184b80. */


unsigned int FUN_003af9f4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
  temp_v1 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x194;
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 400) = 1;
  *(unsigned char *)(temp_v0 + 0x191) = 1;
  *(unsigned char *)(temp_v0 + 0x192) = 1;
  temp_v0 = temp_v0 + 0x1820;
  FUN_0014e188(temp_v0,0x13,0xffffffff,temp_v1,0xb);
  FUN_00184b80(temp_v0,0x26);
  FUN_001846d0(temp_v0,0x1c);
  return 1;
}

} /* extern "C" */
