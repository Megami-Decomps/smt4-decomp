#include "romwright_types.h"

extern "C" {

int FUN_002a1f60(unsigned int, int, unsigned int, int, int, int, unsigned int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */

/* Supplied declaration required: FUN_002a1f60. */


void FUN_0037b578(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4));
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) + 0x67c) = 1;
  *(unsigned char *)(temp_v0 + 0x5ea) = 1;
  if (param_1 != 0) {
    FUN_002a1f60(*(unsigned int *)(temp_v0 + 0x678),2,0xffffffff,0,3,param_1,param_2);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  *(unsigned char *)(temp_v0 + 0x5ea) = 0;
  *(unsigned char *)(temp_v0 + 0x67c) = 0;
  *(unsigned int *)(temp_v0 + 0x678) = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
