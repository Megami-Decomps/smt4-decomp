/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a894` (_code @ 0x13a894, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013df74(unsigned char *, int, int);
int FUN_0014015c(...);
int FUN_001407ec(...);
int FUN_00141428(void);
int FUN_00141da8(int);
int FUN_00142b84(int);
int FUN_00154890(int);
int FUN_002e6dd0(unsigned int *, int);

extern unsigned char LAB_0013a940; /* 0x13a940 */
extern unsigned char LAB_001db000; /* 0x1db000 */
extern unsigned char LAB_002eb000; /* 0x2eb000 */
extern unsigned int DAT_00588fb0; /* 0x588fb0 */
extern unsigned int DAT_0061951c; /* 0x61951c */
extern unsigned int DAT_0061953c; /* 0x61953c */

/* Supplied declaration required: FUN_0013df74. */
/* Supplied declaration required: FUN_0014015c. */
/* Supplied declaration required: FUN_001407ec. */
/* Supplied declaration required: FUN_00141428. */
/* Supplied declaration required: FUN_00141da8. */
/* Supplied declaration required: FUN_00142b84. */
/* Supplied declaration required: FUN_00154890. */
extern int FUN_00180008(unsigned int);
/* Supplied declaration required: FUN_002e6dd0. */


void FUN_0013a894(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00180008(1);
  if (temp_v0 == 0) {
    FUN_00142b84(0);
    FUN_0013df74(&LAB_0013a940,1,0);
    FUN_00141428();
    FUN_0014015c(0,1);
    FUN_0014015c(1);
    FUN_001407ec(0,0xaa000);
    FUN_001407ec(1,&LAB_001db000);
    FUN_001407ec(3,&LAB_002eb000);
    FUN_00141da8(0);
    FUN_00154890(0);
    FUN_002e6dd0(&DAT_0061951c,0x40);
    DAT_00588fb0 = 0;
    DAT_0061951c = 0;
    DAT_0061953c = 1;
  }
  return;
}

} /* extern "C" */
