/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a249c` (_code @ 0x3a249c, 0x25c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char DAT_005f1a60; /* 0x5f1a60 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_001861ec. */
/* Supplied declaration required: FUN_0018719c. */
/* Supplied declaration required: FUN_00314c38. */
/* Supplied declaration required: FUN_003ae61c. */
extern int FUN_003bf840(int);
/* Supplied declaration required: FUN_003bf87c. */
/* Supplied declaration required: FUN_003cb930. */
/* Supplied declaration required: FUN_003fd63c. */


void FUN_003a249c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  short *psVar5;
  int temp_v4;
  int *piVar7;
  int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  
  FUN_003bf87c();
  temp_v6 = 0;
  temp_v0 = FUN_00162e8c();
  temp_v3 = temp_v0;
  FUN_003cb930();
  temp_v5 = 0;
  if (temp_v5 < temp_v3) {
    do {
      temp_v1 = FUN_003bf840(temp_v5);
      temp_v2 = FUN_0018719c(*(unsigned int *)(temp_v1 + 8));
      if ((temp_v2 != 0) && (temp_v2 = FUN_0018719c(*(unsigned int *)(temp_v1 + 0xc)), temp_v2 == 0)) {
        FUN_003fd63c(*(unsigned int *)(temp_v1 + 0xc),1);
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v3);
  }
  temp_v3 = FUN_00162e8c();
  temp_v1 = 0;
  temp_v5 = 0;
  temp_v2 = 0;
  do {
    temp_v4 = temp_v1 + 1;
    temp_v5 = temp_v5 + 2;
    *(unsigned char *)(temp_v3 + temp_v1 * 4 + 0x1590) = 0;
    temp_v1 = temp_v1 + 2;
    *(unsigned char *)(temp_v3 + temp_v4 * 4 + 0x1590) = 0;
  } while (temp_v5 < 8);
  temp_v5 = 0;
  *(unsigned int *)(temp_v3 + 0x15b0) = 0;
  if (0 < param_1) {
    do {
      psVar5 = (short *)FUN_001861ec(temp_v5);
      if (((*psVar5 != 0) && ((psVar5[1] == 0 || (temp_v3 = FUN_0018719c(), temp_v3 != 0)))) &&
         ((psVar5[2] == 0 || (temp_v3 = FUN_0018719c(), temp_v3 == 0)))) {
        if (temp_v6 == 0) {
          temp_v6 = (int)*psVar5;
        }
        temp_v3 = FUN_00162e8c();
        if (temp_v3 != 0) {
          piVar7 = (int *)(temp_v3 + 0x15b0);
          if (*piVar7 < 8) {
            *(char *)(temp_v3 + *piVar7 * 4 + 0x1590) = (char)temp_v5;
            *piVar7 = *piVar7 + 1;
          }
        }
        temp_v3 = FUN_001861ec(temp_v5);
        FUN_00314c38(*(unsigned char *)(temp_v3 + 0x44),*(unsigned char *)(temp_v3 + 0x45),
                     *(unsigned char *)(temp_v3 + 0x46),*(unsigned char *)(temp_v3 + 0x47),
                     *(unsigned char *)(temp_v3 + 0x48),*(unsigned char *)(temp_v3 + 0x49));
        FUN_00314c38(*(unsigned char *)(temp_v3 + 0x4a),*(unsigned char *)(temp_v3 + 0x4b),0,0,0,0);
        VectorSignedToFloat((int)*(short *)(temp_v3 + 0x36),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v3 + 0x34),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_003ae61c((int)*(short *)(temp_v3 + 0x2e),(int)*(short *)(temp_v3 + 0x30),
                     (int)*(short *)(temp_v3 + 0x32),(int)*(short *)(temp_v3 + 0x36));
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < param_1);
  }
  temp_v3 = FUN_00162e8c();
  if (temp_v3 != 0) {
    temp_v2 = *(int *)(temp_v3 + 0x158c);
  }
  if (temp_v2 != temp_v6) {
    *(unsigned int *)(temp_v0 + 0x15b8) = 1;
    DAT_005f1a60 = 1;
    *(unsigned int *)(temp_v0 + 0x15bc) = 1;
  }
  if ((temp_v6 != 0) && (temp_v3 = FUN_00162e8c(), temp_v3 != 0)) {
    *(int *)(temp_v3 + 0x158c) = temp_v6;
  }
  return;
}
