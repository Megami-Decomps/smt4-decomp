/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00276718` (_code @ 0x276718, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp1BC; /* 0x1bc: local_1bc */
    unsigned int sp1C0; /* 0x1c0: local_1c0 */
} param_1_stack;

extern unsigned char LAB_0038e4b4; /* 0x38e4b4 */
extern unsigned int DAT_00432fc8; /* 0x432fc8 */
extern int DAT_00433158; /* 0x433158 */

extern int FUN_002904d0(void);
extern unsigned int FUN_00290694(void);
extern int FUN_002a17d4(unsigned int);
/* Supplied declaration required: FUN_002b48dc. */


unsigned int FUN_00276718(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned short temp_v2 [218];
  
  temp_v0 = FUN_002904d0();
  if ((temp_v0 != 0) && (temp_v1 = FUN_00290694(), temp_v1 >= 0x15e)) {
    temp_v2[0] = (unsigned short)temp_v1;
    puVar3 = temp_v2;
    FUN_002b48dc(puVar3,*(unsigned int *)(param_1 + 0x388),*(unsigned int *)(DAT_00433158 + 900),0x1b4,
                 &LAB_0038e4b4);
    if ((puVar3 == (unsigned short *)0x0) || (temp_v0 = FUN_002a17d4(DAT_00432fc8), temp_v0 == 0)) {
      return 1;
    }
  }
  return 0;
}
