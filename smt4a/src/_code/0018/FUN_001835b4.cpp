/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001835b4` (_code @ 0x1835b4, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184efc(int, int, unsigned int *, int);

/* stack frame of param_5: 7 slot(s), 24 byte(s) */
typedef struct {
    unsigned short sp2A; /* 0x2a: local_2a */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
} param_5_stack;

/* Supplied declaration required: FUN_00184efc. */
extern int asdTMTexTableCallFileC(unsigned int, int);


void FUN_001835b4(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned long long param_5)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  short *psVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int uStack_54;
  unsigned int temp_v3;
  unsigned int uStack_4c;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  
  temp_v0 = asdTMTexTableCallFileC(param_2,param_3);
  temp_v1 = **(int **)(temp_v0 + 4) + (param_3 % 1000) * 0x14;
  psVar2 = *(short **)(temp_v1 + 0xc);
  temp_v3 = (unsigned int)param_5;
  uStack_4c = (unsigned int)((unsigned long long)param_5 >> 0x20);
  temp_v6 = 0;
  temp_v7 = 1;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v8 = 1;
  temp_v2 = param_1;
  if (psVar2 != (short *)0x0) {
    if (psVar2[2] == 0) {
      if ((psVar2[6] & 1U) == 0) {
        uStack_54 = param_4;
        FUN_00184efc(temp_v0,temp_v1,&temp_v2,0);
        return;
      }
      temp_v2 = param_1 | 0x8000;
      temp_v5 = (int)*psVar2;
      temp_v6 = (int)psVar2[1];
    }
    if (psVar2[2] == 1) {
      temp_v5 = (int)*psVar2;
      temp_v6 = (int)psVar2[1];
    }
  }
  uStack_54 = param_4;
  FUN_00184efc(temp_v0,temp_v1,&temp_v2,0);
  return;
}

} /* extern "C" */
