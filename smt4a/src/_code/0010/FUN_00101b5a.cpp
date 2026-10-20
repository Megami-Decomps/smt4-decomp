/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00101b5a` (_code @ 0x101b5a, 0x2ae bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010195c(int *, unsigned char [9], unsigned char *, int);
int FUN_002e5550(unsigned char **, int *);

typedef int romwright_code(...);
/* stack frame of param_4: 15 slot(s), 57 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned char sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_4_stack;

/* Supplied declaration required: FUN_0010195c. */
extern unsigned char *FUN_001024a8(unsigned int, unsigned int, unsigned int *, int *);
extern unsigned char *FUN_001024ac(unsigned int, unsigned int, unsigned int *, int *);
extern int FUN_002e2ec0(void);
extern int isAsciiDigit(unsigned int);
/* Supplied declaration required: FUN_002e5550. */


unsigned char * FUN_00101b5a(unsigned int param_1,unsigned int param_2,unsigned int *param_3,int *param_4)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char *puVar8;
  int temp_v4;
  unsigned char *temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  char acStack_67 [18];
  char acStack_55 [5];
  unsigned int temp_v10;
  unsigned char *temp_v11;
  int temp_v12;
  char *temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  unsigned char temp_v16 [9];
  unsigned int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  unsigned int uStack_24;
  unsigned int temp_v20;
  unsigned int *temp_v21;
  int *piStack_18;
  
  temp_v12 = 0;
  temp_v4 = param_4[2];
  temp_v2 = param_4[1];
  temp_v18 = 0;
  uStack_24 = param_1;
  temp_v20 = param_2;
  temp_v21 = param_3;
  piStack_18 = param_4;
  temp_v0 = FUN_002e2ec0();
  temp_v19 = (unsigned int)*(unsigned char *)((int)*(int **)(temp_v0 + 0xc) + **(int **)(temp_v0 + 0xc));
  puVar8 = (unsigned char *)0xffffffff;
  do {
    puVar2 = puVar8;
    puVar8 = puVar2 + 1;
    temp_v10 = (*(romwright_code *)param_4[6])(temp_v20);
    temp_v0 = (*(romwright_code *)param_4[8])();
  } while (temp_v0 != 0);
  if (temp_v10 == 0xffffffff) {
    return (unsigned char *)0xffffffff;
  }
  temp_v2 = temp_v2 & 0xfffff97f;
  if (0 < temp_v4) {
    if (temp_v10 != 0x2b) {
      if (temp_v10 == 0x2d) {
        temp_v2 = temp_v2 | 0x400;
        puVar8 = puVar2 + 2;
        temp_v10 = (*(romwright_code *)param_4[6])(temp_v20);
        temp_v4 = temp_v4 - 1;
      }
    }
    else {
      puVar8 = puVar2 + 2;
      temp_v10 = (*(romwright_code *)param_4[6])(temp_v20);
      temp_v4 = temp_v4 - 1;
    }
  }
  if ((int)(temp_v2 << 0x15) < 0) {
    temp_v9 = 0x2d;
  }
  else {
    temp_v9 = 0x2b;
  }
  temp_v13 = acStack_67;
  temp_v11 = temp_v16;
  if (0 < temp_v4) {
    if ((((temp_v10 == 0x69) || (temp_v10 == 0x49)) || (temp_v10 == 0x6e)) || (temp_v10 == 0x4e)) {
      temp_v8 = temp_v10;
      temp_v5 = puVar8;
      temp_v6 = temp_v2;
      temp_v7 = temp_v4;
      puVar2 = (unsigned char *)FUN_001024ac(0xfffffffd,temp_v20,temp_v21,param_4);
      if (puVar2 != (unsigned char *)0xfffffffd) {
        return puVar2;
      }
    }
    do {
      if (temp_v10 != 0x30) {
        if (((temp_v10 == 0x78) || (temp_v10 == 0x58)) &&
           ((temp_v18 == 1 &&
            (temp_v5 = puVar8, temp_v6 = temp_v2, temp_v7 = temp_v4,
            puVar2 = (unsigned char *)FUN_001024a8(0xfffffffd,temp_v20,temp_v21,param_4),
            puVar2 != (unsigned char *)0xfffffffd)))) {
          return puVar2;
        }
        break;
      }
      puVar8 = puVar8 + 1;
      temp_v10 = (*(romwright_code *)param_4[6])(temp_v20);
      temp_v4 = temp_v4 - 1;
      temp_v2 = temp_v2 | 0x200;
      *temp_v21 = (unsigned int)puVar8;
      temp_v18 = temp_v18 + 1;
    } while (0 < temp_v4);
  }
  if (temp_v10 == temp_v19) {
    temp_v2 = temp_v2 | 0x80;
    puVar2 = puVar8;
    while( 1 ) {
      temp_v4 = temp_v4 - 1;
      puVar8 = puVar2 + 1;
      temp_v10 = (*(romwright_code *)param_4[6])(temp_v20);
      if (temp_v10 != 0x30) break;
      temp_v12 = temp_v12 - 1;
      temp_v2 = temp_v2 | 0x200;
      *temp_v21 = (unsigned int)(puVar2 + 2);
      temp_v10 = 0x30;
      puVar2 = puVar8;
    }
  }
  do {
    if (temp_v4 < 1) {
LAB_00101da6:
      (*(romwright_code *)param_4[7])(temp_v20);
      *temp_v13 = -1;
      *temp_v11 = 0xff;
      temp_v14 = 0;
      temp_v15 = 0;
      FUN_0010195c(&temp_v14,temp_v16,&temp_v9,temp_v12);
      if (-1 < (int)(temp_v2 << 0x16)) {
        return (unsigned char *)0xfffffffe;
      }
      if ((temp_v2 & 0x24) != 0) {
        if ((temp_v2 & 1) != 0) {
          return puVar8;
        }
        piVar3 = (int *)*param_4;
        *param_4 = (int)(piVar3 + 1);
        puVar4 = (unsigned int *)*piVar3;
        *puVar4 = temp_v14;
        puVar4[1] = temp_v15;
        return puVar8;
      }
      FUN_002e5550(&temp_v5,&temp_v14);
      if ((temp_v2 & 1) != 0) {
        return puVar8;
      }
      puVar4 = (unsigned int *)*param_4;
      *param_4 = (int)(puVar4 + 1);
      *(unsigned char **)*puVar4 = temp_v5;
      return puVar8;
    }
    if ((temp_v10 == temp_v19) && (-1 < (int)(temp_v2 << 0x18))) {
      temp_v3 = temp_v2 | 0x80;
    }
    else {
      temp_v0 = isAsciiDigit(temp_v10);
      if (temp_v0 == 0) {
        if ((0 < temp_v4) &&
           (((temp_v10 == 0x65 || (temp_v10 == 0x45)) && ((int)(temp_v2 << 0x16) < 0)))) {
          temp_v2 = temp_v2 & 0xfffffcff;
          temp_v0 = temp_v4 - 1;
          temp_v10 = (*(romwright_code *)param_4[6])(temp_v20);
          puVar2 = puVar8 + 1;
          if (0 < temp_v0) {
            if (temp_v10 != 0x2b) {
              if (temp_v10 == 0x2d) {
                temp_v2 = temp_v2 | 0x100;
                temp_v10 = (*(romwright_code *)param_4[6])(temp_v20);
                temp_v0 = temp_v4 - 2;
                puVar2 = puVar8 + 2;
              }
            }
            else {
              temp_v10 = (*(romwright_code *)param_4[6])(temp_v20);
              temp_v0 = temp_v4 - 2;
              puVar2 = puVar8 + 2;
            }
          }
          puVar8 = puVar2;
          if ((int)(temp_v2 << 0x17) < 0) {
            temp_v1 = 0x2d;
          }
          else {
            temp_v1 = 0x2b;
          }
          *temp_v11 = temp_v1;
          temp_v5 = temp_v11 + 1;
          temp_v11 = temp_v5;
          while ((0 < temp_v0 && (temp_v4 = isAsciiDigit(temp_v10), temp_v4 != 0))) {
            temp_v0 = temp_v0 - 1;
            if ((unsigned int)temp_v11 < temp_v17) {
              *temp_v11 = (char)(temp_v10 - 0x30);
              if ((((temp_v10 - 0x30) & 0xff) != 0) || (temp_v5 < temp_v11)) {
                temp_v11 = temp_v11 + 1;
              }
            }
            else if ((int)(temp_v2 << 0x17) < 0) {
              temp_v12 = -9999;
            }
            else {
              temp_v12 = 9999;
            }
            puVar8 = puVar8 + 1;
            temp_v10 = (*(romwright_code *)param_4[6])(temp_v20);
            *temp_v21 = (unsigned int)puVar8;
            temp_v2 = temp_v2 | 0x200;
          }
        }
        goto LAB_00101da6;
      }
      temp_v3 = temp_v2 | 0x200;
      if (temp_v13 < acStack_55) {
        *temp_v13 = (char)temp_v10 - '0';
        temp_v13 = temp_v13 + 1;
        if ((int)(temp_v2 << 0x18) < 0) {
          temp_v12 = temp_v12 - 1;
        }
      }
      else if (-1 < (int)(temp_v2 << 0x18)) {
        temp_v12 = temp_v12 + 1;
      }
    }
    temp_v4 = temp_v4 - 1;
    if ((int)(temp_v3 << 0x16) < 0) {
      *temp_v21 = (unsigned int)(puVar8 + 1);
    }
    puVar8 = puVar8 + 1;
    temp_v10 = (*(romwright_code *)param_4[6])(temp_v20);
    temp_v2 = temp_v3;
  } while( 1 );
}

} /* extern "C" */
