/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033ad04` (_code @ 0x33ad04, 0x3ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);
int FUN_001aea28(unsigned int);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_005806d4; /* 0x5806d4 */
extern unsigned char DAT_005f17fc; /* 0x5f17fc */

/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_001aea28. */
extern int FUN_004bb870(unsigned int);


void FUN_0033ad04(void)

{
/* irregular: 3 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  char *pcVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar7;
  int temp_v5;
  unsigned int *puVar9;
  
  temp_v0 = DAT_005806d4;
  temp_v5 = 0;
  puVar9 = (unsigned int *)(DAT_005806d4 + 0x4a74);
  *(unsigned int *)(DAT_005806d4 + 0x3d84) = 0;
  do {
    temp_v1 = temp_v0 + temp_v5 * 0x188;
    pcVar3 = (char *)(temp_v1 + 0x34);
    temp_v3 = 0;
    if (*pcVar3 != '\0') {
      temp_v3 = *(int *)(temp_v1 + 0x1b0);
    }
    if ((((*pcVar3 != '\0' && temp_v3 != 0) && (temp_v3 < 0xb)) && (*(char *)(temp_v1 + 0xb1) == '\0')) &&
       ((int)*puVar9 < 0x10)) {
      temp_v3 = *(int *)(temp_v1 + 0xb8);
      if (temp_v3 != 0) {
        if (temp_v3 != 2) {
          if (temp_v3 == 4 || temp_v3 == 5) goto LAB_0033ad90;
        }
        else {
          *(unsigned int *)(temp_v1 + 0xb8) = 0x16;
          *(unsigned int *)(temp_v1 + 0xbc) = 0;
          temp_v3 = DAT_005806d4;
          temp_v4 = 0;
          temp_v2 = *puVar9;
          do {
            piVar7 = (int *)(DAT_005806d4 + temp_v4 * 0xc4 + 0x3e34);
            if (*piVar7 == (int)(*(short *)((unsigned char *)&DAT_005f17fc + 0x86))) {
              if ((*(int *)(temp_v1 + 0x1b4) != 0) && (*(char *)(temp_v1 + 0x1b8) != '\0')) {
                temp_v4 = *(int *)(*(int *)(temp_v1 + 0x1b4) + 4);
                if (*(char *)(temp_v1 + 0x1b9) != '\0') {
                  if (temp_v4 != 0) {
                    FUN_001aea28(DAT_0056fcc0);
                  }
                  *(unsigned char *)(temp_v1 + 0x1b8) = 0;
                }
                else {
                  *(unsigned int *)(temp_v4 + 4) = *(unsigned int *)(temp_v4 + 4) | 3;
                  *(unsigned char *)(temp_v1 + 0x1b8) = 0;
                  *(unsigned char *)(temp_v3 + *(int *)(temp_v1 + 0x1b0) * 8 + 0x3d91) = 0;
                }
              }
              temp_v3 = DAT_005806d4;
              if (*(int **)(temp_v1 + 0x1b4) != (int *)0x0) {
                if (*(char *)(temp_v1 + 0x1b9) != '\0') {
                  (**(romwright_code **)(**(int **)(temp_v1 + 0x1b4) + 4))();
                  *(unsigned int *)(temp_v1 + 0x1b4) = 0;
                }
                *(unsigned int *)(temp_v1 + 0x1b4) = 0;
                *pcVar3 = '\0';
                *(unsigned int *)(temp_v1 + 100) = 0;
                *(unsigned int *)(temp_v1 + 0x68) = 0xffffffff;
                *(unsigned int *)(temp_v1 + 0x6c) = 1;
                *(unsigned char *)(temp_v1 + 0x170) = 0;
                *(unsigned char *)(temp_v1 + 0x171) = 0;
                *(unsigned char *)(temp_v1 + 0x173) = 0;
                *(unsigned char *)(temp_v1 + 0x174) = 0;
                *(int *)(temp_v3 + 0x3d78) = *(int *)(temp_v3 + 0x3d78) - 1;
              }
              piVar7 = piVar7 + (temp_v2 & 0xff);
              *(int *)(temp_v1 + 0xa4) = piVar7[1];
              temp_v2 = piVar7[0x11];
              *(unsigned int *)(temp_v1 + 0xa8) = temp_v2;
              temp_v2 = temp_v2 & 0xffff;
              FUN_0019cac4();
              *(unsigned short *)(temp_v1 + 0x1a8) = *(unsigned short *)(temp_v2 + 2) & 0x7fff;
              temp_v3 = FUN_004bb870(*(unsigned int *)(temp_v1 + 0xa4));
              if (temp_v3 != 0) {
                *(char *)(temp_v1 + 0x1af) = (char)temp_v3;
              }
              *(int *)(temp_v1 + 0x1b0) = piVar7[0x21];
              break;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 0x10);
LAB_0033b0d0:
          *puVar9 = *puVar9 + 1;
        }
      }
      else {
LAB_0033ad90:
        *(unsigned int *)(temp_v1 + 0xb8) = 0x14;
        *(unsigned int *)(temp_v1 + 0xbc) = 0;
        temp_v3 = DAT_005806d4;
        temp_v4 = 0;
        temp_v2 = *puVar9;
LAB_0033adb8:
        piVar7 = (int *)(DAT_005806d4 + temp_v4 * 0xc4 + 0x3e34);
        if (*piVar7 != (int)(*(short *)((unsigned char *)&DAT_005f17fc + 0x86))) break;
        if ((*(int *)(temp_v1 + 0x1b4) != 0) && (*(char *)(temp_v1 + 0x1b8) != '\0')) {
          temp_v4 = *(int *)(*(int *)(temp_v1 + 0x1b4) + 4);
          if (*(char *)(temp_v1 + 0x1b9) != '\0') {
            if (temp_v4 != 0) {
              FUN_001aea28(DAT_0056fcc0);
            }
            *(unsigned char *)(temp_v1 + 0x1b8) = 0;
          }
          else {
            *(unsigned int *)(temp_v4 + 4) = *(unsigned int *)(temp_v4 + 4) | 3;
            *(unsigned char *)(temp_v1 + 0x1b8) = 0;
            *(unsigned char *)(temp_v3 + *(int *)(temp_v1 + 0x1b0) * 8 + 0x3d91) = 0;
          }
        }
        temp_v3 = DAT_005806d4;
        if (*(int **)(temp_v1 + 0x1b4) != (int *)0x0) {
          if (*(char *)(temp_v1 + 0x1b9) != '\0') {
            (**(romwright_code **)(**(int **)(temp_v1 + 0x1b4) + 4))();
            *(unsigned int *)(temp_v1 + 0x1b4) = 0;
          }
          *(unsigned int *)(temp_v1 + 0x1b4) = 0;
          *pcVar3 = '\0';
          *(unsigned int *)(temp_v1 + 100) = 0;
          *(unsigned int *)(temp_v1 + 0x68) = 0xffffffff;
          *(unsigned int *)(temp_v1 + 0x6c) = 1;
          *(unsigned char *)(temp_v1 + 0x170) = 0;
          *(unsigned char *)(temp_v1 + 0x171) = 0;
          *(unsigned char *)(temp_v1 + 0x173) = 0;
          *(unsigned char *)(temp_v1 + 0x174) = 0;
          *(int *)(temp_v3 + 0x3d78) = *(int *)(temp_v3 + 0x3d78) - 1;
        }
        piVar7 = piVar7 + (temp_v2 & 0xff);
        *(int *)(temp_v1 + 0xa4) = piVar7[1];
        temp_v2 = piVar7[0x11];
        *(unsigned int *)(temp_v1 + 0xa8) = temp_v2;
        temp_v2 = temp_v2 & 0xffff;
        FUN_0019cac4();
        *(unsigned short *)(temp_v1 + 0x1a8) = *(unsigned short *)(temp_v2 + 2) & 0x7fff;
        temp_v3 = FUN_004bb870(*(unsigned int *)(temp_v1 + 0xa4));
        if (temp_v3 != 0) {
          *(char *)(temp_v1 + 0x1af) = (char)temp_v3;
        }
        *(int *)(temp_v1 + 0x1b0) = piVar7[0x21];
        *puVar9 = *puVar9 + 1;
      }
    }
    temp_v5 = temp_v5 + 1;
    if (temp_v5 >= 0x28) {
      return;
    }
  } while( 1 );
  temp_v4 = temp_v4 + 1;
  if (temp_v4 >= 0x10) goto LAB_0033b0d0;
  goto LAB_0033adb8;
}

} /* extern "C" */
