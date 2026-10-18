/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4480` (_code @ 0x1f4480, 0x3e4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001f4480_arg3 fn_001f4480_arg3;
struct fn_001f4480_arg3 {
    undefined1 field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x5c];
    undefined1 field_0x5d; /* +0x5d */
    undefined1 field_0x5e; /* +0x5e */
    undefined1 field_0x5f; /* +0x5f */
};

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int spD4; /* 0xd4: local_d4 */
} param_4_stack;

extern unsigned char LAB_001f4868; /* 0x1f4868 */
extern unsigned char LAB_001f4878; /* 0x1f4878 */
extern unsigned char LAB_001f4894; /* 0x1f4894 */
extern unsigned char LAB_001f48b0; /* 0x1f48b0 */
extern unsigned char LAB_001f48c8; /* 0x1f48c8 */

/* Supplied declaration required: FUN_00258020. */
extern int FUN_00258040(void);
extern int FUN_00258074(unsigned char);
/* Supplied declaration required: FUN_00269e34. */
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_002b67e0. */
/* Supplied declaration required: FUN_002be7fc. */
extern unsigned int FUN_002c3290(fn_001f4480_arg3 *);


void FUN_001f4480(int param_1,int param_2,unsigned int param_3,fn_001f4480_arg3 *param_4)

{
/* irregular: 9 goto(s); 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  char *pcVar6;
  unsigned char *unaff_r4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char *pbVar10;
  unsigned char temp_v8 [28];
  unsigned char temp_v9 [96];
  unsigned char temp_v10 [8];
  unsigned char temp_v11 [8];
  unsigned char temp_v12 [20];
  int iStack_34;
  int temp_v13;
  unsigned int uStack_2c;
  fn_001f4480_arg3 *pfStack_28;
  
  pfStack_28 = param_4;
  uStack_2c = param_3;
  temp_v13 = param_2;
  iStack_34 = param_1;
  temp_v5 = 0;
  pbVar10 = temp_v8;
  temp_v6 = 0;
  temp_v7 = 0;
  if (param_1 != 0) {
    unaff_r4 = (unsigned char *)0x0;
  }
  temp_v8[0] = 0xb;
  temp_v8[1] = 0xc;
  temp_v8[2] = 0xd;
  temp_v8[3] = 0xe;
  temp_v8[4] = 0xf;
  temp_v8[5] = 0;
  temp_v8[6] = 0;
  temp_v8[7] = 0;
  if (param_1 != 0) {
    do {
      temp_v3 = FUN_00258074(pbVar10[(int)unaff_r4]);
      if (temp_v3 != 1) {
        if (temp_v3 == 2) {
          temp_v11[temp_v6] = pbVar10[(int)unaff_r4];
          temp_v6 = temp_v6 + 1;
        }
        else {
          temp_v3 = FUN_00258040();
          if (temp_v3 < 100) {
            temp_v12[temp_v7] = pbVar10[(int)unaff_r4];
            temp_v7 = temp_v7 + 1;
          }
        }
      }
      else {
        temp_v10[temp_v5] = pbVar10[(int)unaff_r4];
        temp_v5 = temp_v5 + 1;
      }
      unaff_r4 = unaff_r4 + 1;
    } while (unaff_r4 < (unsigned char *)0x5);
  }
  else if (param_2 != 0) {
    unaff_r4 = (unsigned char *)0x0;
    do {
      temp_v3 = temp_v13;
      FUN_00269e34(temp_v13,pbVar10[(int)unaff_r4]);
      if (temp_v3 != 1) {
        if (temp_v3 != 2) {
          temp_v3 = temp_v13;
          FUN_00258020(temp_v13,pbVar10[(int)unaff_r4]);
          if (temp_v3 < 100) {
            temp_v12[temp_v7] = pbVar10[(int)unaff_r4];
            temp_v7 = temp_v7 + 1;
          }
        }
        else {
          temp_v11[temp_v6] = pbVar10[(int)unaff_r4];
          temp_v6 = temp_v6 + 1;
        }
      }
      else {
        temp_v10[temp_v5] = pbVar10[(int)unaff_r4];
        temp_v5 = temp_v5 + 1;
      }
      unaff_r4 = unaff_r4 + 1;
    } while (unaff_r4 < (unsigned char *)0x5);
  }
  else {
    param_3 = param_3 & 0xffff;
    FUN_002b087c();
    temp_v4 = 0;
    unaff_r4 = temp_v10;
    do {
      temp_v0 = pbVar10[temp_v4];
      temp_v1 = *(unsigned short *)(param_3 + (unsigned int)temp_v0 * 2 + 0x24);
      temp_v2 = temp_v1 >> 10;
      if (temp_v2 == 1) {
        unaff_r4[temp_v5] = temp_v0;
        temp_v5 = temp_v5 + 1;
      }
      else if (temp_v2 == 2) {
        temp_v11[temp_v6] = temp_v0;
        temp_v6 = temp_v6 + 1;
      }
      else if ((temp_v1 & 0x3ff) < 100) {
        temp_v12[temp_v7] = temp_v0;
        temp_v7 = temp_v7 + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 5);
  }
  if (temp_v5 != 0) {
    unaff_r4 = (unsigned char *)0x0;
  }
  if (0 < temp_v5) {
    pbVar10 = temp_v10;
  }
  param_4->field_0x0 = 0;
  if (temp_v5 != 0) {
    if (0 < temp_v5) {
LAB_001f4640:
      switch(pbVar10[(int)unaff_r4]) {
      case 0xb:
        FUN_002be7fc(temp_v9,"澂辂覂鎂辂躂");
        goto LAB_001f4690;
      case 0xc:
        pcVar6 = "澂膂躂覂莂";
        break;
      case 0xd:
        pcVar6 = "犂貂薂薂邂";
        break;
      case 0xe:
        pcVar6 = "憂覂躂蒂";
        break;
      case 0xf:
        pcVar6 = (char *)0x40267c;
        break;
      default:
        goto LAB_001f4690;
      }
      FUN_002be7fc(temp_v9,pcVar6);
LAB_001f4690:
      FUN_002b67e0(param_4,temp_v9);
      unaff_r4 = unaff_r4 + 1;
      if ((int)unaff_r4 < temp_v5) {
        if (unaff_r4 != (unsigned char *)0x0) {
          FUN_002b67e0(param_4,&LAB_001f4868);
        }
        goto LAB_001f4640;
      }
    }
    FUN_002b67e0(param_4,&LAB_001f4878);
  }
  if (temp_v7 != 0) {
    temp_v3 = 0;
    if (0 < temp_v7) {
LAB_001f46ec:
      switch(temp_v12[temp_v3]) {
      case 0xb:
        FUN_002be7fc(temp_v9,"澂辂覂鎂辂躂");
        goto LAB_001f473c;
      case 0xc:
        pcVar6 = "澂膂躂覂莂";
        break;
      case 0xd:
        pcVar6 = "犂貂薂薂邂";
        break;
      case 0xe:
        pcVar6 = "憂覂躂蒂";
        break;
      case 0xf:
        pcVar6 = (char *)0x40267c;
        break;
      default:
        goto LAB_001f473c;
      }
      FUN_002be7fc(temp_v9,pcVar6);
LAB_001f473c:
      FUN_002b67e0(param_4,temp_v9);
      temp_v3 = temp_v3 + 1;
      if (temp_v3 < temp_v7) {
        if (temp_v3 != 0) {
          FUN_002b67e0(param_4,&LAB_001f4868);
        }
        goto LAB_001f46ec;
      }
    }
    FUN_002b67e0(param_4,&LAB_001f4894);
  }
  if (temp_v6 != 0) {
    temp_v3 = 0;
    if (0 < temp_v6) {
LAB_001f4798:
      switch(temp_v11[temp_v3]) {
      case 0xb:
        FUN_002be7fc(temp_v9,"澂辂覂鎂辂躂");
        goto LAB_001f47e8;
      case 0xc:
        pcVar6 = "澂膂躂覂莂";
        break;
      case 0xd:
        pcVar6 = "犂貂薂薂邂";
        break;
      case 0xe:
        pcVar6 = "憂覂躂蒂";
        break;
      case 0xf:
        pcVar6 = (char *)0x40267c;
        break;
      default:
        goto LAB_001f47e8;
      }
      FUN_002be7fc(temp_v9,pcVar6);
LAB_001f47e8:
      FUN_002b67e0(param_4,temp_v9);
      temp_v3 = temp_v3 + 1;
      if (temp_v3 < temp_v6) {
        if (temp_v3 != 0) {
          FUN_002b67e0(param_4,&LAB_001f4868);
        }
        goto LAB_001f4798;
      }
    }
    FUN_002b67e0(param_4,&LAB_001f48b0);
  }
  if ((temp_v5 == 0 && temp_v7 == 0) && temp_v6 == 0) {
    FUN_002b67e0(param_4,&LAB_001f48c8);
  }
  temp_v4 = FUN_002c3290(param_4);
  if (temp_v4 >= 0x5d) {
    param_4->field_0x5d = 0;
    param_4->field_0x5e = 0;
    param_4->field_0x5f = 0;
  }
  return;
}
