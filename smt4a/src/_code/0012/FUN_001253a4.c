/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001253a4` (_code @ 0x1253a4, 0x1a6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0010b195; /* 0x10b195 */
extern unsigned char LAB_0010b679; /* 0x10b679 */
extern unsigned char LAB_00110331; /* 0x110331 */
extern unsigned char LAB_00125568; /* 0x125568 */
extern unsigned char LAB_0012992d; /* 0x12992d */
extern unsigned char LAB_00129a0d; /* 0x129a0d */
extern unsigned char LAB_00129be1; /* 0x129be1 */
extern unsigned char LAB_00129db5; /* 0x129db5 */
extern unsigned char LAB_00129e95; /* 0x129e95 */
extern unsigned char LAB_002eb625; /* 0x2eb625 */
extern unsigned char DAT_00559968; /* 0x559968 */
extern unsigned char DAT_0055998c; /* 0x55998c */
extern unsigned char DAT_005599d4; /* 0x5599d4 */
extern unsigned char DAT_00559a1c; /* 0x559a1c */
extern unsigned char DAT_00559a40; /* 0x559a40 */
extern unsigned int DAT_00594a00; /* 0x594a00 */
extern unsigned char DAT_00594b24; /* 0x594b24 */
extern unsigned char DAT_0059937c; /* 0x59937c */
extern unsigned int DAT_00630424; /* 0x630424 */
extern unsigned char DAT_00630530; /* 0x630530 */
extern unsigned char DAT_006305a8; /* 0x6305a8 */
extern unsigned char DAT_006305dc; /* 0x6305dc */
extern unsigned char DAT_00630610; /* 0x630610 */
extern unsigned char DAT_00630644; /* 0x630644 */
extern unsigned char DAT_00630678; /* 0x630678 */
extern unsigned char DAT_006306ac; /* 0x6306ac */

extern unsigned int FUN_0010b66c(unsigned char *);
extern unsigned int FUN_00110318(unsigned int *);
/* Supplied declaration required: FUN_001298b8. */
/* Supplied declaration required: FUN_00129998. */
/* Supplied declaration required: FUN_00129b6c. */
/* Supplied declaration required: FUN_00129d40. */
/* Supplied declaration required: FUN_00129e20. */
extern unsigned int FUN_002e7168(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002f4370. */
/* Supplied declaration required: FUN_0030e67c. */
/* Supplied declaration required: FUN_0030e690. */
/* Supplied declaration required: FUN_0030e6a4. */
/* Supplied declaration required: FUN_0030e6b8. */
/* Supplied declaration required: FUN_0030e6cc. */
extern unsigned int FUN_0030e734(unsigned char *, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0030e878. */
/* Supplied declaration required: FUN_0030e8b4. */
extern unsigned int *FUN_0030e8dc(unsigned char *);


void FUN_001253a4(void)

{
/* irregular: 13 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_0010b66c(&DAT_0059937c);
  FUN_002f4370(temp_v0,&LAB_0010b679,0x100000);
  temp_v0 = FUN_002e7168(&DAT_006306ac,0x20000000);
  FUN_002f4370(temp_v0,&LAB_002eb625,0x100000);
  temp_v0 = FUN_00110318(&DAT_00630424);
  FUN_002f4370(temp_v0,&LAB_00110331,0x100000);
  temp_v0 = FUN_0030e734(&DAT_00630530,&LAB_00125568,0);
  FUN_002f4370(temp_v0,&LAB_0010b195,0x100000);
  puVar2 = (unsigned int *)FUN_0030e8dc(&DAT_006305a8);
  *puVar2 = (unsigned int)&DAT_00559968;
  temp_v1 = FUN_0030e6cc(puVar2 + 3);
  temp_v1 = FUN_0030e6cc(temp_v1 + 0x14);
  temp_v2 = temp_v1 - 0x20;
  FUN_0030e8b4(temp_v1 - 0x14,temp_v1);
  *(unsigned int *)(temp_v1 - 0x18) = 0;
  FUN_0030e878(&DAT_00594b24,temp_v2);
  if (DAT_00594a00 >= 2) {
    FUN_001298b8(temp_v2);
  }
  FUN_002f4370(temp_v2,&LAB_0012992d,0x100000);
  puVar2 = (unsigned int *)FUN_0030e8dc(&DAT_006305dc);
  *puVar2 = (unsigned int)&DAT_0055998c;
  temp_v1 = FUN_0030e6b8(puVar2 + 3);
  temp_v1 = FUN_0030e6b8(temp_v1 + 0x14);
  temp_v2 = temp_v1 - 0x20;
  FUN_0030e8b4(temp_v1 - 0x14,temp_v1);
  *(unsigned int *)(temp_v1 - 0x18) = 0;
  FUN_0030e878(&DAT_00594b24,temp_v2);
  if (DAT_00594a00 >= 2) {
    FUN_00129998(temp_v2);
  }
  FUN_002f4370(temp_v2,&LAB_00129a0d,0x100000);
  puVar2 = (unsigned int *)FUN_0030e8dc(&DAT_00630610);
  *puVar2 = (unsigned int)&DAT_00559a1c;
  temp_v1 = FUN_0030e6a4(puVar2 + 3);
  temp_v1 = FUN_0030e6a4(temp_v1 + 0x14);
  temp_v2 = temp_v1 - 0x20;
  FUN_0030e8b4(temp_v1 - 0x14,temp_v1);
  *(unsigned int *)(temp_v1 - 0x18) = 0;
  FUN_0030e878(&DAT_00594b24,temp_v2);
  if (DAT_00594a00 >= 2) {
    FUN_00129d40(temp_v2);
  }
  FUN_002f4370(temp_v2,&LAB_00129db5,0x100000);
  puVar2 = (unsigned int *)FUN_0030e8dc(&DAT_00630644);
  *puVar2 = (unsigned int)&DAT_005599d4;
  temp_v1 = FUN_0030e690(puVar2 + 3);
  temp_v1 = FUN_0030e690(temp_v1 + 0x14);
  temp_v2 = temp_v1 - 0x20;
  FUN_0030e8b4(temp_v1 - 0x14,temp_v1);
  *(unsigned int *)(temp_v1 - 0x18) = 0;
  FUN_0030e878(&DAT_00594b24,temp_v2);
  if (DAT_00594a00 >= 2) {
    FUN_00129b6c(temp_v2);
  }
  FUN_002f4370(temp_v2,&LAB_00129be1,0x100000);
  puVar2 = (unsigned int *)FUN_0030e8dc(&DAT_00630678);
  *puVar2 = (unsigned int)&DAT_00559a40;
  temp_v1 = FUN_0030e67c(puVar2 + 3);
  temp_v1 = FUN_0030e67c(temp_v1 + 0x14);
  temp_v2 = temp_v1 - 0x20;
  FUN_0030e8b4(temp_v1 - 0x14,temp_v1);
  *(unsigned int *)(temp_v1 - 0x18) = 0;
  FUN_0030e878(&DAT_00594b24,temp_v2);
  if (DAT_00594a00 >= 2) {
    FUN_00129e20(temp_v2);
  }
  FUN_002f4370(temp_v2,&LAB_00129e95,0x100000);
  return;
}
