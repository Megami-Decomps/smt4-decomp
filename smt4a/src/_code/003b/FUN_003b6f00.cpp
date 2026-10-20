/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b6f00` (_code @ 0x3b6f00, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018719c(...);
int FUN_003ff160(int);

extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018719c. */
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_003ff160. */
extern int FUN_003ff17c(void);
extern int FUN_003ff190(short);


unsigned int FUN_003b6f00(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar6;
  
  temp_v0 = FUN_0018719c(0x40f);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = dataTableGet(0x44,0);
    temp_v0 = dataTableGetEntries();
    temp_v2 = dataTableGetCount(temp_v1);
    temp_v1 = 0;
    temp_v4 = 0;
    do {
      if (temp_v2 <= temp_v4) {
        return temp_v1;
      }
      psVar6 = (short *)(temp_v0 + temp_v4 * 0x34);
      if (*psVar6 != 0) {
        temp_v3 = FUN_003ff17c();
        if (temp_v3 != 0) {
          temp_v3 = FUN_003ff190(*psVar6);
          if (temp_v3 != 0) {
            temp_v1 = 1;
          }
        }
        else if ((psVar6[0x19] == 0) || (temp_v3 = FUN_0018719c(), temp_v3 != 0)) {
          FUN_003ff160(*psVar6);
          temp_v1 = 1;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 100);
  }
  return temp_v1;
}

} /* extern "C" */
