/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034a304` (_code @ 0x34a304, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int SBORROW4(int, int);

/* stack frame of param_3: 6 slot(s), 22 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned short sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */


int FUN_0034a304(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  temp_v2 = 0;
  if (param_1 != 0) {
    temp_v2 = 0;
    temp_v4 = 1;
    if (param_2 >= 0) {
      temp_v6 = *(unsigned int *)(param_1 + 0x62);
      temp_v7 = *(unsigned int *)(param_1 + 0x66);
      temp_v8 = *(unsigned int *)(param_1 + 0x6a);
      temp_v9 = *(unsigned int *)(param_1 + 0x6e);
      temp_v10 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v10 + 2)),*(unsigned short *)(param_1 + 0x72));
    }
    else {
      temp_v4 = -1;
      param_2 = -param_2;
      temp_v6 = *(unsigned int *)(param_1 + 0x74);
      temp_v7 = *(unsigned int *)(param_1 + 0x78);
      temp_v8 = *(unsigned int *)(param_1 + 0x7c);
      temp_v9 = *(unsigned int *)(param_1 + 0x80);
      temp_v10 = *(unsigned int *)(param_1 + 0x84);
    }
    temp_v5 = param_2 == 9;
    temp_v1 = param_2;
    if (param_2 >= 10) {
      temp_v1 = 9;
    }
    temp_v3 = param_2 - 9;
    if (9 >= param_2) {
      temp_v5 = temp_v1 == 0;
      temp_v3 = temp_v1;
    }
    temp_v0 = 0;
    if (!temp_v5 && temp_v3 < 0 == (param_2 >= 10 && SBORROW4(param_2,9))) {
      do {
        temp_v3 = (int)*(char *)((int)&temp_v6 + temp_v0 * 2);
        if (temp_v3 == 0) break;
        if (temp_v3 == param_3) {
          temp_v2 = temp_v2 + *(char *)((int)&temp_v6 + temp_v0 * 2 + 1);
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < temp_v1);
    }
    temp_v2 = temp_v2 * temp_v4;
  }
  return temp_v2;
}

} /* extern "C" */
