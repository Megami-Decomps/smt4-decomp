/* NON_MATCHING: romwright 0.5.0 decompilation of `packageFindFileByTypeAndId` (_code @ 0x1b2bd8, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "runtime/Stdio.h"
#include "romwright_types.h"

extern "C" {

int packageEntryGetDirectory(void);
int packageEntryGetFileCount(void);

extern unsigned char LAB_001b2c9c; /* 0x1b2c9c */

extern int packageEntryIsLoaded(unsigned int);
/* Supplied declaration required: packageEntryGetDirectory. */
/* Supplied declaration required: packageEntryGetFileCount. */


int packageFindFileByTypeAndId(int param_1,int param_2,char *param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  char *pcVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v5 = 0;
  if (temp_v5 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v6 = *(int *)(param_1 + 0x318) + temp_v5 * 0x50;
      temp_v1 = packageEntryIsLoaded(temp_v6);
      if (temp_v1 != 0) {
        temp_v2 = temp_v6;
        packageEntryGetDirectory();
        temp_v3 = temp_v6;
        packageEntryGetFileCount();
        temp_v4 = 0;
        if (temp_v4 < temp_v3) {
          do {
            pcVar5 = (char *)(temp_v2 + temp_v4 * 0x40);
            temp_v0 = *pcVar5;
            if (temp_v0 == param_2) {
              pcVar5 = *(char **)(pcVar5 + 0x3c);
            }
            if (temp_v0 == param_2 && pcVar5 == param_3) {
              __2sprintf((char *)param_4,(const char *)&LAB_001b2c9c,temp_v6 + 0x24,temp_v2 + temp_v4 * 0x40 + 1);
              return *(int *)(temp_v6 + 0x4c) + temp_v4 * 0x10;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < temp_v3);
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(int *)(param_1 + 0x310));
  }
  return 0;
}

} /* extern "C" */
