/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00463c28` (_code @ 0x463c28, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 7 slot(s), 11 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned short sp33; /* 0x33: local_33 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned char sp35; /* 0x35: local_35 */
    unsigned char sp36; /* 0x36: local_36 */
    unsigned char sp37; /* 0x37: local_37 */
    unsigned char sp38; /* 0x38: local_38 */
} param_2_stack;

extern int FUN_00508ee8(int, unsigned char *, unsigned int);
extern unsigned int *nw_snd_internal_StreamSoundFile_InfoBlockBody_GetTrackInfoTable(unsigned int);


unsigned int FUN_00463c28(int param_1,int param_2)

{
  unsigned char *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned short temp_v11 [3];
  int iStack_2c;
  int temp_v12;
  
  iStack_2c = param_1;
  temp_v12 = param_2;
  puVar2 = (unsigned int *)nw_snd_internal_StreamSoundFile_InfoBlockBody_GetTrackInfoTable
                             (*(unsigned int *)(param_2 + 4));
  temp_v3 = *puVar2;
  temp_v2 = 0;
  temp_v5 = temp_v3 == 4;
  if (temp_v3 >= 5) {
    temp_v3 = 4;
  }
  else {
    temp_v5 = temp_v3 == 0;
  }
  if (!temp_v5) {
    do {
      temp_v6 = 0;
      temp_v7 = 0;
      temp_v8 = 0;
      temp_v9 = 0;
      temp_v10 = 0;
      temp_v11[0] = 0;
      temp_v0 = FUN_00508ee8(temp_v12,&temp_v6,temp_v2);
      if (temp_v0 == 0) {
        return 0;
      }
      temp_v0 = temp_v2 * 0xd;
      *(unsigned char *)(*(int *)(param_1 + 0x18) + temp_v0 + 0x34) = temp_v6;
      *(unsigned char *)(*(int *)(param_1 + 0x18) + temp_v0 + 0x35) = temp_v7;
      *(unsigned char *)(*(int *)(param_1 + 0x18) + temp_v0 + 0x36) = temp_v8;
      *(unsigned char *)(*(int *)(param_1 + 0x18) + temp_v0 + 0x37) = temp_v9;
      *(unsigned char *)(*(int *)(param_1 + 0x18) + temp_v0 + 0x3e) = temp_v10;
      temp_v1 = 0;
      if (temp_v10 != 0) {
        do {
          temp_v4 = temp_v1 + 0x3f;
          puVar1 = (unsigned char *)((int)temp_v11 + temp_v1);
          temp_v1 = temp_v1 + 1;
          *(unsigned char *)(*(int *)(param_1 + 0x18) + temp_v0 + temp_v4) = *puVar1;
        } while (temp_v1 < (int)(unsigned int)temp_v10);
      }
      temp_v2 = temp_v2 + 1;
      *(unsigned char *)(*(int *)(param_1 + 0x18) + temp_v0 + 0x38) = 0x7f;
      *(unsigned char *)(*(int *)(param_1 + 0x18) + temp_v0 + 0x39) = 0;
      *(unsigned char *)(*(int *)(param_1 + 0x18) + temp_v0 + 0x3a) = 0;
      *(unsigned char *)(*(int *)(param_1 + 0x18) + temp_v0 + 0x3b) = 0x40;
      *(unsigned char *)(*(int *)(param_1 + 0x18) + temp_v0 + 0x3c) = 0;
      *(unsigned char *)(*(int *)(param_1 + 0x18) + temp_v0 + 0x3d) = 0;
    } while (temp_v2 < temp_v3);
  }
  return 1;
}

} /* extern "C" */
