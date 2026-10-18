/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102dc4` (_code @ 0x102dc4, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_00108254(); /* 0x108254 */
extern unsigned char LAB_0010a4a8; /* 0x10a4a8 */
extern int DAT_00465128; /* 0x465128 */
extern char *DAT_00465130; /* 0x465130 */
extern char *DAT_00465134; /* 0x465134 */
extern unsigned int DAT_0046515c; /* 0x46515c */

/* Supplied declaration required: FUN_002c4460. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_00102dc4(void)

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
    FUN_002c5978("asdMemMap",0x15e,0,0,FUN_00108254,&LAB_0010a4a8,&DAT_0046515c);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = (char *)0x0;
    }
    else {
      FUN_002c4460(0,pcVar2);
      DAT_00465130 = pcVar2;
    }
    DAT_00465134 = pcVar2;
    return;
  }
  FUN_002c45b8(DAT_00465134,0);
  DAT_00465134 = (char *)0x0;
  return;
}
