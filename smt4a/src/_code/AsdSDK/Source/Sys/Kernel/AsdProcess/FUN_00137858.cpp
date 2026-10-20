/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137858` (_code @ 0x137858, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163060(int, int, int, int, int);
int FUN_001b4a90(unsigned char *, int, int, unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int DAT_00640118; /* 0x640118 */
extern int DAT_0064011c; /* 0x64011c */
extern unsigned int DAT_0064012c; /* 0x64012c */
extern unsigned char DAT_00640130; /* 0x640130 */

/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001b4a90. */


void FUN_00137858(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_001b4a90(&DAT_00640130,0x200,1,param_4,param_4);
  temp_v0 = 0x100;
  DAT_0064011c = param_1;
  FUN_00163060(0x100,0x100,0,param_1 << 3,1);
  DAT_00640118 = temp_v0;
  DAT_0064012c = 1;
  return;
}

} /* extern "C" */
