/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a3a0` (_code @ 0x10a3a0, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZNSt6vectorIj12AsdAllocatorIjEE13_C_insert_auxEPjjRKj(int *, unsigned int, int, int *);
int sysMemClear(int, int);
int _ZN9Obj5590d0C1Ej(...);
int FUN_002f3340(...);
int _ZNKSt6vectorIj12AsdAllocatorIjEE4sizeEv(int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_00558c30; /* 0x558c30 */
extern unsigned char DAT_00559830; /* 0x559830 */
extern unsigned char DAT_00559d20; /* 0x559d20 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int constructObj0055908c(int);
extern int FUN_00117804(unsigned int *);
extern int FUN_0012d57c(unsigned int *);
extern unsigned int FUN_00132c28(unsigned int *, unsigned int);
/* Supplied declaration required: _ZNSt6vectorIj12AsdAllocatorIjEE13_C_insert_auxEPjjRKj. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: _ZN9Obj5590d0C1Ej. */
extern int _Znwj(unsigned int);
extern int onlineSockAddrConstruct(int);
extern int _ZN9Obj55aff4C1Ev(int);
extern unsigned int FUN_002ea2e8(void);
extern unsigned int *arrayElementAddress_002f32d4(int *, int);
/* Supplied declaration required: FUN_002f3340. */
extern int FUN_002f3378(int);
/* Supplied declaration required: _ZNKSt6vectorIj12AsdAllocatorIjEE4sizeEv. */


unsigned long long
FUN_0010a3a0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int *piVar10;
  int temp_v5;
  int *temp_v6;
  unsigned int uStack_18;
  
  *param_1 = (unsigned int)&DAT_00558c30;
  temp_v5 = param_2;
  temp_v6 = (int *)param_3;
  uStack_18 = param_4;
  temp_v0 = _ZN9Obj5590d0C1Ej(param_1 + 1,0x20000000);
  temp_v0 = _ZN9Obj5590d0C1Ej(temp_v0 + 0x30,0x20000000);
  *(unsigned int *)(temp_v0 + 0x30) = 0x554;
  *(unsigned char *)(temp_v0 + 0x34) = 0;
  puVar2 = (unsigned int *)FUN_002f3340(temp_v0 + 0x38);
  *puVar2 = (unsigned int)&DAT_00559d20;
  puVar2 = (unsigned int *)FUN_002f3340(puVar2 + 7);
  *puVar2 = (unsigned int)&DAT_00559830;
  temp_v0 = FUN_00117804(puVar2 + 7);
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned short *)(temp_v0 + 0x1c) = 0;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  temp_v1 = FUN_00132c28((unsigned int *)(temp_v0 + 0x20),1);
  *(unsigned int *)(temp_v0 + 0x30) = temp_v1;
  *(unsigned int *)temp_v1 = temp_v1;
  *(int *)(*(int *)(temp_v0 + 0x30) + 4) = *(int *)(temp_v0 + 0x30);
  temp_v0 = FUN_002f3378(temp_v0 + 0x38);
  temp_v0 = constructObj0055908c(temp_v0 + 0x24);
  *(unsigned char *)(temp_v0 + 8) = 1;
  *(unsigned char *)(temp_v0 + 9) = 0;
  *(unsigned char *)(temp_v0 + 10) = 0;
  *(unsigned char *)(temp_v0 + 0xb) = 0;
  *(unsigned char *)(temp_v0 + 0xc) = 0;
  *(unsigned char *)(temp_v0 + 0xd) = 0;
  *(unsigned char *)(temp_v0 + 0xe) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  temp_v0 = onlineSockAddrConstruct(temp_v0 + 0x20);
  temp_v0 = _ZN9Obj55aff4C1Ev(temp_v0 + 0x20);
  *(int *)(temp_v0 - 0x88) = temp_v0 - 0x140;
  piVar10 = (int *)(temp_v0 - 0x2c);
  temp_v5 = 0;
  temp_v6 = piVar10;
  temp_v2 = _ZNKSt6vectorIj12AsdAllocatorIjEE4sizeEv(piVar10);
  if (temp_v2 < 4) {
    temp_v1 = *(unsigned int *)(temp_v0 - 0x28);
    temp_v3 = _ZNKSt6vectorIj12AsdAllocatorIjEE4sizeEv(piVar10);
    _ZNSt6vectorIj12AsdAllocatorIjEE13_C_insert_auxEPjjRKj(piVar10,temp_v1,4 - temp_v3,&temp_v5);
  }
  else {
    temp_v2 = _ZNKSt6vectorIj12AsdAllocatorIjEE4sizeEv(piVar10);
    if (temp_v2 >= 5) {
      puVar7 = *(unsigned int **)(temp_v0 - 0x28);
      puVar8 = (unsigned int *)*piVar10 + 4;
      puVar2 = puVar8;
      puVar9 = puVar7;
      if ((unsigned int *)*piVar10 != puVar7) {
        for (; puVar9 != puVar7; puVar9 = puVar9 + 1) {
          *puVar2 = *puVar9;
          puVar2 = puVar2 + 1;
        }
        for (; puVar2 != *(unsigned int **)(temp_v0 - 0x28); puVar2 = puVar2 + 1) {
        }
        *(unsigned int *)(temp_v0 - 0x28) =
             (int)*(unsigned int **)(temp_v0 - 0x28) - (((int)puVar7 - (int)puVar8) & 0xfffffffcU);
      }
    }
  }
  temp_v3 = 0;
  do {
    temp_v4 = _Znwj(0x214);
    if (temp_v4 != 0) {
      temp_v1 = FUN_002ea2e8();
    }
    else {
      temp_v1 = 0;
    }
    puVar2 = (unsigned int *)arrayElementAddress_002f32d4(temp_v6,temp_v3);
    temp_v3 = temp_v3 + 1;
    *puVar2 = temp_v1;
  } while (temp_v3 < 4);
  temp_v3 = _Znwj(0x20);
  if (temp_v3 != 0) {
    temp_v4 = temp_v3;
    sysMemClear(temp_v3,0x20);
    *(unsigned int *)(temp_v3 + 4) = 0;
    *(unsigned int *)(temp_v3 + 0x14) = 0;
    *(unsigned int *)(temp_v3 + 0x18) = 0;
    *(unsigned char *)(temp_v3 + 0x1c) = 0;
    *(char *)(temp_v3 + 0x1d) = (char)temp_v4;
    *(unsigned int *)(temp_v3 + 0x10) = 0;
    *(unsigned int *)(temp_v3 + 0xc) = 0;
    *(unsigned int *)(temp_v3 + 8) = 0;
    temp_v4 = FUN_0012d57c((unsigned int *)(temp_v3 + 4));
    *(int *)(temp_v3 + 0x14) = temp_v4;
    *(unsigned int *)(temp_v4 + 4) = 0;
    *(int *)(*(int *)(temp_v3 + 0x14) + 8) = *(int *)(temp_v3 + 0x14);
    *(int *)(*(int *)(temp_v3 + 0x14) + 0xc) = *(int *)(temp_v3 + 0x14);
  }
  *(int *)(temp_v0 - 0x30) = temp_v3;
  return romwright_piece_4_4(temp_v5,temp_v0 - 0x140);
}

} /* extern "C" */
