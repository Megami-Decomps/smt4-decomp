/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd06c` (_code @ 0x2bd06c, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b46f8(unsigned short *, unsigned int, unsigned int, int, unsigned char *);
int FUN_002c0c74(unsigned int);
int FUN_002c0cc4(void);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_001251c8; /* 0x1251c8 */
extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002b46f8. */
/* Supplied declaration required: FUN_002c0c74. */
/* Supplied declaration required: FUN_002c0cc4. */
extern unsigned int FUN_002c0cec(unsigned int);


void FUN_002bd06c(unsigned short param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned short temp_v1 [20];
  
  if (*(int *)(DAT_00433158 + 0x368) != 0) {
    puVar1 = temp_v1;
    temp_v1[0] = param_1;
    FUN_002b46f8(puVar1,*(unsigned int *)(DAT_00433158 + 0x378),*(unsigned int *)(DAT_00433158 + 0x374),
                 0x28,&LAB_001251c8);
    if (puVar1 != (unsigned short *)0x0) {
      return;
    }
  }
  temp_v0 = FUN_002c0cec(1);
  FUN_002c0cc4();
  FUN_002c0c74(temp_v0);
  return;
}

} /* extern "C" */
