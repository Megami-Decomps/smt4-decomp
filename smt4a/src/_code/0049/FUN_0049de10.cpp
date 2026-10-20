/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049de10` (_code @ 0x49de10, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a1f60(unsigned int, int, unsigned int, int, int, unsigned int, unsigned int);
int FUN_0049dd74(int);
int SBORROW4(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern unsigned int FUN_001688c4(unsigned int);
/* Supplied declaration required: FUN_002a1f60. */
/* Supplied declaration required: FUN_0049dd74. */


void FUN_0049de10(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  
  temp_v9 = 0;
  temp_v8 = 0;
  temp_v10 = (unsigned int)(*(unsigned short **)(param_1 + 0x84))[0x17];
  temp_v1 = **(unsigned short **)(param_1 + 0x84);
  FUN_0049dd74(param_1);
  temp_v6 = 0;
  temp_v5 = temp_v8;
  if (temp_v10 != 0) {
    do {
      temp_v11 = 0;
      temp_v4 = 0;
      if (*(unsigned short *)(*(int *)(param_1 + 0x84) + 0x30) - 1 == temp_v6) {
        temp_v5 = param_1 + temp_v6 * 0x1c;
        *(unsigned char *)(temp_v5 + 0xa0) = 2;
        temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x84) + 0x34);
        *(unsigned int *)(temp_v5 + temp_v2 * 4 + 0xa4) = 0;
        temp_v4 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x84) + 0x32);
        if ((int)temp_v2 <= (int)*(unsigned int *)(temp_v5 + 0xb0)) {
          temp_v2 = *(unsigned int *)(temp_v5 + 0xb0);
        }
        *(unsigned int *)(temp_v5 + 0xb0) = temp_v2;
        temp_v11 = 1;
      }
      if (*(unsigned short *)(*(int *)(param_1 + 0x84) + 0x3a) - 1 == temp_v6) {
        temp_v5 = param_1 + temp_v6 * 0x1c;
        *(unsigned char *)(temp_v5 + 0xa0) = 2;
        temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x84) + 0x3e);
        *(unsigned int *)(temp_v5 + temp_v2 * 4 + 0xa4) = 1;
        if (!temp_v11) {
          temp_v4 = *(unsigned int *)(param_1 + 0x84);
        }
        if (!temp_v11) {
          temp_v4 = (unsigned int)*(unsigned short *)(temp_v4 + 0x3c);
        }
        if ((int)temp_v2 <= (int)*(unsigned int *)(temp_v5 + 0xb0)) {
          temp_v2 = *(unsigned int *)(temp_v5 + 0xb0);
        }
        *(unsigned int *)(temp_v5 + 0xb0) = temp_v2;
      }
      else if (!temp_v11) {
        temp_v5 = param_1 + temp_v6 * 0x1c;
        *(unsigned char *)(temp_v5 + 0xa0) = 1;
        *(int *)(temp_v5 + 0xa4) = temp_v9;
        temp_v5 = param_1 + temp_v9 * 4;
        FUN_002a1f60(*(unsigned int *)(temp_v5 + 0x88),3,0xffffffff,0,3,*(unsigned int *)(param_1 + 8),
                     temp_v9 + (unsigned int)temp_v1 * 10);
        temp_v4 = FUN_001688c4(*(unsigned int *)(temp_v5 + 0x88));
        temp_v9 = temp_v9 + 1;
      }
      temp_v7 = temp_v6 + 1;
      temp_v3 = param_1 + temp_v6 * 0x1c;
      temp_v5 = temp_v4 + temp_v8;
      *(int *)(temp_v3 + 0x98) = temp_v8;
      temp_v11 = SBORROW4(temp_v7,temp_v10);
      temp_v0 = temp_v7 - temp_v10;
      if (temp_v7 < (int)temp_v10) {
        temp_v11 = SBORROW4(temp_v7,5);
        temp_v0 = temp_v6 - 4;
      }
      *(int *)(temp_v3 + 0x9c) = temp_v5;
      temp_v6 = temp_v7;
      temp_v8 = temp_v5;
    } while (temp_v0 < 0 != temp_v11);
  }
  *(int *)(param_1 + 0x94) = temp_v5;
  return;
}

} /* extern "C" */
