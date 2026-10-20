/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c708` (_code @ 0x35c708, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00348c28(int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int g_frameTex; /* 0x57f65c */

/* Supplied declaration required: FUN_00348c28. */


void FUN_0035c708(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

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
  *(unsigned int *)(param_1 + 0x7c) = temp_v1;
  *(unsigned int *)(param_1 + 0x80) = temp_v5;
  temp_v5 = (temp_v5 << 0x10) | (temp_v0 << 8);
  *(unsigned int *)(param_1 + 0x84) = temp_v0;
  *(unsigned int *)(param_1 + 0x88) = param_2 & 0xff;
  *(unsigned int *)(param_1 + 0x8c) = param_3 & 0xff;
  *(unsigned int *)(param_1 + 0x90) = param_4 & 0xff;
  *(unsigned int *)(param_1 + 0x9c) = (param_4 & 0xff) | (temp_v1 << 0x18) | temp_v5;
  *(unsigned int *)(param_1 + 0x98) = param_3;
  *(unsigned int *)(param_1 + 0x94) = (param_2 & 0xff) | (temp_v1 << 0x18) | temp_v5;
  FUN_00348c28(1);
  temp_v2 = g_frameTex;
  temp_v3 = *(unsigned int *)(param_1 + 0x94);
  temp_v4 = *(unsigned int *)(param_1 + 0x98);
  temp_v6 = *(unsigned int *)(param_1 + 0x9c);
  *(unsigned int *)(g_frameTex + 0xfb0) = 0xc0400000;
  *(unsigned int *)(temp_v2 + 0xfb4) = 0x43c98000;
  *(unsigned int *)(temp_v2 + 0xfb8) = 0xc0400000;
  *(unsigned int *)(temp_v2 + 0xfbc) = 0x43c98000;
  *(unsigned int *)(temp_v2 + 0xfc0) = 0xc0400000;
  *(unsigned int *)(temp_v2 + 0xfc4) = 0xc0400000;
  *(unsigned int *)(temp_v2 + 0xfc8) = 0x43730000;
  *(unsigned int *)(temp_v2 + 0xfcc) = 0x43730000;
  *(unsigned int *)(temp_v2 + 0xfe8) = temp_v3;
  *(unsigned int *)(temp_v2 + 0xfec) = temp_v4;
  *(unsigned int *)(temp_v2 + 0xff0) = temp_v6;
  *(unsigned int *)(temp_v2 + 0xfdc) = 0;
  *(unsigned char *)(temp_v2 + 0xfe4) = 1;
  *(unsigned int *)(temp_v2 + 0xfe0) = 1;
  *(unsigned int *)(temp_v2 + 0xfa8) = 3;
  *(unsigned char *)(temp_v2 + 0xfa5) = 1;
  return;
}

} /* extern "C" */
