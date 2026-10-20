/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00416b70` (_code @ 0x416b70, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int paramsInit(int, unsigned char *, int, unsigned char *, int, unsigned char *, int, int, int, unsigned char *, int);
int asdMemFreeSlot(void);
int FUN_002f5020(int, unsigned char *, int, int);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(int);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_004125bc; /* 0x4125bc */
extern unsigned char DAT_0052988c; /* 0x52988c */
extern unsigned char DAT_005299a0; /* 0x5299a0 */
extern unsigned char DAT_00529a6c; /* 0x529a6c */
extern unsigned char DAT_00529ac0; /* 0x529ac0 */

/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: asdMemFreeSlot. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


int FUN_00416b70(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned long long temp_v4;
  
  FUN_002f5020(param_1,&LAB_004125bc,0xb0,0xc);
  temp_v0 = 0;
  temp_v1 = 0;
  do {
    temp_v2 = temp_v0 + 1;
    *(unsigned int *)(param_1 + temp_v0 * 0xb0 + 0xa8) = 0;
    temp_v1 = temp_v1 + 2;
    temp_v0 = temp_v0 + 2;
    *(unsigned int *)(param_1 + temp_v2 * 0xb0 + 0xa8) = 0;
  } while (temp_v1 < 0xc);
  temp_v0 = 0;
  temp_v4 = 0;
  do {
    puVar4 = (unsigned int *)(param_1 + temp_v0 * 0xb0);
    *puVar4 = 0;
    puVar4[1] = 0;
    *(unsigned char *)(puVar4 + 0x28) = 0;
    puVar4[0x29] = 0;
    temp_v3 = (unsigned int)temp_v4;
    puVar4[4] = temp_v3;
    puVar4[3] = temp_v3;
    puVar4[2] = temp_v3;
    if (puVar4[0x2a] != 0) {
      asdMemFreeSlot();
      puVar4[0x2a] = 0;
    }
    temp_v0 = temp_v0 + 1;
    puVar4[0x2b] = 0;
  } while (temp_v0 < 0xc);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(param_1 + 0x840);
  paramsInit(param_1 + 0x840,&DAT_0052988c,0x114,&DAT_005299a0,0xcc,&DAT_00529a6c,0x54,0,0,
               &DAT_00529ac0,0x94c);
  return param_1;
}

} /* extern "C" */
