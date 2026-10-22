/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b92b4` (_code @ 0x3b92b4, 0x2e0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameSynchronizeMapState(int);
int FUN_0026f960(int);
int bgmReleaseStopped(void);
int gameCopyPersistentSave(void);
int messageMainFinishWindow(void);
int soundChannelStopAll(int);
int FUN_002a03d8(int, int);
int dataTable1bOr1cGetRecord(void);
int libc_strcpy(...);
int asdSequenceRequest(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_0031305f; /* 0x31305f */
extern unsigned char DAT_0049f950; /* 0x49f950 */
extern unsigned int DAT_0049f970; /* 0x49f970 */
extern unsigned int DAT_0049f978; /* 0x49f978 */
extern int DAT_0049fd14; /* 0x49fd14 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: gameSynchronizeMapState. */
extern unsigned int FUN_0022b8c0(int);
/* Supplied declaration required: FUN_0026f960. */
/* Supplied declaration required: bgmReleaseStopped. */
/* Supplied declaration required: gameCopyPersistentSave. */
extern int FUN_00287894(void);
extern int FUN_002903f0(void);
/* Supplied declaration required: messageMainFinishWindow. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: dataTable1bOr1cGetRecord. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: asdSequenceRequest. */
extern int spriteTableFreeLoaded(int);


void FUN_003b92b4(int param_1)

{
/* irregular: 12 unstructured edge(s); 1 goto(s); 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int temp_v5 [3];
  unsigned char *puStack_2c;
  
  puVar5 = temp_v5;
  temp_v0 = spriteTableFreeLoaded(param_1 + 0x9c);
  if (temp_v0 == 0) {
    return;
  }
  temp_v1 = *(unsigned int *)(param_1 + 0x20);
  if ((temp_v1 & 0x1000000) != 0) {
    temp_v5[0] = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0xd60) + 0x54);
    asdSequenceRequest(10,temp_v5,4);
  }
  else if ((temp_v1 & 0x2000000) != 0) {
    temp_v4 = 4;
    temp_v5[0] = *(unsigned short *)(*(int *)(param_1 + 0xd60) + 0x54) + 100;
    temp_v2 = 10;
    puVar5 = temp_v5;
    asdSequenceRequest(temp_v2,puVar5,temp_v4);
  }
  else if ((temp_v1 & 0x8000000) != 0) {
    temp_v5[0] = romwright_piece_2_2((((unsigned int)(temp_v5[0]) >> 16) & 0xffffU),*(unsigned short *)(*(int *)(param_1 + 0xd60) + 0x54));
    asdSequenceRequest(0x12,temp_v5,2);
    FUN_002a03d8(0,10);
    FUN_002a03d8(1,10);
  }
  else if ((temp_v1 & 0x4000000) != 0) {
    temp_v5[0] = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0xd60) + 0x54);
    temp_v5[1] = 0;
    temp_v5[2] = 0;
    temp_v4 = 0xc;
    temp_v2 = 0x10;
    puVar5 = temp_v5;
    asdSequenceRequest(temp_v2,puVar5,temp_v4);
  }
  else {
    if ((temp_v1 & 0x200000) != 0) {
      gameCopyPersistentSave();
      temp_v5[0] = *(unsigned int *)(*(int *)(param_1 + 0xd60) + 0x40);
      temp_v5[1] = 0xffffffff;
      libc_strcpy(temp_v5 + 2,*(int *)(param_1 + 0xd60) + 0x44);
      temp_v4 = 0x20;
      temp_v2 = 4;
      puVar5 = temp_v5;
    }
    else if ((temp_v1 & 0x40000) != 0) {
      gameCopyPersistentSave();
      temp_v5[0] = DAT_0049f970;
      temp_v5[1] = 0xffffffff;
      libc_strcpy(temp_v5 + 2,&DAT_0049f978);
      temp_v4 = 0x20;
      temp_v2 = 4;
      puVar5 = temp_v5;
    }
    else if ((temp_v1 & 0x800000) != 0) {
      temp_v4 = 4;
      temp_v5[0] = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0xd60) + 0x54);
      temp_v2 = 0xd;
      puVar5 = temp_v5;
    }
    else if ((temp_v1 & 0x20000000) != 0) {
      temp_v4 = 4;
      temp_v2 = 0x14;
      temp_v5[0] = 0;
      puVar5 = temp_v5;
    }
    else if (*(char *)(param_1 + 0x49) != '\0') {
      temp_v4 = 0;
      temp_v2 = 6;
      puVar5 = (unsigned int *)(unsigned char *)0x0;
    }
    else if (*(char *)(param_1 + 0x48) != '\0') {
      temp_v4 = 0;
      temp_v2 = 8;
      puVar5 = (unsigned int *)(unsigned char *)0x0;
    }
    else if (*(char *)(param_1 + 0x4a) != '\0') {
      temp_v4 = 4;
      temp_v5[0] = DAT_0049fd14 - 200;
      temp_v2 = 0xe;
      puVar5 = temp_v5;
    }
    else if (*(char *)(param_1 + 0xdac) != '\0') {
      temp_v0 = FUN_002903f0();
      if (temp_v0 != 0) {
        temp_v3 = FUN_00287894();
        if (temp_v3 == 6) {
          temp_v2 = FUN_0022b8c0(param_1 + 0x9c);
          *(unsigned int *)(param_1 + 0xd60) = temp_v2;
          gameSynchronizeMapState(param_1);
          dataTable1bOr1cGetRecord();
          FUN_0026f960(*(unsigned short *)(temp_v0 + 0x148));
        }
      }
      if ((*(unsigned int *)(param_1 + 0x20) & 0x40) != 0) {
        *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffffbf;
        messageMainFinishWindow();
      }
      *(unsigned char *)(param_1 + 0x24) = 1;
      *(unsigned int *)(param_1 + 0x28) = 0x12;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    else {
      if (*(char *)(param_1 + 0x4b) == '\0') goto LAB_003b9564;
      bgmReleaseStopped();
      soundChannelStopAll(0xf);
      DAT_0049f950 = 1;
      temp_v5[0] = 1;
      temp_v5[1] = 0xffffffff;
      temp_v5[2] = 0x31303065;
      puStack_2c = &LAB_0031305f;
      temp_v4 = 0x20;
      temp_v2 = 4;
    }
    asdSequenceRequest(temp_v2,puVar5,temp_v4);
  }
LAB_003b9564:
  if ((*(unsigned int *)(param_1 + 0x20) & 0x40) != 0) {
    *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffffbf;
    messageMainFinishWindow();
  }
  *(unsigned char *)(param_1 + 0x24) = 1;
  *(unsigned int *)(param_1 + 0x28) = 0x12;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  return;
}

} /* extern "C" */
