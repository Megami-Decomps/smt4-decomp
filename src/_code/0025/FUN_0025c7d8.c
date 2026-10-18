/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025c7d8` (_code @ 0x25c7d8, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0025b968. */
extern int FUN_0025b978(void);
extern unsigned int FUN_002c32f0(unsigned int, int *, unsigned int);
/* Supplied declaration required: FUN_002c4360. */
extern int FUN_002c583c(unsigned int);
/* Supplied declaration required: FUN_002c5ff4. */


void FUN_0025c7d8(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = param_4;
  temp_v0 = FUN_002c583c(2);
  if ((temp_v0 == 0) && (param_1 < 0x43)) {
    temp_v0 = param_1 * 0x10;
    if (*(int *)(temp_v0 + 0x493830) != 0) {
      temp_v1 = FUN_0025b978();
      FUN_0025b968(1);
      temp_v2 = FUN_002c32f0(*(unsigned int *)(temp_v0 + 0x49382c),&temp_v3,0);
      if (*(int *)(temp_v0 + 0x493834) == temp_v3) {
        FUN_002c5ff4(*(unsigned int *)(temp_v0 + 0x493830),temp_v2);
        FUN_002c4360(temp_v2);
      }
      else {
        FUN_002c4360(*(unsigned int *)(temp_v0 + 0x493830));
        *(unsigned int *)(temp_v0 + 0x493830) = temp_v2;
        *(int *)(temp_v0 + 0x493834) = temp_v3;
      }
      if (temp_v1 == 0) {
        FUN_0025b968(0);
      }
    }
  }
  return;
}
