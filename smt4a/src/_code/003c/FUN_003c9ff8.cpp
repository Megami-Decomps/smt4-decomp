/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c9ff8` (_code @ 0x3c9ff8, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004d86c0(unsigned int, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int DAT_00570d78; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */
extern unsigned int DAT_00570d80; /* 0x570d80 */
extern unsigned int DAT_00570d84; /* 0x570d84 */
extern unsigned int DAT_00570d90; /* 0x570d90 */
extern unsigned int DAT_00570d94; /* 0x570d94 */

extern int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_004d86c0. */


unsigned int FUN_003c9ff8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  temp_v5 = 4;
  while( 1 ) {
    puVar7 = (unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + temp_v5 * 0x408);
    temp_v3 = *puVar7;
    temp_v4 = puVar7[1];
    if (((((temp_v4 & DAT_00570d7c) != 0 || (temp_v3 & DAT_00570d78) != 0) &&
         ((temp_v4 & DAT_00570d94) == 0 && (DAT_00570d90 & temp_v3) == 0)) &&
        ((temp_v4 & DAT_00570d84) != 0 || (DAT_00570d80 & temp_v3) != 0)) &&
       ((*(char *)((int)puVar7 + 0x23a) != '\0' && (*(unsigned short *)((int)puVar7 + 0x166) == temp_v0))))
    break;
    temp_v5 = temp_v5 + 1;
    if (temp_v5 >= 0x36) {
      return 1;
    }
  }
  FUN_004d86c0(*(unsigned int *)(*(int *)(temp_v2 + 0x1ed4) + temp_v5 * 0x1d0 + 0x1bc),temp_v1);
  return 1;
}

} /* extern "C" */
