/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cb610` (_code @ 0x3cb610, 0x784 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern int DAT_0043427c; /* 0x43427c */
extern unsigned int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_002298e8. */
extern int FUN_00229a34(void);
/* Supplied declaration required: FUN_00229aa8. */
/* Supplied declaration required: FUN_00229bd0. */
/* Supplied declaration required: FUN_0022a76c. */
extern int FUN_0023ec3c(unsigned int);
/* Supplied declaration required: FUN_0023f640. */
extern unsigned int FUN_00245e2c(unsigned int);
/* Supplied declaration required: FUN_002465c0. */
/* Supplied declaration required: FUN_00246ea4. */
/* Supplied declaration required: FUN_00246f90. */
extern unsigned int FUN_00249b0c(int);
/* Supplied declaration required: FUN_00250960. */
/* Supplied declaration required: FUN_00255398. */
/* Supplied declaration required: FUN_002553c0. */
/* Supplied declaration required: FUN_0027e854. */
extern int FUN_0027e92c(unsigned int);
/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_003c0810. */
extern int FUN_003c85dc(void);
extern int FUN_003c87f0(void);
extern int FUN_003c881c(void);
extern int FUN_003c8aa8(void);
extern unsigned int FUN_003c8ae0(void);
/* Supplied declaration required: FUN_003cf20c. */
/* Supplied declaration required: FUN_003d0040. */
/* Supplied declaration required: FUN_003d0624. */
/* Supplied declaration required: FUN_003ddf20. */
/* Supplied declaration required: FUN_003de984. */


unsigned int FUN_003cb610(int *param_1,unsigned int *param_2)

{
/* irregular: 2 goto(s); 19 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int *piVar6;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned int *temp_v14;
  
  temp_v2 = FUN_0027e92c(DAT_00434290);
  if (0 < temp_v2) {
    return 0;
  }
  if ((*param_2 & 0x1080) == 0) {
    temp_v2 = 0;
    do {
      if (((*(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114 + 0x50) & 1) != 0) &&
         (temp_v3 = FUN_00229aa8(param_1,param_2,temp_v2), temp_v3 == 0)) {
        temp_v3 = *param_1;
        FUN_00282b94(temp_v3,temp_v2);
        if ((*(short *)(temp_v3 + 0x1c8) != 0) && (*(short *)(temp_v3 + 0x1c6) == 0)) {
          if ((*(int *)(*param_1 + 0x48b8) != 0) && (temp_v2 = FUN_00229a34(), temp_v2 != 0)) {
            return 0;
          }
          break;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x6d);
  }
  temp_v1 = 0;
  temp_v11 = 0;
  FUN_0023f640(*param_1);
  FUN_003de984(0,param_2,5);
  temp_v2 = 0;
  do {
    temp_v3 = *(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114;
    if ((temp_v3 != 0) && (temp_v7 = *(unsigned int *)(temp_v3 + 0x50), (temp_v7 & 1) != 0 && (temp_v7 & 2) != 0))
    {
      FUN_0027e854();
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x6d);
  *(unsigned int *)(*param_1 + 0x49e4) = 0;
  FUN_00250960(*param_1);
  if ((*param_2 & 0x2000) != 0) {
    *param_2 = *param_2 & 0xffffdfff;
    *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x14;
    return 1;
  }
  temp_v9 = 1;
  if (*(short *)(param_2[9] + 0x62) < 4) {
    temp_v7 = 4;
    temp_v2 = 0x32;
  }
  else {
    temp_v7 = 0;
    temp_v2 = 4;
  }
  temp_v8 = temp_v7 + temp_v2;
  if (temp_v7 < temp_v8) {
    do {
      if (((*(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v7 * 0x114 + 0x50) & 1) != 0) &&
         (temp_v2 = FUN_00229aa8(param_1,param_2,temp_v7), temp_v2 == 0)) goto LAB_003cb838;
      temp_v7 = temp_v7 + 1;
    } while ((int)temp_v7 < (int)temp_v8);
  }
  temp_v9 = 0;
LAB_003cb838:
  if (*(int *)(*param_1 + 0x88) != 0) {
    temp_v9 = 0;
  }
  if ((*param_2 & 4) == 0) {
    if (temp_v9) {
      FUN_003cf20c(param_1,param_2,temp_v11);
    }
    temp_v2 = 0;
    temp_v13 = 0;
    temp_v12 = 0;
    do {
      if (((*(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114 + 0x50) & 1) != 0) &&
         (temp_v3 = FUN_00229aa8(param_1,param_2,temp_v2), temp_v3 == 0)) {
        puVar5 = (unsigned int *)*param_1;
        FUN_00282b94(puVar5,temp_v2);
        temp_v14 = puVar5;
        if (*(short *)((int)puVar5 + 0x1ca) != 0) {
          FUN_00246ea4(0,param_2,*(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114,0x10);
          *(unsigned short *)((int)puVar5 + 0x1ca) = 0;
          *(unsigned short *)(puVar5 + 0x72) = (unsigned short)puVar5[0x72] & 0xffef;
        }
        else if (((short)puVar5[0x72] == 0) || (*(short *)((int)puVar5 + 0x1c6) != 0)) {
          if ((*(unsigned short *)((int)puVar5 + 0x1c6) & 0x10) != 0) {
            temp_v0 = *(short *)((int)puVar5 + 0x6e);
            if ((unsigned int)(int)temp_v0 < 4) {
              *(unsigned char *)((int)&temp_v12 + (int)temp_v0) = 1;
            }
          }
        }
        else if (temp_v9) {
          FUN_00246f90(0,param_2,*(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114,0x10,0);
          FUN_0022a76c(0x19,temp_v14,1);
          *(unsigned short *)(puVar5 + 0x72) = 0;
          temp_v1 = 1;
          if ((*temp_v14 & 10) != 0) {
            temp_v0 = *(short *)((int)temp_v14 + 0x6e);
            temp_v13 = 1;
            if ((unsigned int)(int)temp_v0 < 4) {
              *(unsigned char *)((int)&temp_v12 + (int)temp_v0) = 1;
            }
          }
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x6d);
    temp_v7 = 0;
    if (temp_v13 != 0) {
      temp_v7 = temp_v12 & 0xff;
    }
    if (temp_v13 != 0 && temp_v7 != 0) {
      temp_v9 = ((temp_v12 >> 8) & 0xff) != 0;
      temp_v7 = 0;
      if (temp_v9) {
        temp_v7 = (temp_v12 >> 0x10) & 0xff;
      }
      temp_v10 = temp_v7 != 0;
      if (temp_v9 && temp_v10) {
        temp_v7 = temp_v12 >> 0x18;
      }
      if ((temp_v9 && temp_v10) && temp_v7 != 0) {
        FUN_003c0810(0x19);
        FUN_00229bd0(0,param_2,0,0x21,0);
      }
    }
    if (!temp_v1) {
      temp_v3 = 0;
      temp_v2 = 0;
      do {
        puVar5 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v2 * 0x288);
        temp_v7 = *puVar5;
        if ((((temp_v7 & 1) != 0) && ((temp_v7 & 0x40) == 0)) &&
           ((*(unsigned short *)((int)puVar5 + 0x1c6) & 0x10) != 0)) {
          temp_v3 = temp_v3 + 1;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
      if (temp_v3 == 4) {
        temp_v1 = 1;
      }
    }
  }
  temp_v2 = FUN_00229aa8(param_1,param_2,(int)*(short *)(param_2[9] + 0x62));
  if ((temp_v2 == 0) && ((*(unsigned short *)(param_2[10] + 0xfa) & 0x20) != 0)) {
    if (*(short *)(param_2[9] + 0x62) < 4) {
      temp_v7 = 4;
      temp_v2 = 0x32;
    }
    else {
      temp_v7 = 0;
      temp_v2 = 4;
    }
    temp_v8 = temp_v7 + temp_v2;
    if (temp_v7 < temp_v8) {
      do {
        if (((*(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v7 * 0x114 + 0x50) & 1) != 0) &&
           (temp_v2 = FUN_00229aa8(param_1,param_2,temp_v7), temp_v2 == 0)) {
          if ((*(int *)(*param_1 + 0x88) == 0) &&
             (((*(unsigned int *)param_2[8] & 0x40) == 0 && (*(unsigned int *)param_2[8] & 0x20000000) == 0 &&
              ((*param_2 & 4) == 0)))) {
            temp_v2 = (int)((int)*(short *)(param_2[10] + 0xea) +
                         ((unsigned int)((int)*(short *)(param_2[10] + 0xea) >> 0x1f) >> 0x1d)) >> 3;
            if (temp_v2 >= 101) {
              temp_v2 = FUN_0023ec3c(0xf);
              temp_v2 = temp_v2 + 100;
            }
            piVar6 = param_1;
            FUN_003d0040(param_1,param_2,temp_v2);
            if (piVar6 != (int *)0x0) {
              *param_2 = *param_2 | 0x10000;
            }
            temp_v1 = 1;
          }
          break;
        }
        temp_v7 = temp_v7 + 1;
      } while ((int)temp_v7 < (int)temp_v8);
    }
  }
  temp_v2 = 0;
  do {
    puVar5 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v2 * 0x288);
    if ((((*puVar5 & 1) != 0) && ((*puVar5 & 0x40) == 0)) &&
       ((*(unsigned short *)((int)puVar5 + 0x1c6) & 0x400) != 0)) {
      FUN_0022a76c(0x16,puVar5,1);
      FUN_002465c0(0,param_2,puVar5);
      temp_v1 = 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x6d);
  temp_v7 = FUN_00249b0c(*param_1);
  if (temp_v7 != 0) {
    temp_v0 = *(short *)(temp_v7 + 8);
    temp_v3 = *(int *)(*param_1 + 0x1e98);
    temp_v4 = FUN_00255398(0,2);
    temp_v5 = FUN_003c85dc();
    temp_v2 = 0;
    if (temp_v5 != 0) {
      temp_v2 = temp_v4;
    }
    if (!((temp_v5 == 0 || temp_v4 == 0) || temp_v2 < 0)) {
      temp_v2 = FUN_003c87f0();
      if (temp_v2 == 0) {
        *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1e;
        return 1;
      }
      temp_v11 = 0xc;
    }
    else {
      temp_v2 = FUN_003c881c();
      temp_v8 = FUN_003c8ae0();
      temp_v6 = FUN_00255398((int)*(short *)(param_2[9] + 0x62),0x1d);
      if ((temp_v2 == 0) || (temp_v6 < temp_v8)) goto LAB_003cbd4c;
      temp_v11 = FUN_00245e2c(0x1d);
      FUN_002553c0((int)*(short *)(param_2[9] + 0x62),0x1d,temp_v11);
      temp_v12 = temp_v7;
      FUN_003d0624(param_1,param_2,temp_v2,0x19,temp_v3 + temp_v0 * 0x114);
      temp_v2 = FUN_003c8aa8();
      if (temp_v2 == 0) {
        *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1e;
        return 1;
      }
      temp_v11 = 0xffffffff;
    }
    FUN_003ddf20(5,param_2,temp_v2,temp_v11);
  }
  else {
LAB_003cbd4c:
    if (!temp_v1) {
      FUN_002298e8(param_1,param_2);
      return 1;
    }
  }
  *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1e;
  return 1;
}
