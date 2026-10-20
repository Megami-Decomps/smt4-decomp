/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f876c` (_code @ 0x3f876c, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c174(unsigned int, int *, int);
int FUN_0019a5a0(unsigned int);
int FUN_002371b4(...);
int rt_memcpy(unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0013c174. */
extern int FUN_00180008(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002371b4. */
extern int FUN_0028029c(void);
/* Supplied declaration required: rt_memcpy. */


void FUN_003f876c(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = param_4;
  temp_v0 = FUN_00180008(2);
  if ((temp_v0 == 0) && (param_1 < 0x50)) {
    temp_v0 = param_1 * 0x10;
    if (*(int *)(temp_v0 + 0x5e2218) != 0) {
      temp_v1 = FUN_0028029c();
      FUN_002371b4(1);
      temp_v2 = *(unsigned int *)(temp_v0 + 0x5e2214);
      FUN_0013c174(temp_v2,&temp_v3,0);
      if (*(int *)(temp_v0 + 0x5e221c) == temp_v3) {
        rt_memcpy(*(unsigned int *)(temp_v0 + 0x5e2218),temp_v2);
        FUN_0019a5a0(temp_v2);
      }
      else {
        FUN_0019a5a0(*(unsigned int *)(temp_v0 + 0x5e2218));
        *(unsigned int *)(temp_v0 + 0x5e2218) = temp_v2;
        *(int *)(temp_v0 + 0x5e221c) = temp_v3;
      }
      if (temp_v1 == 0) {
        FUN_002371b4();
      }
    }
  }
  return;
}

} /* extern "C" */
