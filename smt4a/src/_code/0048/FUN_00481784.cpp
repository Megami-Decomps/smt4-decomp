/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00481784` (_code @ 0x481784, 0x3b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002946a0(unsigned int, int);
int FUN_002b5cb4(void);
int FUN_003fd76c(unsigned int, float *);
int FUN_003fd784(unsigned int);
int FUN_003fdb18(unsigned int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int DAT_005806a4; /* 0x5806a4 */
extern signed char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f161f; /* 0x5f161f */
extern int DAT_005f189c; /* 0x5f189c */

extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_002946a0. */
/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fd784. */
/* Supplied declaration required: FUN_003fdb18. */


void FUN_00481784(int param_1)

{
/* irregular: 4 unstructured edge(s); 2 goto(s); 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  
  temp_v1 = FUN_00162e8c();
  if (DAT_005f161d != '\0') {
    return;
  }
  if ((*(int *)(param_1 + 0x70) != 1) && (0 < DAT_005f189c)) {
    return;
  }
  temp_v7 = 100.0f;
  temp_v6 = 0.0f;
  if ((*(unsigned int *)(param_1 + 0x7c) & 4) == 0) {
    if ((*(unsigned int *)(param_1 + 0x7c) & 1) != 0) goto LAB_004818dc;
    *(unsigned char *)(param_1 + 0xc) = *(unsigned char *)(param_1 + 0xc) | 0x10;
    if ((*(unsigned int *)(param_1 + 0x7c) & 4) == 0) goto LAB_004818d0;
  }
  temp_v4 = *(int *)(param_1 + 0x2c);
  FUN_002b5cb4();
  if (temp_v4 < 0x43960000) {
    return;
  }
  temp_v4 = *(int *)(param_1 + 0x6c) + 1;
  *(int *)(param_1 + 0x6c) = temp_v4;
  if (((int)(unsigned int)*(unsigned short *)(param_1 + 0x84) < temp_v4) || (*(int *)(temp_v1 + 0x14e8) == 1)) {
    temp_v0 = *(char *)(param_1 + 0x8b);
    if (!(temp_v0 == '\0' || temp_v0 == '\x03')) {
      if (!(temp_v0 == '\x01' || temp_v0 == '\x02')) {
        temp_v2 = *(unsigned int *)(param_1 + 0x7c);
      }
      else {
        temp_v1 = *(int *)(*(int *)(param_1 + 0x78) + 4);
        *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 3;
        temp_v2 = *(unsigned int *)(param_1 + 0x7c) & 0xfffffff7;
        *(unsigned int *)(param_1 + 0x7c) = temp_v2;
      }
      *(unsigned int *)(param_1 + 0x7c) = (temp_v2 & 0xfffffffb) | 1;
    }
    else {
      temp_v1 = *(int *)(*(int *)(param_1 + 0x78) + 4);
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) & 0xfffffffc;
      temp_v2 = *(unsigned int *)(param_1 + 0x7c) | 8;
      *(unsigned int *)(param_1 + 0x7c) = temp_v2;
      *(unsigned int *)(param_1 + 0x7c) = (temp_v2 & 0xfffffffb) | 1;
    }
  }
LAB_004818d0:
  if ((*(unsigned int *)(param_1 + 0x7c) & 1) != 0) {
LAB_004818dc:
    temp_v1 = *(int *)(param_1 + 0x2c);
    FUN_002b5cb4();
    if (temp_v1 < 0x43960000) {
      return;
    }
    temp_v5 = *(float *)(param_1 + 0x9c) + temp_v7;
    *(float *)(param_1 + 0x9c) = temp_v5;
    if (temp_v6 < temp_v5) {
      if (*(char *)(param_1 + 0x8b) == '\0' || *(char *)(param_1 + 0x8b) == '\x03') {
        FUN_002946a0(*(unsigned int *)(param_1 + 100),0);
      }
      *(float *)(param_1 + 0x9c) = temp_v6;
      *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)(param_1 + 0x7c) & 0xfffffffe;
    }
  }
  if (*(unsigned int *)(param_1 + 0x5c) < 5) {
    *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) - temp_v7;
    *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)(param_1 + 0x7c) | 2;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    temp_v8 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x98);
    temp_v9 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x9c);
    temp_v10 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0xa0);
    if ((int)*(float *)(DAT_005806a4 + 0x308) >= 0x3f666667) {
      temp_v5 = (*(float *)(DAT_005806a4 + 0x308) - 0.9f) * 10.0f;
      if ((temp_v6 <= temp_v5) && (temp_v6 = temp_v5, (int)temp_v5 >= 0x3f800001)) {
        temp_v6 = 1.0f;
      }
      temp_v9 = temp_v9 + temp_v6 * temp_v7;
      temp_v3 = *(unsigned int *)(*(int *)(param_1 + 0x78) + 4);
      FUN_003fd76c(temp_v3,&temp_v8);
    }
    else {
      temp_v3 = *(unsigned int *)(*(int *)(param_1 + 0x78) + 4);
      FUN_003fd76c(temp_v3,&temp_v8);
    }
    FUN_003fdb18(temp_v3);
    FUN_003fd784(*(unsigned int *)(*(int *)(param_1 + 0x78) + 4));
    temp_v1 = *(int *)(*(int *)(param_1 + 0x78) + 4);
    if (DAT_005f161d != '\0') {
      temp_v2 = *(unsigned int *)(temp_v1 + 4) | 3;
    }
    else {
      if (DAT_005f161f != '\0') {
        temp_v2 = *(unsigned int *)(temp_v1 + 4) | 3;
        *(unsigned int *)(temp_v1 + 4) = temp_v2;
        return;
      }
      if ((*(unsigned int *)(param_1 + 0x7c) & 8) == 0) {
        return;
      }
      temp_v2 = *(unsigned int *)(temp_v1 + 4) & 0xfffffffc;
    }
    *(unsigned int *)(temp_v1 + 4) = temp_v2;
    if (DAT_005f161f != '\0') {
      temp_v2 = *(unsigned int *)(temp_v1 + 4) | 3;
    }
    else {
      if ((*(unsigned int *)(param_1 + 0x7c) & 8) == 0) {
        return;
      }
      temp_v2 = *(unsigned int *)(temp_v1 + 4) & 0xfffffffc;
    }
    *(unsigned int *)(temp_v1 + 4) = temp_v2;
    return;
  }
  return;
}

} /* extern "C" */
