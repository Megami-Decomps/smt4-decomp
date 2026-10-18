/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00144228` (_code @ 0x144228, 0x638 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_004652a4; /* 0x4652a4 */
extern int DAT_004655c0; /* 0x4655c0 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern unsigned int FUN_00147a7c(int);
/* Supplied declaration required: FUN_002aa6ac. */


int FUN_00144228(int *param_1,int param_2)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  int temp_v9;
  float temp_v10;
  
  temp_v0 = DAT_004655c0;
  temp_v4 = 0x502;
  if (param_2 != 0) {
    return 0x502;
  }
  puVar3 = (unsigned int *)(DAT_004655c0 + 0x770);
  temp_v1 = 1;
  do {
    temp_v2 = param_1[temp_v1 * 0x11 + 0xd];
    if (((((temp_v2 == 0) || (param_1[0x1a] != param_1[temp_v1 * 0x11 + 0x1a])) ||
         (param_1[0x15] != param_1[temp_v1 * 0x11 + 0x15])) ||
        ((param_1[0x10] != param_1[temp_v1 * 0x11 + 0x10] ||
         (param_1[0x11] != param_1[temp_v1 * 0x11 + 0x11])))) ||
       ((param_1[0x12] != param_1[temp_v1 * 0x11 + 0x12] ||
        (((int)((param_1[temp_v1 * 0x11 + 0x15] + temp_v2) - 1) >> 0x19 != param_1[0xd] >> 0x19 ||
         (temp_v2 < (unsigned int)param_1[0xd])))))) break;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  if (temp_v1 == 6) {
    temp_v4 = 0;
  }
  if ((*(char *)(DAT_004655c0 + 0x107) == '\0') || (temp_v4 != 0)) {
    *puVar3 = *puVar3 & 0xfffffffe;
    return temp_v4;
  }
  temp_v8 = (float)param_1[7];
  temp_v10 = (float)param_1[6];
  temp_v2 = *(unsigned int *)(DAT_004655c0 + 0x77c);
  temp_v6 = (float)param_1[8];
  temp_v7 = (float)param_1[9];
  *(unsigned int *)(DAT_004655c0 + 0x77c) = temp_v2 & 0xfeefffff;
  temp_v4 = VectorFloatToUnsigned(temp_v8 * 255.0f,3);
  temp_v5 = VectorFloatToUnsigned(temp_v10 * 255.0f,3);
  temp_v1 = VectorFloatToUnsigned(temp_v6 * 255.0f,3);
  temp_v9 = VectorFloatToUnsigned(temp_v7 * 255.0f,3);
  *(unsigned int *)(temp_v0 + 0x774) = temp_v5 | (temp_v4 << 8) | (temp_v1 << 0x10) | (temp_v9 << 0x18);
  temp_v5 = *(unsigned int *)(temp_v0 + 0x778);
  temp_v3 = (param_1[0x10] & 0x7ffU) << 0x10;
  *(unsigned int *)(temp_v0 + 0x778) = (temp_v5 & 0xf800ffff) | temp_v3;
  *(unsigned int *)(temp_v0 + 0x778) = (param_1[0x11] & 0x7ffU) | (temp_v5 & 0xf800f800) | temp_v3;
  *(unsigned int *)(temp_v0 + 0x79c) = *(unsigned int *)(temp_v0 + 0x79c) & 0xff000000;
  *(unsigned int *)(temp_v0 + 0x7a8) = (param_1[0x14] & 0xfU) | (*(unsigned int *)(temp_v0 + 0x7a8) & 0xfffffff0);
  temp_v4 = param_1[0x12];
  if (temp_v4 != 0x190a) {
    if (temp_v4 < 0x190a) {
      temp_v5 = temp_v4 - 0x1906;
      if ((temp_v5 >= 2) && (temp_v5 != 2 && temp_v5 != 3)) {
        return 0x502;
      }
    }
    else {
      if (temp_v4 == 0x6040) {
        *(unsigned int *)(temp_v0 + 0x77c) = (temp_v2 & 0x8eef88cf) | 0x40100006;
        *(unsigned int *)(temp_v0 + 0x780) = *(unsigned int *)(temp_v0 + 0x780) & 0xf0f0e000;
        goto LAB_00144764;
      }
      if (temp_v4 != 0x675a && temp_v4 != 0x675b) {
        return 0x502;
      }
    }
  }
  *(unsigned int *)(temp_v0 + 0x77c) = (temp_v2 & 0x8eefffff) | 0x10000000;
  temp_v4 = param_1[2];
  if (temp_v4 == 0x2901) {
    temp_v2 = (temp_v2 & 0x8eef8fff) | 0x10002000;
    *(unsigned int *)(temp_v0 + 0x77c) = temp_v2;
  }
  else if (temp_v4 == 0x812d) {
    temp_v2 = (temp_v2 & 0x8eef8fff) | 0x10001000;
    *(unsigned int *)(temp_v0 + 0x77c) = temp_v2;
  }
  else if (temp_v4 == 0x812f) {
    temp_v2 = (temp_v2 & 0x8eef8fff) | 0x10000000;
    *(unsigned int *)(temp_v0 + 0x77c) = temp_v2;
  }
  else if (temp_v4 == 0x8370) {
    temp_v2 = (temp_v2 & 0x8eef8fff) | 0x10003000;
    *(unsigned int *)(temp_v0 + 0x77c) = temp_v2;
  }
  temp_v4 = param_1[3];
  if (temp_v4 != 0x2901) {
    if (temp_v4 != 0x812d) {
      if (temp_v4 == 0x812f) {
        temp_v2 = *(unsigned int *)(temp_v0 + 0x77c) & 0xfffff8ff;
        *(unsigned int *)(temp_v0 + 0x77c) = temp_v2;
      }
      else if (temp_v4 == 0x8370) {
        temp_v2 = (*(unsigned int *)(temp_v0 + 0x77c) & 0xfffff8ff) | 0x300;
        *(unsigned int *)(temp_v0 + 0x77c) = temp_v2;
      }
    }
    else {
      temp_v2 = (*(unsigned int *)(temp_v0 + 0x77c) & 0xfffff8ff) | 0x100;
      *(unsigned int *)(temp_v0 + 0x77c) = temp_v2;
    }
  }
  else {
    temp_v2 = (*(unsigned int *)(temp_v0 + 0x77c) & 0xfffff8ff) | 0x200;
    *(unsigned int *)(temp_v0 + 0x77c) = temp_v2;
  }
  if (*param_1 == 0x2600) {
    temp_v2 = *(unsigned int *)(temp_v0 + 0x77c) & 0xfffffffd;
    *(unsigned int *)(temp_v0 + 0x77c) = temp_v2;
  }
  else if (*param_1 == 0x2601) {
    temp_v2 = *(unsigned int *)(temp_v0 + 0x77c) | 2;
    *(unsigned int *)(temp_v0 + 0x77c) = temp_v2;
  }
  temp_v4 = param_1[1];
  if (temp_v4 != 0x2701) {
    if (temp_v4 < 0x2701) {
      if (temp_v4 != 0x2600) {
        if (temp_v4 != 0x2601) {
          if (temp_v4 == 0x2700) {
            temp_v2 = *(unsigned int *)(temp_v0 + 0x77c) & 0xfffffffb;
            *(unsigned int *)(temp_v0 + 0x77c) = temp_v2;
            temp_v3 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
            temp_v5 = temp_v3 | (*(unsigned int *)(temp_v0 + 0x780) & 0xf0f0ffff);
            *(unsigned int *)(temp_v0 + 0x780) = temp_v3 | (*(unsigned int *)(temp_v0 + 0x780) & 0xfff0ffff);
            temp_v3 = param_1[5];
            if ((int)temp_v3 < 0) {
              temp_v3 = 0;
            }
            *(unsigned int *)(temp_v0 + 0x780) = temp_v5 | ((temp_v3 & 0xf) << 0x18);
            *(unsigned int *)(temp_v0 + 0x77c) = temp_v2 & 0xfeffffff;
          }
        }
        else {
          *(unsigned int *)(temp_v0 + 0x780) = *(unsigned int *)(temp_v0 + 0x780) & 0xf0f0ffff;
          *(unsigned int *)(temp_v0 + 0x77c) = (*(unsigned int *)(temp_v0 + 0x77c) & 0xfeffffff) | 4;
        }
      }
      else {
        *(unsigned int *)(temp_v0 + 0x780) = *(unsigned int *)(temp_v0 + 0x780) & 0xf0f0ffff;
        *(unsigned int *)(temp_v0 + 0x77c) = *(unsigned int *)(temp_v0 + 0x77c) & 0xfefffffb;
      }
    }
    else if (temp_v4 != 0x2702) {
      if (temp_v4 == 0x2703) {
        temp_v2 = *(unsigned int *)(temp_v0 + 0x77c) | 4;
        *(unsigned int *)(temp_v0 + 0x77c) = temp_v2;
        temp_v3 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
        temp_v5 = temp_v3 | (*(unsigned int *)(temp_v0 + 0x780) & 0xf0f0ffff);
        *(unsigned int *)(temp_v0 + 0x780) = temp_v3 | (*(unsigned int *)(temp_v0 + 0x780) & 0xfff0ffff);
        temp_v3 = param_1[5];
        if ((int)temp_v3 < 0) {
          temp_v3 = 0;
        }
        *(unsigned int *)(temp_v0 + 0x780) = temp_v5 | ((temp_v3 & 0xf) << 0x18);
        *(unsigned int *)(temp_v0 + 0x77c) = temp_v2 | 0x1000000;
      }
    }
    else {
      temp_v2 = *(unsigned int *)(temp_v0 + 0x77c) & 0xfffffffb;
      *(unsigned int *)(temp_v0 + 0x77c) = temp_v2;
      temp_v3 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
      temp_v5 = temp_v3 | (*(unsigned int *)(temp_v0 + 0x780) & 0xf0f0ffff);
      *(unsigned int *)(temp_v0 + 0x780) = temp_v3 | (*(unsigned int *)(temp_v0 + 0x780) & 0xfff0ffff);
      temp_v3 = param_1[5];
      if ((int)temp_v3 < 0) {
        temp_v3 = 0;
      }
      *(unsigned int *)(temp_v0 + 0x780) = temp_v5 | ((temp_v3 & 0xf) << 0x18);
      *(unsigned int *)(temp_v0 + 0x77c) = temp_v2 | 0x1000000;
    }
  }
  else {
    temp_v2 = *(unsigned int *)(temp_v0 + 0x77c) | 4;
    *(unsigned int *)(temp_v0 + 0x77c) = temp_v2;
    temp_v3 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
    temp_v5 = temp_v3 | (*(unsigned int *)(temp_v0 + 0x780) & 0xf0f0ffff);
    *(unsigned int *)(temp_v0 + 0x780) = temp_v3 | (*(unsigned int *)(temp_v0 + 0x780) & 0xfff0ffff);
    temp_v3 = param_1[5];
    if ((int)temp_v3 < 0) {
      temp_v3 = 0;
    }
    *(unsigned int *)(temp_v0 + 0x780) = temp_v5 | ((temp_v3 & 0xf) << 0x18);
    *(unsigned int *)(temp_v0 + 0x77c) = temp_v2 & 0xfeffffff;
  }
  *(unsigned int *)(temp_v0 + 0x780) = *(unsigned int *)(temp_v0 + 0x780) & 0xffffe000;
  if (param_1[0x12] == 0x675a) {
    temp_v4 = 2;
  }
  else {
    temp_v4 = 0;
  }
  *(unsigned int *)(temp_v0 + 0x77c) = (*(unsigned int *)(temp_v0 + 0x77c) & 0xffffffcf) | (temp_v4 << 4);
LAB_00144764:
  temp_v2 = FUN_00147a7c(param_1[0xd]);
  *(unsigned int *)(temp_v0 + 0x784) = (*(unsigned int *)(temp_v0 + 0x784) & 0xc0000000) | (temp_v2 >> 3);
  temp_v2 = FUN_00147a7c(param_1[0x1e]);
  *(unsigned int *)(temp_v0 + 0x788) = (*(unsigned int *)(temp_v0 + 0x788) & 0xffc00000) | ((temp_v2 >> 3) & 0xe03fffff);
  temp_v2 = FUN_00147a7c(param_1[0x2f]);
  *(unsigned int *)(temp_v0 + 0x78c) = (*(unsigned int *)(temp_v0 + 0x78c) & 0xffc00000) | ((temp_v2 >> 3) & 0xe03fffff);
  temp_v2 = FUN_00147a7c(param_1[0x40]);
  *(unsigned int *)(temp_v0 + 0x790) = (*(unsigned int *)(temp_v0 + 0x790) & 0xffc00000) | ((temp_v2 >> 3) & 0xe03fffff);
  temp_v2 = FUN_00147a7c(param_1[0x51]);
  *(unsigned int *)(temp_v0 + 0x794) = (*(unsigned int *)(temp_v0 + 0x794) & 0xffc00000) | ((temp_v2 >> 3) & 0xe03fffff);
  temp_v2 = FUN_00147a7c(param_1[0x62]);
  *(unsigned int *)(temp_v0 + 0x798) = (*(unsigned int *)(temp_v0 + 0x798) & 0xffc00000) | ((temp_v2 >> 3) & 0xe03fffff);
  *puVar3 = *puVar3 | 1;
  FUN_002aa6ac(0x81,10,temp_v0 + 0x774);
  if (DAT_004652a0 < DAT_004652a4) {
    *DAT_004652a0 = *(unsigned int *)(temp_v0 + 0x7a8);
    DAT_004652a0[1] = 0xf008e;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  return 0;
}
