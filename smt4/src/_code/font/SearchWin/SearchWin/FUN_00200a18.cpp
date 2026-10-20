/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00200a18` (_code @ 0x200a18, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bee58(unsigned int *, int);
int FUN_002bf810(int);
int asdMemFree(unsigned int *);
int jobStop(unsigned int, int);

extern unsigned int *DAT_0043e170; /* 0x43e170 */

/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002bf810. */
extern int FUN_002c1d5c(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


unsigned int FUN_00200a18(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = DAT_0043e170;
  temp_v1 = 0;
  if (DAT_0043e170 != (unsigned int *)0x0) {
    temp_v0 = FUN_002c1d5c();
    puVar2 = DAT_0043e170;
    if (temp_v0 != 0) {
      jobStop(*DAT_0043e170,0);
      asdMemFree(puVar2);
      DAT_0043e170 = (unsigned int *)0x0;
      return 1;
    }
    temp_v0 = puVar1[2];
    if (temp_v0 != 3) {
      if (puVar1[3] != 3) {
        if (temp_v0 != 4) {
          if (DAT_0043e170[2] == 2) {
            DAT_0043e170[2] = 3;
          }
          else {
            DAT_0043e170[3] = 3;
          }
          FUN_002bee58(puVar2 + 0xe,1);
          FUN_002bf810(0x1000181);
          return 0;
        }
      }
      else if (temp_v0 != 4) {
        return 0;
      }
      jobStop(*DAT_0043e170,0);
      asdMemFree(puVar2);
      temp_v1 = 1;
      DAT_0043e170 = (unsigned int *)0x0;
    }
  }
  else {
    temp_v0 = FUN_002c1d5c();
    if (temp_v0 != 0) {
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
