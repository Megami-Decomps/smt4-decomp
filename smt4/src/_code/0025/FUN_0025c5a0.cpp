/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025c5a0` (_code @ 0x25c5a0, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdLoadFileSetUseRawPaths(...);
int asdMemFree(unsigned int);
int rt_memcpy(unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: asdLoadFileSetUseRawPaths. */
extern int asdLoadFileGetUseRawPaths(void);
extern unsigned int FUN_002c3124(unsigned int, int *, unsigned int);
/* Supplied declaration required: asdMemFree. */
extern int jyoucyuGetTableEntry(unsigned int);
/* Supplied declaration required: rt_memcpy. */


void FUN_0025c5a0(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = param_4;
  temp_v0 = jyoucyuGetTableEntry(2);
  if ((temp_v0 == 0) && (param_1 < 0x43)) {
    temp_v0 = param_1 * 0x10;
    if (*(int *)(temp_v0 + 0x493830) != 0) {
      temp_v1 = asdLoadFileGetUseRawPaths();
      asdLoadFileSetUseRawPaths(1);
      temp_v2 = FUN_002c3124(*(unsigned int *)(temp_v0 + 0x49382c),&temp_v3,0);
      if (*(int *)(temp_v0 + 0x493834) == temp_v3) {
        rt_memcpy(*(unsigned int *)(temp_v0 + 0x493830),temp_v2);
        asdMemFree(temp_v2);
      }
      else {
        asdMemFree(*(unsigned int *)(temp_v0 + 0x493830));
        *(unsigned int *)(temp_v0 + 0x493830) = temp_v2;
        *(int *)(temp_v0 + 0x493834) = temp_v3;
      }
      if (temp_v1 == 0) {
        asdLoadFileSetUseRawPaths();
      }
    }
  }
  return;
}

} /* extern "C" */
