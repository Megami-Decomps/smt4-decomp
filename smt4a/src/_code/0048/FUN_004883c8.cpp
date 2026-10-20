/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004883c8` (_code @ 0x4883c8, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int MapNaviTable_GetCategoryCount(void);

/* stack frame of param_9: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
} param_9_stack;

extern int FUN_0048b140(int, int, unsigned char);
/* Supplied declaration required: MapNaviTable_GetCategoryCount. */
extern int MapNaviTable_GetCategoryRecord(unsigned char *, unsigned int);


void FUN_004883c8(int param_1,int param_2,int param_3,int param_4,int param_5,unsigned short param_6,
                 unsigned int param_7,unsigned short param_8,int param_9)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  short *psVar5;
  int temp_v3;
  unsigned char temp_v4 [4];
  int temp_v5;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  puVar1 = temp_v4;
  temp_v3 = param_1 + param_2 * 0x10;
  if (param_3 == 0) {
    *(unsigned short *)(temp_v3 + 0x3e6) = 0;
    *(unsigned char *)(temp_v3 + 1000) = 0;
    *(unsigned short *)(temp_v3 + 0x3ea) = 0;
    *(unsigned char *)(temp_v3 + 0x3ec) = 0;
    *(unsigned char *)(temp_v3 + 0x3ed) = 0;
    *(unsigned short *)(temp_v3 + 0x3ee) = 0;
    *(unsigned short *)(temp_v3 + 0x3f0) = 0;
    *(unsigned char *)(temp_v3 + 0x3e9) = 0;
    return;
  }
  temp_v5 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  MapNaviTable_GetCategoryCount();
  temp_v0 = MapNaviTable_GetCategoryRecord(temp_v4,0);
  temp_v1 = 0;
  if (temp_v1 < (int)puVar1) {
    do {
      psVar5 = (short *)(temp_v0 + temp_v1 * 0x14);
      temp_v2 = (int)*psVar5;
      if (temp_v2 == -1) break;
      if ((temp_v2 == param_4) && (psVar5[1] == param_5)) {
        temp_v0 = temp_v0 + temp_v1 * 0x14;
        goto LAB_00488464;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)puVar1);
  }
  temp_v0 = 0;
LAB_00488464:
  temp_v1 = FUN_0048b140(temp_v5,param_4,*(unsigned char *)(temp_v0 + 4));
  *(short *)(temp_v3 + 0x3e6) = (short)param_4;
  *(char *)(temp_v3 + 1000) = (char)param_5;
  *(unsigned short *)(temp_v3 + 0x3ea) = (unsigned short)*(unsigned char *)(temp_v0 + 4);
  *(unsigned char *)(temp_v3 + 0x3ec) = *(unsigned char *)(temp_v1 + 3);
  if (param_9 != 0) {
    *(unsigned char *)(temp_v3 + 0x3ed) = 1;
  }
  else {
    *(unsigned char *)(temp_v3 + 0x3ed) = 0;
  }
  *(unsigned short *)(temp_v3 + 0x3ee) = param_6;
  *(unsigned short *)(temp_v3 + 0x3f0) = param_8;
  return;
}

} /* extern "C" */
