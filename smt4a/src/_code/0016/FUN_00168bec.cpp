/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00168bec` (_code @ 0x168bec, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162808(unsigned int, int);
int SBORROW4(int, int);
int aeabi_idivmod(int, int);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int DAT_00588124; /* 0x588124 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00162808. */
/* Supplied declaration required: aeabi_idivmod. */


void FUN_00168bec(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar4;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  int temp_v6;
  unsigned char temp_v7;
  int *piVar10;
  unsigned char temp_v8 [4];
  int temp_v9;
  unsigned int uStack_44;
  unsigned int temp_v10;
  unsigned int uStack_3c;
  int temp_v11 [7];
  
  if ((DAT_00588124 == 0) || (param_1 >= 3)) {
    return;
  }
  temp_v9 = 2;
  uStack_44 = 9;
  temp_v10 = 5;
  uStack_3c = 0xd;
  temp_v11[0] = 0;
  temp_v1 = 0;
  temp_v11[1] = 0;
  temp_v11[2] = 0;
  temp_v11[3] = 0;
  do {
    temp_v4 = temp_v11[temp_v1];
    puVar4 = (unsigned int *)temp_v8;
    if ((temp_v1 & 1) == 0) {
      temp_v4 = temp_v4 + 2;
      puVar4 = (unsigned int *)&temp_v9;
    }
    temp_v5 = 0;
    for (temp_v6 = (int)(temp_v1 + 1) >> 1; temp_v6 != 0; temp_v6 = temp_v6 - 1) {
      piVar7 = (int *)((int)puVar4 + 4);
      piVar10 = (int *)((int)puVar4 + 8);
      puVar4 = (unsigned int *)((int)puVar4 + 8);
      temp_v4 = temp_v4 + *piVar7;
      temp_v5 = temp_v5 + *piVar10;
    }
    temp_v11[temp_v1] = temp_v4 + temp_v5;
    temp_v2 = temp_v1;
    do {
      temp_v1 = temp_v2 + 1;
      if ((int)temp_v1 >= 4) {
        temp_v4 = param_1 * -3 + *(int *)(DAT_00588124 + 0x168);
        if (temp_v4 < 0) {
          temp_v4 = 0;
        }
        aeabi_idivmod(temp_v4,temp_v11[3]);
        temp_v0 = temp_v9;
        temp_v4 = temp_v3;
        if (temp_v11[0] <= temp_v3) {
          temp_v7 = SBORROW4(temp_v11[1],temp_v3);
          temp_v4 = temp_v11[1] - temp_v3;
          if (temp_v11[1] <= temp_v3) {
            temp_v7 = SBORROW4(temp_v3,temp_v11[2]);
            temp_v4 = temp_v3 - temp_v11[2];
          }
          if (temp_v4 < 0 == temp_v7) {
            return;
          }
          temp_v4 = temp_v3 - temp_v11[1];
          temp_v0 = temp_v10;
        }
        FUN_00162808(temp_v0,temp_v4);
        return;
      }
      temp_v4 = temp_v2 + 2;
      temp_v2 = temp_v1;
    } while (temp_v4 < 1);
  } while( 1 );
}

} /* extern "C" */
