/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d48d0` (_code @ 0x4d48d0, 0x2b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004d48d0_arg0 fn_004d48d0_arg0;
struct fn_004d48d0_arg0 {
    void *field_0x0; /* +0x0 */
    unsigned char pad_0x4[0xc];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3f];
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    unsigned char pad_0x60[0x8];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0xc];
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
};

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_004d4b84; /* 0x4d4b84 */
extern unsigned char DAT_005715f8; /* 0x5715f8 */
extern unsigned int DAT_005715fc; /* 0x5715fc */
extern unsigned int DAT_005716a0; /* 0x5716a0 */
extern unsigned int DAT_005716a4; /* 0x5716a4 */
extern unsigned int DAT_005716a8; /* 0x5716a8 */
extern unsigned int DAT_005716ac; /* 0x5716ac */
extern unsigned int DAT_005716b0; /* 0x5716b0 */
extern unsigned int DAT_005716b4; /* 0x5716b4 */
extern unsigned int DAT_005716c8; /* 0x5716c8 */
extern unsigned int DAT_005716cc; /* 0x5716cc */
extern unsigned int DAT_00571710; /* 0x571710 */
extern unsigned int DAT_00571714; /* 0x571714 */
extern unsigned int DAT_00571720; /* 0x571720 */
extern unsigned int DAT_00571724; /* 0x571724 */
extern unsigned int DAT_00571750; /* 0x571750 */
extern unsigned int DAT_00571754; /* 0x571754 */
extern unsigned int DAT_00571760; /* 0x571760 */
extern unsigned int DAT_00571764; /* 0x571764 */
extern unsigned int DAT_00573970; /* 0x573970 */
extern unsigned int DAT_00573b80; /* 0x573b80 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_00280328. */
/* Supplied declaration required: FUN_002ea508. */
/* Supplied declaration required: FUN_00317464. */
/* Supplied declaration required: FUN_00317508. */
/* Supplied declaration required: FUN_0032c1bc. */
/* Supplied declaration required: FUN_0032c450. */
/* Supplied declaration required: FUN_003592dc. */
/* Supplied declaration required: FUN_004bb7f4. */
/* Supplied declaration required: FUN_004bc2c4. */


void FUN_004d48d0(fn_004d48d0_arg0 *param_1,int param_2)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  
  temp_v0 = FUN_00163e40(*(unsigned int *)&param_1->field_0x10);
  if (temp_v0 != 0) {
    FUN_003592dc(*(unsigned int *)&param_1->field_0x10);
    FUN_001631d0(*(unsigned int *)&param_1->field_0x10,0);
  }
  temp_v1 = *(unsigned int *)(param_2 + 0x80);
  FUN_00280328(temp_v1,0x75,0);
  *(unsigned int *)&param_1->field_0x10 = temp_v1;
  FUN_0032c1bc();
  FUN_00317508(*(unsigned int *)&param_1->field_0x10,1);
  FUN_002ea508(*(unsigned int *)&param_1->field_0x10,&LAB_004d4b84);
  temp_v2 = (unsigned int)DAT_005715f8;
  if (temp_v2 != 0) {
    FUN_004bc2c4();
    FUN_00317464(*(unsigned int *)&param_1->field_0x10,0,DAT_005715fc,0,temp_v2 - 1,0);
    FUN_0032c450(*(unsigned int *)&param_1->field_0x10,1,(int)(char)DAT_005715f8);
  }
  else {
    FUN_004bb7f4();
    FUN_00317464(*(unsigned int *)&param_1->field_0x10,0,DAT_005715fc,0,temp_v2 - 1,0);
    FUN_0032c450(*(unsigned int *)&param_1->field_0x10,1,(int)(char)DAT_005715f8);
  }
  FUN_00317464(*(unsigned int *)&param_1->field_0x10,2,DAT_00573970,0,0x4b1,0);
  FUN_00317464(*(unsigned int *)&param_1->field_0x10,3,DAT_00573b80,0,1000,0);
  puVar4 = (unsigned int *)(param_2 + 0x45a8);
  FUN_0032c450(*(unsigned int *)&param_1->field_0x10,4,
               (*(unsigned int *)(param_2 + 0x45ac) & DAT_005716a4) != 0 || (DAT_005716a0 & *puVar4) != 0);
  FUN_0032c450(*(unsigned int *)&param_1->field_0x10,5,
               (*(unsigned int *)(param_2 + 0x45ac) & DAT_005716ac) != 0 || (DAT_005716a8 & *puVar4) != 0);
  FUN_0032c450(*(unsigned int *)&param_1->field_0x10,6,
               (*(unsigned int *)(param_2 + 0x45ac) & DAT_005716b4) != 0 || (DAT_005716b0 & *puVar4) != 0);
  FUN_0032c450(*(unsigned int *)&param_1->field_0x10,0xb,
               (*puVar4 & DAT_00571710) != 0 || (DAT_00571714 & *(unsigned int *)(param_2 + 0x45ac)) != 0);
  FUN_0032c450(*(unsigned int *)&param_1->field_0x10,0xc,
               (*(unsigned int *)(param_2 + 0x45ac) & DAT_00571754) != 0 || (*puVar4 & DAT_00571750) != 0);
  FUN_0032c450(*(unsigned int *)&param_1->field_0x10,0xe,
               (*puVar4 & DAT_005716c8) != 0 || (DAT_005716cc & *(unsigned int *)(param_2 + 0x45ac)) != 0);
  FUN_0032c450(*(unsigned int *)&param_1->field_0x10,0xf,
               (*puVar4 & DAT_00571720) != 0 || (*(unsigned int *)(param_2 + 0x45ac) & DAT_00571724) != 0);
  FUN_0032c450(*(unsigned int *)&param_1->field_0x10,0xd,
               (DAT_00571760 & *puVar4) != 0 || (DAT_00571764 & *(unsigned int *)(param_2 + 0x45ac)) != 0);
  return;
}
