/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e9fe4` (_code @ 0x3e9fe4, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int DAT_00573a20; /* 0x573a20 */
extern unsigned int DAT_00573a24; /* 0x573a24 */
extern unsigned int DAT_00573a50; /* 0x573a50 */
extern unsigned int DAT_00573a54; /* 0x573a54 */
extern unsigned int DAT_00573aa0; /* 0x573aa0 */
extern unsigned int DAT_00573aa4; /* 0x573aa4 */

extern int FUN_0019f18c(void);
extern int FUN_004186a4(void);
/* Supplied declaration required: FUN_004186e0. */
extern unsigned int FUN_004bb80c(void);
/* Supplied declaration required: FUN_004bb9c0. */
/* Supplied declaration required: FUN_004bbb74. */
/* Supplied declaration required: FUN_004bbc4c. */
/* Supplied declaration required: FUN_004bc778. */


void FUN_003e9fe4(int param_1,unsigned int *param_2,int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  
  temp_v0 = *(int *)(param_1 + 0xec);
  puVar6 = (unsigned int *)(param_1 + 0x45a0);
  if ((param_3 != 0) &&
     (param_4 = DAT_00573a24,
     (*puVar6 & DAT_00573a20) != 0 || (*(unsigned int *)(param_1 + 0x45a4) & DAT_00573a24) != 0)) {
    FUN_004bc778(param_2,temp_v0,*(unsigned int *)(param_1 + 0x180),*(unsigned int *)(param_1 + 0x184),
                 (int)(char)*(unsigned int *)(param_1 + 0x18c),
                 (int)(char)*(unsigned int *)(param_1 + 400));
    *param_2 = *(unsigned int *)(param_1 + 0x194);
    param_2[1] = *(unsigned int *)(param_1 + 0x198);
    param_2[2] = *(unsigned int *)(param_1 + 0x19c);
    param_2[3] = *(unsigned int *)(param_1 + 0x1a0);
    param_2[4] = *(unsigned int *)(param_1 + 0x1a4);
    return;
  }
  if (temp_v0 >= 0) {
    temp_v4 = *(int *)(param_1 + 0x180);
    if (-1 < temp_v4) {
      param_4 = *(unsigned int *)(param_1 + 0x184);
    }
    if (!(-1 < temp_v4 && -1 < (int)param_4)) {
      temp_v1 = FUN_004bb80c();
      FUN_004bb9c0(param_2,temp_v1);
    }
    else {
      FUN_004bc778(param_2,temp_v0,temp_v4,param_4,(int)(char)*(unsigned int *)(param_1 + 0x18c),
                   (int)(char)*(unsigned int *)(param_1 + 400));
    }
  }
  else if (-1 < *(int *)(param_1 + 0xf0)) {
    FUN_004bbb74();
    FUN_004bbc4c(param_2,*(unsigned int *)(param_1 + 0xf0),(int)(char)*(unsigned int *)(param_1 + 0x18c)
                 ,(int)(char)*(unsigned int *)(param_1 + 400));
  }
  if ((param_2[7] & 4) != 0) {
    temp_v2 = *puVar6 | DAT_00573a50;
    temp_v3 = DAT_00573a54 | *(unsigned int *)(param_1 + 0x45a4);
  }
  else {
    temp_v2 = *puVar6 & ~DAT_00573a50;
    temp_v3 = *(unsigned int *)(param_1 + 0x45a4) & ~DAT_00573a54;
  }
  *puVar6 = temp_v2;
  *(unsigned int *)(param_1 + 0x45a4) = temp_v3;
  temp_v0 = FUN_004186a4();
  if (temp_v0 != 0) {
    FUN_004186e0();
    temp_v0 = FUN_0019f18c();
    if (temp_v0 != 0) {
      temp_v2 = DAT_00573aa4 | *(unsigned int *)(param_1 + 0x45a4);
      *puVar6 = DAT_00573aa0 | *puVar6;
      *(unsigned int *)(param_1 + 0x45a4) = temp_v2;
      return;
    }
  }
  temp_v2 = DAT_00573aa0;
  *(unsigned int *)(param_1 + 0x45a4) = *(unsigned int *)(param_1 + 0x45a4) & ~DAT_00573aa4;
  *puVar6 = *puVar6 & ~temp_v2;
  return;
}
