/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e23c0` (_code @ 0x2e23c0, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024ac7c(int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int DAT_0043e278; /* 0x43e278 */

/* Supplied declaration required: FUN_0024ac7c. */


void FUN_002e23c0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = (param_2 & 0xffff) >> 8;
  temp_v1 = param_2 >> 0x18;
  temp_v5 = (param_2 & 0xffffff) >> 0x10;
  *(unsigned int *)(param_1 + 0x5c) = temp_v1;
  *(unsigned int *)(param_1 + 0x60) = temp_v5;
  temp_v5 = (temp_v5 << 0x10) | (temp_v0 << 8);
  *(unsigned int *)(param_1 + 100) = temp_v0;
  *(unsigned int *)(param_1 + 0x68) = param_2 & 0xff;
  *(unsigned int *)(param_1 + 0x6c) = param_3 & 0xff;
  *(unsigned int *)(param_1 + 0x70) = param_4 & 0xff;
  *(unsigned int *)(param_1 + 0x7c) = (param_4 & 0xff) | (temp_v1 << 0x18) | temp_v5;
  *(unsigned int *)(param_1 + 0x78) = param_3;
  *(unsigned int *)(param_1 + 0x74) = (param_2 & 0xff) | (temp_v1 << 0x18) | temp_v5;
  FUN_0024ac7c(1);
  temp_v2 = DAT_0043e278;
  temp_v3 = *(unsigned int *)(param_1 + 0x74);
  temp_v4 = *(unsigned int *)(param_1 + 0x78);
  temp_v6 = *(unsigned int *)(param_1 + 0x7c);
  *(unsigned int *)(DAT_0043e278 + 0xe98) = 0xc0400000;
  *(unsigned int *)(temp_v2 + 0xe9c) = 0x43c98000;
  *(unsigned int *)(temp_v2 + 0xea0) = 0xc0400000;
  *(unsigned int *)(temp_v2 + 0xea4) = 0x43c98000;
  *(unsigned int *)(temp_v2 + 0xea8) = 0xc0400000;
  *(unsigned int *)(temp_v2 + 0xeac) = 0xc0400000;
  *(unsigned int *)(temp_v2 + 0xeb0) = 0x43730000;
  *(unsigned int *)(temp_v2 + 0xeb4) = 0x43730000;
  *(unsigned int *)(temp_v2 + 0xed0) = temp_v3;
  *(unsigned int *)(temp_v2 + 0xed4) = temp_v4;
  *(unsigned int *)(temp_v2 + 0xed8) = temp_v6;
  *(unsigned int *)(temp_v2 + 0xec4) = 0;
  *(unsigned char *)(temp_v2 + 0xecc) = 1;
  *(unsigned int *)(temp_v2 + 0xec8) = 1;
  *(unsigned int *)(temp_v2 + 0xe90) = 3;
  *(unsigned char *)(temp_v2 + 0xe8d) = 1;
  return;
}

} /* extern "C" */
