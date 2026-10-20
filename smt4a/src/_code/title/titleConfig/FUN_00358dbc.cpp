/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358dbc` (_code @ 0x358dbc, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fc0; /* 0x588fc0 */
extern unsigned char DAT_00588fc1; /* 0x588fc1 */
extern unsigned char DAT_00588fc2; /* 0x588fc2 */
extern unsigned char DAT_00588fc3; /* 0x588fc3 */

extern int FUN_0014af84(void);


void FUN_00358dbc(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0014af84();
  if (temp_v0 != 0) {
    *(unsigned char *)(temp_v0 + 0x27e90) = DAT_00588fc0;
    *(unsigned char *)(temp_v0 + 0x27e91) = DAT_00588fc1;
    *(unsigned char *)(temp_v0 + 0x27e92) = DAT_00588fc2;
    *(unsigned char *)(temp_v0 + 0x27e93) = DAT_00588fc3;
    *(unsigned char *)(temp_v0 + 0x27e94) = 1;
  }
  return;
}

} /* extern "C" */
