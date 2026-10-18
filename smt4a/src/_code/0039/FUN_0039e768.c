/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039e768` (_code @ 0x39e768, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned int DAT_00570d78; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */
extern unsigned int DAT_00570d80; /* 0x570d80 */
extern unsigned int DAT_00570d84; /* 0x570d84 */
extern unsigned int DAT_00570d90; /* 0x570d90 */
extern unsigned int DAT_00570d94; /* 0x570d94 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_004d888c. */


unsigned int FUN_0039e768(void)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int *puVar9;
  unsigned int in_fpscr;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = FUN_00236038(3);
  temp_v4 = FUN_0014aa78();
  temp_v7 = 4;
  while( 1 ) {
    puVar9 = (unsigned int *)(*(int *)(temp_v4 + 0x1ffc) + temp_v7 * 0x408);
    temp_v5 = *puVar9;
    temp_v6 = puVar9[1];
    if (((((temp_v6 & DAT_00570d7c) != 0 || (temp_v5 & DAT_00570d78) != 0) &&
         ((DAT_00570d90 & temp_v5) == 0 && (DAT_00570d94 & temp_v6) == 0)) &&
        ((temp_v5 & DAT_00570d80) != 0 || (temp_v6 & DAT_00570d84) != 0)) &&
       ((*(char *)((int)puVar9 + 0x23a) != '\0' && (*(unsigned short *)((int)puVar9 + 0x166) == temp_v0))))
    break;
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 0x36) {
      return 1;
    }
  }
  FUN_004d888c(*(unsigned int *)(*(int *)(temp_v4 + 0x1ed4) + temp_v7 * 0x1d0 + 0x1bc),temp_v1,temp_v3 != 0);
  return 1;
}
