/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00235dc4` (_code @ 0x235dc4, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char LAB_00235fa0; /* 0x235fa0 */
extern unsigned char LAB_00235fb8; /* 0x235fb8 */
extern unsigned char LAB_00235fd4; /* 0x235fd4 */
extern int FUN_00236110(); /* 0x236110 */
extern unsigned char LAB_0027db84; /* 0x27db84 */
extern unsigned char LAB_002bd360; /* 0x2bd360 */
extern unsigned char LAB_002bd3a4; /* 0x2bd3a4 */
extern unsigned char LAB_002bd3e0; /* 0x2bd3e0 */
extern unsigned int *DAT_00588c30; /* 0x588c30 */
extern int DAT_00588c34; /* 0x588c34 */
extern int DAT_00588c38; /* 0x588c38 */
extern int DAT_00588c3c; /* 0x588c3c */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_00180008. */
/* Supplied declaration required: FUN_0040a5a0. */


void FUN_00235dc4(int *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  
  FUN_00180008(0);
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x20,1);
  DAT_00588c30 = puVar1;
  *(unsigned char *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  *(unsigned char *)((int)puVar1 + 0x19) = 0;
  if (param_1 == (int *)0x0) {
    DAT_00588c38 = 0;
    DAT_00588c3c = 0;
  }
  else {
    if (param_2 != 0xc) {
      if (param_2 == 4) {
        DAT_00588c34 = *param_1;
        DAT_00588c38 = 0;
        DAT_00588c3c = 0;
      }
    }
    else {
      if (*param_1 != -1) {
        DAT_00588c34 = *param_1;
      }
      DAT_00588c38 = param_1[1];
      DAT_00588c3c = param_1[2];
    }
    FUN_0040a5a0(DAT_00588c34,1);
  }
  puVar2 = &LAB_00235fa0;
  FUN_0014e38c(&LAB_00235fa0,4,0,0,FUN_00236110,&LAB_002bd360,DAT_00588c30);
  *puVar1 = (unsigned int)puVar2;
  puVar3 = &LAB_00235fb8;
  FUN_0015155c(&LAB_00235fb8,0x71,1,0,&LAB_002bd3e0,0,DAT_00588c30,puVar2);
  puVar1[1] = (unsigned int)puVar3;
  FUN_0015155c(&LAB_00235fb8,0x81,1,0,&LAB_0027db84,0,DAT_00588c30,*puVar1);
  FUN_0015155c(&LAB_00235fb8,0xdd,1,0,&LAB_0027db84,0,DAT_00588c30,*puVar1);
  puVar2 = &LAB_00235fd4;
  FUN_0015155c(&LAB_00235fd4,0xeb,1,0,&LAB_002bd3a4,0,DAT_00588c30,*puVar1);
  puVar1[3] = (unsigned int)puVar2;
  return;
}
