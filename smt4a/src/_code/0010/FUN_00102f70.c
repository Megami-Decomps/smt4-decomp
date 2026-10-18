/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102f70` (_code @ 0x102f70, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00103098; /* 0x103098 */
extern unsigned char LAB_001030a0; /* 0x1030a0 */
extern unsigned char DAT_00537f28; /* 0x537f28 */
extern unsigned char DAT_00537f29; /* 0x537f29 */
extern unsigned char DAT_00537f2a; /* 0x537f2a */
extern unsigned char *DAT_005c4bc4; /* 0x5c4bc4 */
extern unsigned char *DAT_005c4bc8; /* 0x5c4bc8 */
extern unsigned char *DAT_005c4bcc; /* 0x5c4bcc */
extern unsigned char DAT_0064be80; /* 0x64be80 */
extern unsigned char *DAT_0064becc; /* 0x64becc */
extern unsigned char DAT_0064bed0; /* 0x64bed0 */
extern unsigned char DAT_0064bed1; /* 0x64bed1 */
extern unsigned char *DAT_0064bf1c; /* 0x64bf1c */
extern unsigned char DAT_0064bf20; /* 0x64bf20 */
extern unsigned char DAT_0064bf21; /* 0x64bf21 */
extern unsigned int DAT_0064bf6c; /* 0x64bf6c */

/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002e63a8. */
/* Supplied declaration required: FUN_002e6d50. */
/* Supplied declaration required: FUN_002e6d5c. */


void FUN_00102f70(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  
  FUN_002e6354(&DAT_0064be80,0x50);
  FUN_002e6354(&DAT_0064bed0,0x50);
  FUN_002e6354(&DAT_0064bf20,0x50);
  DAT_005c4bc4 = &DAT_0064be80;
  DAT_005c4bc8 = &DAT_0064bed0;
  DAT_005c4bcc = &DAT_0064bf20;
  DAT_0064becc = &DAT_0064bed1;
  DAT_0064bf1c = &DAT_0064bf21;
  DAT_0064bf6c = 1;
  puVar1 = &DAT_00537f28;
  FUN_002e63a8(&DAT_00537f28,&LAB_00103098,&DAT_0064be80);
  if (puVar1 == (unsigned char *)0x0) {
    FUN_002e6d50(&DAT_00537f28);
  }
  puVar1 = &DAT_00537f29;
  FUN_002e63a8(&DAT_00537f29,&LAB_001030a0,&DAT_0064bed0);
  if (puVar1 == (unsigned char *)0x0) {
    FUN_002e6d50(&DAT_00537f29);
  }
  puVar1 = &DAT_00537f2a;
  FUN_002e63a8(&DAT_00537f2a,&LAB_001030a0,&DAT_0064bf20);
  if (puVar1 == (unsigned char *)0x0) {
    FUN_002e6d50(&DAT_00537f2a);
  }
  temp_v0 = FUN_002e6d5c(&DAT_0064be80,0,0x200);
  if (temp_v0 != 0) {
    FUN_002e6d50(&DAT_00537f28);
  }
  temp_v0 = FUN_002e6d5c(&DAT_0064bed0,0,0x200,0x40);
  if (temp_v0 != 0) {
    FUN_002e6d50(&DAT_00537f29);
  }
  temp_v0 = FUN_002e6d5c(&DAT_0064bf20,0,0x200,0x10);
  if (temp_v0 != 0) {
    FUN_002e6d50(&DAT_00537f2a);
  }
  return;
}
