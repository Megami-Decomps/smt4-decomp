/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2044` (_code @ 0x2c2044, 0x1d4 bytes) from smt4_v1.2.0.cxi.
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

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Supplied declaration required: FUN_002bfedc. */
extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: FUN_002c4938. */
extern unsigned int FUN_002c5300(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_002c2044(int param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_cr0, in_s1, in_s2, in_s8; 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int in_cr0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s8;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  FUN_002c4938(param_1,0x508);
  *(unsigned char *)(param_1 + 1) = 0;
  temp_v2 = 0;
  temp_v3 = 0x3f800000;
  if (((DAT_00476634 & 1) == 0) && (temp_v1 = FUN_002bfefc(&DAT_00476634), temp_v1 != 0)) {
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
  FUN_002bfedc(param_1 + 0x38,&DAT_004efd6c);
  temp_v0 = DAT_00476638;
  if (((DAT_00476638 & 1) == 0) && (temp_v1 = FUN_002bfefc(&DAT_00476638), temp_v0 = 0, temp_v1 != 0)) {
    if (*(int *)(param_3 * 0x10 + 0x4cc) != 0) {
      return 0;
    }
    temp_v0 = FUN_002c5300(0x10000,0x100,0,param_2,1);
  }
  else {
    param_1 = (int)temp_v0 >> 3;
  }
  *(unsigned int *)(param_1 + 0x90) = in_s2;
  do {
    *(unsigned int *)(param_1 + 0x94) = in_s1;
    in_s1 = *(unsigned int *)(param_1 + 0x1a4);
    *(unsigned int *)(param_1 + 0x1b8) = in_s8;
    *(unsigned int *)(param_1 + 0x10) = in_s2;
    coprocessor_storelong(0,in_cr0,temp_v0);
  } while( 1 );
}
