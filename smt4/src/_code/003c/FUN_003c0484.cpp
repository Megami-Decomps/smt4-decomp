/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c0484` (_code @ 0x3c0484, 0x160 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022a4ac(int, int, int, unsigned int, int, unsigned int, unsigned int);
int FUN_0022a5d8(int, unsigned int *, unsigned int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_0022a4ac. */
/* Supplied declaration required: FUN_0022a5d8. */
extern int FUN_00255158(int, unsigned int);
extern int btlGetMainState(void);
extern int FUN_00295d08(unsigned int);


unsigned int FUN_003c0484(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  
  temp_v1 = btlGetMainState();
  temp_v2 = *(unsigned int *)(temp_v1 + 0x44a0);
  temp_v3 = (temp_v2 & 0x40) == 0;
  temp_v4 = (temp_v2 & 0x100) == 0;
  temp_v5 = (temp_v2 & 0x200) != 0;
  if ((!temp_v3 || !temp_v4) || temp_v5) {
    temp_v2 = 0;
  }
  if ((temp_v3 && temp_v4) && !temp_v5) {
    temp_v0 = *(unsigned short *)((int)param_1 + 0x1c6);
    if (((temp_v0 & 8) != 0) && ((param_2 & 8) == 0)) {
      temp_v2 = 0x24;
      FUN_0022a5d8(0x24,param_1,param_3);
      return temp_v2;
    }
    if ((temp_v0 & 0x200) != 0) {
      temp_v2 = 0x13;
      FUN_0022a5d8(0x13,param_1,param_3);
      return temp_v2;
    }
    if ((temp_v0 & 0x20) != 0) {
      temp_v2 = 0x14;
      FUN_0022a5d8(0x14,param_1,param_3);
      return temp_v2;
    }
    temp_v1 = FUN_00255158((int)(short)param_1[2],0xd);
    if (0 < temp_v1) {
      temp_v2 = 0x1f;
      FUN_0022a5d8(0x1f,param_1,param_3);
      return temp_v2;
    }
    if (((*param_1 & 8) == 0) || (temp_v1 = FUN_00295d08(1), temp_v1 == 0)) {
      return 0;
    }
    temp_v1 = btlGetMainState();
    temp_v2 = 0;
    if (((*(unsigned int *)(temp_v1 + 0x44a0) & 0x40) == 0) && ((*(unsigned int *)(temp_v1 + 0x44a0) & 0x100) == 0)) {
      temp_v2 = 0;
      FUN_0022a4ac(0,0,0x15,*(unsigned int *)(temp_v1 + 0x2230),0,param_3,0xffffffff);
    }
  }
  return temp_v2;
}

} /* extern "C" */
