/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033f2b8` (_code @ 0x33f2b8, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be624(...);
int FUN_00387a08(...);

typedef struct fn_0033f2b8_arg0 fn_0033f2b8_arg0;
struct fn_0033f2b8_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    int field_0xc; /* +0xc */
    void *field_0x10; /* +0x10 */
    void *field_0x14; /* +0x14 */
    void *field_0x18; /* +0x18 */
    void *field_0x1c; /* +0x1c */
    void *field_0x20; /* +0x20 */
    void *field_0x24; /* +0x24 */
    void *field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x10];
    undefined1 field_0x3c; /* +0x3c */
};

extern int *DAT_00433158; /* 0x433158 */

extern int FUN_0023e330(int *, int, unsigned int);
/* Supplied declaration required: FUN_002be624. */
extern int *FUN_002c5c04(unsigned char *);
/* Supplied declaration required: FUN_00387a08. */


void FUN_0033f2b8(fn_0033f2b8_arg0 *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  unsigned char temp_v2 [64];
  
  FUN_002be624(temp_v2,"event/npcgtix/npc%03d.bin",param_2);
  param_1->field_0x8 = 4;
  param_1->field_0xc = param_2;
  temp_v1 = FUN_0023e330(DAT_00433158,param_2,1);
  if (temp_v1 != 0) {
    piVar3 = DAT_00433158;
    FUN_00387a08(DAT_00433158,param_2,temp_v2);
  }
  else {
    piVar3 = (int *)FUN_002c5c04(temp_v2);
  }
  param_1->field_0x28 = piVar3;
  param_1->field_0x4 = -param_2;
  param_1->field_0x3c = 1;
  param_1->field_0x10 = piVar3;
  if (*piVar3 != 0x57444b4e) {
    param_1->field_0x10 = (void *)0x0;
  }
  else {
    piVar4 = piVar3 + 10;
    param_1->field_0x14 = piVar4;
    piVar4 = piVar4 + (unsigned int)*(unsigned short *)(piVar3 + 1) * 8;
    param_1->field_0x18 = piVar4;
    piVar4 = piVar4 + piVar3[2] * 10;
    param_1->field_0x1c = piVar4;
    temp_v0 = *(unsigned short *)((int)piVar3 + 6);
    param_1->field_0x20 = piVar4 + temp_v0;
    param_1->field_0x24 = piVar4 + temp_v0 + (unsigned int)*(unsigned short *)(piVar3 + 3) * 6;
  }
  return;
}

} /* extern "C" */
