/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec538` (_code @ 0x3ec538, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char LAB_00349fbc; /* 0x349fbc */
extern unsigned char LAB_0034ad90; /* 0x34ad90 */
extern unsigned char LAB_0034b144; /* 0x34b144 */
extern unsigned int DAT_0044cdc0; /* 0x44cdc0 */
extern unsigned int DAT_0044cdc4; /* 0x44cdc4 */
extern unsigned char DAT_004be698; /* 0x4be698 */
extern unsigned char DAT_004bf89c; /* 0x4bf89c */
extern unsigned char DAT_004c14a0; /* 0x4c14a0 */
#ifndef ROMWRIGHT_STORAGE_DAT_004c2424_1_1_DEFINED
#define ROMWRIGHT_STORAGE_DAT_004c2424_1_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_004c2424_1_1 {
    unsigned char whole;
    unsigned char u1[1];
    signed char s1[1];
};
typedef char romwright_storage_DAT_004c2424_1_1_size_check[(sizeof(union romwright_storage_DAT_004c2424_1_1) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004c2424_1_1_u1_width_check[(sizeof(((union romwright_storage_DAT_004c2424_1_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004c2424_1_1_s1_width_check[(sizeof(((union romwright_storage_DAT_004c2424_1_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_DAT_004c2424_1_1 DAT_004c2424; /* 0x4c2424 */

/* Supplied declaration required: FUN_002c5d5c. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003ec538(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: irregular input(s): in_stack_0000003c, in_stack_00000060; 6 native warning(s); review required */
  unsigned char *puVar1;
  int unaff_r4;
  int unaff_r6;
  unsigned int *in_stack_0000003c;
  unsigned int in_stack_00000060;
  
  *param_3 = param_1;
  param_3[1] = param_2;
  DAT_0044cdc0 = 0;
  DAT_0044cdc4 = 0;
  FUN_002c5d5c(&DAT_004be698,&LAB_0034b144,0x20,0x90);
  FUN_002c5d5c(&DAT_004bf89c,&LAB_00349fbc,0x1c,0x100);
  FUN_002c5d5c(&DAT_004c14a0,&LAB_0034ad90,0x7c,0x20);
  puVar1 = &DAT_004c2424.whole;
  DAT_004c2424.whole = &DAT_004c2424.whole;
  while (puVar1 = puVar1 + 1, (int)puVar1 < unaff_r6) {
    puVar1[unaff_r4] = 0x70;
  }
  *(unsigned char *)(unaff_r4 + unaff_r6) = 0;
  in_stack_0000003c[2] = in_stack_00000060;
  *in_stack_0000003c = 0;
  in_stack_0000003c[1] = unaff_r6;
  return;
}
