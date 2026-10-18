/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb378` (_code @ 0x2bb378, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern unsigned int uRam00000024; /* 0x24 */
extern unsigned int DAT_00433158; /* 0x433158 */
extern int DAT_00465660; /* 0x465660 */
extern int DAT_00465664; /* 0x465664 */
extern int DAT_00465668; /* 0x465668 */
extern int DAT_004656b0; /* 0x4656b0 */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002bd420. */
/* Supplied declaration required: FUN_002c30c4. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
extern int FUN_0031c658(unsigned int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bb378(unsigned int param_1,unsigned int param_2,unsigned char *param_3)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr10, in_cr13, in_cr2, in_cr3, in_cr5, in_cr8, in_cr9, in_fpscr, in_s2, in_s5; 16 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned short unaff_r4;
  int unaff_r6;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr3;
  unsigned int in_cr5;
  unsigned int in_cr8;
  unsigned int in_cr9;
  unsigned int in_cr10;
  unsigned int in_cr13;
  float in_s2;
  float in_s5;
  unsigned char temp_v4 [4];
  int iStack_68;
  unsigned int *puStack_64;
  unsigned char *puStack_60;
  int iStack_5c;
  int iStack_58;
  unsigned int uStack_54;
  int iStack_44;
  unsigned int *puStack_40;
  int temp_v5;
  unsigned char temp_v6 [8];
  
  if (DAT_00465668 != 0) {
    param_3 = (unsigned char *)0x1;
    puVar2 = temp_v6;
    temp_v5 = DAT_00465668;
    FUN_002c40f8(puVar2,&temp_v5,1,0);
    if ((int)puVar2 < 0) {
      FUN_002c526c();
    }
  }
  if (DAT_00465664 == 0) {
    DAT_00465664 = DAT_00465660;
  }
  if (DAT_004656b0 != 0) {
    *(unsigned short *)((DAT_004656b0 >> 0x20) + 0xc) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  temp_v3 = 0x2bb3f0;
  FUN_002c30c4(DAT_00465664);
  coprocessor_store(0,in_cr1,temp_v2);
  iStack_44 = unaff_r6 >> 8;
  puStack_40 = (unsigned int *)&DAT_004656b0;
  *param_3 = (char)param_3;
  iStack_68 = (int)param_3 << 1;
  puStack_64 = (unsigned int *)&DAT_004656b0;
  puStack_60 = param_3;
  iStack_5c = temp_v2;
  iStack_58 = temp_v2;
  uStack_54 = temp_v3;
  FUN_002b9024();
  if (param_3 == (unsigned char *)0x0) {
    coprocessor_function(10,0xf,1,in_cr0,in_cr8,in_cr0);
    coprocessor_function(0,0xb,0,in_cr0,in_cr13,in_cr9);
    coprocessor_moveto(10,0,0,temp_v4,in_cr1,in_cr10);
    VectorSignedToFloat(*(float *)(temp_v2 + 0x40) - in_s5 * in_s2,(unsigned char)(in_fpscr >> 0x16) & 3)
    ;
    coprocessor_function(10,0xf,4,in_cr2,in_cr8,in_cr3);
  }
  else {
    temp_v0 = param_3[2];
    temp_v1 = FUN_0031c658(DAT_00433158,(unsigned int)temp_v0);
    if (temp_v1 == 0) {
      FUN_002bd420((unsigned int)temp_v0 << 1);
      uRam00000024 = 0x24;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
