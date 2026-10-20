/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018152c` (_code @ 0x18152c, 0x280 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001835b4(int, int, int, unsigned int, unsigned int, unsigned int);
int FUN_00183bb0(void);
int FUN_00184310(void);
int FUN_001849bc(...);
int drawSetColorFromRGBA8(void);
int FUN_00191ea8(...);
int FUN_00191f18(unsigned int, int);
int dataTable00FindById(void);
int FUN_0019e130(int);

/* stack frame of param_5: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_5_stack;

extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_001849bc. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_00191ea8. */
/* Supplied declaration required: FUN_00191f18. */
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: FUN_0019e130. */
extern int slotRecordFindById(unsigned int);


void FUN_0018152c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  if ((int)param_1 < 0) {
    temp_v0 = gameFlagIsSet(0x11);
    if (temp_v0 == 0) {
      temp_v0 = FUN_00191f18(g_aocSystem,0x25d);
      if (temp_v0 == 0) {
        temp_v3 = 0x50;
        temp_v4 = 0x60;
        temp_v5 = 0x1a0;
        temp_v6 = 0x1c0;
        FUN_001849bc(2,0x1b,3000,param_2,param_3,param_4,&temp_v3);
        return;
      }
      FUN_00191ea8(g_aocSystem,0x25d,param_2,param_3,param_4);
      return;
    }
    FUN_001835b4(2,0x1b,1000,param_2,param_3,param_4);
  }
  else {
    temp_v1 = param_1 & 0xffff;
    FUN_00184310();
    temp_v2 = param_1;
    dataTable00FindById();
    if ((*(unsigned short *)(temp_v2 + 2) & 0x8000) != 0) {
      FUN_001835b4(2,0x1b,2000,param_2,param_3,param_4);
      return;
    }
    if (((param_5 != 0) && (temp_v0 = slotRecordFindById(param_1 & 0xffff), temp_v0 != 0)) &&
       ((*(unsigned short *)(temp_v0 + 0x60) & 2) != 0)) {
      FUN_0019e130(1);
      drawSetColorFromRGBA8();
    }
    temp_v0 = FUN_00191f18(g_aocSystem,*(unsigned short *)(temp_v1 + 0x9c));
    if (temp_v0 != 0) {
      FUN_00191ea8(g_aocSystem,*(unsigned short *)(temp_v1 + 0x9c),param_2,param_3,param_4);
    }
    else {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v1 + 0x9c);
      if (temp_v1 < 0x200) {
        temp_v3 = temp_v1 & 0xfffffff0;
        temp_v4 = temp_v3 + 0x10;
        temp_v5 = (temp_v1 % 0x10) * 0x20;
        temp_v6 = temp_v5 + 0x20;
        FUN_001849bc(2,0x1b,0,param_2,param_3,param_4,&temp_v3);
      }
      else {
        temp_v3 = ((int)(temp_v1 - 0x200) / 0x10) * 0x10;
        temp_v4 = temp_v3 + 0x10;
        temp_v5 = ((int)(temp_v1 - 0x200) % 0x10) * 0x20;
        temp_v6 = temp_v5 + 0x20;
        FUN_001849bc(2,0x1b,3000,param_2,param_3,param_4,&temp_v3);
      }
    }
    if (param_5 != 0) {
      FUN_00183bb0();
      return;
    }
  }
  return;
}

} /* extern "C" */
