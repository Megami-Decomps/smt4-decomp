/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eee90` (_code @ 0x2eee90, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00121240(int, unsigned int);
int writeU16Le(unsigned int);
int FUN_002eb164(unsigned char [4], int);
int FUN_002ec674(...);
int destroyObj0055ae64(unsigned char [12]);
int FUN_002ecb04(unsigned int, unsigned char [12]);
int FUN_002ecdec(unsigned char [12], int);
int FUN_002ece58(int, int);
int rt_memcpy(unsigned int, unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_4: 6 slot(s), 18 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned char sp4F; /* 0x4f: local_4f */
    unsigned char sp50; /* 0x50: local_50 */
} param_4_stack;

/* Supplied declaration required: FUN_00121240. */
/* Supplied declaration required: writeU16Le. */
extern int operatorNew(unsigned int);
extern int FUN_002eac34(unsigned int);
/* Supplied declaration required: FUN_002eb164. */
extern int FUN_002eb6ae(int, unsigned int);
/* Supplied declaration required: FUN_002ec674. */
/* Supplied declaration required: destroyObj0055ae64. */
/* Supplied declaration required: FUN_002ecb04. */
/* Supplied declaration required: FUN_002ecdec. */
extern int FUN_002ece14(int, unsigned int);
/* Supplied declaration required: FUN_002ece58. */
/* Supplied declaration required: rt_memcpy. */


void FUN_002eee90(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 11 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  char *pcVar7;
  char temp_v5;
  char temp_v6;
  unsigned char temp_v7 [4];
  unsigned int temp_v8;
  unsigned char temp_v9 [12];
  int temp_v10;
  int temp_v11;
  int iStack_24;
  int iStack_20;
  unsigned int uStack_1c;
  int temp_v12;
  
  iStack_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  temp_v12 = param_4;
  temp_v1 = FUN_002eac34(param_3);
  if ((((*(char *)(temp_v1 + 0xa8) != '\0') &&
       (temp_v8 = param_2 + 0x80, *(char *)(param_2 + 0x88) == '\0')) &&
      (temp_v1 = *(int *)(param_2 + 0xd8), temp_v1 != 0)) &&
     ((temp_v0 = *(unsigned short *)(param_2 + 0x3c) & 0xf, temp_v0 == 2 || (temp_v0 == 5)))) {
    if (temp_v12 != 0) {
      temp_v1 = operatorNew(0x20);
      if (temp_v1 != 0) {
        temp_v1 = FUN_002ece14(temp_v1,*(unsigned int *)(param_2 + 0xd8));
      }
      else {
        temp_v1 = 0;
      }
      FUN_00121240(temp_v1,*(unsigned int *)(param_2 + 0xd8));
    }
    if ((int)((unsigned int)*(unsigned short *)(param_2 + 0x3c) << 0x1a) < 0) {
      piVar3 = *(int **)(*(int *)(param_1 + 4) + (unsigned int)*(unsigned char *)(temp_v8 + 4) * 4);
      (**(romwright_code **)(*piVar3 + 0xc))(piVar3,temp_v1);
    }
    else {
      FUN_002ecdec(temp_v9,0x20);
      temp_v2 = FUN_002eb6ae(param_2,0x200);
      if ((temp_v2 != 0) || (temp_v2 = FUN_002eb6ae(param_2,0x400), temp_v2 != 0)) {
        temp_v2 = param_1 + 0x50;
      }
      else {
        temp_v2 = param_1 + 0x38;
      }
      temp_v3 = FUN_002ec674(temp_v2);
      temp_v4 = FUN_002ec674(temp_v9);
      rt_memcpy(temp_v4,temp_v3,0x20);
      FUN_002eb164(temp_v7,param_2);
      writeU16Le(temp_v8 & 0xffff);
      pcVar7 = (char *)FUN_002ec674(temp_v9);
      *pcVar7 = *pcVar7 + temp_v5;
      temp_v2 = FUN_002ec674(temp_v9);
      *(char *)(temp_v2 + 1) = *(char *)(temp_v2 + 1) + temp_v6;
      temp_v2 = FUN_002ec674(temp_v9);
      pcVar7 = (char *)((temp_v2 + (temp_v11 - temp_v10)) - 1);
      *pcVar7 = *(char *)(param_2 + 0x65) + *pcVar7;
      FUN_002ecb04(*(unsigned int *)(param_1 + 0x1c),temp_v9);
      (**(romwright_code **)(**(int **)(param_1 + 0x1c) + 0xc))(*(int **)(param_1 + 0x1c),temp_v1);
      destroyObj0055ae64(temp_v9);
    }
    if (temp_v12 != 0) {
      FUN_002ece58(param_2,temp_v1);
    }
  }
  return;
}

} /* extern "C" */
