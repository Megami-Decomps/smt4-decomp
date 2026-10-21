/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4568` (_code @ 0x1f4568, 0x3e4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int randomGetLowerTenBits(int, int);
int randomGetUpperSixBits(int, int);
int dataTable00FindById(void);
int libc_strcat(...);
int textFormatBuffer(...);

typedef struct fn_001f4568_arg3 fn_001f4568_arg3;
struct fn_001f4568_arg3 {
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

extern unsigned char LAB_001f4950; /* 0x1f4950 */
extern unsigned char LAB_001f4960; /* 0x1f4960 */
extern unsigned char LAB_001f497c; /* 0x1f497c */
extern unsigned char LAB_001f4998; /* 0x1f4998 */
extern unsigned char LAB_001f49b0; /* 0x1f49b0 */

/* Supplied declaration required: randomGetLowerTenBits. */
extern int FUN_00257e0c(void);
extern int FUN_00257e40(unsigned char);
/* Supplied declaration required: randomGetUpperSixBits. */
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: libc_strcat. */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int libc_strlen(fn_001f4568_arg3 *);


void FUN_001f4568(int param_1,int param_2,unsigned int param_3,fn_001f4568_arg3 *param_4)

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
  fn_001f4568_arg3 *pfStack_28;
  
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
      temp_v3 = FUN_00257e40(pbVar10[(int)unaff_r4]);
      if (temp_v3 != 1) {
        if (temp_v3 == 2) {
          temp_v11[temp_v6] = pbVar10[(int)unaff_r4];
          temp_v6 = temp_v6 + 1;
        }
        else {
          temp_v3 = FUN_00257e0c();
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
      randomGetUpperSixBits(temp_v13,pbVar10[(int)unaff_r4]);
      if (temp_v3 != 1) {
        if (temp_v3 != 2) {
          temp_v3 = temp_v13;
          randomGetLowerTenBits(temp_v13,pbVar10[(int)unaff_r4]);
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
    dataTable00FindById();
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
LAB_001f4728:
      switch(pbVar10[(int)unaff_r4]) {
      case 0xb:
        textFormatBuffer(temp_v9,"澂辂覂鎂辂躂");
        goto LAB_001f4778;
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
        pcVar6 = (char *)0x40262c;
        break;
      default:
        goto LAB_001f4778;
      }
      textFormatBuffer(temp_v9,pcVar6);
LAB_001f4778:
      libc_strcat(param_4,temp_v9);
      unaff_r4 = unaff_r4 + 1;
      if ((int)unaff_r4 < temp_v5) {
        if (unaff_r4 != (unsigned char *)0x0) {
          libc_strcat(param_4,&LAB_001f4950);
        }
        goto LAB_001f4728;
      }
    }
    libc_strcat(param_4,&LAB_001f4960);
  }
  if (temp_v7 != 0) {
    temp_v3 = 0;
    if (0 < temp_v7) {
LAB_001f47d4:
      switch(temp_v12[temp_v3]) {
      case 0xb:
        textFormatBuffer(temp_v9,"澂辂覂鎂辂躂");
        goto LAB_001f4824;
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
        pcVar6 = (char *)0x40262c;
        break;
      default:
        goto LAB_001f4824;
      }
      textFormatBuffer(temp_v9,pcVar6);
LAB_001f4824:
      libc_strcat(param_4,temp_v9);
      temp_v3 = temp_v3 + 1;
      if (temp_v3 < temp_v7) {
        if (temp_v3 != 0) {
          libc_strcat(param_4,&LAB_001f4950);
        }
        goto LAB_001f47d4;
      }
    }
    libc_strcat(param_4,&LAB_001f497c);
  }
  if (temp_v6 != 0) {
    temp_v3 = 0;
    if (0 < temp_v6) {
LAB_001f4880:
      switch(temp_v11[temp_v3]) {
      case 0xb:
        textFormatBuffer(temp_v9,"澂辂覂鎂辂躂");
        goto LAB_001f48d0;
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
        pcVar6 = (char *)0x40262c;
        break;
      default:
        goto LAB_001f48d0;
      }
      textFormatBuffer(temp_v9,pcVar6);
LAB_001f48d0:
      libc_strcat(param_4,temp_v9);
      temp_v3 = temp_v3 + 1;
      if (temp_v3 < temp_v6) {
        if (temp_v3 != 0) {
          libc_strcat(param_4,&LAB_001f4950);
        }
        goto LAB_001f4880;
      }
    }
    libc_strcat(param_4,&LAB_001f4998);
  }
  if ((temp_v5 == 0 && temp_v7 == 0) && temp_v6 == 0) {
    libc_strcat(param_4,&LAB_001f49b0);
  }
  temp_v4 = libc_strlen(param_4);
  if (temp_v4 >= 0x5d) {
    param_4->field_0x5d = 0;
    param_4->field_0x5e = 0;
    param_4->field_0x5f = 0;
  }
  return;
}

} /* extern "C" */
