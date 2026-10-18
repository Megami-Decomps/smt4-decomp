/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00280124` (_code @ 0x280124, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_002801f8; /* 0x2801f8 */
extern unsigned char DAT_005b3f94; /* 0x5b3f94 */
extern int DAT_005b3f98; /* 0x5b3f98 */

/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3328. */
extern unsigned int FUN_0042fac4(void);
extern unsigned int FUN_00430f18(void);


unsigned int FUN_00280124(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_005b3f98 != 0) {
    FUN_002e3328(*(unsigned int *)(DAT_005b3f98 + 0xc));
    if (*(int **)(DAT_005b3f98 + 0x18) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(DAT_005b3f98 + 0x18) + 4))();
    }
    FUN_0019a5a0(DAT_005b3f98);
    DAT_005b3f98 = 0;
  }
  temp_v0 = 0x100;
  FUN_00163060(0x100,0x100,0,0x1c,1);
  DAT_005b3f94 = 0;
  DAT_005b3f98 = temp_v0;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  temp_v0 = 8;
  FUN_00178b04(8,&LAB_002801f8,0xae);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_00430f18();
  }
  *(unsigned int *)(DAT_005b3f98 + 0xc) = temp_v1;
  temp_v0 = 0x8bc;
  FUN_00178b04(0x8bc,&LAB_002801f8,0xaf);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0042fac4();
  }
  *(unsigned int *)(DAT_005b3f98 + 0x18) = temp_v1;
  return 1;
}
