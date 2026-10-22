/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00413144` (_code @ 0x413144, 0x390 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match7_Obj55ac68.h"
#include <new>

extern "C" {

int textFormatBuffer(...);
int FUN_00103f54(...);
int holderSetFlagBits(...);
int _ZN9Obj5596acaSERKS_(int, unsigned int);
int FUN_0011b634(...);
int FUN_00120648(...);
int asdOperatorDeleteArray(...);
int operatorNew(...);
int _ZN9Obj55aff4aSERKS_(int, unsigned int);
int _ZN9Obj55b1045resetEv(...);
int FUN_002f4cd6(...);
int _ZN9Obj5596acC1EhRK10WordVector(...);
int FUN_00387edc(...);
int FUN_004311c0(...);
int _ZN9Obj55aad4D1Ev(...);
int _ZN9Obj55ac68D1Ev(...);
int FUN_00522a48(...);
int _ZN15Obj55aff4VectoraSERKS_(...);
int rt_memcpy_w(...);

typedef int romwright_code(...);
/* stack frame of param_1: 26 slot(s), 101 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp250; /* 0x250: local_250 */
    unsigned int sp258; /* 0x258: local_258 */
    unsigned char sp25C; /* 0x25c: local_25c */
    unsigned int sp260; /* 0x260: local_260 */
} param_1_stack;

extern unsigned char LAB_004134dc; /* 0x4134dc */
extern unsigned char LAB_004134e8; /* 0x4134e8 */
extern int referenceOwnerCopyAndAdvance(...); /* 0x41442c */
extern unsigned char DAT_0055a30c; /* 0x55a30c */
extern unsigned char DAT_0055a4c0; /* 0x55a4c0 */
extern unsigned char DAT_0055aadc; /* 0x55aadc */
extern unsigned char DAT_0055cacc; /* 0x55cacc */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00103f54. */
/* Supplied declaration required: holderSetFlagBits. */
/* Supplied declaration required: _ZN9Obj5596acaSERKS_. */
/* Supplied declaration required: FUN_0011b634. */
/* Supplied declaration required: FUN_00120648. */
extern int campCecHasObject(void);
extern unsigned int FUN_002bf520(void);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: operatorNew. */
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: _ZN9Obj55aff4aSERKS_. */
extern int _ZN9Obj55aff4C1Ev(unsigned char *);
extern unsigned int FUN_002ea100(unsigned char *, unsigned int *);
/* Supplied declaration required: _ZN9Obj55b1045resetEv. */
/* Supplied declaration required: FUN_002f4cd6. */
extern unsigned int FUN_002fafd8(int, unsigned int);
extern int _ZN9Obj55b104C1Ejj(int, unsigned int);
/* Supplied declaration required: _ZN9Obj5596acC1EhRK10WordVector. */
extern int _ZN15Obj55aff4VectorC1Ej(int, unsigned int);
/* Supplied declaration required: FUN_00387edc. */
/* Supplied declaration required: FUN_004311c0. */
/* Supplied declaration required: _ZN9Obj55aad4D1Ev. */
/* Supplied declaration required: _ZN9Obj55ac68D1Ev. */
/* Supplied declaration required: FUN_00522a48. */
/* Supplied declaration required: _ZN15Obj55aff4VectoraSERKS_. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00413144(int param_1)

{
/* irregular: 23 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned char *temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  unsigned int uStack_254;
  unsigned int temp_v6;
  unsigned char temp_v7 [52];
  unsigned char temp_v8 [32];
  unsigned char temp_v9 [152];
  unsigned char *temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int *temp_v14;
  unsigned int *temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned char temp_v23 [100];
  int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned char temp_v30 [8];
  unsigned int *temp_v31;
  unsigned int *temp_v32;
  unsigned int temp_v33;
  unsigned char temp_v34 [8];
  
  temp_v3 = &DAT_0055aadc;
  temp_v4 = 0;
  temp_v0 = _ZN9Obj55aff4C1Ev(temp_v7);
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v0 = _ZN9Obj5596acC1EhRK10WordVector(temp_v0 + 8,3,&temp_v11);
  asdOperatorDeleteArray(temp_v11);
  {
    OnlineWordVectorStorage empty = { NULL, NULL, NULL };
    temp_v0 = _ZN9Obj5596acC1EhRK10WordVector(temp_v0 + 0x14, 3, &empty);
    asdOperatorDeleteArray(empty.begin);
  }
  temp_v0 = _ZN9Obj55b104C1Ejj(temp_v0 + 0x18,0);
  temp_v0 = _ZN15Obj55aff4VectorC1Ej(temp_v0 + 0x20,0);
  temp_v0 = temp_v0 + 0x20;
  temp_v0 = reinterpret_cast<int>(_ZN9Obj55ac68C1Ev(
      reinterpret_cast<Obj55ac68Storage*>(temp_v0)));
  *(unsigned char **)(temp_v0 - 0x88) = &DAT_0055a30c;
  *(unsigned int *)(temp_v0 - 0x80) = 0;
  *(unsigned int *)(temp_v0 - 0x7c) = 0;
  *(unsigned int *)(temp_v0 - 0x78) = 0;
  temp_v1 = (u32)new (temp_v34) Obj55aff4((const char*)&LAB_004134dc);
  _ZN9Obj55aff4aSERKS_(temp_v0 - 0x74,temp_v1);
  reinterpret_cast<Obj55aff4*>(temp_v34)->Obj55aff4::~Obj55aff4();
  temp_v27 = 0;
  temp_v28 = 0;
  temp_v29 = 0;
  temp_v1 = _ZN9Obj5596acC1EhRK10WordVector(&temp_v10,3,&temp_v27);
  _ZN9Obj5596acaSERKS_(temp_v0 - 0x6c,temp_v1);
  temp_v10 = &DAT_0055a4c0;
  asdOperatorDeleteArray(temp_v12);
  asdOperatorDeleteArray(temp_v27);
  temp_v27 = 0;
  temp_v28 = 0;
  temp_v29 = 0;
  temp_v1 = _ZN9Obj5596acC1EhRK10WordVector(&temp_v10,3,&temp_v27);
  _ZN9Obj5596acaSERKS_(temp_v0 - 0x58,temp_v1);
  temp_v10 = &DAT_0055a4c0;
  asdOperatorDeleteArray(temp_v12);
  asdOperatorDeleteArray(temp_v27);
  *(unsigned short *)(temp_v0 - 0x44) = 0x5a;
  temp_v31 = (unsigned int *)0x0;
  temp_v32 = (unsigned int *)0x0;
  temp_v33 = 0;
  _ZN15Obj55aff4VectoraSERKS_(temp_v0 - 0x20,&temp_v31);
  puVar1 = temp_v32;
  for (puVar4 = temp_v31; puVar4 != puVar1; puVar4 = puVar4 + 2) {
    (**(romwright_code **)*puVar4)(puVar4);
  }
  asdOperatorDeleteArray(temp_v31);
  _ZN9Obj55b1045resetEv(temp_v0 - 0x40);
  *(unsigned int *)(temp_v0 - 0x10) = 0;
  *(unsigned int *)(temp_v0 - 0xc) = 0;
  *(unsigned short *)(temp_v0 - 4) = 0;
  *(unsigned char *)(temp_v0 - 2) = 0;
  Obj55ac68Storage initialState;
  *(unsigned int *)(temp_v0 - 8) = 0;
  _ZN9Obj55ac68C1Ev(&initialState);
  FUN_00120648(temp_v0, &initialState);
  _ZN9Obj55ac68D1Ev(&initialState);
  temp_v5 = *(unsigned int *)(param_1 + 0x90);
  uStack_254 = *(unsigned int *)(param_1 + 0x94);
  temp_v0 = campCecHasObject();
  if (temp_v0 != 0) {
    temp_v1 = FUN_002bf520();
    rt_memcpy_w(temp_v23,temp_v1,100);
  }
  else {
    FUN_00387edc(temp_v23);
  }
  _ZN9Obj55b1045resetEv(temp_v8);
  FUN_002f4cd6(temp_v8,temp_v23,100);
  temp_v1 = 0x19a2;
  temp_v14 = (unsigned int *)0x0;
  temp_v15 = (unsigned int *)0x0;
  temp_v16 = 0;
  FUN_004311c0(0x19a2);
  temp_v17 = 0;
  temp_v18 = 0;
  temp_v19 = 0;
  temp_v20 = 0;
  temp_v21 = 0;
  temp_v22 = 0;
  textFormatBuffer(&temp_v17,&LAB_004134e8,temp_v1,temp_v2);
  temp_v1 = FUN_002ea100(temp_v30,(unsigned int *)&temp_v17);
  FUN_00522a48(&temp_v14,temp_v1);
  reinterpret_cast<Obj55aff4*>(temp_v30)->Obj55aff4::~Obj55aff4();
  _ZN15Obj55aff4VectoraSERKS_(temp_v9,&temp_v14);
  temp_v6 = 0x70;
  temp_v0 = operatorNew(0x78);
  if (temp_v0 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = FUN_002fafd8(temp_v0,0);
  }
  puVar4 = (unsigned int *)operatorNew(0x14);
  if (puVar4 != (unsigned int *)0x0) {
    puVar4[2] = (unsigned int)referenceOwnerCopyAndAdvance;
    puVar4[3] = 0;
    puVar4[4] = temp_v1;
    *puVar4 = (unsigned int)&DAT_0055cacc;
    puVar4[1] = param_1;
    holderSetFlagBits(temp_v1,2);
    FUN_00103f54(temp_v1,puVar4,0,1);
  }
  FUN_0011b634(param_1 + 4,temp_v1,&temp_v3);
  puVar1 = temp_v15;
  for (puVar4 = temp_v14; puVar4 != puVar1; puVar4 = puVar4 + 2) {
    (**(romwright_code **)*puVar4)(puVar4);
  }
  asdOperatorDeleteArray(temp_v14);
  _ZN9Obj55aad4D1Ev(&temp_v3);
  return;
}

} /* extern "C" */
