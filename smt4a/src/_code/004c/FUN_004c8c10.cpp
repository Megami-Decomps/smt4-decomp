/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c8c10` (_code @ 0x4c8c10, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00200a68(int, int, unsigned int, unsigned int, int, unsigned int, unsigned int, int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int DAT_00573908; /* 0x573908 */
extern unsigned int DAT_0057390c; /* 0x57390c */
extern unsigned int DAT_00573910; /* 0x573910 */
extern unsigned int DAT_00573914; /* 0x573914 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00200a68. */


unsigned int FUN_004c8c10(unsigned int param_1,short param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0014aa78();
  if (((DAT_00573908 & *(unsigned int *)(temp_v0 + 0x45a0)) == 0 &&
       (DAT_0057390c & *(unsigned int *)(temp_v0 + 0x45a4)) == 0) &&
     ((*(unsigned int *)(temp_v0 + 0x45a0) & DAT_00573910) == 0 &&
      (*(unsigned int *)(temp_v0 + 0x45a4) & DAT_00573914) == 0)) {
    temp_v1 = 8;
    FUN_00200a68(8,(int)param_2,param_1,*(unsigned int *)(temp_v0 + 0x4d64),0,param_3,0xffffffff,0);
    return temp_v1;
  }
  return 0;
}

} /* extern "C" */
