/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c8ee0` (_code @ 0x4c8ee0, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004c8e30(int, int, unsigned int);
int FUN_004c9160(int, unsigned int *, int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned int DAT_005738f8; /* 0x5738f8 */
extern unsigned int DAT_005738fc; /* 0x5738fc */
extern unsigned int DAT_00573900; /* 0x573900 */
extern unsigned int DAT_00573904; /* 0x573904 */
extern unsigned int DAT_00573908; /* 0x573908 */
extern unsigned int DAT_0057390c; /* 0x57390c */
extern unsigned int DAT_00573910; /* 0x573910 */
extern unsigned int DAT_00573914; /* 0x573914 */
extern unsigned int DAT_00573918; /* 0x573918 */
extern unsigned int DAT_0057391c; /* 0x57391c */

extern int btlGetMainState(void);
extern int playerHasFlagBit(unsigned int);
extern int btlFindEntryValue(int, unsigned int);
/* Supplied declaration required: FUN_004c8e30. */
/* Supplied declaration required: FUN_004c9160. */


unsigned int FUN_004c8ee0(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = btlGetMainState();
  temp_v1 = *(unsigned int *)(temp_v0 + 0x45a0);
  temp_v3 = *(unsigned int *)(temp_v0 + 0x45a4);
  if ((((temp_v3 & DAT_0057390c) != 0 || (temp_v1 & DAT_00573908) != 0) ||
      ((DAT_00573910 & temp_v1) != 0 || (DAT_00573914 & temp_v3) != 0)) ||
     ((temp_v1 & DAT_00573918) != 0 || (temp_v3 & DAT_0057391c) != 0)) {
    return 0;
  }
  temp_v1 = param_1[0x9d];
  if (((temp_v1 & 8) != 0) && ((param_2 & 8) == 0)) {
    temp_v2 = 0x24;
    FUN_004c9160(0x24,param_1,0,param_3);
    return temp_v2;
  }
  if (((temp_v1 & 0x200) != 0) && ((param_2 & 0x200) == 0)) {
    temp_v2 = 0x13;
    FUN_004c9160(0x13,param_1,0,param_3);
    return temp_v2;
  }
  if (((temp_v1 & 0x20) != 0) && ((param_2 & 0x20) == 0)) {
    temp_v2 = 0x14;
    FUN_004c9160(0x14,param_1,0,param_3);
    return temp_v2;
  }
  if ((((temp_v1 & 0x2000) != 0) && ((param_2 & 0x2000) == 0)) &&
     ((param_1[1] & DAT_00573904) == 0 && (*param_1 & DAT_00573900) == 0)) {
    temp_v2 = 0x3d;
    FUN_004c9160(0x3d,param_1,0,param_3);
    return temp_v2;
  }
  temp_v0 = btlFindEntryValue((int)(short)param_1[2],0xd);
  if (0 < temp_v0) {
    temp_v2 = 0x1f;
    FUN_004c9160(0x1f,param_1,0,param_3);
    return temp_v2;
  }
  if (((param_1[1] & DAT_005738fc) != 0 || (*param_1 & DAT_005738f8) != 0) &&
     (temp_v0 = playerHasFlagBit(1), temp_v0 != 0)) {
    temp_v2 = 0x15;
    FUN_004c8e30(0x15,0,param_3);
    return temp_v2;
  }
  return 0;
}

} /* extern "C" */
