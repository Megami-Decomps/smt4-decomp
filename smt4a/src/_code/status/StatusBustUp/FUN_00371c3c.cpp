/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00371c3c` (_code @ 0x371c3c, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableNodeIsLoaded(...);
int FUN_00184310(void);
int dataTable00FindById(void);
int FUN_001a6508(...);
int FUN_001a6568(...);
int FUN_001acf98(...);

extern unsigned int g_aocSystem; /* 0x570280 */
extern int DAT_00588fdc; /* 0x588fdc */
extern int DAT_00588fe0; /* 0x588fe0 */

/* Supplied declaration required: asdTMTexTableNodeIsLoaded. */
/* Supplied declaration required: FUN_00184310. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: FUN_001a6508. */
/* Supplied declaration required: FUN_001a6568. */
/* Supplied declaration required: FUN_001acf98. */


void FUN_00371c3c(unsigned int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  
  if (param_2 != 0) {
    if (-1 >= (int)param_1) {
      temp_v0 = gameFlagIsSet(0x11);
      if (temp_v0 == 0) {
        param_1 = 0x25e;
      }
      else {
        param_1 = 0;
      }
    }
    else {
      temp_v1 = param_1;
      FUN_00184310();
      if (temp_v1 != 0) {
        param_1 = param_1 & 0xffff;
        dataTable00FindById();
        if ((*(unsigned short *)(param_1 + 2) & 0x8000) != 0) {
          temp_v0 = (int)*(short *)(param_1 + 0x8c);
          if (temp_v0 < 0x9a) {
            if ((*(char *)(DAT_00588fe0 + temp_v0) < '\x01') &&
               (temp_v2 = asdTMTexTableNodeIsLoaded(0x19,temp_v0), temp_v2 == 0)) {
              temp_v2 = FUN_001a6508(g_aocSystem,0x19,temp_v0,1);
              if (temp_v2 != 0) {
                FUN_001a6568(g_aocSystem,0x19,temp_v0,0x10000);
              }
              else {
                FUN_001acf98(0x19,temp_v0);
              }
            }
            *(char *)(DAT_00588fe0 + temp_v0) = *(char *)(DAT_00588fe0 + temp_v0) + '\x01';
          }
          return;
        }
        else {
          param_1 = *(unsigned short *)(temp_v1 + 0x9c) + 1;
          if (param_1 >= 0x277) {
            return;
          }
        }
      }
      else {
        return;
      }
    }
  }
  if ((*(char *)(DAT_00588fdc + param_1) < '\x01') &&
     (temp_v0 = asdTMTexTableNodeIsLoaded(0xf,param_1), temp_v0 == 0)) {
    temp_v0 = FUN_001a6508(g_aocSystem,0xf,param_1,1);
    if (temp_v0 != 0) {
      FUN_001a6568(g_aocSystem,0xf,param_1,0x10000);
    }
    else {
      FUN_001acf98(0xf,param_1);
    }
  }
  *(char *)(DAT_00588fdc + param_1) = *(char *)(DAT_00588fdc + param_1) + '\x01';
  return;
}

} /* extern "C" */
