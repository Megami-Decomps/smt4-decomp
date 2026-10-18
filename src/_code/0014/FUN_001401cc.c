/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001401cc` (_code @ 0x1401cc, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001401cc_arg0 fn_001401cc_arg0;
struct fn_001401cc_arg0 {
    unsigned char pad_0x0[0x268];
    undefined4 field_0x268; /* +0x268 */
    unsigned char pad_0x26c[0x18];
    undefined4 field_0x284; /* +0x284 */
    undefined4 field_0x288; /* +0x288 */
    undefined4 field_0x28c; /* +0x28c */
    undefined4 field_0x290; /* +0x290 */
    unsigned char pad_0x294[0x8];
    undefined4 field_0x29c; /* +0x29c */
    undefined4 field_0x2a0; /* +0x2a0 */
    unsigned char pad_0x2a4[0x284];
    undefined4 field_0x528; /* +0x528 */
    undefined4 field_0x52c; /* +0x52c */
    undefined4 field_0x530; /* +0x530 */
    undefined4 field_0x534; /* +0x534 */
    undefined4 field_0x538; /* +0x538 */
    undefined4 field_0x53c; /* +0x53c */
    undefined4 field_0x540; /* +0x540 */
    undefined4 field_0x544; /* +0x544 */
    undefined4 field_0x548; /* +0x548 */
    undefined4 field_0x54c; /* +0x54c */
    undefined1 field_0x550; /* +0x550 */
    undefined1 field_0x551; /* +0x551 */
    undefined1 field_0x552; /* +0x552 */
    undefined1 field_0x553; /* +0x553 */
    unsigned char pad_0x554[0x1];
    undefined1 field_0x555; /* +0x555 */
};

extern unsigned char LAB_0014c158; /* 0x14c158 */
extern unsigned char DAT_004217d4; /* 0x4217d4 */
extern unsigned char DAT_004217e8; /* 0x4217e8 */

extern unsigned int *FUN_0014bf04(void);
extern int FUN_0014c368(unsigned int *);
extern int FUN_0014c8cc(unsigned int *);
extern unsigned int *FUN_002a7ebc(int);
/* Supplied declaration required: FUN_002c5f58. */


void FUN_001401cc(fn_001401cc_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_0014bf04();
  *puVar1 = (unsigned int)&DAT_004217e8;
  temp_v0 = FUN_0014c8cc(puVar1 + 0x3d);
  *(unsigned int *)(temp_v0 + 0x164) = param_2;
  puVar1 = (unsigned int *)FUN_002a7ebc(temp_v0 + 0x174);
  *puVar1 = (unsigned int)&DAT_004217d4;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0xd] = 0xffffffff;
  puVar1[10] = 0;
  puVar1[0xe] = 0;
  puVar1 = puVar1 + 0xf;
  FUN_002c5f58(puVar1,&LAB_0014c158,8,4);
  temp_v0 = FUN_0014c368(puVar1 + 8);
  *(unsigned int *)(temp_v0 + 0x264) = 0;
  *(unsigned char *)(temp_v0 + 0x291) = 0;
  *(unsigned int *)(temp_v0 + 0x268) = 0;
  *(unsigned int *)(temp_v0 + 0x26c) = 0;
  *(unsigned int *)(temp_v0 + 0x27c) = 0;
  *(unsigned char *)(temp_v0 + 0x28c) = 0;
  *(unsigned int *)(temp_v0 + 0x270) = 0;
  *(unsigned int *)(temp_v0 + 0x280) = 0;
  *(unsigned char *)(temp_v0 + 0x28d) = 0;
  *(unsigned int *)(temp_v0 + 0x274) = 0;
  *(unsigned int *)(temp_v0 + 0x284) = 0;
  *(unsigned char *)(temp_v0 + 0x28e) = 0;
  *(unsigned int *)(temp_v0 + 0x278) = 0;
  *(unsigned int *)(temp_v0 + 0x288) = 0;
  *(unsigned char *)(temp_v0 + 0x28f) = 0;
  return;
}
