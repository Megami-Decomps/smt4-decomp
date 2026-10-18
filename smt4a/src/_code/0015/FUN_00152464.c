/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152464` (_code @ 0x152464, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_0063e4a0; /* 0x63e4a0 */
extern unsigned char DAT_0063f1e8; /* 0x63f1e8 */
extern int DAT_0063f50c; /* 0x63f50c */

/* Supplied declaration required: FUN_001753d4. */
/* Supplied declaration required: FUN_001787a8. */


void FUN_00152464(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = DAT_0063f50c;
  puVar2 = &DAT_0063f1e8;
  if (DAT_0063f50c != 0) {
    puVar2 = (unsigned int)(uint)*(unsigned int)(DAT_0063f50c + 0x3b);
  }
  if (DAT_0063f50c != 0 && puVar2 != (unsigned char *)0x0) {
    puVar2 = &DAT_0063e4a0;
    FUN_001787a8(&DAT_0063e4a0,param_1,0xffffffff,param_4,param_4);
    if (puVar2 == (unsigned char *)0x0) {
      FUN_001753d4(&DAT_0063e4a0,param_1,temp_v0,0xffffffff,0);
    }
  }
  return;
}
