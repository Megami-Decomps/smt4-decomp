/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b087c` (_code @ 0x2b087c, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short spB8; /* 0xb8: local_b8 */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_1_stack;

extern unsigned char LAB_00144968; /* 0x144968 */
extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002b48dc. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


void FUN_002b087c(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2 [84];
  
  temp_v2[0] = param_1;
  if (*(int *)(DAT_00433158 + 0x368) != 0) {
    puVar1 = temp_v2;
    FUN_002b48dc(puVar1,*(int *)(DAT_00433158 + 0x368),*(unsigned int *)(DAT_00433158 + 0x364),0xa8,
                 &LAB_00144968);
    if (puVar1 != (unsigned short *)0x0) {
      return;
    }
  }
  temp_v0 = FUN_002c0ec4(0,1);
  temp_v1 = FUN_002c0e9c();
  temp_v0 = FUN_002c0e4c(temp_v0);
  FUN_002b48dc(temp_v2,temp_v1,temp_v0,0xa8,&LAB_00144968);
  return;
}
