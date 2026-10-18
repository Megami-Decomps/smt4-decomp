/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00148768` (_code @ 0x148768, 0x578 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp74; /* 0x74: local_74 */
} param_2_stack;

/* Supplied declaration required: FUN_002acd38. */
extern int FUN_002c3290(int);


int FUN_00148768(int *param_1,int *param_2)

{
/* irregular: 14 goto(s); 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int *puVar12;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  
  temp_v13 = 0;
  puVar12 = (unsigned int *)*param_1;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v0 = *puVar12;
  temp_v8 = 0;
  temp_v1 = temp_v0 - 0x800001;
  if (temp_v0 != 0x800001) {
    if ((int)temp_v0 < 0x800001) {
      if (temp_v0 == 0x100000) {
        temp_v6 = 0x54;
      }
      else {
        if ((int)temp_v0 < 0x100001) {
          if (temp_v0 == 0x20000) {
            temp_v6 = 0x24;
            goto LAB_00148980;
          }
          if ((int)temp_v0 < 0x20001) {
            if (temp_v0 != 0x80000000) {
              if (temp_v0 != 0) goto LAB_00148980;
              goto LAB_00148874;
            }
          }
          else {
            if (temp_v0 == 0x40000) goto LAB_0014897c;
            if (temp_v0 != 0x80000) goto LAB_00148980;
          }
        }
        else {
          if (temp_v0 == 0x200000) {
            temp_v6 = 0x2c;
            goto LAB_00148980;
          }
          temp_v11 = temp_v0 == 0x400000;
          if (!temp_v11) {
            temp_v0 = temp_v0 - 0x400001;
            temp_v11 = temp_v0 == 0;
          }
          if (!temp_v11) {
            if (temp_v0 != 0x3fffff) goto LAB_00148980;
            goto LAB_0014897c;
          }
        }
LAB_0014887c:
        temp_v6 = 0x14;
      }
      goto LAB_00148980;
    }
    if (temp_v1 == 0x37fffff) {
      temp_v6 = 0x20;
      if ((puVar12 != (unsigned int *)0x0) && ((*puVar12 & 0x4000000) == 0)) {
        puVar12 = (unsigned int *)0x0;
      }
      if (puVar12[4] != 0) {
        temp_v1 = (int)puVar12 + puVar12[4] + 0x10;
      }
      else {
        temp_v1 = 0;
      }
      temp_v13 = FUN_002c3290(temp_v1);
      temp_v13 = temp_v13 + 1;
      temp_v0 = puVar12[5];
      puVar2 = puVar12 + 5;
      if (temp_v0 != 0) {
        puVar2 = (unsigned int *)((int)puVar2 + temp_v0);
      }
      temp_v2 = puVar12[6];
      if (temp_v0 == 0) {
        puVar2 = (unsigned int *)0x0;
      }
      if (temp_v2 != 0) {
        piVar3 = (int *)(temp_v2 + (int)(puVar12 + 6));
      }
      else {
        piVar3 = (int *)0x0;
      }
      if (puVar2 != (unsigned int *)0x0) {
        temp_v0 = *puVar2;
        if (temp_v0 == 0x8000000) {
          temp_v7 = 0x18;
        }
        else if ((int)temp_v0 < 0x8000000) {
          if (temp_v0 == 0x80000000) {
            temp_v7 = 0x1c;
          }
          else if (temp_v0 != 0) {
            if (temp_v0 == 0x4000000) {
              temp_v7 = 0x28;
            }
          }
          else {
            temp_v7 = 8;
          }
        }
        else if (temp_v0 != 0x10000000) {
          if (temp_v0 == 0x20000000) {
            temp_v7 = 0x24;
          }
          else if (temp_v0 == 0x40000000) {
            temp_v7 = 0x28;
          }
        }
        else {
          temp_v7 = 8;
        }
      }
      if (piVar3 != (int *)0x0) {
        temp_v1 = *piVar3;
        if (temp_v1 != -0x80000000) {
          if (temp_v1 == 0x10000000 || temp_v1 == 0x20000000) {
            temp_v8 = 0x10;
          }
          else if (temp_v1 == 0x40000000) {
            temp_v8 = 4;
          }
        }
        else {
          temp_v8 = 4;
        }
      }
      goto LAB_00148980;
    }
    if (temp_v1 >= 0x37fffff) {
      if ((temp_v1 == 0x77fffff || temp_v1 == 0xf7fffff) || temp_v1 == 0x1f7fffff) {
        temp_v6 = 0x20;
      }
      else if (temp_v1 == 0x3f7fffff) {
LAB_00148874:
        temp_v6 = 0x10;
      }
      goto LAB_00148980;
    }
    if (temp_v1 != 1 && temp_v1 != 3) {
      if (temp_v1 == 0x7fffff) {
        temp_v6 = 0x18;
        goto LAB_00148980;
      }
      if (temp_v1 != 0x17fffff) goto LAB_00148980;
      goto LAB_0014887c;
    }
  }
LAB_0014897c:
  temp_v6 = 0x1c;
LAB_00148980:
  temp_v12 = 0;
  temp_v14 = 0;
  temp_v10 = 0;
  temp_v9 = 0;
  temp_v1 = *(int *)(*param_1 + 0xc);
  if (temp_v1 != 0) {
    temp_v1 = temp_v1 + *param_1 + 0xc;
  }
  else {
    temp_v1 = 0;
  }
  if (temp_v1 != 0) {
    temp_v10 = *(int *)(temp_v1 + 0x14);
    temp_v14 = *(int *)(temp_v1 + 0x1c) << 2;
    temp_v4 = *(int *)(temp_v1 + 4);
    if (temp_v4 != 0) {
      piVar3 = (int *)(temp_v1 + 4 + temp_v4);
    }
    else {
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      temp_v4 = *piVar3;
      if ((temp_v4 == -0x80000000 || temp_v4 == 0) || temp_v4 == 0x20000000) {
        temp_v9 = 8;
      }
      if (((temp_v4 != -0x80000000 && temp_v4 != 0) && temp_v4 != 0x20000000) && (temp_v4 == 0x40000000)) {
        temp_v9 = 0x10;
      }
    }
    temp_v12 = temp_v10 * 4 + 0x24 + *(int *)(temp_v1 + 0x1c) * 4;
  }
  temp_v2 = (temp_v10 + 3U) & 0xfffffffc;
  temp_v0 = (temp_v13 + 3U) & 0xfffffffc;
  temp_v1 = (**(romwright_code **)(*param_2 + 8))
                    (param_2,temp_v8 + temp_v7 + temp_v9 + temp_v12 + temp_v6 + temp_v2 + temp_v14 + temp_v0,
                     4);
  if (temp_v1 != 0) {
    FUN_002acd38(temp_v1,*param_1,temp_v6);
    temp_v6 = temp_v6 + temp_v1;
    temp_v4 = temp_v6;
    if (temp_v12 != 0) {
      temp_v3 = *(int *)(*param_1 + 0xc);
      if (temp_v3 == 0) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = temp_v3 + *param_1 + 0xc;
      }
      FUN_002acd38(temp_v6,temp_v3,temp_v12);
      piVar3 = (int *)(temp_v1 + 0xc);
      if (temp_v6 != 0) {
        *piVar3 = temp_v6 - (int)piVar3;
      }
      else {
        *piVar3 = 0;
      }
      temp_v4 = temp_v6 + temp_v12;
      if (0 < temp_v10) {
        if (*(int *)(temp_v3 + 0x18) != 0) {
          temp_v5 = *(int *)(temp_v3 + 0x18) + temp_v3 + 0x18;
        }
        else {
          temp_v5 = 0;
        }
        FUN_002acd38(temp_v4,temp_v5,temp_v10);
        piVar3 = (int *)(temp_v6 + 0x18);
        if (temp_v4 != 0) {
          *piVar3 = temp_v4 - (int)piVar3;
        }
        else {
          *piVar3 = 0;
        }
        temp_v4 = temp_v4 + temp_v2;
      }
      if (0 < temp_v14) {
        if (*(int *)(temp_v3 + 0x20) != 0) {
          temp_v10 = *(int *)(temp_v3 + 0x20) + temp_v3 + 0x20;
        }
        else {
          temp_v10 = 0;
        }
        FUN_002acd38(temp_v4,temp_v10,temp_v14);
        piVar3 = (int *)(temp_v6 + 0x20);
        if (temp_v4 != 0) {
          *piVar3 = temp_v4 - (int)piVar3;
        }
        else {
          *piVar3 = 0;
        }
        temp_v4 = temp_v4 + temp_v14;
      }
      if (temp_v9 != 0) {
        temp_v10 = *(int *)(temp_v3 + 4);
        if (temp_v10 != 0) {
          temp_v10 = temp_v10 + temp_v3 + 4;
        }
        else {
          temp_v10 = 0;
        }
        FUN_002acd38(temp_v4,temp_v10,temp_v9);
        piVar3 = (int *)(temp_v6 + 4);
        if (temp_v4 != 0) {
          *piVar3 = temp_v4 - (int)piVar3;
        }
        else {
          *piVar3 = 0;
        }
        temp_v4 = temp_v4 + temp_v9;
      }
    }
    param_1 = (int *)*param_1;
    if (*param_1 == 0x4000000) {
      if (0 < temp_v13) {
        if (param_1[4] != 0) {
          temp_v6 = (int)param_1 + param_1[4] + 0x10;
        }
        else {
          temp_v6 = 0;
        }
        FUN_002acd38(temp_v4,temp_v6,temp_v13);
        piVar3 = (int *)(temp_v1 + 0x10);
        if (temp_v4 != 0) {
          *piVar3 = temp_v4 - (int)piVar3;
        }
        else {
          *piVar3 = 0;
        }
        temp_v4 = temp_v4 + temp_v0;
      }
      if (temp_v7 != 0) {
        if (param_1[5] != 0) {
          temp_v6 = (int)param_1 + param_1[5] + 0x14;
        }
        else {
          temp_v6 = 0;
        }
        FUN_002acd38(temp_v4,temp_v6,temp_v7);
        piVar3 = (int *)(temp_v1 + 0x14);
        if (temp_v4 != 0) {
          *piVar3 = temp_v4 - (int)piVar3;
        }
        else {
          *piVar3 = 0;
        }
        temp_v4 = temp_v4 + temp_v7;
      }
      if (temp_v8 != 0) {
        temp_v6 = param_1[6];
        if (temp_v6 != 0) {
          temp_v6 = temp_v6 + (int)(param_1 + 6);
        }
        else {
          temp_v6 = 0;
        }
        FUN_002acd38(temp_v4,temp_v6,temp_v8);
        piVar3 = (int *)(temp_v1 + 0x18);
        if (temp_v4 != 0) {
          *piVar3 = temp_v4 - (int)piVar3;
        }
        else {
          *piVar3 = 0;
        }
      }
    }
  }
  return temp_v1;
}
