/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b7960` (_code @ 0x3b7960, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_5_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

extern int FUN_001654d8(int);
extern int FUN_001654e4(int);
/* Supplied declaration required: FUN_00168770. */
/* Supplied declaration required: FUN_00168e00. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */


void FUN_003b7960(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  temp_v1 = FUN_001834a4(0x12,0x6e);
  FUN_001835b4(2,0x12,param_5,param_2,param_3,0xdd);
  temp_v2 = DAT_0059dbb4;
  temp_v0 = 0;
  if (*(int *)(DAT_0059dbb4 + *(int *)(DAT_0059dbb4 + 0x1318) * 4 + 0x1320) == 3) {
    temp_v4 = DAT_0059dbb4 + 0x1318 + *(int *)(DAT_0059dbb4 + 0x1318) * 4;
    temp_v3 = *(int *)(temp_v4 + 8);
    *(unsigned int *)(temp_v4 + 8) = 0;
    if (*(char *)(temp_v2 + 0x1330) != '\0' || temp_v3 != 0) {
      (**(romwright_code **)(temp_v2 + 0x1334))();
      *(unsigned char *)(temp_v2 + 0x1330) = 0;
    }
    temp_v0 = 1;
  }
  FUN_00168e00(*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,
               (int)**(short **)(temp_v1 + 0xc),(int)(*(short **)(temp_v1 + 0xc))[1]);
  temp_v2 = DAT_0059dbb4;
  temp_v1 = FUN_00169294(6,1,0);
  piVar6 = (int *)(temp_v2 + 0x12b8);
  temp_v3 = piVar6[*piVar6 + 2];
  piVar6[*piVar6 + 2] = temp_v1;
  if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v2 + 0x12d4))();
    *(unsigned char *)(temp_v2 + 0x12d0) = 0;
  }
  temp_v2 = FUN_001654e4(param_1 + 0x44);
  temp_v1 = FUN_001654d8(param_1 + 0x44);
  FUN_001835b4(2,0x12,param_4,temp_v1 + param_2,temp_v2 + param_3,0xdd);
  temp_v2 = DAT_0059dbb4;
  temp_v1 = FUN_00169294(6,7,0);
  piVar6 = (int *)(temp_v2 + 0x12b8);
  temp_v3 = piVar6[*piVar6 + 2];
  piVar6[*piVar6 + 2] = temp_v1;
  if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v2 + 0x12d4))();
    *(unsigned char *)(temp_v2 + 0x12d0) = 0;
  }
  temp_v2 = DAT_0059dbb4;
  if (temp_v0) {
    piVar6 = (int *)(DAT_0059dbb4 + 0x1318);
    temp_v1 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = 3;
    if (*(char *)(temp_v2 + 0x1330) != '\0' || temp_v1 != 3) {
      (**(romwright_code **)(temp_v2 + 0x1334))();
      *(unsigned char *)(temp_v2 + 0x1330) = 0;
    }
  }
  FUN_00168770();
  return;
}
