/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021b968` (_code @ 0x21b968, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0015f490. */
extern int FUN_001ab888(void);


void FUN_0021b968(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  
  temp_v0 = FUN_001ab888();
  temp_v1 = 0;
  if ((*(char *)(temp_v0 + 0x1ca0) < '\0') ||
     (*(char *)(temp_v0 + 0x1ca0) != *(char *)(temp_v0 + param_2 + 0x1c88))) {
    temp_v1 = 1;
    if ((*(char *)(temp_v0 + 0x1ca1) < '\0') ||
       (*(char *)(temp_v0 + 0x1ca1) != *(char *)(temp_v0 + param_2 + 0x1c88))) {
      temp_v1 = 2;
      if ((*(char *)(temp_v0 + 0x1ca2) < '\0') ||
         (*(char *)(temp_v0 + 0x1ca2) != *(char *)(temp_v0 + param_2 + 0x1c88))) {
        puVar2 = (unsigned char *)(param_1 + param_2 + 0x753f);
        *puVar2 = 1;
        if ((param_4 != 0) && (*(char *)(param_1 + 0x7557) == '\0')) {
          FUN_0015f490(param_3,7,1,0);
          *(unsigned char *)(param_1 + 0x7557) = 1;
        }
        return;
      }
    }
  }
  puVar2 = (unsigned char *)(param_1 + temp_v1 + 0x753c);
  *puVar2 = 1;
  if ((param_4 != 0) && (*(char *)(param_1 + 0x7557) == '\0')) {
    FUN_0015f490(param_3,7,1,0);
    *(unsigned char *)(param_1 + 0x7557) = 1;
  }
  return;
}
