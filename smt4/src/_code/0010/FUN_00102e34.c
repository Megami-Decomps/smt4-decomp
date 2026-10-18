/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102e34` (_code @ 0x102e34, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_001082b0(); /* 0x1082b0 */
extern unsigned char LAB_0010a510; /* 0x10a510 */
extern int DAT_00465128; /* 0x465128 */
extern char *DAT_00465130; /* 0x465130 */
extern char *DAT_00465134; /* 0x465134 */
extern unsigned int DAT_0046515c; /* 0x46515c */

/* Supplied declaration required: FUN_002c425c. */
/* Supplied declaration required: FUN_002c43b4. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_00102e34(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  
  temp_v0 = DAT_00465128;
  if (DAT_00465134 == (char *)0x0) {
    *(unsigned int *)(DAT_00465128 + 0x24) = 0x8800000;
    *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(temp_v0 + 0xc) | 1;
    DAT_0046515c = 0;
    pcVar2 = "asdMemMap";
    FUN_002c5788("asdMemMap",0x15e,0,0,FUN_001082b0,&LAB_0010a510,&DAT_0046515c);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = (char *)0x0;
    }
    else {
      FUN_002c425c(0,pcVar2);
      DAT_00465130 = pcVar2;
    }
    DAT_00465134 = pcVar2;
    return;
  }
  FUN_002c43b4(DAT_00465134,0);
  DAT_00465134 = (char *)0x0;
  return;
}
