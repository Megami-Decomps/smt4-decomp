/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027fdb8` (_code @ 0x27fdb8, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(...);
int FUN_0015155c(...);
int FUN_00163060(...);
int FUN_0019ea64(...);
int FUN_0022677c(...);
int FUN_003fd63c(...);
int FUN_00408184(...);
int FUN_0040a470(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_0027e0d8(...); /* 0x27e0d8 */
extern unsigned char LAB_0027ffd8; /* 0x27ffd8 */
extern unsigned char LAB_0027ffe4; /* 0x27ffe4 */
extern unsigned char LAB_0027fff4; /* 0x27fff4 */
extern unsigned char LAB_002bd4f8; /* 0x2bd4f8 */
extern unsigned char LAB_0031619c; /* 0x31619c */
extern unsigned char LAB_003161b4; /* 0x3161b4 */
extern unsigned char LAB_00358a40; /* 0x358a40 */
extern unsigned int *DAT_0056fd30; /* 0x56fd30 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0019ea64. */
/* Supplied declaration required: FUN_0022677c. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_0040a470. */


void FUN_0027fdb8(unsigned int *param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned char *puVar3;
  
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x604,1);
  DAT_0056fd30 = puVar1;
  FUN_003fd63c(0x465,0,1);
  *(unsigned char *)((int)puVar1 + 5) = 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(unsigned char *)((int)puVar1 + 9) = 0x14;
  puVar1[3] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x159] = 0;
  *(unsigned char *)(puVar1 + 0x15a) = 0;
  puVar1[0x15b] = 0;
  puVar1[0x15f] = 0;
  puVar1[0x15e] = 0;
  puVar1[0x162] = 0;
  puVar1[0x161] = 0;
  puVar1[0x165] = 0;
  puVar1[0x164] = 0;
  puVar1[0x168] = 0;
  puVar1[0x167] = 0;
  FUN_0019ea64(0);
  puVar1[0x15] = 0;
  *(unsigned char *)(puVar1 + 1) = 0;
  if (param_1 != (unsigned int *)0x0) {
    *(char *)((int)puVar1 + 9) = (char)*param_1;
    *(unsigned char *)((int)puVar1 + 5) = 0;
    temp_v0 = FUN_0018719c(0x304);
    if (temp_v0 == 0) {
      FUN_0040a470(*(unsigned char *)((int)puVar1 + 9),1);
      FUN_00408184(0x1c,1);
    }
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  else {
    puVar1[5] = 0;
    puVar1[4] = 1;
    FUN_0022677c(0,0xff);
  }
  puVar3 = &LAB_0027ffd8;
  FUN_0014e38c(&LAB_0027ffd8,4,0,0,FUN_0027e0d8,&LAB_0031619c,0);
  *puVar1 = (unsigned int)puVar3;
  FUN_0015155c(&LAB_0027ffe4,0x77,0,0,&LAB_002bd4f8,0,0,puVar3);
  FUN_0015155c(&LAB_0027ffe4,0xd3,0,0,&LAB_00358a40,0,0,*puVar1);
  FUN_0015155c(&LAB_0027fff4,0xeb,0,0,&LAB_003161b4,0,0,*puVar1);
  return;
}

} /* extern "C" */
