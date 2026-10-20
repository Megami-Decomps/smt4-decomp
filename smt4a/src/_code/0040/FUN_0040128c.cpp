/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040128c` (_code @ 0x40128c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00348c28(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_frameTex; /* 0x57f65c */

/* Supplied declaration required: FUN_00348c28. */


void FUN_0040128c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = (*(int *)(param_1 + 0x80) << 0x10) | (*(int *)(param_1 + 0x84) << 8);
  *(unsigned int *)(param_1 + 0x9c) = temp_v2 | *(unsigned int *)(param_1 + 0x90) | (*(int *)(param_1 + 0x7c) << 0x18)
  ;
  *(unsigned int *)(param_1 + 0x94) = *(unsigned int *)(param_1 + 0x88) | (*(int *)(param_1 + 0x7c) << 0x18) | temp_v2
  ;
  *(unsigned int *)(param_1 + 0x98) = (*(unsigned int *)(param_1 + 0x98) & 0xffffff00) | *(unsigned int *)(param_1 + 0x8c);
  FUN_00348c28(1);
  temp_v0 = g_frameTex;
  temp_v1 = *(unsigned int *)(param_1 + 0x94);
  temp_v3 = *(unsigned int *)(param_1 + 0x98);
  temp_v4 = *(unsigned int *)(param_1 + 0x9c);
  *(unsigned int *)(g_frameTex + 0xfb0) = 0xc0400000;
  *(unsigned int *)(temp_v0 + 0xfb4) = 0x43c98000;
  *(unsigned int *)(temp_v0 + 0xfb8) = 0xc0400000;
  *(unsigned int *)(temp_v0 + 0xfbc) = 0x43c98000;
  *(unsigned int *)(temp_v0 + 0xfc0) = 0xc0400000;
  *(unsigned int *)(temp_v0 + 0xfc4) = 0xc0400000;
  *(unsigned int *)(temp_v0 + 0xfc8) = 0x43730000;
  *(unsigned int *)(temp_v0 + 0xfcc) = 0x43730000;
  *(unsigned int *)(temp_v0 + 0xfe8) = temp_v1;
  *(unsigned int *)(temp_v0 + 0xfec) = temp_v3;
  *(unsigned int *)(temp_v0 + 0xff0) = temp_v4;
  *(unsigned int *)(temp_v0 + 0xfdc) = 0;
  *(unsigned char *)(temp_v0 + 0xfe4) = 1;
  *(unsigned int *)(temp_v0 + 0xfe0) = 1;
  *(unsigned int *)(temp_v0 + 0xfa8) = 3;
  *(unsigned char *)(temp_v0 + 0xfa5) = 1;
  return;
}

} /* extern "C" */
