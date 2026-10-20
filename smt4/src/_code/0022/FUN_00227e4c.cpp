#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00435d00; /* 0x435d00 */

extern int FUN_002b4414(int, unsigned int, unsigned int);
extern unsigned int FUN_002c30c4(unsigned int);


unsigned int FUN_00227e4c(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (*(int *)(param_1 + 0x1cfc) != 0) {
    temp_v2 = 0;
    do {
      int off = temp_v2 * 0x16 + 0x58;
      temp_v3 = *(int *)(param_1 + 0x1cfc) + off;
      if (temp_v3 != 0) {
        temp_v0 = FUN_002c30c4((*(unsigned int *)((unsigned char *)&DAT_00435d00 + 0xc)));
        temp_v1 = FUN_002b4414(temp_v3,(*(unsigned int *)((unsigned char *)&DAT_00435d00 + 0xc)),temp_v0);
        if (temp_v1 == 0) {
          return (unsigned int)*(unsigned short *)(temp_v3 + 0x12);
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
  }
  return 0xffffffff;
}

} /* extern "C" */
