/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013778c` (_code @ 0x13778c, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_0013ca58(); /* 0x13ca58 */
extern unsigned char LAB_0013f014; /* 0x13f014 */
extern int DAT_005b4030; /* 0x5b4030 */
extern char *DAT_005b4038; /* 0x5b4038 */
extern char *DAT_005b403c; /* 0x5b403c */
extern unsigned int DAT_005b4068; /* 0x5b4068 */

/* Supplied declaration required: FUN_0014bdb4. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_001631d0. */


void FUN_0013778c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  
  temp_v0 = DAT_005b4030;
  if (DAT_005b403c == (char *)0x0) {
    *(unsigned int *)(DAT_005b4030 + 0x24) = 0x8800000;
    *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(temp_v0 + 0xc) | 1;
    DAT_005b4068 = 0;
    pcVar2 = "asdMemMap";
    FUN_0014e38c("asdMemMap",0x15e,0,0,FUN_0013ca58,&LAB_0013f014,&DAT_005b4068);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = (char *)0x0;
    }
    else {
      FUN_0014bdb4(0,pcVar2);
      DAT_005b4038 = pcVar2;
    }
    DAT_005b403c = pcVar2;
    return;
  }
  FUN_001631d0(DAT_005b403c,0);
  DAT_005b403c = (char *)0x0;
  return;
}
