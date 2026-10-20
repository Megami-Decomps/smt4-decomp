/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c514` (_code @ 0x10c514, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7682(...);
int FUN_002e76a0(...);
int FUN_002ed84a(...);
int FUN_002f5c18(int *, unsigned int, int *);

typedef int romwright_code(...);
/* stack frame of param_3: 6 slot(s), 21 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
} param_3_stack;

extern int FUN_002e760a(unsigned int);
extern int *FUN_002e7614(int, int);
extern int FUN_002e7674(int, int);
/* Supplied declaration required: FUN_002e7682. */
/* Supplied declaration required: FUN_002e76a0. */
extern int FUN_002eac34(unsigned int);
/* Supplied declaration required: FUN_002ed84a. */
/* Supplied declaration required: FUN_002f5c18. */
extern int FUN_002f5f70(unsigned int, int);


void FUN_0010c514(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int *piVar5;
  int *temp_v3;
  int temp_v4;
  int *temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [20];
  unsigned int uStack_20;
  int iStack_1c;
  int temp_v8;
  
  piVar5 = (int *)0x0;
  temp_v3 = (int *)0x0;
  temp_v6 = (unsigned int)(*(unsigned char *)(param_2 + 0x25) >> 4);
  temp_v4 = param_2 + 0x100;
  temp_v0 = 0;
  uStack_20 = param_1;
  iStack_1c = param_2;
  temp_v8 = param_3;
  if ((*(unsigned short *)(param_2 + 0x3c) & 0xf) != 7) {
    temp_v1 = FUN_002f5f70(param_1,param_2);
    if (temp_v1 != 0) {
      piVar3 = *(int **)(param_2 + 0xd8);
      if (piVar3 != (int *)0x0) {
        temp_v1 = FUN_002eac34(temp_v6);
        temp_v3 = *(int **)(temp_v1 + 0x10);
        if (temp_v3 != (int *)0x0) {
          temp_v1 = FUN_002e760a(0x20);
          piVar3 = (int *)0x0;
          if (temp_v1 != 0) {
            piVar3 = (int *)FUN_002e7614(temp_v1,*(int *)(*(int *)(param_2 + 0xd8) + 0x10) + 0x40);
          }
          FUN_002f5c18(temp_v3,*(unsigned int *)(param_2 + 0xd8),piVar3);
          temp_v0 = 1;
        }
        temp_v1 = FUN_002eac34(temp_v6);
        temp_v5 = *(int **)(temp_v1 + 0x14);
        piVar5 = piVar3;
        if (temp_v5 != (int *)0x0) {
          temp_v1 = FUN_002e760a(0x20);
          piVar5 = (int *)0x0;
          if (temp_v1 != 0) {
            piVar5 = (int *)FUN_002e7614(temp_v1,piVar3[4]);
          }
          temp_v3 = piVar5;
          (**(romwright_code **)(*temp_v5 + 8))(temp_v5,piVar3,piVar5);
          if ((temp_v0) && (piVar3 != (int *)0x0)) {
            (**(romwright_code **)(*piVar3 + 4))(piVar3);
          }
          temp_v0 = 1;
          piVar5 = temp_v3;
        }
        temp_v3 = (int *)(piVar5[4] & 0xffff);
      }
      temp_v7[0] = 0xea;
      temp_v1 = temp_v8;
      FUN_002ed84a(temp_v8,temp_v7);
      if (temp_v1 != 0) {
        temp_v7[0] = 0xd0;
        temp_v1 = temp_v8;
        FUN_002ed84a(temp_v8,temp_v7);
        if (temp_v1 != 0) {
          *(unsigned char *)(param_2 + 0x68) = 1;
          temp_v6 = param_2 + 0x90;
          *(char *)(param_2 + 0x69) = (char)*(unsigned int *)(param_2 + 0x9c);
          *(short *)(param_2 + 0x6a) = (short)(int)temp_v3;
          temp_v1 = FUN_002e7682(temp_v8,(unsigned char *)(param_2 + 0x68),0xc);
          if (temp_v1 != 0) {
            if (*(int *)(param_2 + 0x38) != 0) {
              temp_v1 = FUN_002e7674(temp_v8,param_2 + 0x28);
              if (temp_v1 == 0) {
                return;
              }
            }
            else {
              temp_v2 = 0;
              temp_v3 = (int *)((unsigned int)temp_v3 & 0xffffff00);
              do {
                temp_v1 = temp_v8;
                FUN_002ed84a(temp_v8,&temp_v3);
                if (temp_v1 == 0) {
                  return;
                }
                temp_v2 = temp_v2 + 1;
              } while (temp_v2 < 0x10);
            }
            if ((*(int *)(temp_v6 + 0xc) == 0) ||
               (temp_v1 = FUN_002e7682(temp_v8,temp_v6 + 0x10), temp_v1 != 0)) {
              if (*(int *)(param_2 + 0xd8) != 0) {
                FUN_002e76a0(temp_v8,piVar5);
              }
              *(unsigned int *)(temp_v4 + 0x34) = *(unsigned int *)(*(int *)(temp_v8 + 8) + 0x10);
              if ((temp_v0) && (piVar5 != (int *)0x0)) {
                (**(romwright_code **)(*piVar5 + 4))(piVar5);
              }
            }
          }
        }
      }
    }
  }
  else {
    FUN_002e76a0(param_3,*(unsigned int *)(param_2 + 0xd8));
    *(unsigned int *)(temp_v4 + 0x34) = *(unsigned int *)(*(int *)(temp_v8 + 8) + 0x10);
  }
  return;
}

} /* extern "C" */
