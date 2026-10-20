/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004772b0` (_code @ 0x4772b0, 0x48c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(int, int);
int FUN_00474734(unsigned int *, int);
int FUN_00476e58(unsigned int *, int, int);
int FUN_00477d10(unsigned int *, int, int);
int jobFlagsWorkStop(unsigned int *);
int FUN_0047bc90(unsigned int *, unsigned int *);
int FUN_0047bcdc(unsigned int *, int);
int FUN_0047daf4(unsigned int *);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern int g_aocMain; /* 0x570260 */

extern int FUN_001d10ac(unsigned int *);
extern int FUN_002e19f8(void);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_00474734. */
/* Supplied declaration required: FUN_00476e58. */
/* Supplied declaration required: FUN_00477d10. */
/* Supplied declaration required: jobFlagsWorkStop. */
/* Supplied declaration required: FUN_0047bc90. */
/* Supplied declaration required: FUN_0047bcdc. */
extern int isEmptyString(unsigned int *);
/* Supplied declaration required: FUN_0047daf4. */


/* WARNING: Type propagation algorithm not settling */

void FUN_004772b0(unsigned int *param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int temp_v3;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int temp_v4;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  FUN_0047daf4(&temp_v2);
  temp_v1 = g_aocMain;
  temp_v0 = param_1[2];
  if (temp_v0 != 4) {
    if ((int)temp_v0 < 4) {
      if (temp_v0 == 0) {
        temp_v1 = FUN_002e19f8();
        if (temp_v1 == 0) {
          return;
        }
        if ((*param_1 & 0x200) == 0) {
          return;
        }
        puVar3 = param_1 + 0x83;
        FUN_00474734(puVar3,0);
        param_1[2] = 1;
        param_1[0x82] = (unsigned int)puVar3;
        return;
      }
      if (temp_v0 != 1) {
        if (temp_v0 == 2) {
          if ((int *)param_1[0x82] != (int *)0x0) {
            (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
          }
          puVar3 = param_1 + 0x83;
          FUN_00474734(puVar3,6);
          param_1[0x82] = (unsigned int)puVar3;
          param_1[2] = 3;
          FUN_0047bcdc(param_1,1);
          return;
        }
        if (temp_v0 != 3) {
          return;
        }
        (**(romwright_code **)(*(int *)param_1[0x82] + 0xc))(&temp_v3);
        temp_v2 = temp_v3;
        uStack_54 = uStack_40;
        uStack_50 = uStack_3c;
        uStack_4c = uStack_38;
        uStack_48 = uStack_34;
        temp_v1 = isEmptyString(&temp_v2);
        if (temp_v1 != 0) {
          if ((int *)param_1[0x82] != (int *)0x0) {
            (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
          }
          FUN_0047bcdc(param_1,0);
          puVar3 = param_1 + 0x83;
          FUN_00474734(puVar3,0);
          param_1[2] = 4;
          param_1[0x82] = (unsigned int)puVar3;
          return;
        }
        temp_v1 = FUN_001d10ac(&temp_v2);
        if (temp_v1 == 0) {
          return;
        }
        jobFlagsWorkStop(param_1);
        param_1[2] = 9999;
        param_1[0x84] = temp_v2;
        param_1[0x85] = uStack_54;
        param_1[0x86] = uStack_50;
        param_1[0x87] = uStack_4c;
        param_1[0x88] = uStack_48;
        return;
      }
      if ((*param_1 & 0x200) == 0) {
        return;
      }
      (**(romwright_code **)(*(int *)param_1[0x82] + 0xc))(&temp_v3);
      temp_v2 = temp_v3;
      uStack_54 = uStack_40;
      uStack_50 = uStack_3c;
      uStack_4c = uStack_38;
      uStack_48 = uStack_34;
      temp_v1 = isEmptyString(&temp_v2);
      if (temp_v1 != 0) {
        param_1[2] = 2;
        return;
      }
      temp_v1 = FUN_001d10ac(&temp_v2);
      if (temp_v1 == 0) {
        return;
      }
      jobFlagsWorkStop(param_1);
    }
    else {
      if (temp_v0 == 5) {
        if ((int *)param_1[0x82] != (int *)0x0) {
          (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
        }
        puVar3 = param_1 + 0x83;
        FUN_00474734(puVar3,7);
        param_1[0x82] = (unsigned int)puVar3;
        puVar3[5] = (unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x688) + 0x9aa);
        param_1[2] = 6;
        return;
      }
      if (temp_v0 != 6) {
        if (temp_v0 != 7) {
          if (temp_v0 != 9999) {
            return;
          }
          FUN_00476e58(param_1,0xe,6);
          if (param_1[1] != 6) {
            return;
          }
        }
        else {
          temp_v0 = param_1[3];
          param_1[3] = temp_v0 - 1;
          if (0 < (int)(temp_v0 - 1)) {
            return;
          }
          param_1[1] = 6;
          param_1[2] = 0;
          if ((int *)param_1[0x82] != (int *)0x0) {
            (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
            param_1[0x82] = 0;
          }
        }
        FUN_00477d10(param_1,2,1);
        return;
      }
      (**(romwright_code **)(*(int *)param_1[0x82] + 0xc))(&temp_v3);
      temp_v2 = temp_v3;
      uStack_54 = uStack_40;
      uStack_50 = uStack_3c;
      uStack_4c = uStack_38;
      uStack_48 = uStack_34;
      temp_v1 = isEmptyString(&temp_v2);
      if (temp_v1 != 0) {
        param_1[1] = 10;
        param_1[2] = 0;
        if ((int *)param_1[0x82] != (int *)0x0) {
          (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
          param_1[0x82] = 0;
        }
        temp_v1 = g_aocMain;
        *(unsigned int *)(g_aocMain + 0x694) = 0;
        *(unsigned int *)(temp_v1 + 0x698) = 0;
        *(unsigned int *)(temp_v1 + 0x69c) = 0;
        *(unsigned int *)(temp_v1 + 0x6a0) = 0;
        *(unsigned int *)(temp_v1 + 0x6a4) = 0;
        *(unsigned int *)(temp_v1 + 0x6a8) = 0;
        *(unsigned int *)(temp_v1 + 0x6ac) = 0;
        *(unsigned int *)(temp_v1 + 0x6b0) = 0;
        *(unsigned int *)(temp_v1 + 0x6b4) = 0;
        *(unsigned int *)(temp_v1 + 0x6b8) = 0;
        *(unsigned int *)(temp_v1 + 0x6bc) = 0;
        *(unsigned int *)(temp_v1 + 0x6c0) = 0;
        *(unsigned int *)(temp_v1 + 0x6c4) = 0;
        *(unsigned int *)(temp_v1 + 0x6c8) = 0;
        *(unsigned int *)(temp_v1 + 0x6cc) = 0;
        *(unsigned int *)(temp_v1 + 0x6d0) = 0;
        sysMemClear(temp_v1 + 0x6d4,0x80);
        return;
      }
      temp_v1 = FUN_001d10ac(&temp_v2);
      if (temp_v1 == 0) {
        return;
      }
      jobFlagsWorkStop(param_1);
    }
  }
  else {
    if ((*param_1 & 0x200) == 0) {
      return;
    }
    (**(romwright_code **)(*(int *)param_1[0x82] + 0xc))(&temp_v3);
    temp_v2 = temp_v3;
    uStack_54 = uStack_40;
    uStack_50 = uStack_3c;
    uStack_4c = uStack_38;
    uStack_48 = uStack_34;
    temp_v1 = isEmptyString(&temp_v2);
    if (temp_v1 != 0) {
      param_1[2] = 5;
      FUN_0047bcdc(param_1,1);
      return;
    }
    temp_v1 = FUN_001d10ac(&temp_v2);
    if (temp_v1 == 0) {
      return;
    }
    jobFlagsWorkStop(param_1);
  }
  if ((temp_v2 & 0xff) == 0x66) {
    temp_v4 = temp_v2;
    uStack_2c = uStack_54;
    uStack_28 = uStack_50;
    uStack_24 = uStack_4c;
    uStack_20 = uStack_48;
    FUN_0047bc90(param_1,&temp_v4);
    return;
  }
  if ((temp_v2 & 0xff) == 0x67) {
    param_1[2] = 7;
    param_1[3] = 3;
    return;
  }
  param_1[2] = 9999;
  param_1[0x84] = temp_v2;
  param_1[0x85] = uStack_54;
  param_1[0x86] = uStack_50;
  param_1[0x87] = uStack_4c;
  param_1[0x88] = uStack_48;
  return;
}

} /* extern "C" */
