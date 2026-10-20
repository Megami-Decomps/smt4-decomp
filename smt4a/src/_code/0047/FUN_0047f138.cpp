/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047f138` (_code @ 0x47f138, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004fb43c(unsigned int, unsigned int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern int FUN_00180008(unsigned int);
/* Supplied declaration required: FUN_004fb43c. */


unsigned int FUN_0047f138(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  
  temp_v1 = FUN_00180008(1);
  if (temp_v1 == 0) {
    temp_v1 = 0x57a4c4;
    temp_v2 = 0;
    do {
      temp_v0 = temp_v2 * 0x10;
      puVar4 = (unsigned short *)(temp_v0 + 0x57a4c4);
      if (*puVar4 == param_1) {
        if (puVar4 != (unsigned short *)0x0) {
          temp_v1 = *(int *)(temp_v0 + 0x57a4cc);
        }
        if (puVar4 == (unsigned short *)0x0 || temp_v1 == 0) {
          return 0;
        }
        FUN_004fb43c((unsigned int)*(unsigned short *)(temp_v0 + 0x57a4d0) + param_3,param_2);
        return 0;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 3);
  }
  return 0;
}

} /* extern "C" */
