/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005147dc` (_code @ 0x5147dc, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern unsigned int DAT_0064731c; /* 0x64731c */
extern unsigned int DAT_00647320; /* 0x647320 */
extern unsigned int DAT_00647324; /* 0x647324 */
extern unsigned int DAT_00647328; /* 0x647328 */
extern unsigned int DAT_0064732c; /* 0x64732c */
extern float DAT_00647330; /* 0x647330 */
extern float DAT_00647334; /* 0x647334 */
extern unsigned int DAT_00647338; /* 0x647338 */
extern unsigned int DAT_0064733c; /* 0x64733c */
extern float DAT_00647340; /* 0x647340 */
extern float DAT_00647344; /* 0x647344 */
extern unsigned int DAT_00647348; /* 0x647348 */
extern unsigned int DAT_0064734c; /* 0x64734c */
extern unsigned int DAT_00647350; /* 0x647350 */
extern unsigned int DAT_00647354; /* 0x647354 */
extern unsigned int DAT_00647358; /* 0x647358 */

/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: FUN_002e1450. */


void FUN_005147dc(void)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float temp_v1;
  int temp_v2;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  temp_v1 = in_s0 * 40.743664f;
  temp_v0 = temp_v1;
  FUN_001b63b0();
  FUN_001a1ee0();
  FUN_002e1450(&temp_v2);
  DAT_00647334 = temp_v0;
  DAT_00647338 = temp_v3;
  DAT_0064731c = temp_v2;
  DAT_00647320 = uStack_4c;
  DAT_00647324 = uStack_48;
  DAT_00647328 = uStack_44;
  DAT_0064732c = uStack_40;
  DAT_00647330 = temp_v1;
  DAT_00647344 = temp_v1;
  DAT_0064733c = temp_v4;
  DAT_00647340 = -temp_v0;
  DAT_00647348 = temp_v5;
  DAT_0064734c = uStack_20;
  DAT_00647350 = uStack_1c;
  DAT_00647354 = uStack_18;
  DAT_00647358 = uStack_14;
                    /* WARNING: Treating indirect jump as return */
  return;
}
