/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a476c` (_code @ 0x3a476c, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

struct AsdCecMessageBox;

extern "C" {

s32 asdCecMessageBoxOpen(AsdCecMessageBox* box, u32 id, u32 expectedTag);
int asdCecMessageBoxClose(unsigned int);
int FUN_0042ed58(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, int, int, unsigned int, unsigned int, int);

/* stack frame of param_8: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_8_stack;

extern unsigned char g_asdCec; /* 0x5b3f94 */

extern int wstrlenU16(unsigned int);
/* Supplied declaration required: asdCecMessageBoxClose. */
/* Supplied declaration required: FUN_0042ed58. */


unsigned int
FUN_003a476c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 5;
  temp_v0 = (*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[6];
  temp_v0 = asdCecMessageBoxOpen((AsdCecMessageBox*)temp_v0,param_1,param_2);
  if (temp_v0 < 0) {
    if (temp_v0 != -0x377ef411) {
      if (temp_v0 != -0x377ef416) {
        return 5;
      }
      return 2;
    }
    temp_v0 = wstrlenU16(param_6);
    temp_v1 = (*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[6];
    FUN_0042ed58(temp_v1,param_1,param_2,param_3,param_4,param_5,param_6,temp_v0 << 1,0x80000,0x80000,
                 param_7,param_8,0x19000);
    if (temp_v1 == -0x371ef798) {
      temp_v2 = 3;
    }
    if (temp_v1 == -0x371ef799) {
      temp_v2 = 4;
    }
    temp_v0 = (*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4))[6];
    temp_v0 = asdCecMessageBoxOpen((AsdCecMessageBox*)temp_v0,param_1,param_2);
    if (temp_v0 < 0) {
      return temp_v2;
    }
    temp_v2 = 1;
  }
  else {
    temp_v2 = 6;
  }
  puVar1 = (*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4));
  if ((*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4)) != (unsigned int *)0x0) {
    *(*(unsigned int * *)((unsigned char *)&g_asdCec + 0x4)) = param_1;
    puVar1[1] = param_2;
  }
  asdCecMessageBoxClose(puVar1[6]);
  return temp_v2;
}

} /* extern "C" */
