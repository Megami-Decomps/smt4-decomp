/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032714c` (_code @ 0x32714c, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003250ac(int);
int FUN_00352bc4(void);
int FUN_003fdb18(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00581288; /* 0x581288 */
extern unsigned int DAT_005f19a0; /* 0x5f19a0 */

/* Supplied declaration required: FUN_003250ac. */
/* Supplied declaration required: FUN_00352bc4. */
/* Supplied declaration required: FUN_003fdb18. */


void FUN_0032714c(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_s0;
  unsigned int temp_v2;
  unsigned int in_s1;
  unsigned int in_s2;
  
  temp_v0 = DAT_00581288;
  temp_v1 = DAT_00581288 + 0x1d8;
  *(unsigned int *)(DAT_00581288 + 0x1fc) = in_s0;
  *(unsigned int *)(temp_v0 + 0x200) = in_s1;
  *(unsigned int *)(temp_v0 + 0x204) = in_s2;
  FUN_003250ac(temp_v1);
  temp_v2 = *(unsigned int *)(DAT_00581288 + 0x1f0);
  FUN_00352bc4();
  temp_v0 = DAT_00581288;
  *(unsigned int *)(DAT_00581288 + 0x218) = temp_v2;
  temp_v2 = DAT_005f19a0;
  *(unsigned int *)(temp_v0 + 0x1d0) = 4;
  *(unsigned int *)(temp_v0 + 0x1e4) = temp_v2;
  FUN_003fdb18(*(unsigned int *)(*(int *)(temp_v0 + 0x180) + 4));
  FUN_003fdb18(*(unsigned int *)(*(int *)(DAT_00581288 + 0x18c) + 4));
  return;
}

} /* extern "C" */
