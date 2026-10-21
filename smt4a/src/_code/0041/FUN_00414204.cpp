/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00414204` (_code @ 0x414204, 0x210 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match1_Obj55a5a8.h"

extern "C" {

int textFormatBuffer(int *, unsigned char *, unsigned int, unsigned int);
int FUN_00103f54(unsigned int, unsigned int *, int, int);
int holderSetFlagBits(unsigned int, int);
int FUN_0011b63e(int, unsigned int, unsigned char [5], int);
int asdOperatorDeleteArray(...);
int operatorNew(int);
int onlineStringDestroy(unsigned char [8]);
int FUN_004311c0(int);
int FUN_00432b10(unsigned char [5]);
int FUN_00522a48(unsigned int **, unsigned int);
int FUN_00522bf4(unsigned char [44], unsigned int **);

typedef int romwright_code(...);
/* stack frame of param_1: 11 slot(s), 39 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned short sp9C; /* 0x9c: local_9c */
    unsigned char spBB; /* 0xbb: local_bb */
} param_1_stack;

extern unsigned char LAB_0041441c; /* 0x41441c */
extern int FUN_004148fc(...); /* 0x4148fc */
extern unsigned char DAT_0055cacc; /* 0x55cacc */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00103f54. */
/* Supplied declaration required: holderSetFlagBits. */
/* Supplied declaration required: FUN_0011b63e. */
extern unsigned int *rt_malloc(unsigned int);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: operatorNew. */
/* Supplied declaration required: onlineStringDestroy. */
extern unsigned int FUN_002ea100(unsigned char *, unsigned int *);
extern unsigned int FUN_002fafd8(int, unsigned int);
/* Supplied declaration required: FUN_004311c0. */
/* Supplied declaration required: FUN_00432b10. */
/* Supplied declaration required: FUN_00522a48. */
/* Supplied declaration required: FUN_00522bf4. */


/* WARNING: Removing unreachable block (ram,0x00414234) */
/* WARNING: Removing unreachable block (ram,0x00414238) */
/* WARNING: Removing unreachable block (ram,0x0041423c) */
/* WARNING: Removing unreachable block (ram,0x00414240) */
/* WARNING: Removing unreachable block (ram,0x00414244) */
/* WARNING: Removing unreachable block (ram,0x00414284) */
/* WARNING: Removing unreachable block (ram,0x00414288) */
/* WARNING: Removing unreachable block (ram,0x0041428c) */
/* WARNING: Removing unreachable block (ram,0x00414290) */
/* WARNING: Removing unreachable block (ram,0x00414294) */

void FUN_00414204(int param_1)

{
/* irregular: 24 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar5;
  unsigned int temp_v2;
  unsigned char temp_v3 [5];
  unsigned char temp_v4;
  unsigned short temp_v5;
  unsigned char temp_v6 [44];
  unsigned int *temp_v7;
  unsigned int *temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned char temp_v16 [8];
  
  puVar2 = (unsigned int *)rt_malloc(0x80);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = *(unsigned int *)(param_1 + 0xf8);
  }
  asdOperatorDeleteArray(0);
  FUN_00432b10(temp_v3);
  temp_v4 = 1;
  temp_v5 = 999;
  temp_v0 = 0x19a2;
  temp_v7 = (unsigned int *)0x0;
  temp_v8 = (unsigned int *)0x0;
  temp_v9 = 0;
  FUN_004311c0(0x19a2);
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  textFormatBuffer(&temp_v10,&LAB_0041441c,temp_v0,temp_v2);
  temp_v0 = FUN_002ea100(temp_v16,(unsigned int *)&temp_v10);
  FUN_00522a48(&temp_v7,temp_v0);
  onlineStringDestroy(temp_v16);
  FUN_00522bf4(temp_v6,&temp_v7);
  temp_v1 = operatorNew(0x78);
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v0 = FUN_002fafd8(temp_v1,0);
  }
  puVar5 = (unsigned int *)operatorNew(0x14);
  if (puVar5 != (unsigned int *)0x0) {
    puVar5[1] = param_1;
    puVar5[2] = (unsigned int)FUN_004148fc;
    puVar5[3] = 0;
    *puVar5 = (unsigned int)&DAT_0055cacc;
    puVar5[4] = temp_v0;
    holderSetFlagBits(temp_v0,2);
    FUN_00103f54(temp_v0,puVar5,0,1);
  }
  FUN_0011b63e(param_1 + 4,temp_v0,temp_v3,param_1 + 0xdc);
  puVar1 = temp_v8;
  for (puVar5 = temp_v7; puVar5 != puVar1; puVar5 = puVar5 + 2) {
    (**(romwright_code **)*puVar5)(puVar5);
  }
  asdOperatorDeleteArray(temp_v7);
  reinterpret_cast<Obj55a5a8*>(temp_v3)->Obj55a5a8::~Obj55a5a8();
  asdOperatorDeleteArray(puVar2);
  return;
}

} /* extern "C" */
