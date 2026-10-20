/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046b18c` (_code @ 0x46b18c, 0x834 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_001008a2(...);
int FUN_001654f8(unsigned char [64], unsigned char [136], int);
int FUN_001681cc(...);
int FUN_001695a0(void);
int FUN_00180008(...);
int FUN_0019a5a0(void);
int FUN_0019c364(void);
int FUN_00275bc8(...);
int FUN_00275f44(...);
int FUN_002804b0(...);
int FUN_002a4b74(void);
int FUN_002e342c(unsigned char [64], unsigned int);
int FUN_002e6354(unsigned int *, int);
int FUN_003423cc(int);
int FUN_0035d058(unsigned int, unsigned int);
int FUN_003c1060(void);
int FUN_003fe86c(...);
int FUN_00468878(unsigned int *, unsigned char *);
int FUN_0046a278(unsigned int *, unsigned int);
int FUN_004ff920(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_0046b4e0; /* 0x46b4e0 */
extern unsigned char LAB_0046b8f0; /* 0x46b8f0 */
extern unsigned char LAB_0046b910; /* 0x46b910 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001008a2. */
/* Supplied declaration required: FUN_001654f8. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: FUN_00180008. */
extern unsigned int FUN_001801b8(unsigned short, unsigned char);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002804b0. */
extern unsigned int FUN_002a4b60(void);
/* Supplied declaration required: FUN_002a4b74. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6354. */
extern int FUN_0031d62c(void);
/* Supplied declaration required: FUN_003423cc. */
extern unsigned int FUN_00357bc8(unsigned int, int);
/* Supplied declaration required: FUN_0035d058. */
/* Supplied declaration required: FUN_003c1060. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_00468878. */
/* Supplied declaration required: FUN_0046a278. */
extern int FUN_0046bbd8(int, unsigned int);
/* Supplied declaration required: FUN_004ff920. */
extern int FUN_004ffba8(int);


void FUN_0046b18c(unsigned int *param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_s0; 21 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  float in_s0;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [64];
  unsigned char temp_v8 [64];
  unsigned char temp_v9 [136];
  
  temp_v6 = 0;
  temp_v5 = 0x3f800000;
  switch(param_1[2]) {
  case 0:
    if (param_1[0x2b6] != 0) {
      temp_v4 = *(int *)(param_1[*(int *)(param_1[0x2b6] + 4) + 0x283] + 4);
      temp_v3 = FUN_004ffba8(temp_v4);
      if (temp_v3 == 0) {
        return;
      }
      *(unsigned int *)(temp_v4 + 0x1fc) = temp_v6;
      FUN_003fe86c(temp_v4,0);
      param_1[0x2b6] = 0;
    }
    param_1[2] = param_1[2] + 1;
    puVar2 = param_1 + 0x2b7;
    param_1[0x2b5] = 0;
    FUN_002e6354(puVar2,0x200);
    param_1[0x2b4] = 0;
    temp_v2 = 0;
    if (0 < (int)param_1[0x2ae]) {
      do {
        temp_v3 = FUN_0046bbd8((int)param_1 + 0x19,0);
        FUN_002e342c(temp_v7,temp_v3 + param_1[temp_v2 * 2 + 0x29c] * 0x88);
        FUN_001654f8(temp_v7,temp_v9,0);
        FUN_001008a2(puVar2,temp_v9);
        FUN_001008a2(puVar2,"<br>");
        param_1[param_1[0x2b4] + 0x2b0] = temp_v2;
        temp_v1 = param_1[0x2b4] + 1;
        param_1[0x2b4] = temp_v1;
        if (temp_v1 >= 4) break;
        temp_v2 = temp_v2 + 1;
      } while ((int)temp_v2 < (int)param_1[0x2ae]);
      if (0 < (int)param_1[0x2b4]) {
        if (param_1[0x2b4] != 1) {
          FUN_003423cc(0xa2);
          FUN_00468878(param_1,&LAB_0046b4e0);
          FUN_003c1060();
          if ((char)param_1[6] != '\0') {
            return;
          }
          temp_v2 = 0;
          do {
            temp_v5 = FUN_001801b8((short)param_1[0x33d],
                                 *(unsigned char *)((int)param_1 + temp_v2 * 10 + 0xe4a));
            *(char *)((int)param_1 + temp_v2 * 10 + 0xe46) = (char)temp_v5;
            FUN_0035d058(temp_v2,temp_v5);
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
          return;
        }
        temp_v2 = 6;
        param_1[2] = temp_v2;
        return;
      }
    }
    param_1[1] = 5;
    param_1[2] = 0;
    break;
  case 1:
    temp_v3 = FUN_00224880(*(unsigned int *)param_1[0xad]);
    if (temp_v3 != 2) {
      temp_v3 = FUN_0031d62c();
      if (temp_v3 != 0) {
        temp_v2 = FUN_002a4b60();
        param_1[0x2b5] = temp_v2;
        if (temp_v2 != 0xffffffff) {
          FUN_0046a278(param_1,temp_v2);
          return;
        }
      }
    }
    else {
      temp_v3 = FUN_002a4b74();
      if (temp_v3 != -1) {
        temp_v2 = FUN_002a4b74();
        param_1[0x2b5] = temp_v2;
        FUN_0046a278(param_1,temp_v2);
        temp_v2 = param_1[param_1[0x2b5] + 0x2b0];
        param_1[0x2b6] = (unsigned int)(param_1 + temp_v2 * 2 + 0x29c);
        temp_v3 = *(int *)(param_1[param_1[temp_v2 * 2 + 0x29d] + 0x283] + 4);
        *(unsigned int *)(temp_v3 + 0x1fc) = temp_v5;
        FUN_003fe86c(temp_v3,0);
        param_1[2] = param_1[2] + 1;
        *param_1 = *param_1 | 0x100;
        temp_v3 = 0;
        if (0 < (int)param_1[0x2b4]) {
          do {
            temp_v4 = temp_v3 + 1;
            temp_v2 = *(unsigned int *)(*(int *)(param_1[param_1[param_1[temp_v3 + 0x2b0] * 2 + 0x29d] + 0x28c]
                                      + 4) + 4);
            if ((temp_v2 & 1) == 0) {
              *(unsigned int *)(*(int *)(param_1[param_1[param_1[temp_v3 + 0x2b0] * 2 + 0x29d] + 0x28c] + 4) +
                       4) = temp_v2 | 1;
            }
            temp_v3 = temp_v4;
          } while (temp_v4 < (int)param_1[0x2b4]);
        }
        FUN_001681cc(0xa4);
        param_1[0x33c] = param_1[0x2b5];
        return;
      }
      param_1[0x338] = 0;
      param_1[2] = 5;
      *param_1 = *param_1 & 0xfffffeff;
      temp_v3 = 0;
      if (0 < (int)param_1[0x2b4]) {
        do {
          temp_v4 = temp_v3 + 1;
          temp_v2 = *(unsigned int *)(*(int *)(param_1[param_1[param_1[temp_v3 + 0x2b0] * 2 + 0x29d] + 0x28c] +
                                    4) + 4);
          if ((temp_v2 & 1) == 0) {
            *(unsigned int *)(*(int *)(param_1[param_1[param_1[temp_v3 + 0x2b0] * 2 + 0x29d] + 0x28c] + 4) + 4
                     ) = temp_v2 | 1;
          }
          temp_v3 = temp_v4;
        } while (temp_v4 < (int)param_1[0x2b4]);
        return;
      }
    }
    break;
  case 2:
    temp_v3 = FUN_0046bbd8((int)param_1 + 0x19,0);
    temp_v0 = *(unsigned short *)(temp_v3 + *(int *)param_1[0x2b6] * 0x88 + 0x6a);
    FUN_00100388(temp_v7,&LAB_0046b8f0,temp_v0,temp_v0);
    FUN_00100388(temp_v8,&LAB_0046b910,temp_v0);
    FUN_002804b0(temp_v7,param_1 + 0xa7,0);
    FUN_002804b0(temp_v8,param_1 + 0xa8,0);
    param_1[2] = param_1[2] + 1;
    return;
  case 3:
    temp_v2 = 0;
    if (param_1[0xa7] != 0) {
      temp_v2 = param_1[0xa8];
    }
    if (param_1[0xa7] == 0 || temp_v2 == 0) {
      return;
    }
    FUN_004ff920(*(unsigned int *)(param_1[*(int *)(param_1[0x2b6] + 4) + 0x283] + 4));
    if (in_s0 < (float)param_1[0x297]) {
      return;
    }
    goto LAB_0046b85c;
  case 4:
    if ((char)param_1[6] == '\0') {
      temp_v2 = 0;
      do {
        temp_v6 = FUN_001801b8((short)param_1[0x33d],
                             *(unsigned char *)((int)param_1 + temp_v2 * 10 + 0xe4a));
        *(char *)((int)param_1 + temp_v2 * 10 + 0xe46) = (char)temp_v6;
        FUN_0035d058(temp_v2,temp_v6);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
    }
    temp_v3 = FUN_00224880(param_1[0xa9]);
    if (temp_v3 == 2) {
      *(unsigned int *)(*(int *)(param_1[*(int *)(param_1[0x2b6] + 4) + 0x283] + 4) + 0x1fc) = temp_v5;
      FUN_001695a0();
      if (param_1[0xa9] != 0) {
        FUN_0019c364();
        param_1[0xa9] = 0;
      }
      if (param_1[0xa7] != 0) {
        FUN_0019a5a0();
        param_1[0xa7] = 0;
      }
      if (param_1[0xa8] != 0) {
        FUN_0019a5a0();
        param_1[0xa8] = 0;
      }
      param_1[2] = 0;
      *param_1 = *param_1 & 0xfffffeff;
      return;
    }
    break;
  case 5:
    param_1[2] = 0;
    *param_1 = *param_1 & 0xfffffeff;
    param_1[1] = 5;
    return;
  case 6:
    param_1[0x338] = param_1[param_1[0x2b0] * 2 + 0x29d];
    temp_v2 = param_1[0x2b5];
    if (param_1[param_1[temp_v2 + 0x2b0] * 2 + 0x29d] == 8) {
      param_1[0x338] = 5;
    }
    if (param_1[param_1[temp_v2 + 0x2b0] * 2 + 0x29d] == 9) {
      param_1[0x338] = 4;
    }
    temp_v2 = param_1[temp_v2 + 0x2b0];
    param_1[0x2b6] = (unsigned int)(param_1 + temp_v2 * 2 + 0x29c);
    temp_v3 = *(int *)(param_1[param_1[temp_v2 * 2 + 0x29d] + 0x283] + 4);
    *(unsigned int *)(temp_v3 + 0x1fc) = 0x3f800000;
    FUN_003fe86c(temp_v3,0);
    FUN_001681cc(0xa4);
    temp_v3 = FUN_0046bbd8((int)param_1 + 0x19,0);
    temp_v0 = *(unsigned short *)(temp_v3 + *(int *)param_1[0x2b6] * 0x88 + 0x6a);
    FUN_00100388(temp_v7,&LAB_0046b8f0,temp_v0,temp_v0);
    FUN_00100388(temp_v8,&LAB_0046b910,temp_v0);
    FUN_002804b0(temp_v7,param_1 + 0xa7,0);
    FUN_002804b0(temp_v8,param_1 + 0xa8,0);
    *param_1 = *param_1 | 0x100;
    temp_v2 = 7;
    param_1[2] = temp_v2;
    return;
  case 7:
    temp_v2 = 0;
    if (param_1[0xa7] != 0) {
      temp_v2 = param_1[0xa8];
    }
    if (param_1[0xa7] == 0 || temp_v2 == 0) {
      return;
    }
    FUN_004ff920(*(unsigned int *)(param_1[*(int *)(param_1[0x2b6] + 4) + 0x283] + 4));
    if (in_s0 < (float)param_1[0x297]) {
      return;
    }
LAB_0046b85c:
    temp_v3 = *(int *)(param_1[*(int *)(param_1[0x2b6] + 4) + 0x283] + 4);
    *(unsigned int *)(temp_v3 + 0x1fc) = temp_v6;
    FUN_003fe86c(temp_v3,0);
    temp_v2 = param_1[0xa7];
    FUN_00275bc8(temp_v2,param_1[0xa8]);
    param_1[0xa9] = temp_v2;
    *(unsigned int *)(temp_v2 + 0x108) = 2;
    temp_v3 = FUN_0046bbd8((int)param_1 + 0x19,0);
    temp_v4 = *(int *)param_1[0x2b6];
    FUN_00180008(0);
    temp_v5 = FUN_00357bc8(param_1[0xa7],temp_v3 + temp_v4 * 0x88 + 0x6c);
    FUN_00275f44(param_1[0xa9],temp_v5);
    temp_v2 = param_1[2] + 1;
    param_1[2] = temp_v2;
    return;
  case 8:
    temp_v3 = FUN_00224880(param_1[0xa9]);
    if (temp_v3 == 2) {
      *(unsigned int *)(*(int *)(param_1[*(int *)(param_1[0x2b6] + 4) + 0x283] + 4) + 0x1fc) = temp_v5;
      FUN_001695a0();
      if (param_1[0xa9] != 0) {
        FUN_0019c364();
        param_1[0xa9] = 0;
      }
      if (param_1[0xa7] != 0) {
        FUN_0019a5a0();
        param_1[0xa7] = 0;
      }
      if (param_1[0xa8] != 0) {
        FUN_0019a5a0();
        param_1[0xa8] = 0;
      }
      *param_1 = *param_1 & 0xfffffeff;
      param_1[2] = 5;
      param_1[0x338] = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
