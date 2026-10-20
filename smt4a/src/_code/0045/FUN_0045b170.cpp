/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b170` (_code @ 0x45b170, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f5020(int, unsigned char *, int, int);
int FUN_0045b4d0(int *, int *, unsigned int, int);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned char LAB_0045b2fc; /* 0x45b2fc */

/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_0045b4d0. */


void FUN_0045b170(int *param_1,int param_2,unsigned int param_3,int param_4,unsigned char param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned short *puVar5;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int uStack_1c;
  
  temp_v0 = (param_4 + 0xfU) & 0xfffffff0;
  param_1[0x14] = temp_v0;
  temp_v5 = param_2 + param_3 * 0x448 + temp_v0 * 4;
  temp_v2 = param_3 * 0xd0 + temp_v0;
  temp_v1 = 0;
  temp_v4 = param_2;
  do {
    if (temp_v2 == 0) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = (temp_v4 + 3U) & 0xfffffffc;
      temp_v4 = temp_v0 + temp_v2;
    }
    param_1[temp_v1 * 8 + 4] = temp_v0;
    if (temp_v2 == 0) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = (temp_v4 + 3U) & 0xfffffffc;
      temp_v4 = temp_v0 + temp_v2;
    }
    temp_v3 = temp_v1 + 1;
    param_1[temp_v1 * 8 + 5] = temp_v0;
    temp_v1 = temp_v3;
  } while (temp_v3 < 2);
  FUN_0045b4d0(&temp_v6,&temp_v4,param_3 << 8,4);
  temp_v0 = 0;
  *param_1 = temp_v6;
  param_1[1] = uStack_1c >> 8;
  if (uStack_1c >> 8 != 0) {
    do {
      temp_v1 = *param_1 + temp_v0 * 0x100;
      if (temp_v1 != 0) {
        FUN_002f5020(temp_v1,&LAB_0045b2fc,0x20,8);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (unsigned int)param_1[1]);
  }
  temp_v1 = 0;
  do {
    puVar3 = (unsigned int *)(param_1 + temp_v1 * 8 + 2);
    if (param_3 * 4 == 0) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = (temp_v4 + 3U) & 0xfffffffc;
      temp_v4 = temp_v0 + param_3 * 4;
    }
    *puVar3 = temp_v0;
    puVar3[1] = param_3 & 0x3fffffff;
    temp_v0 = 0;
    if ((param_3 & 0x3fffffff) != 0) {
      do {
        puVar5 = (unsigned short *)(*puVar3 + temp_v0 * 4);
        temp_v0 = temp_v0 + 1;
        if (puVar5 != (unsigned short *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
        }
      } while (temp_v0 < puVar3[1]);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  *(unsigned char *)(param_1 + 0x13) = param_5;
  return;
}

} /* extern "C" */
