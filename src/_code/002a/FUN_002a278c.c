/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a278c` (_code @ 0x2a278c, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_002a278c(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = param_2[1];
  temp_v1 = param_2[2];
  temp_v2 = param_2[3];
  HintPreloadData(param_2 + 0x14);
  temp_v3 = param_2[4];
  temp_v4 = param_2[5];
  temp_v5 = param_2[6];
  temp_v6 = param_2[7];
  *param_1 = *param_2;
  param_1[1] = temp_v0;
  param_1[2] = temp_v1;
  param_1[3] = temp_v2;
  param_1[4] = temp_v3;
  param_1[5] = temp_v4;
  param_1[6] = temp_v5;
  param_1[7] = temp_v6;
  temp_v0 = param_2[9];
  temp_v1 = param_2[10];
  temp_v2 = param_2[0xb];
  HintPreloadData(param_2 + 0x1c);
  temp_v3 = param_2[0xc];
  temp_v4 = param_2[0xd];
  temp_v5 = param_2[0xe];
  temp_v6 = param_2[0xf];
  param_1[8] = param_2[8];
  param_1[9] = temp_v0;
  param_1[10] = temp_v1;
  param_1[0xb] = temp_v2;
  param_1[0xc] = temp_v3;
  param_1[0xd] = temp_v4;
  param_1[0xe] = temp_v5;
  param_1[0xf] = temp_v6;
  temp_v0 = param_2[0x11];
  temp_v1 = param_2[0x12];
  temp_v2 = param_2[0x13];
  HintPreloadData(param_2 + 0x24);
  temp_v3 = param_2[0x14];
  temp_v4 = param_2[0x15];
  temp_v5 = param_2[0x16];
  temp_v6 = param_2[0x17];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = temp_v0;
  param_1[0x12] = temp_v1;
  param_1[0x13] = temp_v2;
  param_1[0x14] = temp_v3;
  param_1[0x15] = temp_v4;
  param_1[0x16] = temp_v5;
  param_1[0x17] = temp_v6;
  temp_v0 = param_2[0x19];
  temp_v1 = param_2[0x1a];
  temp_v2 = param_2[0x1b];
  HintPreloadData(param_2 + 0x2c);
  temp_v3 = param_2[0x1c];
  temp_v4 = param_2[0x1d];
  temp_v5 = param_2[0x1e];
  temp_v6 = param_2[0x1f];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = temp_v0;
  param_1[0x1a] = temp_v1;
  param_1[0x1b] = temp_v2;
  param_1[0x1c] = temp_v3;
  param_1[0x1d] = temp_v4;
  param_1[0x1e] = temp_v5;
  param_1[0x1f] = temp_v6;
  temp_v0 = param_2[0x21];
  temp_v1 = param_2[0x22];
  temp_v2 = param_2[0x23];
  HintPreloadData(param_2 + 0x34);
  temp_v3 = param_2[0x24];
  temp_v4 = param_2[0x25];
  temp_v5 = param_2[0x26];
  temp_v6 = param_2[0x27];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = temp_v0;
  param_1[0x22] = temp_v1;
  param_1[0x23] = temp_v2;
  param_1[0x24] = temp_v3;
  param_1[0x25] = temp_v4;
  param_1[0x26] = temp_v5;
  param_1[0x27] = temp_v6;
  temp_v0 = param_2[0x29];
  temp_v1 = param_2[0x2a];
  temp_v2 = param_2[0x2b];
  HintPreloadData(param_2 + 0x3c);
  temp_v3 = param_2[0x2c];
  temp_v4 = param_2[0x2d];
  temp_v5 = param_2[0x2e];
  temp_v6 = param_2[0x2f];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = temp_v0;
  param_1[0x2a] = temp_v1;
  param_1[0x2b] = temp_v2;
  param_1[0x2c] = temp_v3;
  param_1[0x2d] = temp_v4;
  param_1[0x2e] = temp_v5;
  param_1[0x2f] = temp_v6;
  temp_v0 = param_2[0x31];
  temp_v1 = param_2[0x32];
  temp_v2 = param_2[0x33];
  HintPreloadData(param_2 + 0x44);
  temp_v3 = param_2[0x34];
  temp_v4 = param_2[0x35];
  temp_v5 = param_2[0x36];
  temp_v6 = param_2[0x37];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = temp_v0;
  param_1[0x32] = temp_v1;
  param_1[0x33] = temp_v2;
  param_1[0x34] = temp_v3;
  param_1[0x35] = temp_v4;
  param_1[0x36] = temp_v5;
  param_1[0x37] = temp_v6;
  temp_v0 = param_2[0x39];
  temp_v1 = param_2[0x3a];
  temp_v2 = param_2[0x3b];
  HintPreloadData(param_2 + 0x4c);
  temp_v3 = param_2[0x3c];
  temp_v4 = param_2[0x3d];
  temp_v5 = param_2[0x3e];
  temp_v6 = param_2[0x3f];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = temp_v0;
  param_1[0x3a] = temp_v1;
  param_1[0x3b] = temp_v2;
  param_1[0x3c] = temp_v3;
  param_1[0x3d] = temp_v4;
  param_1[0x3e] = temp_v5;
  param_1[0x3f] = temp_v6;
  temp_v0 = param_2[0x41];
  temp_v1 = param_2[0x42];
  temp_v2 = param_2[0x43];
  HintPreloadData(param_2 + 0x54);
  temp_v3 = param_2[0x44];
  temp_v4 = param_2[0x45];
  temp_v5 = param_2[0x46];
  temp_v6 = param_2[0x47];
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = temp_v0;
  param_1[0x42] = temp_v1;
  param_1[0x43] = temp_v2;
  param_1[0x44] = temp_v3;
  param_1[0x45] = temp_v4;
  param_1[0x46] = temp_v5;
  param_1[0x47] = temp_v6;
  temp_v0 = param_2[0x49];
  temp_v1 = param_2[0x4a];
  temp_v2 = param_2[0x4b];
  temp_v3 = param_2[0x4c];
  temp_v4 = param_2[0x4d];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = temp_v0;
  param_1[0x4a] = temp_v1;
  param_1[0x4b] = temp_v2;
  param_1[0x4c] = temp_v3;
  param_1[0x4d] = temp_v4;
  return romwright_piece_4_4(param_2 + 0x4e,param_1 + 0x4e);
}
