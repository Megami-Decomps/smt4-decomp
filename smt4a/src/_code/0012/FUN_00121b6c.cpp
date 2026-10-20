#include "romwright_types.h"

extern "C" {

int FUN_00121c68(int);
int FUN_002f6c32(unsigned int, unsigned char *, int);

extern unsigned char g_flagBlock; /* 0x594958 */
extern unsigned char DAT_00594e7c; /* 0x594e7c */

/* Supplied declaration required: FUN_00121c68. */
extern int FUN_002eac34(unsigned int);
/* Supplied declaration required: FUN_002f6c32. */


void FUN_00121b6c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002f6c32(*(unsigned int *)(param_1 + 0x31c),&DAT_00594e7c,0x10);
  FUN_00121c68(param_1);
  if (*(signed char *)(&g_flagBlock + 0x19) != '\0') {
    temp_v0 = FUN_002eac34(10);
    *(unsigned int *)(temp_v0 + 0xa4) = *(unsigned int *)(param_1 + 0x31c);
  }
  if (*(signed char *)(&g_flagBlock + 0x1a) != '\0') {
    temp_v0 = FUN_002eac34(9);
    if (*(int *)(temp_v0 + 0xa4) == 0) {
      temp_v0 = FUN_002eac34(9);
      *(unsigned int *)(temp_v0 + 0xa4) = *(unsigned int *)(param_1 + 800);
    }
    temp_v0 = FUN_002eac34(1);
    if (*(int *)(temp_v0 + 0xa4) == 0) {
      temp_v0 = FUN_002eac34(1);
      *(unsigned int *)(temp_v0 + 0xa4) = *(unsigned int *)(param_1 + 800);
    }
    temp_v0 = FUN_002eac34(8);
    if (*(int *)(temp_v0 + 0xa4) == 0) {
      temp_v0 = FUN_002eac34(8);
      *(unsigned int *)(temp_v0 + 0xa4) = *(unsigned int *)(param_1 + 800);
    }
  }
  return;
}

} /* extern "C" */
