/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010e05c` (_code @ 0x10e05c, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011ccfc(int *, int, unsigned int, int, unsigned int, unsigned int, unsigned int, int, unsigned int);
int FUN_002e760a(int);
int FUN_002e995c(unsigned char [6]);
int _ZN9Obj558be04stopEv(int *);
int FUN_002f8624(unsigned char [12], int, unsigned short [2]);
int FUN_002f86ac(int, unsigned short *);

typedef int romwright_code(...);
/* stack frame of param_6: 11 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned short sp44; /* 0x44: local_44 */
    unsigned short sp5E; /* 0x5e: local_5e */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_6_stack;

extern signed char DAT_0059496a; /* 0x59496a */
#ifndef ROMWRIGHT_STORAGE_s______0059496b_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s______0059496b_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s______0059496b_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s______0059496b_9_1_size_check[(sizeof(union romwright_storage_s______0059496b_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s______0059496b_9_1_u1_width_check[(sizeof(((union romwright_storage_s______0059496b_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s______0059496b_9_1_s1_width_check[(sizeof(((union romwright_storage_s______0059496b_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s______0059496b_9_1 s______0059496b; /* 0x59496b */
extern unsigned int DAT_00594a54; /* 0x594a54 */
extern unsigned int DAT_00594a58; /* 0x594a58 */

extern int FUN_00109e60(int *, unsigned char *, unsigned short *, unsigned int);
/* Supplied declaration required: FUN_0011ccfc. */
/* Supplied declaration required: FUN_002e760a. */
/* Supplied declaration required: FUN_002e995c. */
/* Supplied declaration required: _ZN9Obj558be04stopEv. */
extern int FUN_002f8208(int *, unsigned int);
extern int *FUN_002f8574(int, int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002f8624. */
/* Supplied declaration required: FUN_002f86ac. */


unsigned int
FUN_0010e05c(int param_1,unsigned int param_2,unsigned short *param_3,unsigned int param_4,unsigned char param_5,
            unsigned int param_6)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [6];
  unsigned short temp_v5;
  unsigned short temp_v6 [2];
  int *temp_v7;
  int temp_v8;
  unsigned char temp_v9 [12];
  int iStack_24;
  unsigned int temp_v10;
  unsigned short *puStack_1c;
  unsigned int temp_v11;
  
  temp_v0 = param_1 + 0x2c0;
  temp_v8 = param_1 + 0x170;
  iStack_24 = param_1;
  temp_v10 = param_2;
  puStack_1c = param_3;
  temp_v11 = param_4;
  if (DAT_0059496a != '\0') {
    temp_v1 = 0;
    if (s______0059496b.whole[0] == '\x01') {
      temp_v1 = *(int *)(param_1 + 0x150) + 0xa8;
    }
    temp_v2 = DAT_00594a58;
    temp_v3 = DAT_00594a54;
    piVar2 = (int *)FUN_002e760a(0x270);
    if (piVar2 != (int *)0x0) {
      FUN_0011ccfc(piVar2,temp_v8,temp_v11,param_1,temp_v3,temp_v2,*(unsigned int *)(param_1 + 100),temp_v1
                   ,*(unsigned int *)(temp_v0 + 0x10));
    }
    else {
      piVar2 = (int *)0x0;
    }
  }
  else {
    temp_v1 = FUN_002e760a(0x148);
    if (temp_v1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_002f8574(temp_v1,temp_v8,temp_v11,param_1,*(unsigned int *)(param_1 + 100),
                                   *(unsigned int *)(temp_v0 + 0x10));
    }
  }
  temp_v0 = FUN_002f8208(piVar2,1);
  if (temp_v0 != 0) {
    FUN_002e995c(temp_v4);
    temp_v5 = (unsigned short)((temp_v10 & 0xff) << 8) | ((unsigned short)(temp_v10 >> 8) & 0xff);
    *(unsigned char *)(piVar2 + 0x51) = param_5;
    temp_v0 = FUN_00109e60(piVar2,temp_v4,param_3,param_6);
    if (temp_v0 != 0) {
      (**(romwright_code **)(*piVar2 + 0xc))(piVar2,*(unsigned int *)(param_1 + 100));
      temp_v6[0] = *param_3;
      temp_v7 = piVar2;
      FUN_002f8624(temp_v9,param_1 + 0x160,temp_v6);
      if (((DAT_0059496a == '\0') || (piVar3 = *(int **)(param_1 + 0x150), piVar3 == (int *)0x0)) ||
         (temp_v0 = (**(romwright_code **)(*piVar3 + 0x10))(piVar3,*param_3,piVar2), temp_v0 != 0)) {
        return 1;
      }
      FUN_002f86ac(param_1 + 0x160,param_3);
    }
    _ZN9Obj558be04stopEv(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(romwright_code **)(*piVar2 + 4))(piVar2);
    }
    *param_3 = 0;
  }
  else if (piVar2 != (int *)0x0) {
    (**(romwright_code **)(*piVar2 + 4))(piVar2);
  }
  return 0;
}

} /* extern "C" */
