/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001689e8` (_code @ 0x1689e8, 0x1e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017ffa8(...);
int gameGetPlayerData(void);
int FUN_001835b4(...);
int requestKindToId(...);
int FUN_00192550(void);
int contentEntryFindById2(void);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: FUN_0017ffa8. */
/* Supplied declaration required: gameGetPlayerData. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: requestKindToId. */
/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: contentEntryFindById2. */
extern unsigned int FUN_0019271c(void);


void FUN_001689e8(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5)

{
/* irregular: 17 unstructured edge(s); 5 goto(s); 6 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0;
  temp_v1 = 0;
  temp_v2 = FUN_0019271c();
  switch(temp_v2) {
  case 0:
    contentEntryFindById2();
    if (*(char *)(param_1 + 0x23) == '\0') {
      temp_v4 = 0x3ff;
    }
    else {
      temp_v4 = requestKindToId();
    }
  default:
    FUN_0017ffa8(2,0xb,temp_v4,param_2,param_3,param_4);
    if (temp_v1) {
      FUN_001835b4(2,0xb,0x417,param_2,param_3,param_4 + 1);
    }
    return;
  case 1:
  case 0xc:
    FUN_00192550();
    temp_v4 = requestKindToId(*(unsigned char *)(param_1 + 0x40));
    FUN_0017ffa8(2,0xb,temp_v4,param_2,param_3,param_4);
    if (temp_v1) {
      FUN_001835b4(2,0xb,0x417,param_2,param_3,param_4 + 1);
    }
    return;
  case 2:
    temp_v4 = 0x3f7;
    if (param_5 == 0) break;
    puVar4 = (unsigned short *)gameGetPlayerData();
    temp_v0 = *puVar4;
joined_r0x00168b70:
    if (temp_v0 != param_1) break;
    temp_v1 = 1;
    break;
  case 3:
    temp_v4 = 0x3f8;
    if (param_5 == 0) break;
    temp_v3 = gameGetPlayerData();
    temp_v0 = *(unsigned short *)(temp_v3 + 2);
joined_r0x00168af0:
    if (temp_v0 != param_1) break;
    temp_v1 = 1;
    break;
  case 4:
    temp_v4 = 0x3fa;
    if (param_5 == 0) break;
    temp_v3 = gameGetPlayerData();
    temp_v0 = *(unsigned short *)(temp_v3 + 6);
    goto joined_r0x00168af0;
  case 5:
    temp_v4 = 0x3fb;
    if (param_5 == 0) break;
    temp_v3 = gameGetPlayerData();
    temp_v0 = *(unsigned short *)(temp_v3 + 8);
    goto joined_r0x00168b70;
  case 6:
    temp_v4 = 0x3fc;
    if (param_5 == 0) break;
    temp_v3 = gameGetPlayerData();
    temp_v0 = *(unsigned short *)(temp_v3 + 10);
    goto joined_r0x00168b70;
  case 7:
    temp_v4 = 0x3fd;
    if (param_5 == 0) break;
    temp_v3 = gameGetPlayerData();
    temp_v0 = *(unsigned short *)(temp_v3 + 0xc);
    goto joined_r0x00168b70;
  case 8:
    temp_v4 = 0x3f9;
    if (param_5 == 0) break;
    temp_v3 = gameGetPlayerData();
    temp_v0 = *(unsigned short *)(temp_v3 + 4);
    goto joined_r0x00168b70;
  case 9:
  case 10:
    temp_v4 = 0x3fe;
    FUN_0017ffa8(2,0xb,temp_v4,param_2,param_3,param_4);
    if (temp_v1) {
      FUN_001835b4(2,0xb,0x417,param_2,param_3,param_4 + 1);
    }
    return;
  }
  FUN_0017ffa8(2,0xb,temp_v4,param_2,param_3,param_4);
  if (temp_v1) {
    FUN_001835b4(2,0xb,0x417,param_2,param_3,param_4 + 1);
  }
  return;
}

} /* extern "C" */
