/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021e7f4` (_code @ 0x21e7f4, 0x1b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00295a18(int, int);
int dataTableGet(...);
int FUN_00387c78(int, unsigned int);

extern int g_aocSystem; /* 0x433158 */
extern int DAT_0044cd88; /* 0x44cd88 */

extern int FUN_0028fb40(unsigned short);
/* Supplied declaration required: FUN_00295a18. */
extern int FUN_002b8dc0(unsigned short);
extern int FUN_002c09d0(void);
extern int randNextInRange(unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTableGet. */
/* Supplied declaration required: FUN_00387c78. */


unsigned short FUN_0021e7f4(unsigned int param_1,int param_2)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  short *psVar9;
  int temp_v7;
  unsigned short temp_v8;
  
  *(unsigned char *)(DAT_0044cd88 + 0x14) = 0;
  temp_v0 = dataTableGet(0x20);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  if ((param_1 < temp_v2) && (puVar4 = (unsigned short *)(temp_v1 + param_1 * 4), puVar4 != (unsigned short *)0x0)) {
    temp_v2 = (unsigned int)*puVar4;
    temp_v1 = g_aocSystem;
    FUN_00387c78(g_aocSystem,temp_v2);
    if (temp_v1 == 0) {
      temp_v0 = dataTableGet(0x20,1);
      temp_v1 = dataTableGetEntries();
      temp_v5 = dataTableGetCount(temp_v0);
      if (temp_v5 <= temp_v2) {
        return 0;
      }
      temp_v1 = temp_v1 + temp_v2 * 0x20;
    }
    if (temp_v1 != 0) {
      temp_v8 = 0;
      temp_v7 = 0;
      temp_v6 = 0;
      do {
        psVar9 = (short *)(temp_v1 + temp_v6 * 8);
        if ((*psVar9 != 0) && ((psVar9[2] == 0 || (temp_v3 = FUN_002c09d0(), temp_v3 != 0)))) {
          temp_v7 = temp_v7 + (unsigned int)(unsigned short)psVar9[1];
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
      if (temp_v7 != 0) {
        temp_v6 = randNextInRange((temp_v7 - 1U) & 0xffff);
        temp_v3 = 0;
        temp_v7 = 0;
        while ((psVar9 = (short *)(temp_v1 + temp_v7 * 8), *psVar9 == 0 ||
               (((psVar9[2] != 0 && (temp_v4 = FUN_002c09d0(), temp_v4 == 0)) ||
                (temp_v3 = temp_v3 + (unsigned int)(unsigned short)psVar9[1], temp_v3 < temp_v6))))) {
          temp_v7 = temp_v7 + 1;
          if (temp_v7 >= 4) {
LAB_0021e958:
            if (param_2 != 0) {
              temp_v1 = FUN_002b8dc0(temp_v8);
              temp_v6 = FUN_0028fb40(temp_v8);
              if (temp_v6 >= temp_v1) {
                *(unsigned char *)(DAT_0044cd88 + 0x14) = 1;
              }
              else {
                FUN_00295a18(temp_v8,1);
              }
            }
            return temp_v8;
          }
        }
        temp_v8 = *(unsigned short *)(temp_v1 + temp_v7 * 8);
        goto LAB_0021e958;
      }
    }
  }
  return 0;
}

} /* extern "C" */
