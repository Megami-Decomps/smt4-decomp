/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002df4f8` (_code @ 0x2df4f8, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */

/* Supplied declaration required: FUN_00263588. */
/* Supplied declaration required: FUN_00276a3c. */
/* Supplied declaration required: FUN_0029c2cc. */
/* Supplied declaration required: FUN_002adf00. */


void FUN_002df4f8(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int uStack_3c;
  
  FUN_002adf00(&temp_v1,*(unsigned int *)(DAT_004474f4 + 0x2b4));
  temp_v0 = DAT_004474f4;
  puVar2 = (unsigned int *)(DAT_004474f4 + 0x44);
  *(unsigned int *)(DAT_004474f4 + 0x40) = temp_v4;
  *puVar2 = temp_v5;
  *(unsigned int *)(temp_v0 + 0x48) = uStack_3c;
  *(unsigned int *)(temp_v0 + 0x34) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x38) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x3c) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x58) = temp_v4;
  *(unsigned int *)(temp_v0 + 0x4c) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x50) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x54) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x5c) = temp_v5;
  *(unsigned int *)(temp_v0 + 0x60) = uStack_3c;
  FUN_0029c2cc(*(unsigned int *)(temp_v0 + 0x2b4),0);
  FUN_00263588(*(unsigned int *)(DAT_004474f4 + 0x2b4));
  temp_v0 = DAT_004474f4;
  *(unsigned int *)(DAT_004474f4 + 0x2b4) = 0;
  *(unsigned char *)(temp_v0 + 0x2b0) = 0;
  FUN_00276a3c();
  return;
}
