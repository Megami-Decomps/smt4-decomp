/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011cb3c` (_code @ 0x11cb3c, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00128e84; /* 0x128e84 */
extern int FUN_00128fa8(); /* 0x128fa8 */
extern int FUN_0012939c(); /* 0x12939c */
extern signed char DAT_0044e7c0; /* 0x44e7c0 */
extern unsigned char DAT_0044e7c1; /* 0x44e7c1 */
extern unsigned char DAT_0044e7c2; /* 0x44e7c2 */
extern unsigned char DAT_0044e7c3; /* 0x44e7c3 */
extern unsigned char DAT_0044e7c4; /* 0x44e7c4 */
extern unsigned char DAT_0044e7c5; /* 0x44e7c5 */
extern unsigned char DAT_004e6f14; /* 0x4e6f14 */
extern unsigned char DAT_004e6f64; /* 0x4e6f64 */
extern unsigned char DAT_004e8568; /* 0x4e8568 */
extern unsigned char uRam1ff810c0; /* 0x1ff810c0 */

/* Supplied declaration required: FUN_00128450. */
/* Supplied declaration required: FUN_00128d44. */
/* Supplied declaration required: FUN_00129138. */
/* Supplied declaration required: FUN_0013a024. */
/* Supplied declaration required: FUN_00146d58. */
/* Supplied declaration required: FUN_002bb7b0. */
extern int FUN_002c1570(unsigned int);
/* Supplied declaration required: FUN_002c3ae0. */


void FUN_0011cb3c(void)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  if ((DAT_0044e7c0 == '\0') && (temp_v0 = FUN_002c1570(0), -1 < temp_v0)) {
    puVar2 = &DAT_004e6f64;
    FUN_00129138(&DAT_004e6f64,0);
    if (-1 < (int)puVar2) {
      DAT_0044e7c4 = uRam1ff810c0;
      FUN_00146d58(&DAT_004e6f14);
      FUN_002c3ae0(&DAT_004e8568);
      FUN_00128d44(&DAT_004e6f14);
      FUN_002bb7b0();
      FUN_0013a024();
      FUN_00128450(FUN_00128fa8,FUN_0012939c,&LAB_00128e84);
      DAT_0044e7c1 = 0;
      DAT_0044e7c2 = 0;
      DAT_0044e7c3 = 0;
      DAT_0044e7c5 = 1;
      DAT_0044e7c0 = '\x01';
    }
  }
  return;
}
