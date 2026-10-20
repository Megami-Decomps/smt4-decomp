/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a5f0` (_code @ 0x10a5f0, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100238(int, unsigned char *, unsigned int, unsigned int, unsigned int);
int FUN_002c5300(int, int, int, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char LAB_0010a644; /* 0x10a644 */
extern unsigned int DAT_00464a70; /* 0x464a70 */
extern int DAT_00464a74; /* 0x464a74 */

/* Supplied declaration required: FUN_00100238. */
/* Supplied declaration required: FUN_002c5300. */


void FUN_0010a5f0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_00100238(2,&LAB_0010a644,param_3,param_4,param_4);
  temp_v0 = 0x100;
  DAT_00464a74 = param_1;
  FUN_002c5300(0x100,0x100,0,param_1 * 0x2c,1);
  DAT_00464a70 = temp_v0;
  return;
}

} /* extern "C" */
