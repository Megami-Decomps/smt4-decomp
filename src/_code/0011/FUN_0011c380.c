/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c380` (_code @ 0x11c380, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_0012a900. */
extern int FUN_002bb978(void);
extern int FUN_002bc9c8(void);


/* WARNING: Type propagation algorithm not settling */

unsigned char FUN_0011c380(int *param_1,unsigned short *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1 [4];
  
  temp_v1[2] = 0xffffffff;
  temp_v1[3] = 0xffffffff;
  temp_v1[1] = 0xffffffff;
  FUN_0012a900(*(unsigned int *)(*param_1 + 4),param_2,1,temp_v1,temp_v1 + 2,temp_v1 + 1);
  temp_v0 = FUN_002bb978();
  if ((temp_v0 != 0) && (temp_v0 = FUN_002bc9c8(), temp_v0 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    *(unsigned char *)(param_2 + 2) = 0;
  }
  return 0 < temp_v1[0];
}
