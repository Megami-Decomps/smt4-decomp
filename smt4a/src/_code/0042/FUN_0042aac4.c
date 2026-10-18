/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042aac4` (_code @ 0x42aac4, 0x2c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_3_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: FUN_00521ed4. */
/* Supplied declaration required: FUN_00522100. */
/* Supplied declaration required: FUN_00522304. */
extern int *nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(int);


void FUN_0042aac4(int param_1,unsigned int *param_2,int *param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  unsigned short *puVar6;
  int temp_v4;
  unsigned int unaff_r4;
  int unaff_r5;
  unsigned int unaff_r8;
  unsigned int temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned short *temp_v10;
  unsigned char temp_v11 [4];
  unsigned int temp_v12;
  int iStack_68;
  unsigned int uStack_64;
  int temp_v13;
  unsigned char temp_v14 [12];
  unsigned char temp_v15 [12];
  unsigned char temp_v16 [16];
  unsigned char temp_v17 [4];
  unsigned char temp_v18 [12];
  
  temp_v5 = param_1 + 0x20;
  if (*param_3 == 4) {
    temp_v1 = param_3[1];
  }
  else {
    temp_v1 = 0;
  }
  temp_v3 = temp_v5;
  FUN_00522304(temp_v5,temp_v14,temp_v15,&temp_v8,0,temp_v1);
  if (-1 < (int)temp_v3) {
    temp_v2 = temp_v8 ^ 0x75bcd15;
    temp_v1 = temp_v9 * 2 >> 1;
    temp_v4 = temp_v1 - 1;
    if (0 < temp_v4) {
      puVar6 = temp_v10 + -1;
      if (-1 < temp_v9 << 0x1f) {
        temp_v2 = (unsigned int)*temp_v10 ^ ((temp_v2 >> 5) | (temp_v2 << 0x1b));
        puVar6 = temp_v10;
      }
      temp_v0 = puVar6[1];
      for (temp_v4 = temp_v4 >> 1; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
        temp_v3 = (unsigned int)temp_v0 ^ ((temp_v2 >> 5) | (temp_v2 << 0x1b));
        temp_v0 = puVar6[3];
        temp_v2 = (unsigned int)puVar6[2] ^ ((temp_v3 >> 5) | (temp_v3 << 0x1b));
        puVar6 = puVar6 + 2;
      }
    }
    temp_v1 = temp_v1 - 1;
    if (-1 < temp_v1) {
      temp_v2 = (unsigned int)temp_v10[temp_v1] ^ ((temp_v2 >> 5) | (temp_v2 << 0x1b));
    }
    temp_v3 = param_1 + 0x48;
    FUN_00522100(temp_v3,temp_v17,temp_v11,&temp_v8,temp_v2,temp_v10,temp_v9 << 1);
    if ((int)temp_v3 < 0) {
      temp_v2 = (temp_v3 & 0x3fc00) >> 10;
      temp_v6 = temp_v2 == 0x11;
      if (temp_v6) {
        temp_v2 = temp_v3 & 0x3ff;
      }
      if (temp_v6 && temp_v2 == 0x6f) {
        temp_v8 = temp_v8 ^ 0x75bcd15;
        temp_v1 = temp_v9 * 2 >> 1;
        temp_v4 = temp_v1 - 1;
        if (0 < temp_v4) {
          puVar6 = temp_v10 + -1;
          if (-1 < temp_v9 << 0x1f) {
            temp_v8 = (unsigned int)*temp_v10 ^ ((temp_v8 >> 5) | (temp_v8 << 0x1b));
            puVar6 = temp_v10;
          }
          temp_v0 = puVar6[1];
          for (temp_v4 = temp_v4 >> 1; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
            temp_v3 = (unsigned int)temp_v0 ^ ((temp_v8 >> 5) | (temp_v8 << 0x1b));
            temp_v0 = puVar6[3];
            temp_v8 = (unsigned int)puVar6[2] ^ ((temp_v3 >> 5) | (temp_v3 << 0x1b));
            puVar6 = puVar6 + 2;
          }
        }
        temp_v1 = temp_v1 - 1;
        if (-1 < temp_v1) {
          temp_v8 = (unsigned int)temp_v10[temp_v1] ^ ((temp_v8 >> 5) | (temp_v8 << 0x1b));
        }
        FUN_00521ed4(temp_v5,temp_v18,temp_v16,&temp_v8,temp_v8,temp_v10,temp_v9 << 1);
        if ((temp_v5 & 0x80000000) == 0) {
          temp_v3 = 0xe0c04702;
        }
        else {
          temp_v2 = (temp_v5 & 0x3fc00) >> 10;
          temp_v6 = temp_v2 == 0x11;
          if (temp_v6) {
            temp_v2 = temp_v5 & 0x3ff;
          }
          temp_v3 = temp_v5;
          if (temp_v6 && temp_v2 == 0x6f) {
            temp_v3 = 0xc8804470;
          }
        }
      }
    }
    if (-1 < (int)temp_v3) {
      temp_v7 = temp_v13;
      temp_v3 = 0;
      unaff_r4 = temp_v12;
      unaff_r5 = iStack_68;
      unaff_r8 = uStack_64;
    }
  }
  if (-1 < (int)temp_v3) {
    piVar5 = (int *)nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
                              (param_1 + 0xb8);
    if (piVar5 != (int *)0x0) {
      temp_v5 = *(unsigned int *)(param_1 + 0xb0);
      *piVar5 = (int)"ꨜBꪴB";
      piVar5[5] = unaff_r5 + temp_v7 + (unsigned int)romwright_carry_4(unaff_r4,unaff_r8) +
                  (unsigned int)romwright_carry_4(unaff_r4 + unaff_r8,temp_v5);
      piVar5[2] = temp_v5 + unaff_r4;
      piVar5[1] = param_1;
      piVar5[3] = unaff_r5 + (unsigned int)romwright_carry_4(temp_v5,unaff_r4);
      piVar5[4] = unaff_r4 + unaff_r8 + temp_v5;
      piVar5[6] = *(int *)(param_1 + 4);
    }
    *param_2 = (unsigned int)piVar5;
    if ((piVar5 != (int *)0x0) &&
       (temp_v1 = (**(romwright_code **)(*piVar5 + 0x18))(piVar5,*(unsigned int *)(param_1 + 4)), temp_v1 < 0)) {
      (**(romwright_code **)(*(int *)*param_2 + 0x30))();
      *param_2 = 0;
    }
  }
  return;
}
