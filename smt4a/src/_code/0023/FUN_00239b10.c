/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239b10` (_code @ 0x239b10, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int DAT_0057f69c; /* 0x57f69c */
extern unsigned int DAT_0057f6a0; /* 0x57f6a0 */

extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_003fd478. */
/* Supplied declaration required: FUN_003fd508. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00239b10(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  unsigned char *puVar8;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v1 = DAT_0057f69c;
  temp_v5 = DAT_0057f69c + 0x88;
  puVar8 = (unsigned char *)(DAT_0057f69c + 0x27ec5);
  temp_v0 = *puVar8;
  temp_v6 = *(unsigned int *)(DAT_0057f69c + 0x8c);
  temp_v2 = FUN_0018719c(0x556);
  temp_v3 = FUN_0018719c(0x557);
  temp_v4 = FUN_0018719c(0x421);
  puVar6 = (unsigned int *)(temp_v1 + 0x21e14);
  temp_v7 = *puVar6;
  FUN_003fd478();
  rt_memcpy_w(temp_v5,DAT_0057f6a0,0x2a71c);
  *(unsigned int *)(temp_v1 + 0x21e14) = temp_v7;
  FUN_003fd508(puVar6);
  if (param_1 == 1) {
    *(unsigned int *)(DAT_0057f69c + 0x8c) = temp_v6;
    *puVar8 = temp_v0;
    if (temp_v2 != 0) {
      FUN_003fd63c(0x556,1);
    }
    if (temp_v3 != 0) {
      FUN_003fd63c(0x557,1);
    }
    if (temp_v4 != 0) {
      FUN_003fd63c(0x421,1);
    }
  }
  FUN_0019a5a0(puVar6);
  return;
}
