/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116770` (_code @ 0x116770, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001167d4; /* 0x1167d4 */
extern unsigned char DAT_005588a0; /* 0x5588a0 */
extern unsigned char DAT_00559d58; /* 0x559d58 */
extern unsigned int DAT_00594a4c; /* 0x594a4c */
extern int DAT_00594a5c; /* 0x594a5c */

extern unsigned int FUN_002e9300(unsigned int *, unsigned char *);
/* Supplied declaration required: FUN_002e9318. */
extern unsigned int *FUN_002f58d0(int, unsigned int, unsigned int);
extern int FUN_002f5928(unsigned int *, unsigned int);
extern int FUN_002f9e5c(int);


unsigned int *
FUN_00116770(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int uStack_18;
  unsigned int uStack_14;
  
  *param_1 = (unsigned int)&DAT_00559d58;
  *(unsigned char *)(param_1 + 1) = 0;
  uStack_18 = param_3;
  uStack_14 = param_4;
  temp_v0 = FUN_002f5928(param_1 + 2,0x8000);
  temp_v0 = FUN_002f9e5c(temp_v0 + 0x34);
  temp_v1 = FUN_002e9300((unsigned int *)&uStack_18,&LAB_001167d4);
  puVar3 = (unsigned int *)FUN_002f58d0(temp_v0 + 0xc,temp_v1,DAT_00594a4c);
  puVar3[0xb] = 0;
  *puVar3 = (unsigned int)&DAT_005588a0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  FUN_002e9318(&uStack_18);
  if (DAT_00594a5c != -0x80000000) {
    puVar3[8] = DAT_00594a5c;
  }
  return puVar3 + -0x12;
}
