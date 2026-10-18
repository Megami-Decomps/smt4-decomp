/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013f444` (_code @ 0x13f444, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;

extern unsigned short DAT_005b3d94; /* 0x5b3d94 */


void FUN_0013f444(unsigned int param_1,unsigned int param_2,unsigned char param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  while( 1 ) {
    temp_v0 = temp_v2 * 0x10;
    temp_v1 = (unsigned int)(unsigned short)(&DAT_005b3d94)[temp_v2 * 8];
    if (temp_v1 == 0xf890) {
      (&DAT_005b3d94)[temp_v2 * 8] = (unsigned short)param_1;
      *(unsigned int *)(temp_v0 + 0x5b3d98) = param_2;
      *(unsigned char *)(temp_v0 + 0x5b3d9c) = param_3;
      *(unsigned int *)(temp_v0 + 0x5b3da0) = 0;
      *(unsigned short *)(temp_v0 + 0x5b3da4) = 0xf890;
      *(unsigned int *)(temp_v0 + 0x5b3da8) = 0;
      *(unsigned char *)(temp_v0 + 0x5b3dac) = 0;
      *(unsigned int *)(temp_v0 + 0x5b3db0) = 0;
      return;
    }
    if (temp_v1 == param_1) break;
    temp_v2 = temp_v2 + 1;
  }
  return;
}
