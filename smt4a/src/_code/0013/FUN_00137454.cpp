/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137454` (_code @ 0x137454, 0x23c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013f0f4(...);
int FUN_0013f188(...);
int FUN_0013f444(...);
int FUN_0013f52c(...);
int FUN_00140280(...);
int FUN_00140708(...);
int FUN_001409d4(...);
int FUN_00140e6c(...);
int asdTextRegisterSlot(...);
int FUN_00141850(...);
int FUN_001418ec(...);
int FUN_0014190c(...);
int FUN_00142d70(...);
int FUN_00144554(...);
int FUN_001445b0(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_001375ac; /* 0x1375ac */
extern unsigned char LAB_001375c4; /* 0x1375c4 */
extern unsigned char LAB_001375e0; /* 0x1375e0 */
extern unsigned char LAB_001375fc; /* 0x1375fc */
extern unsigned char LAB_00137618; /* 0x137618 */
extern int FUN_0013c614(...); /* 0x13c614 */
extern int FUN_0013cae4(...); /* 0x13cae4 */
extern int FUN_0013dadc(...); /* 0x13dadc */
extern int FUN_0013e38c(...); /* 0x13e38c */
extern unsigned char LAB_0013ed28; /* 0x13ed28 */
extern int FUN_0013edc8(...); /* 0x13edc8 */
extern int FUN_00141f8c(...); /* 0x141f8c */
extern unsigned char DAT_0057f598; /* 0x57f598 */
extern unsigned char DAT_0057f5d8; /* 0x57f5d8 */
extern unsigned int DAT_005b3d78; /* 0x5b3d78 */
extern unsigned int uRam005c1474; /* 0x5c1474 */

/* Supplied declaration required: FUN_0013f0f4. */
/* Supplied declaration required: FUN_0013f188. */
/* Supplied declaration required: FUN_0013f444. */
/* Supplied declaration required: FUN_0013f52c. */
/* Supplied declaration required: FUN_00140280. */
/* Supplied declaration required: FUN_00140708. */
/* Supplied declaration required: FUN_001409d4. */
/* Supplied declaration required: FUN_00140e6c. */
/* Supplied declaration required: asdTextRegisterSlot. */
/* Supplied declaration required: FUN_00141850. */
/* Supplied declaration required: FUN_001418ec. */
/* Supplied declaration required: FUN_0014190c. */
/* Supplied declaration required: FUN_00142d70. */
/* Supplied declaration required: FUN_00144554. */
/* Supplied declaration required: FUN_001445b0. */


void FUN_00137454(void)

{
/* irregular: 21 native warning(s); review required */
  unsigned char *puVar1;
  
  FUN_0013f0f4(6);
  puVar1 = &LAB_001375ac;
  FUN_0014190c(&LAB_001375ac);
  FUN_00140e6c(1,puVar1);
  puVar1 = &LAB_001375c4;
  FUN_0014190c(&LAB_001375c4);
  FUN_00140e6c(2,puVar1);
  puVar1 = &LAB_001375e0;
  FUN_0014190c(&LAB_001375e0);
  FUN_00140e6c(3,puVar1);
  puVar1 = &LAB_001375fc;
  FUN_0014190c(&LAB_001375fc);
  FUN_00140e6c(4,puVar1);
  puVar1 = &LAB_00137618;
  FUN_0014190c(&LAB_00137618);
  FUN_00140e6c(5,puVar1);
  FUN_0013f188(0);
  FUN_0013f188(1);
  FUN_0013f188(2);
  FUN_0013f188(3);
  FUN_0013f188(4);
  FUN_00141850(3);
  FUN_00140708(5);
  FUN_001409d4(&DAT_0057f598);
  FUN_00144554(&DAT_0057f5d8);
  FUN_001445b0(0xffffff00);
  FUN_00142d70(&LAB_0013ed28,FUN_00141f8c);
  FUN_0013f444(0xf87a,1,0);
  FUN_0013f444(0xf87b,4,0);
  FUN_00140280(FUN_0013cae4);
  FUN_001418ec(FUN_0013edc8);
  FUN_0013f52c(FUN_0013e38c);
  asdTextRegisterSlot(0xf87a,1,FUN_0013c614);
  asdTextRegisterSlot(0xf87b,4,FUN_0013dadc);
  DAT_005b3d78 = 0x8190;
  uRam005c1474 = 0x8190;
  return;
}

} /* extern "C" */
