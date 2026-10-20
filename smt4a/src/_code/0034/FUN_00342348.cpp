#include "romwright_types.h"

extern "C" {

int FUN_0028a888(int);
int FUN_002a1f60(unsigned int, int, unsigned int, int, int, int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int g_aocSystem; /* 0x570280 */
extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */

/* Supplied declaration required: FUN_0028a888. */
/* Supplied declaration required: FUN_002a1f60. */
extern int FUN_0046e458(unsigned int, int);
extern int FUN_00480b08(void);


void FUN_00342348(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4));
  if (param_1 == 0) {
    *(unsigned char *)(temp_v0 + 0x5ea) = 0;
  }
  else {
    *(unsigned char *)(temp_v0 + 0x67c) = 1;
    *(unsigned char *)(temp_v0 + 0x5ea) = 1;
    temp_v1 = FUN_0046e458(g_aocSystem,param_1);
    if (temp_v1 == 0) {
      temp_v1 = FUN_00480b08();
    }
    FUN_0028a888(param_1);
    FUN_002a1f60(*(unsigned int *)(temp_v0 + 0x678),2,0xffffffff,0,3,temp_v1,param_1);
  }
  return;
}

} /* extern "C" */
