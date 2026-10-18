/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2210` (_code @ 0x2c2210, 0x104 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00476634; /* 0x476634 */
extern unsigned int DAT_00476638; /* 0x476638 */
extern unsigned int DAT_004efd6c; /* 0x4efd6c */
extern unsigned int DAT_004efd70; /* 0x4efd70 */
extern unsigned int DAT_004efd74; /* 0x4efd74 */
extern unsigned int DAT_004efd78; /* 0x4efd78 */
extern unsigned int DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern unsigned int DAT_004efd84; /* 0x4efd84 */
extern unsigned int DAT_004efd88; /* 0x4efd88 */
extern unsigned int DAT_004efd8c; /* 0x4efd8c */
extern unsigned int DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern unsigned int DAT_004efd98; /* 0x4efd98 */

/* Supplied declaration required: FUN_002c00b4. */
extern int FUN_002c00d4(unsigned int *);
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c54f0. */


/* WARNING: Control flow encountered bad instruction data */

unsigned int FUN_002c2210(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  FUN_002c4b30(param_1,0x508);
  *(unsigned char *)(param_1 + 1) = 0;
  temp_v2 = 0;
  temp_v3 = 0x3f800000;
  if (((DAT_00476634 & 1) == 0) && (temp_v1 = FUN_002c00d4(&DAT_00476634), temp_v1 != 0)) {
    DAT_004efd6c = temp_v3;
    DAT_004efd70 = temp_v2;
    DAT_004efd74 = temp_v2;
    DAT_004efd78 = temp_v2;
    DAT_004efd7c = temp_v2;
    DAT_004efd80 = temp_v3;
    DAT_004efd84 = temp_v2;
    DAT_004efd88 = temp_v2;
    DAT_004efd8c = temp_v2;
    DAT_004efd90 = temp_v2;
    DAT_004efd94 = temp_v3;
    DAT_004efd98 = temp_v2;
  }
  FUN_002c00b4(param_1 + 0x38,&DAT_004efd6c);
  puVar3 = &DAT_00476638;
  temp_v0 = DAT_00476638;
  if ((DAT_00476638 & 1) == 0) {
    temp_v1 = FUN_002c00d4(&DAT_00476638);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      param_1 = param_1 + param_3 * 0x500;
      puVar3 = (unsigned int *)(param_1 + 0x4bc);
      if (*(int *)(param_1 + 0x4cc) != 0) {
        return 0;
      }
      temp_v0 = 0x10000;
      FUN_002c54f0(0x10000,0x100,0,param_2,1);
    }
  }
  puVar3[0x10] = temp_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
