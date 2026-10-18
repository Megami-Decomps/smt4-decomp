/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00223cdc` (_code @ 0x223cdc, 0x2a4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int *DAT_0043dd68; /* 0x43dd68 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_002637b4. */
/* Supplied declaration required: FUN_00288948. */
extern int FUN_00290a4c(void);
/* Supplied declaration required: FUN_00294ad8. */
/* Supplied declaration required: FUN_00295b9c. */
/* Supplied declaration required: FUN_0029c0fc. */
/* Supplied declaration required: FUN_0029c56c. */
extern int FUN_002a0dd4(void);
/* Supplied declaration required: FUN_002a497c. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002a7604. */
/* Supplied declaration required: FUN_002a7aa0. */
/* Supplied declaration required: FUN_002b2520. */
extern int FUN_002b8adc(void);
/* Supplied declaration required: FUN_002c4160. */
/* Supplied declaration required: FUN_002c41e8. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_0030f5ec. */
/* Supplied declaration required: FUN_003ca154. */


/* WARNING: Type propagation algorithm not settling */

void FUN_00223cdc(void)

{
/* irregular: 22 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int *piVar4;
  int temp_v1 [6];
  
  piVar1 = DAT_0043dd68;
  if (DAT_0043dd68 != (int *)0x0) {
    piVar4 = DAT_0043dd68 + 0x257a;
    *(unsigned char *)(DAT_0043dd68 + 0x2578) = 1;
    temp_v1[0] = *piVar4;
    piVar2 = temp_v1 + 1;
    FUN_002c42fc(piVar2,temp_v1,1,0,0xffffffff,0xffffffff);
    if ((int)piVar2 < 0) {
      FUN_002c5468();
    }
    *(unsigned char *)(piVar1 + 0x257b) = 1;
    FUN_002c41e8(piVar4);
    if (*piVar4 != 0) {
      software_interrupt(0x23);
      *piVar4 = 0;
    }
    piVar2 = piVar1 + 0x2579;
    FUN_002c4160(*piVar2);
    temp_v0 = *piVar2;
    if (temp_v0 != 0) {
      FUN_002c4160();
      FUN_002b2520(temp_v0);
    }
    *piVar2 = 0;
    FUN_002c4360(piVar1[0x257c]);
    piVar1[0x257c] = 0;
    temp_v0 = FUN_00290a4c();
    FUN_0029c0fc(0x25,temp_v0 - piVar1[0x107]);
    temp_v0 = FUN_002a0dd4();
    if ((temp_v0 != 0) || (temp_v0 = FUN_002b8adc(), temp_v0 != 0)) {
      temp_v1[3] = 0x96;
      temp_v1[4] = 0x96;
      temp_v1[5] = 0x96;
      temp_v1[2] = 0x1e;
      temp_v1[0] = 0x1e;
      temp_v1[1] = 0x1e;
      FUN_00294ad8(200,200,200,0x82,0x82,0x82);
    }
    else {
      FUN_002a7604(0);
    }
    piVar2 = piVar1 + 0x2574;
    FUN_0029c56c(*piVar2,0);
    FUN_002637b4(*piVar2);
    *piVar2 = 0;
    FUN_00288948();
    piVar2 = piVar1 + 0x2572;
    FUN_00152af8(*piVar2);
    piVar4 = piVar1 + 0x2573;
    FUN_00152af8(*piVar4);
    FUN_002a7aa0(*piVar2);
    FUN_002a7aa0(*piVar4);
    *piVar2 = 0;
    temp_v0 = 0;
    *piVar4 = 0;
    do {
      if (*(short *)((int)piVar1 + temp_v0 * 2 + 0x6660) != 0) {
        FUN_00295b9c((int)*(short *)((int)piVar1 + temp_v0 * 2 + 0x6660),1);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    FUN_002a755c(piVar1[0x10b]);
    FUN_002c4360(piVar1[0x10a]);
    FUN_002c4360(piVar1[0x109]);
    if (*piVar1 != 0) {
      FUN_003ca154();
      FUN_002b2520();
    }
    *piVar1 = 0;
    FUN_002c45b8(piVar1[0xfe],0);
    FUN_002c4360(piVar1);
    DAT_0043dd68 = (int *)0x0;
    FUN_002a497c(0x24);
    FUN_002a497c(0x22);
    FUN_0030f5ec(1);
    return;
  }
  return;
}
