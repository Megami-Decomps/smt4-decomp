/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105c50` (_code @ 0x105c50, 0x114 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_00105d94; /* 0x105d94 */
extern unsigned char LAB_0010e508; /* 0x10e508 */
extern unsigned char LAB_0010e9cc; /* 0x10e9cc */
extern unsigned char *DAT_0044ea58; /* 0x44ea58 */
extern int DAT_0044ea5c; /* 0x44ea5c */
extern unsigned int DAT_004d4924; /* 0x4d4924 */
extern unsigned int DAT_004d4930; /* 0x4d4930 */

/* Supplied declaration required: FUN_002c1ffc. */
/* Supplied declaration required: FUN_002c20a8. */
/* Supplied declaration required: FUN_002c2210. */
/* Supplied declaration required: FUN_002c4b30. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */


void FUN_00105c50(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = FUN_002c4b84(0x100,0x100,0,0xa98,1);
  FUN_002c4b30(temp_v0,0xa98);
  DAT_0044ea5c = temp_v0;
  FUN_002c2210(temp_v0 + 0x88,1);
  FUN_002c20a8(temp_v0 + 0x88,&DAT_004d4924,&DAT_004d4930);
  FUN_002c1ffc(temp_v0 + 0x88,1);
  FUN_002c2210(temp_v0 + 0x590,1);
  FUN_002c20a8(temp_v0 + 0x590,&DAT_004d4924,&DAT_004d4930);
  FUN_002c1ffc(temp_v0 + 0x590,1);
  *(int *)(temp_v0 + 0x80) = temp_v0 + 0x88;
  *(int *)(temp_v0 + 0x84) = temp_v0 + 0x590;
  puVar2 = &LAB_00105d94;
  FUN_002c5978(&LAB_00105d94,param_1,0,0,&LAB_0010e508,&LAB_0010e9cc,DAT_0044ea5c);
  DAT_0044ea58 = puVar2;
  return;
}
