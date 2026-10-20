/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b961c` (_code @ 0x3b961c, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003a249c(void);
int FUN_003cb930(void);
int FUN_003fd63c(unsigned int, int);

extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_003a249c. */
extern short *dataTable49GetEntry(int);
/* Supplied declaration required: FUN_003cb930. */
/* Supplied declaration required: FUN_003fd63c. */


unsigned int FUN_003b961c(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  short *psVar2;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = param_1;
  FUN_003cb930();
  temp_v2 = 0;
  if (temp_v2 < temp_v0) {
    do {
      psVar2 = (short *)dataTable49GetEntry(temp_v2);
      if (psVar2[1] != -1) {
        if (((*psVar2 == param_1) && (psVar2[1] == param_2)) &&
           ((temp_v1 = FUN_0018719c(*(unsigned int *)(psVar2 + 2)), temp_v1 != 0 &&
            (temp_v1 = FUN_0018719c(*(unsigned int *)(psVar2 + 4)), temp_v1 == 0)))) {
          temp_v1 = FUN_0018719c(*(unsigned int *)(psVar2 + 6));
          if (temp_v1 == 0) {
            FUN_003fd63c(*(unsigned int *)(psVar2 + 6),1);
            FUN_003a249c();
          }
        }
      }
      else if (((*psVar2 == param_1) &&
               (temp_v1 = FUN_0018719c(*(unsigned int *)(psVar2 + 2)), temp_v1 != 0)) &&
              (temp_v1 = FUN_0018719c(*(unsigned int *)(psVar2 + 4)), temp_v1 == 0)) {
        temp_v1 = FUN_0018719c(*(unsigned int *)(psVar2 + 6));
        if (temp_v1 == 0) {
          FUN_003fd63c(*(unsigned int *)(psVar2 + 6),1);
          FUN_003a249c();
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v0);
  }
  return 1;
}

} /* extern "C" */
