/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6c3c` (_code @ 0x2a6c3c, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164b5c(int, int, int, unsigned int, unsigned int, unsigned int);
int FUN_0017ffa8(int, int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_00184310(void);
int dataTable00FindById(void);
int devilIsTextureLoaded(unsigned int, int);
int FUN_0046fa94(unsigned int, unsigned int, int, int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_00471244(unsigned int, unsigned int, int, unsigned int, int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_0017ffa8. */
/* Supplied declaration required: FUN_00184310. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: dataTable00FindById. */
extern int aocRunByName(unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: devilIsTextureLoaded. */
/* Supplied declaration required: FUN_0046fa94. */
/* Supplied declaration required: FUN_00471244. */


void FUN_002a6c3c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  char temp_v4;
  
  temp_v3 = 0xf;
  temp_v4 = '\0';
  temp_v2 = param_1;
  if (param_5 != 0) {
    if ((int)param_1 < 0) {
      temp_v0 = gameFlagIsSet(0x11);
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
      temp_v1 = param_1 & 0xffff;
      dataTable00FindById();
      if (temp_v2 == 0) {
        return;
      }
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
      temp_v4 = *(char *)(temp_v1 + 0xa4);
    }
  }
  temp_v1 = param_1;
  devilIsTextureLoaded(param_1,param_5);
  if (temp_v1 != 0) {
    temp_v0 = aocRunByName(g_aocSystem,temp_v3,temp_v2,1);
    if (temp_v0 == 0) {
      if (temp_v4 == '\0') {
        FUN_0017ffa8(2,temp_v3,temp_v2 * 1000,param_2,param_3,param_4);
        return;
      }
      FUN_00164b5c(2,temp_v3,temp_v4,param_2,param_3,param_4);
      return;
    }
    if (temp_v3 == 0x19) {
      FUN_0046fa94(g_aocSystem,param_1,2,0x19,temp_v2,param_2,param_3,param_4);
      return;
    }
    FUN_00471244(g_aocSystem,param_1,2,temp_v2,0,param_2,param_3,param_4);
  }
  return;
}

} /* extern "C" */
