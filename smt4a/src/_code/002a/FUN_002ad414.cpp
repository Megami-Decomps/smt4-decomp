/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ad414` (_code @ 0x2ad414, 0x608 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_001008a2(...);
int FUN_0019cac4(void);
int FUN_004bd274(int, int);
int FUN_004bd294(int, int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int spD8; /* 0xd8: local_d8 */
} param_4_stack;

extern unsigned char LAB_002ad8c0; /* 0x2ad8c0 */
extern unsigned char LAB_002ad8e4; /* 0x2ad8e4 */
extern unsigned char LAB_002ad8f0; /* 0x2ad8f0 */
extern unsigned char LAB_002ad914; /* 0x2ad914 */
extern unsigned char LAB_002ad918; /* 0x2ad918 */
extern unsigned char LAB_002ad940; /* 0x2ad940 */
extern unsigned char LAB_002ad950; /* 0x2ad950 */
extern unsigned char LAB_002ad974; /* 0x2ad974 */
extern unsigned char LAB_002ada1c; /* 0x2ada1c */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001008a2. */
/* Supplied declaration required: FUN_0019cac4. */
extern unsigned int wstrlen(char *);
extern int FUN_003dfe2c(void);
extern int FUN_003dfea0(unsigned char);
/* Supplied declaration required: FUN_004bd274. */
/* Supplied declaration required: FUN_004bd294. */


void FUN_002ad414(int param_1,int param_2,unsigned int param_3,char *param_4)

{
/* irregular: 4 goto(s); 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  char *pcVar6;
  unsigned int unaff_r4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [16];
  unsigned char temp_v9 [104];
  unsigned char temp_v10 [8];
  unsigned char temp_v11 [8];
  unsigned char temp_v12 [28];
  int iStack_34;
  int temp_v13;
  unsigned int uStack_2c;
  char *pcStack_28;
  
  pcStack_28 = param_4;
  uStack_2c = param_3;
  temp_v13 = param_2;
  iStack_34 = param_1;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  if (param_1 != 0) {
    unaff_r4 = 0;
  }
  temp_v8[0] = '\v';
  temp_v8[1] = '\f';
  temp_v8[2] = '\r';
  temp_v8[3] = '\x0e';
  temp_v8[4] = '\x0f';
  temp_v8[5] = '\x11';
  temp_v8[6] = '\x12';
  temp_v8[7] = '\x13';
  if (param_1 != 0) {
    do {
      temp_v3 = FUN_003dfea0(temp_v8[unaff_r4]);
      if (temp_v3 != 1) {
        if (temp_v3 == 2) {
          temp_v11[temp_v6] = temp_v8[unaff_r4];
          temp_v6 = temp_v6 + 1;
        }
        else {
          temp_v3 = FUN_003dfe2c();
          if (temp_v3 < 100) {
            temp_v12[temp_v7] = temp_v8[unaff_r4];
            temp_v7 = temp_v7 + 1;
          }
        }
      }
      else {
        temp_v10[temp_v5] = temp_v8[unaff_r4];
        temp_v5 = temp_v5 + 1;
      }
      unaff_r4 = unaff_r4 + 1;
    } while (unaff_r4 < 8);
  }
  else if (param_2 != 0) {
    temp_v4 = 0;
    do {
      temp_v3 = temp_v13;
      FUN_004bd294(temp_v13,temp_v8[temp_v4]);
      if (temp_v3 != 1) {
        if (temp_v3 != 2) {
          temp_v3 = temp_v13;
          FUN_004bd274(temp_v13,temp_v8[temp_v4]);
          if (temp_v3 < 100) {
            temp_v12[temp_v7] = temp_v8[temp_v4];
            temp_v7 = temp_v7 + 1;
          }
        }
        else {
          temp_v11[temp_v6] = temp_v8[temp_v4];
          temp_v6 = temp_v6 + 1;
        }
      }
      else {
        temp_v10[temp_v5] = temp_v8[temp_v4];
        temp_v5 = temp_v5 + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
  }
  else {
    param_3 = param_3 & 0xffff;
    FUN_0019cac4();
    temp_v4 = 0;
    do {
      temp_v0 = temp_v8[temp_v4];
      temp_v1 = *(unsigned short *)(param_3 + (unsigned int)temp_v0 * 2 + 0x24);
      temp_v2 = temp_v1 >> 10;
      if (temp_v2 == 1) {
        temp_v10[temp_v5] = temp_v0;
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
    } while (temp_v4 < 8);
  }
  *param_4 = '\0';
  if (temp_v5 != 0) {
    if (temp_v5 >= 8) {
      FUN_001008a2(param_4,&LAB_002ad8c0);
    }
    else {
      FUN_001008a2(param_4,&LAB_002ad8e4);
      temp_v3 = 0;
      if (0 < temp_v5) {
        while( 1 ) {
          switch(temp_v10[temp_v3]) {
          case 0xb:
            FUN_00100388(temp_v9,"澂辂覂鎂辂躂");
            break;
          case 0xc:
            FUN_00100388(temp_v9,"澂膂躂覂莂");
            break;
          case 0xd:
            FUN_00100388(temp_v9,"犂貂薂薂邂");
            break;
          case 0xe:
            FUN_00100388(temp_v9,"憂覂躂蒂");
            break;
          case 0xf:
            FUN_00100388(temp_v9,"犂覂莂讂");
            break;
          case 0x11:
            FUN_00100388(temp_v9,"抂袂膂銂趂");
            break;
          case 0x12:
            FUN_00100388(temp_v9,"掂膂骂薂");
            break;
          case 0x13:
            FUN_00100388(temp_v9,(char *)0x52b8a0);
          }
          FUN_001008a2(param_4,temp_v9);
          temp_v3 = temp_v3 + 1;
          if (temp_v5 <= temp_v3) break;
          if (temp_v3 != 0) {
            FUN_001008a2(param_4,&LAB_002ad8f0);
          }
        }
      }
    }
  }
  if (temp_v7 != 0) {
    if (*param_4 != '\0') {
      FUN_001008a2(param_4,&LAB_002ad914);
    }
    if (temp_v6 >= 8) {
      FUN_001008a2(param_4,&LAB_002ad918);
    }
    else {
      FUN_001008a2(param_4,&LAB_002ad940);
      temp_v3 = 0;
      if (0 < temp_v7) {
LAB_002ad77c:
        switch(temp_v12[temp_v3]) {
        case 0xb:
          pcVar6 = "澂辂覂鎂辂躂";
          break;
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
          pcVar6 = "犂覂莂讂";
          break;
        default:
          goto LAB_002ad7c8;
        case 0x11:
          pcVar6 = "抂袂膂銂趂";
          break;
        case 0x12:
          pcVar6 = "掂膂骂薂";
          break;
        case 0x13:
          pcVar6 = (char *)0x52b8a0;
        }
        FUN_00100388(temp_v9,pcVar6);
LAB_002ad7c8:
        FUN_001008a2(param_4,temp_v9);
        temp_v3 = temp_v3 + 1;
        if (temp_v3 < temp_v7) {
          if (temp_v3 != 0) {
            FUN_001008a2(param_4,&LAB_002ad8f0);
          }
          goto LAB_002ad77c;
        }
      }
    }
  }
  if (temp_v6 != 0) {
    if (*param_4 != '\0') {
      FUN_001008a2(param_4,&LAB_002ad914);
    }
    if (temp_v6 >= 8) {
      FUN_001008a2(param_4,&LAB_002ad950);
    }
    else {
      FUN_001008a2(param_4,&LAB_002ad974);
      temp_v3 = 0;
      if (0 < temp_v6) {
LAB_002ad880:
        switch(temp_v11[temp_v3]) {
        case 0xb:
          pcVar6 = "澂辂覂鎂辂躂";
          break;
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
          pcVar6 = "犂覂莂讂";
          break;
        default:
          goto LAB_002ad990;
        case 0x11:
          pcVar6 = "抂袂膂銂趂";
          break;
        case 0x12:
          pcVar6 = "掂膂骂薂";
          break;
        case 0x13:
          pcVar6 = (char *)0x52b8a0;
        }
        FUN_00100388(temp_v9,pcVar6);
LAB_002ad990:
        FUN_001008a2(param_4,temp_v9);
        temp_v3 = temp_v3 + 1;
        if (temp_v3 < temp_v6) {
          if (temp_v3 != 0) {
            FUN_001008a2(param_4,&LAB_002ad8f0);
          }
          goto LAB_002ad880;
        }
      }
    }
  }
  if ((temp_v5 == 0 && temp_v7 == 0) && temp_v6 == 0) {
    FUN_001008a2(param_4,&LAB_002ada1c);
  }
  temp_v4 = wstrlen(param_4);
  if (temp_v4 >= 0x66) {
    param_4[0x66] = '\0';
    param_4[0x67] = '\0';
  }
  return;
}

} /* extern "C" */
