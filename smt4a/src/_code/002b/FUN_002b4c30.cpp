/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4c30` (_code @ 0x2b4c30, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bc460(void);
int matrix44SetIdentity(void);
int FUN_00514598(void);

extern unsigned int DAT_006472dc; /* 0x6472dc */
extern unsigned int DAT_006472e0; /* 0x6472e0 */
extern unsigned int DAT_006472e4; /* 0x6472e4 */
extern unsigned int DAT_006472e8; /* 0x6472e8 */
extern unsigned int DAT_0064731c; /* 0x64731c */
extern unsigned int DAT_00647320; /* 0x647320 */
extern unsigned int DAT_00647324; /* 0x647324 */
extern unsigned int DAT_0064732c; /* 0x64732c */
extern unsigned int DAT_00647330; /* 0x647330 */
extern unsigned int DAT_00647334; /* 0x647334 */
extern unsigned int DAT_0064733c; /* 0x64733c */
extern unsigned int DAT_00647340; /* 0x647340 */
extern unsigned int DAT_00647344; /* 0x647344 */

/* Supplied declaration required: FUN_001bc460. */
/* Supplied declaration required: matrix44SetIdentity. */
/* Supplied declaration required: FUN_00514598. */


void FUN_002b4c30(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  matrix44SetIdentity();
  DAT_006472dc = *param_2;
  DAT_006472e0 = param_2[1];
  DAT_006472e4 = param_2[2];
  DAT_006472e8 = param_2[3];
  FUN_00514598();
  FUN_001bc460();
  temp_v1 = DAT_00647324;
  temp_v0 = DAT_00647320;
  *param_1 = DAT_0064731c;
  param_1[1] = temp_v0;
  param_1[2] = temp_v1;
  temp_v1 = DAT_00647330;
  temp_v0 = DAT_0064732c;
  param_1[6] = DAT_00647334;
  param_1[4] = temp_v0;
  param_1[5] = temp_v1;
  temp_v1 = DAT_00647340;
  temp_v0 = DAT_0064733c;
  param_1[10] = DAT_00647344;
  param_1[8] = temp_v0;
  param_1[9] = temp_v1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}

} /* extern "C" */
