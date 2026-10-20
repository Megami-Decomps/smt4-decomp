/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a4848` (_code @ 0x4a4848, 0x1bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jyoucyuGetTableEntry(int);
int FUN_00184310(void);
int FUN_0019cac4(void);
int FUN_004a5b20(int);
int FUN_004a6610(int, int);
int FUN_004a83f8(void);
int FUN_004a849c(int, unsigned char [24]);
int FUN_004a8584(unsigned char [24], int, int);
int FUN_004cfeb0(int, int, int, int, int, int);
int FUN_004d05c4(int, int, int, int);
int releaseEntriesA(void);
int releaseEntriesB(unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp30; /* 0x30: local_30 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_0019cac4. */
extern int FUN_0026264c(unsigned short);
/* Supplied declaration required: FUN_004a5b20. */
/* Supplied declaration required: FUN_004a6610. */
/* Supplied declaration required: FUN_004a83f8. */
extern unsigned char FUN_004a8454(int, unsigned int);
/* Supplied declaration required: FUN_004a849c. */
/* Supplied declaration required: FUN_004a8584. */
/* Supplied declaration required: FUN_004cfeb0. */
/* Supplied declaration required: FUN_004d05c4. */
/* Supplied declaration required: releaseEntriesA. */
/* Supplied declaration required: releaseEntriesB. */


void FUN_004a4848(int param_1)

{
/* irregular: 12 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short *puVar2;
  unsigned short *puVar3;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  short temp_v4;
  unsigned char temp_v5 [24];
  unsigned char temp_v6;
  
  releaseEntriesB(*(unsigned int *)(param_1 + 0x84c));
  releaseEntriesA();
  FUN_004a83f8();
  if (*(char *)(param_1 + 0x860) == '\0') {
    temp_v4 = 0;
    temp_v3 = 1;
    do {
      puVar3 = (unsigned short *)(temp_v3 & 0xffff);
      FUN_00184310();
      temp_v1 = temp_v3;
      FUN_0019cac4();
      if ((puVar3 != (unsigned short *)0x0 && temp_v1 != 0) && ((*(unsigned short *)(temp_v1 + 0x16) & 1) != 0)) {
        temp_v4 = temp_v4 + 1;
        temp_v2 = FUN_0026264c(*puVar3);
        if (temp_v2 != 0) {
          FUN_004a8584(temp_v5,*puVar3,0);
          temp_v6 = 1;
          FUN_004a849c(param_1 + 0x864,temp_v5);
        }
      }
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 < 0x500);
    *(short *)(param_1 + 0xa86a) = temp_v4;
    FUN_004a6610(param_1,1);
    FUN_004cfeb0(param_1 + 0x20,10,(int)*(short *)(param_1 + 0x864),0,1,1);
    *(unsigned char *)(param_1 + 0x2d) = 1;
    temp_v0 = FUN_004a8454(param_1 + 0x864,1);
    *(unsigned char *)(param_1 + 0x94) = temp_v0;
    jyoucyuGetTableEntry(0);
    jyoucyuGetTableEntry(0);
  }
  else {
    FUN_004a5b20(param_1);
  }
  (**(romwright_code **)(**(int **)(param_1 + 0x84c) + 8))(*(int **)(param_1 + 0x84c),param_1 + 0x20);
  puVar2 = (unsigned short *)(*(int *)(param_1 + 0x84c) + 4);
  *puVar2 = *puVar2 | 0x1000;
  temp_v2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x860) != '\0') {
    if (temp_v2 >= 10) {
      temp_v2 = 10;
    }
    FUN_004d05c4(param_1 + 0x818,0x13,0x1030,temp_v2);
  }
  else {
    if (temp_v2 >= 10) {
      temp_v2 = 10;
    }
    FUN_004d05c4(param_1 + 0x818,0x14,0x40e,temp_v2);
  }
  *(unsigned char *)(param_1 + 0x828) = 1;
  return;
}

} /* extern "C" */
