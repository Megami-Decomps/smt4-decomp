/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105cac` (_code @ 0x105cac, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_00105df0; /* 0x105df0 */
extern unsigned char LAB_0010e52c; /* 0x10e52c */
extern unsigned char LAB_0010e9f0; /* 0x10e9f0 */
extern unsigned char *DAT_0044ea58; /* 0x44ea58 */
extern int DAT_0044ea5c; /* 0x44ea5c */
extern unsigned int DAT_004d4924; /* 0x4d4924 */
extern unsigned int DAT_004d4930; /* 0x4d4930 */

/* Supplied declaration required: FUN_002c1e30. */
/* Supplied declaration required: FUN_002c1edc. */
/* Supplied declaration required: FUN_002c2044. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_00105cac(unsigned int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = 0x100;
  FUN_002c498c(0x100,0x100,0,0xa98,1);
  FUN_002c4938();
  DAT_0044ea5c = temp_v0;
  FUN_002c2044(temp_v0 + 0x88,1);
  FUN_002c1edc(temp_v0 + 0x88,&DAT_004d4924,&DAT_004d4930);
  FUN_002c1e30(temp_v0 + 0x88,1);
  FUN_002c2044(temp_v0 + 0x590,1);
  FUN_002c1edc(temp_v0 + 0x590,&DAT_004d4924,&DAT_004d4930);
  FUN_002c1e30(temp_v0 + 0x590,1);
  *(int *)(temp_v0 + 0x80) = temp_v0 + 0x88;
  *(int *)(temp_v0 + 0x84) = temp_v0 + 0x590;
  puVar2 = &LAB_00105df0;
  FUN_002c5788(&LAB_00105df0,param_1,0,0,&LAB_0010e52c,&LAB_0010e9f0,DAT_0044ea5c);
  DAT_0044ea58 = puVar2;
  return;
}
