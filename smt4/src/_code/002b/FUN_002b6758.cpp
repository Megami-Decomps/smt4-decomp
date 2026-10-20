/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6758` (_code @ 0x2b6758, 0x1e0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001413d0(unsigned int, int, unsigned int, unsigned int, unsigned int);
int FUN_002b04e8(...);
int FUN_002b05d0(int);
int FUN_002b06c4(void);
int FUN_002b9024(void);
int FUN_002be304(void);
int FUN_002bed3c(void);
int FUN_002bf288(int, int, int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_5: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_5_stack;

extern unsigned int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_001413d0. */
extern int FUN_0014143c(unsigned int, unsigned short);
/* Supplied declaration required: FUN_002b04e8. */
/* Supplied declaration required: FUN_002b05d0. */
extern int FUN_002b066c(unsigned int);
/* Supplied declaration required: FUN_002b06c4. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002be304. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */


void FUN_002b6758(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  if ((int)param_1 < 0) {
    FUN_002bf288(2,0x25,1000,param_2,param_3,param_4);
  }
  else {
    temp_v0 = param_1 & 0xffff;
    FUN_002b9024();
    temp_v1 = param_1;
    FUN_002b06c4();
    if ((*(unsigned char *)(temp_v1 + 3) & 1) != 0) {
      FUN_002bf288(2,0x25,2000,param_2,param_3,param_4);
      return;
    }
    if (((param_5 != 0) && (temp_v2 = FUN_002b066c(param_1 & 0xffff), temp_v2 != 0)) &&
       ((*(unsigned short *)(temp_v2 + 0x44) & 2) != 0)) {
      FUN_002b05d0(1);
      FUN_002be304();
    }
    temp_v2 = FUN_0014143c(g_aocSystem,*(unsigned short *)(temp_v0 + 0x90));
    if (temp_v2 != 0) {
      FUN_001413d0(g_aocSystem,*(unsigned short *)(temp_v0 + 0x90),param_2,param_3,param_4);
    }
    else {
      temp_v0 = (unsigned int)*(unsigned short *)(temp_v0 + 0x90);
      if (temp_v0 < 0x200) {
        temp_v3 = temp_v0 & 0xfffffff0;
        temp_v4 = temp_v3 + 0x10;
        temp_v5 = (temp_v0 % 0x10) * 0x20;
        temp_v6 = temp_v5 + 0x20;
        FUN_002b04e8(2,0x25,0,param_2,param_3,param_4,&temp_v3);
      }
      else {
        temp_v3 = ((int)(temp_v0 - 0x200) / 0x10) * 0x10;
        temp_v4 = temp_v3 + 0x10;
        temp_v5 = ((int)(temp_v0 - 0x200) % 0x10) * 0x20;
        temp_v6 = temp_v5 + 0x20;
        FUN_002b04e8(2,0x25,3000,param_2,param_3,param_4,&temp_v3);
      }
    }
    if (param_5 != 0) {
      FUN_002bed3c();
      return;
    }
  }
  return;
}

} /* extern "C" */
