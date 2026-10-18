/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6f04` (_code @ 0x3f6f04, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern float DAT_004ea95c; /* 0x4ea95c */
extern unsigned int DAT_004ea960; /* 0x4ea960 */
extern float DAT_004ea964; /* 0x4ea964 */
extern unsigned int DAT_004ea968; /* 0x4ea968 */
extern unsigned int DAT_004ea96c; /* 0x4ea96c */
extern unsigned int DAT_004ea970; /* 0x4ea970 */
extern unsigned int DAT_004ea974; /* 0x4ea974 */
extern unsigned int DAT_004ea978; /* 0x4ea978 */
extern float DAT_004ea97c; /* 0x4ea97c */
extern unsigned int DAT_004ea980; /* 0x4ea980 */
extern float DAT_004ea984; /* 0x4ea984 */
extern unsigned int DAT_004ea988; /* 0x4ea988 */
extern unsigned int DAT_004ea98c; /* 0x4ea98c */
extern unsigned int DAT_004ea990; /* 0x4ea990 */
extern unsigned int DAT_004ea994; /* 0x4ea994 */
extern unsigned int DAT_004ea998; /* 0x4ea998 */

/* Supplied declaration required: FUN_00256c3c. */
/* Supplied declaration required: FUN_002b73a4. */
/* Supplied declaration required: FUN_002b740c. */


void FUN_003f6f04(void)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float temp_v1;
  unsigned char temp_v2 [4];
  unsigned int uStack_4c;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  temp_v1 = in_s0 * 40.743664f;
  temp_v0 = temp_v1;
  FUN_002b73a4();
  FUN_002b740c();
  FUN_00256c3c(temp_v2);
  DAT_004ea95c = temp_v1;
  DAT_004ea960 = uStack_4c;
  DAT_004ea964 = -temp_v0;
  DAT_004ea968 = uStack_44;
  DAT_004ea96c = uStack_40;
  DAT_004ea970 = uStack_3c;
  DAT_004ea974 = uStack_38;
  DAT_004ea978 = uStack_34;
  DAT_004ea97c = temp_v0;
  DAT_004ea980 = temp_v3;
  DAT_004ea984 = temp_v1;
  DAT_004ea988 = temp_v4;
  DAT_004ea98c = uStack_20;
  DAT_004ea990 = uStack_1c;
  DAT_004ea994 = uStack_18;
  DAT_004ea998 = uStack_14;
                    /* WARNING: Treating indirect jump as return */
  return;
}
