/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102e80` (_code @ 0x102e80, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int DAT_004e3cf4; /* 0x4e3cf4 */
extern int DAT_004e3cf8; /* 0x4e3cf8 */
extern unsigned int DAT_004e3d08; /* 0x4e3d08 */
extern unsigned char DAT_004e3d0c; /* 0x4e3d0c */

/* Supplied declaration required: FUN_002c4450. */
extern unsigned int FUN_002c4b84(unsigned int, unsigned int, unsigned int, int, unsigned int);


void FUN_00102e80(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c4450(&DAT_004e3d0c,0x200,1,param_4,param_4);
  DAT_004e3cf8 = param_1;
  DAT_004e3cf4 = FUN_002c4b84(0x100,0x100,0,param_1 << 3,1);
  DAT_004e3d08 = 1;
  return;
}
