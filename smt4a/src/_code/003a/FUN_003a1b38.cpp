/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a1b38` (_code @ 0x3a1b38, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001acb48(unsigned int, int *);
int FUN_002cf09c(unsigned int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char DAT_006471dc; /* 0x6471dc */
extern unsigned int DAT_006472e0; /* 0x6472e0 */
extern unsigned int DAT_006472e4; /* 0x6472e4 */
extern unsigned int DAT_006472e8; /* 0x6472e8 */

/* Supplied declaration required: FUN_001acb48. */
/* Supplied declaration required: FUN_002cf09c. */


void FUN_003a1b38(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned int temp_v1;
  
  FUN_002cf09c(param_2);
  temp_v1 = DAT_006472e8;
  temp_v0 = (*(unsigned int *)((unsigned char *)&DAT_006471dc + 0x100));
  uStack_14 = DAT_006472e0;
  uStack_10 = DAT_006472e4;
  FUN_001acb48(param_1,&temp_v0);
  return;
}

} /* extern "C" */
