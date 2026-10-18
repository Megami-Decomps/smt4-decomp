/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4eb8` (_code @ 0x2b4eb8, 0xf0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int uRam000014e5; /* 0x14e5 */
extern unsigned int DAT_00433158; /* 0x433158 */

/* Unsupported intrinsic, declaration required: software_udf (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Supplied declaration required: FUN_00140d40. */
extern int FUN_00140dac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0014f7ec. */
/* Supplied declaration required: FUN_0014f8b8. */
/* Supplied declaration required: FUN_002b06a0. */


/* WARNING: Instruction at (ram,0x002b5bae) overlaps instruction at (ram,0x002b5bac)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002b4ef8) */
/* WARNING: Removing unreachable block (ram,0x002b4a48) */

unsigned int FUN_002b4eb8(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr3; 13 native warning(s); review required */
  romwright_code *pcVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr3;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  unsigned int uStack_38;
  unsigned int *puStack_34;
  unsigned int uStack_30;
  int iStack_2c;
  int iStack_28;
  unsigned int uStack_24;
  
  FUN_0014f8b8((int)(char)param_2);
  temp_v4 = param_1 + param_2 * 0x10;
  puVar5 = (unsigned int *)(temp_v4 + 0x2a0);
  if (*(char *)(temp_v4 + 0x2a4) != '\x01') {
                    /* WARNING: Does not return */
    pcVar1 = (romwright_code *)software_udf(0xd7,0x2b5bb0);
    (*pcVar1)();
  }
  temp_v0 = *puVar5;
  temp_v5 = 0x2b4f0c;
  FUN_0014f7ec();
  temp_v3 = temp_v2 & temp_v0;
  coprocessor_function(0,1,0,in_cr0,in_cr1,in_cr3);
  uStack_38 = 0;
  temp_v1 = temp_v0;
  if (-1 < (int)temp_v0) {
    temp_v6 = 0x2b6cac;
    puStack_34 = puVar5;
    uStack_30 = temp_v0;
    iStack_2c = param_2;
    iStack_28 = param_1;
    uStack_24 = temp_v5;
    temp_v4 = FUN_00140dac(DAT_00433158,temp_v0);
    if (temp_v4 == 0) {
      if ((int)temp_v0 >= 0x200) {
        if ((((int)temp_v0 >> 0x1f) & 1U) != 0) {
          uRam000014e5 = temp_v6;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iStack_48 = ((int)temp_v0 / 0x10) * 0x10;
      iStack_44 = iStack_48 + 0x10;
      iStack_40 = ((int)temp_v0 % 0x10) * 0x20;
      iStack_3c = iStack_40 + 0x20;
      temp_v1 = 2;
      FUN_002b06a0(2,0x25,0,temp_v3,temp_v3 - (int)puVar5,param_4,&iStack_48);
      return temp_v1;
    }
    temp_v1 = DAT_00433158;
    FUN_00140d40(DAT_00433158,temp_v0,temp_v3,temp_v3 - (int)puVar5,param_4);
  }
  return temp_v1;
}
