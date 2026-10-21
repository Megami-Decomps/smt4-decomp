/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00422048` (_code @ 0x422048, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00158b88(unsigned int [6]);
int gfxCombinerStateInitialize(unsigned int [6]);
int FUN_0015fcec(unsigned int [6], unsigned char *);
int FUN_00177e6c(unsigned char *, unsigned int);
int sysMemClear(unsigned int *, int);

/* stack frame of void: 5 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp74; /* 0x74: local_74 */
    unsigned char sp75; /* 0x75: local_75 */
    unsigned char sp76; /* 0x76: local_76 */
    unsigned char sp83; /* 0x83: local_83 */
    unsigned char sp88; /* 0x88: local_88 */
} void_stack;

extern unsigned char DAT_005cc554; /* 0x5cc554 */

/* Supplied declaration required: FUN_00158b88. */
/* Supplied declaration required: gfxCombinerStateInitialize. */
/* Supplied declaration required: FUN_0015fcec. */
/* Supplied declaration required: FUN_00177e6c. */
/* Supplied declaration required: sysMemClear. */
extern unsigned int FUN_0042c5d0(void);


unsigned int * FUN_00422048(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  int *piVar5;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3 [6];
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  
  puVar3 = temp_v3;
  temp_v0 = FUN_0042c5d0();
  puVar2 = &DAT_005cc554;
  FUN_00177e6c(&DAT_005cc554,temp_v0);
  gfxCombinerStateInitialize(temp_v3);
  FUN_00158b88(temp_v3);
  temp_v4 = 2;
  temp_v5 = 0xe;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  FUN_0015fcec(temp_v3,puVar2);
  puVar3[1] = 0xf0201;
  *puVar3 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf0202;
  sysMemClear(puVar3 + 4,0x98);
  piVar4 = (int *)(puVar3 + 0x2a);
  puVar3[5] = 0x823f0203;
  temp_v1 = 0;
  temp_v2 = 0xc;
  do {
    temp_v2 = temp_v2 - 1;
    piVar4[1] = -0x7fc0fdce;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar5 = piVar4 + 5;
    *piVar4 = temp_v1;
    temp_v1 = temp_v1 + 1;
    piVar4 = piVar4 + 6;
    *piVar5 = 0;
  } while (temp_v2 != 0);
  return puVar3 + 0x72;
}

} /* extern "C" */
