/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00381b8c` (_code @ 0x381b8c, 0x19c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qcMainSetMode(int);
int FUN_002637c8(void);
int FUN_0028eeb8(unsigned int);
int asdLoadFileAsyncSimple(unsigned char *, unsigned int *, int);
int asdTMTexTableLoadEntryAsync(int, int);
int messageStatesSetFirst(int);
int dataTable1bOr1cGetRecord(void);
int paramsInit(unsigned int *, int, int, unsigned char *, int, int, int, int, int, unsigned char *, int);
int memClear(unsigned int *, int);
int asdTMTexTableLoadSprites(int);
int FUN_003852c8(void);
int dataTable27Load(unsigned int *);
int FUN_00385aec(unsigned int *);
int FUN_00385af4(unsigned int *);
int drawParameterBlockClear(unsigned int *);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_00381d28; /* 0x381d28 */
extern unsigned char LAB_00381d4c; /* 0x381d4c */
extern unsigned char DAT_004057a8; /* 0x4057a8 */
extern unsigned char DAT_004057c0; /* 0x4057c0 */

/* Supplied declaration required: qcMainSetMode. */
/* Supplied declaration required: FUN_002637c8. */
/* Supplied declaration required: FUN_0028eeb8. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
extern int questReadRuntimeFlag(unsigned int, unsigned int);
/* Supplied declaration required: asdTMTexTableLoadEntryAsync. */
/* Supplied declaration required: messageStatesSetFirst. */
/* Supplied declaration required: dataTable1bOr1cGetRecord. */
extern unsigned int asdTextCreate(unsigned int);
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_003852c8. */
/* Supplied declaration required: dataTable27Load. */
/* Supplied declaration required: FUN_00385aec. */
/* Supplied declaration required: FUN_00385af4. */
/* Supplied declaration required: drawParameterBlockClear. */


void FUN_00381b8c(unsigned int *param_1)

{
/* irregular: 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  FUN_003852c8();
  *param_1 = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[0x168] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x169] = 0;
  memClear(param_1 + 0x1b3,0x640);
  asdLoadFileAsyncSimple(&LAB_00381d28,param_1 + 0x168,0);
  asdLoadFileAsyncSimple(&LAB_00381d4c,param_1 + 0x169,0);
  drawParameterBlockClear(param_1 + 9);
  paramsInit(param_1 + 9,0,0,&DAT_004057a8,0x18,0,0,0,0,&DAT_004057c0,0xa8);
  dataTable27Load(param_1 + 8);
  FUN_00385aec(param_1 + 8);
  FUN_00385af4(param_1 + 8);
  param_1[0x369] = 0;
  param_1[0x3ed] = 0;
  param_1[0x3ec] = 0;
  param_1[0x363] = 0;
  param_1[7] = 0xffffffff;
  param_1[0x167] = 0;
  *(unsigned char *)(param_1 + 0x350) = 0;
  asdTMTexTableLoadSprites(0x31);
  asdTMTexTableLoadEntryAsync(0x31,0);
  temp_v2 = 0;
  do {
    param_1[temp_v2 + 0xa3] = 0;
    temp_v0 = asdTextCreate(0);
    temp_v3 = temp_v2 + 1;
    param_1[temp_v2 + 0xa3] = temp_v0;
    temp_v2 = temp_v3;
  } while (temp_v3 < 4);
  FUN_002637c8();
  messageStatesSetFirst(0);
  qcMainSetMode(0);
  temp_v2 = 0x15e;
  do {
    temp_v3 = temp_v2;
    dataTable1bOr1cGetRecord();
    if (((temp_v3 != 0) && (*(char *)(temp_v3 + 6) == '\0')) &&
       (temp_v1 = questReadRuntimeFlag(temp_v2,1), temp_v1 == 0)) {
      FUN_0028eeb8(temp_v2);
    }
    temp_v2 = (temp_v2 + 1) & 0xffff;
  } while (temp_v2 < 400);
  return;
}

} /* extern "C" */
