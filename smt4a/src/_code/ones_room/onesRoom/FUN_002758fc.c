/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002758fc` (_code @ 0x2758fc, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_00235d1c(); /* 0x235d1c */
extern unsigned char LAB_00275a40; /* 0x275a40 */
extern unsigned char LAB_00275a58; /* 0x275a58 */
extern unsigned char LAB_00275a78; /* 0x275a78 */
extern unsigned char LAB_002ba790; /* 0x2ba790 */
extern unsigned int *DAT_00588134; /* 0x588134 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_0022677c. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_0031a400. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: FUN_003b61ec. */


void FUN_002758fc(int param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  
  puVar1 = (unsigned int *)0x100;
  FUN_001630d4(0x100,0x100,0,0x14,1);
  DAT_00588134 = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  if (param_1 == 0) {
    *(unsigned char *)(puVar1 + 4) = 1;
  }
  FUN_0031a400();
  FUN_00342010();
  FUN_003b61ec();
  FUN_001681cc(0xa4);
  puVar2 = &LAB_00275a40;
  FUN_0020214c();
  puVar1[1] = (unsigned int)puVar2;
  puVar2 = &LAB_00275a58;
  FUN_0020214c();
  puVar1[3] = (unsigned int)puVar2;
  temp_v0 = puVar1[1];
  FUN_00275bc8(temp_v0,puVar2);
  puVar1[2] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x108) = 2;
  FUN_00275f44(puVar1[2],0);
  *(unsigned char *)((int)puVar1 + 0x11) = 0;
  if (*(char *)(puVar1 + 4) != '\0') {
    FUN_0022677c(0,0xff);
    FUN_0022677c(1,0xff);
  }
  puVar2 = &LAB_00275a78;
  FUN_0014e38c(&LAB_00275a78,4,0,0,FUN_00235d1c,&LAB_002ba790,DAT_00588134);
  *DAT_00588134 = (unsigned int)puVar2;
  return;
}
