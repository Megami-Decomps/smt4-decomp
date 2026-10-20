/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1550` (_code @ 0x2c1550, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int FUN_001846d0(unsigned int *, int);
int asdMemFree(unsigned int *);
int FUN_003d2150(int);

extern unsigned int *DAT_0057f584; /* 0x57f584 */

extern int FUN_00162ea4(void);
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_003d2150. */


unsigned int FUN_002c1550(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = DAT_0057f584;
  temp_v1 = 0;
  if (DAT_0057f584 != (unsigned int *)0x0) {
    temp_v0 = FUN_00162ea4();
    puVar2 = DAT_0057f584;
    if (temp_v0 != 0) {
      jobStop(*DAT_0057f584,0);
      asdMemFree(puVar2);
      DAT_0057f584 = (unsigned int *)0x0;
      return 1;
    }
    temp_v0 = puVar1[2];
    if (temp_v0 != 3) {
      if (puVar1[3] != 3) {
        if (temp_v0 != 4) {
          if (DAT_0057f584[2] == 2) {
            DAT_0057f584[2] = 3;
          }
          else {
            DAT_0057f584[3] = 3;
          }
          FUN_001846d0(puVar2 + 0xe,1);
          FUN_003d2150(0x10000cf);
          return 0;
        }
      }
      else if (temp_v0 != 4) {
        return 0;
      }
      jobStop(*DAT_0057f584,0);
      asdMemFree(puVar2);
      temp_v1 = 1;
      DAT_0057f584 = (unsigned int *)0x0;
    }
  }
  else {
    temp_v0 = FUN_00162ea4();
    if (temp_v0 != 0) {
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
