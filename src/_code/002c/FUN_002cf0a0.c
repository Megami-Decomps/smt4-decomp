/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf0a0` (_code @ 0x2cf0a0, 0x190 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_001ad3f0; /* 0x1ad3f0 */
extern int FUN_001ad5f8(); /* 0x1ad5f8 */
extern unsigned char LAB_002cf274; /* 0x2cf274 */
extern unsigned char LAB_002cf288; /* 0x2cf288 */
extern unsigned char LAB_002cf2a0; /* 0x2cf2a0 */
extern unsigned int *DAT_0043df28; /* 0x43df28 */
extern unsigned int DAT_0043df40; /* 0x43df40 */
extern unsigned int DAT_0043df44; /* 0x43df44 */

extern int FUN_0024bd24(unsigned int);
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_002a6214. */
extern int FUN_002a63f8(unsigned int, unsigned int);
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_002c5b04. */


void FUN_002cf0a0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int temp_v1;
  
  if (DAT_0043df28 == (unsigned int *)0x0) {
    DAT_0043df28 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x28,1);
  }
  puVar1 = DAT_0043df28;
  *DAT_0043df28 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar2 = &LAB_002cf274;
  FUN_002c5978(&LAB_002cf274,1,0,0,FUN_001ad5f8,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_002cf288,0x81,0,0,&LAB_001ad3f0,0,0,puVar2);
  FUN_002c4c00(&LAB_002cf2a0,0xdf,0,0,&LAB_001ad3f0,0,0,*puVar1);
  puVar1[6] = 0;
  puVar1[3] = 0;
  *(unsigned char *)(puVar1 + 9) = 0;
  puVar1[8] = 0x3f800000;
  puVar1[7] = 0x3f800000;
  puVar1[4] = param_1;
  puVar1[5] = param_2;
  temp_v1 = 0;
  do {
    temp_v0 = FUN_0024bd24((&DAT_0043df40)[temp_v1 * 3]);
    if (temp_v0 == 0) {
      FUN_002c5b04((&DAT_0043df40)[temp_v1 * 3],0);
      *(unsigned char *)(temp_v1 * 0xc + 0x43df49) = 1;
    }
    temp_v0 = FUN_002a63f8((&DAT_0043df40)[temp_v1 * 3],(&DAT_0043df44)[temp_v1 * 3]);
    if (temp_v0 == 0) {
      FUN_002a6214((&DAT_0043df40)[temp_v1 * 3],(&DAT_0043df44)[temp_v1 * 3]);
      *(unsigned char *)(temp_v1 * 0xc + 0x43df48) = 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  FUN_00297704(0x2cf2c0,puVar1 + 2,0);
  return;
}
