/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038843c` (_code @ 0x38843c, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014af84(...);
int FUN_0014e188(int, int, unsigned int, int, int);
int FUN_001846d0(int, int);
int FUN_00184b80(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_0057f588; /* 0x57f588 */

/* Supplied declaration required: FUN_0014af84. */
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184b80. */


unsigned int FUN_0038843c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
  temp_v1 = FUN_0014af84();
  if (*(int *)(temp_v1 + 0x21d8c) != 0) {
    temp_v1 = FUN_0014af84(*(int *)(temp_v1 + 0x21d8c));
    *(unsigned int *)(temp_v0 + 0x168) = *(unsigned int *)(temp_v1 + 0x21d8c);
    *(unsigned char *)(temp_v0 + 0x16d) = 1;
    *(unsigned char *)(temp_v0 + 0x16c) = 1;
    temp_v1 = temp_v0 + 0xc18;
    FUN_0014e188(temp_v1,8,0xffffffff,temp_v0 + 0x194,0xb);
    FUN_00184b80(temp_v1,0x16);
    FUN_001846d0(temp_v1,6);
  }
  return 1;
}

} /* extern "C" */
