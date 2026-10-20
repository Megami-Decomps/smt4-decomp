/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037eecc` (_code @ 0x37eecc, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);
int FUN_0030ea58(int, unsigned char *);
int FUN_00335660(unsigned int, int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned char LAB_0037ef14; /* 0x37ef14 */

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_0030ea58. */
/* Supplied declaration required: FUN_00335660. */


void FUN_0037eecc(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_00192550();
  if (param_2 != 0) {
    temp_v0 = param_2 + 0x20;
    FUN_0030ea58(temp_v0,&LAB_0037ef14);
    if (temp_v0 != 0) {
      FUN_00335660(param_1,param_2 + 0x20,param_3);
      return;
    }
  }
  return;
}

} /* extern "C" */
