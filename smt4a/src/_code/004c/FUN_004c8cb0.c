/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c8cb0` (_code @ 0x4c8cb0, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int DAT_00573908; /* 0x573908 */
extern unsigned int DAT_0057390c; /* 0x57390c */
extern unsigned int DAT_00573910; /* 0x573910 */
extern unsigned int DAT_00573914; /* 0x573914 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00200a68. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_004c8cb0(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = FUN_0014aa78();
  if (((DAT_00573908 & *(unsigned int *)(temp_v0 + 0x45a0)) == 0 &&
       (DAT_0057390c & *(unsigned int *)(temp_v0 + 0x45a4)) == 0) &&
     ((*(unsigned int *)(temp_v0 + 0x45a4) & DAT_00573914) == 0 &&
      (*(unsigned int *)(temp_v0 + 0x45a0) & DAT_00573910) == 0)) {
    temp_v3 = param_2 < 0;
    temp_v2 = *(unsigned int *)(temp_v0 + 0x2278);
    if (!temp_v3) {
      FUN_003eaf20();
    }
    else {
      temp_v0 = 0;
      param_2 = -1;
    }
    temp_v1 = (unsigned int)!temp_v3;
    FUN_00200a68(temp_v1,0,param_1,temp_v2,temp_v0,param_3,param_2,0);
    return temp_v1;
  }
  return 0;
}
