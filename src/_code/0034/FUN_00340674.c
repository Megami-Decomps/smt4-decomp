/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00340674` (_code @ 0x340674, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0043e278; /* 0x43e278 */

/* Supplied declaration required: FUN_0024ae90. */


void FUN_00340674(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = (*(int *)(param_1 + 0x60) << 0x10) | (*(int *)(param_1 + 100) << 8);
  *(unsigned int *)(param_1 + 0x7c) = temp_v2 | *(unsigned int *)(param_1 + 0x70) | (*(int *)(param_1 + 0x5c) << 0x18)
  ;
  *(unsigned int *)(param_1 + 0x74) = *(unsigned int *)(param_1 + 0x68) | (*(int *)(param_1 + 0x5c) << 0x18) | temp_v2
  ;
  *(unsigned int *)(param_1 + 0x78) = (*(unsigned int *)(param_1 + 0x78) & 0xffffff00) | *(unsigned int *)(param_1 + 0x6c);
  FUN_0024ae90(1);
  temp_v0 = DAT_0043e278;
  temp_v1 = *(unsigned int *)(param_1 + 0x74);
  temp_v3 = *(unsigned int *)(param_1 + 0x78);
  temp_v4 = *(unsigned int *)(param_1 + 0x7c);
  *(unsigned int *)(DAT_0043e278 + 0xe98) = 0xc0400000;
  *(unsigned int *)(temp_v0 + 0xe9c) = 0x43c98000;
  *(unsigned int *)(temp_v0 + 0xea0) = 0xc0400000;
  *(unsigned int *)(temp_v0 + 0xea4) = 0x43c98000;
  *(unsigned int *)(temp_v0 + 0xea8) = 0xc0400000;
  *(unsigned int *)(temp_v0 + 0xeac) = 0xc0400000;
  *(unsigned int *)(temp_v0 + 0xeb0) = 0x43730000;
  *(unsigned int *)(temp_v0 + 0xeb4) = 0x43730000;
  *(unsigned int *)(temp_v0 + 0xed0) = temp_v1;
  *(unsigned int *)(temp_v0 + 0xed4) = temp_v3;
  *(unsigned int *)(temp_v0 + 0xed8) = temp_v4;
  *(unsigned int *)(temp_v0 + 0xec4) = 0;
  *(unsigned char *)(temp_v0 + 0xecc) = 1;
  *(unsigned int *)(temp_v0 + 0xec8) = 1;
  *(unsigned int *)(temp_v0 + 0xe90) = 3;
  *(unsigned char *)(temp_v0 + 0xe8d) = 1;
  return;
}
