/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Battle_PlayCommonEffectExt` (_code @ 0x3125d0, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int DAT_00435d48; /* 0x435d48 */

/* Supplied declaration required: ARM_common_memcpy4_9. */
/* Supplied declaration required: FUN_001b1a48. */
/* Supplied declaration required: FUN_00245420. */
/* Supplied declaration required: FUN_002454c4. */
/* Supplied declaration required: FUN_0024550c. */
extern int FUN_0027e3b8(unsigned int);
extern unsigned int FUN_0027e928(unsigned int);
extern int FUN_002939f4(void);
/* Supplied declaration required: FUN_00296cc8. */


void scrComm_Battle_PlayCommonEffectExt(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  char *pcVar6;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(2);
  temp_v3 = FUN_0027e3b8(DAT_00435d48);
  if (((temp_v3 == 0) || (temp_v3 = DAT_00435d18, FUN_0024550c(), temp_v3 != 0)) && (temp_v2 != 0)) {
    temp_v5 = 0;
    temp_v6 = 0;
    temp_v7 = 0;
    if (temp_v2 < 0) {
      pcVar6 = "commonDw";
    }
    else {
      pcVar6 = "commonUp";
    }
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v12 = 0;
    ARM_common_memcpy4_9(&temp_v5,pcVar6);
    FUN_002454c4(DAT_00435d18,&temp_v5,0,0);
    temp_v4 = FUN_0027e928(DAT_0043427c);
    temp_v3 = FUN_002939f4();
    temp_v7 = 0xffffffff;
    temp_v6 = 0;
    temp_v5 = temp_v2;
    FUN_00245420(0,temp_v4,*(int *)(temp_v3 + 0x1e98) + temp_v0 * 0x114,temp_v1);
    temp_v5 = temp_v0;
    temp_v6 = temp_v0;
    FUN_001b1a48(temp_v2,temp_v4,*(unsigned int *)(DAT_00435d18 + 0x1cfc),0);
  }
  return;
}
