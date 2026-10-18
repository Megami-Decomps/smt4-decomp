/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c9474` (_code @ 0x4c9474, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004c9474_arg0 fn_004c9474_arg0;
struct fn_004c9474_arg0 {
    unsigned char pad_0x0[0x2268];
    undefined4 field_0x2268; /* +0x2268 */
    unsigned char pad_0x226c[0x2334];
    undefined4 field_0x45a0; /* +0x45a0 */
    undefined4 field_0x45a4; /* +0x45a4 */
};

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int DAT_00573908; /* 0x573908 */
extern unsigned int DAT_0057390c; /* 0x57390c */
extern unsigned int DAT_00573910; /* 0x573910 */
extern unsigned int DAT_00573914; /* 0x573914 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00200a68. */
/* Supplied declaration required: FUN_004c8e30. */


unsigned int FUN_004c9474(fn_004c9474_arg0 *param_1,int param_2,short param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0014aa78();
  if (((DAT_00573908 & *(unsigned int *)(temp_v0 + 0x45a0)) == 0 &&
       (DAT_0057390c & *(unsigned int *)(temp_v0 + 0x45a4)) == 0) &&
     ((*(unsigned int *)(temp_v0 + 0x45a0) & DAT_00573910) == 0 &&
      (*(unsigned int *)(temp_v0 + 0x45a4) & DAT_00573914) == 0)) {
    if (param_2 != 0) {
      temp_v1 = 5;
      FUN_00200a68(5,(int)param_3,param_1,*(unsigned int *)(temp_v0 + 0x2268),param_2,param_4,7,0);
      return temp_v1;
    }
    FUN_004c8e30(param_1,0,param_4);
    return (unsigned int)param_1;
  }
  return 0;
}
