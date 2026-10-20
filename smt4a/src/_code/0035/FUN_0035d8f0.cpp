/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d8f0` (_code @ 0x35d8f0, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017ffa8(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_00184310(void);
int FUN_0019cac4(void);
int FUN_003a7a88(unsigned int, int);
int FUN_0046fa94(unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_0017ffa8. */
/* Supplied declaration required: FUN_00184310. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_003a7a88. */
extern int FUN_0046c4f4(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0046fa94. */


void FUN_0035d8f0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = 0xf;
  temp_v2 = param_1;
  if (param_5 != 0) {
    if ((int)param_1 < 0) {
      temp_v0 = FUN_0018719c(0x11);
      if (temp_v0 == 0) {
        temp_v2 = 0x25e;
      }
      else {
        temp_v2 = 0;
      }
    }
    else {
      temp_v2 = param_1 & 0xffff;
      FUN_00184310();
      if (temp_v2 == 0) {
        return;
      }
      temp_v1 = param_1 & 0xffff;
      FUN_0019cac4();
      if ((*(unsigned short *)(temp_v1 + 2) & 0x8000) != 0) {
        temp_v2 = (unsigned int)*(short *)(temp_v1 + 0x8c);
        temp_v3 = 0x19;
        if ((int)temp_v2 >= 0x9a) {
          return;
        }
      }
      else {
        temp_v2 = *(unsigned short *)(temp_v2 + 0x9c) + 1;
        if (temp_v2 >= 0x277) {
          return;
        }
      }
    }
  }
  temp_v1 = param_1;
  FUN_003a7a88(param_1,param_5);
  if (temp_v1 != 0) {
    temp_v0 = FUN_0046c4f4(g_aocSystem,temp_v3,temp_v2);
    if (temp_v0 == 0) {
      FUN_0017ffa8(2,temp_v3,temp_v2 * 1000 + 1,param_2,param_3,param_4);
      return;
    }
    FUN_0046fa94(g_aocSystem,param_1,2,temp_v3,temp_v2,param_2,param_3,param_4);
  }
  return;
}

} /* extern "C" */
