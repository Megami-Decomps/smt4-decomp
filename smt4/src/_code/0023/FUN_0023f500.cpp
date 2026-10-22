/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023f500` (_code @ 0x23f500, 0x290 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023fbdc(...);
int FUN_0023fffc(unsigned int *, int);
int FUN_002402c4(int, unsigned char [128]);
int FUN_002505c0(int, int, int, int, int, int, int);
int FUN_00254f58(...);
int frameTexApplyMode(int);
int FUN_0027da30(int, int);
int asdLoadFileAsyncSimple(unsigned char [128], unsigned int *, int);
int libc_strcpy(unsigned char [128], unsigned int);
int FUN_002c29d8(...);
int asdMemFree(void);
int memClear(unsigned char [128], int);
int FUN_00338424(int);
int FUN_00338458(int);
int FUN_00339de0(int);
int FUN_0033a144(int);
int btlSetSelectedListedValue(...);
int vec3CopyFromOffsetC(unsigned int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
} param_2_stack;

extern unsigned int g_btlMain; /* 0x4342c8 */

/* Supplied declaration required: FUN_0023fbdc. */
/* Supplied declaration required: FUN_0023fffc. */
/* Supplied declaration required: FUN_002402c4. */
extern unsigned int btlPosArrangeGetFilePath(int);
extern int pairedEntryTableContains(int, unsigned short);
/* Supplied declaration required: FUN_002505c0. */
/* Supplied declaration required: FUN_00254f58. */
/* Supplied declaration required: frameTexApplyMode. */
/* Supplied declaration required: FUN_0027da30. */
extern int FUN_002896bc(void);
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_002c29d8. */
extern int FUN_002c2a04(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: FUN_00338424. */
/* Supplied declaration required: FUN_00338458. */
/* Supplied declaration required: FUN_00339de0. */
/* Supplied declaration required: FUN_0033a144. */
/* Supplied declaration required: btlSetSelectedListedValue. */
/* Supplied declaration required: vec3CopyFromOffsetC. */


void FUN_0023f500(unsigned int *param_1,int param_2)

{
/* irregular: 18 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [128];
  
  memClear(temp_v4,0x80);
  temp_v0 = btlPosArrangeGetFilePath(param_2);
  libc_strcpy(temp_v4,temp_v0);
  temp_v2 = FUN_002402c4(param_2,temp_v4);
  if (temp_v2 != 0) {
    *param_1 = 0xb;
    memClear(temp_v5,0x80);
    temp_v0 = btlPosArrangeGetFilePath(param_2);
    libc_strcpy(temp_v5,temp_v0);
    if (param_1[1] != 0) {
      asdMemFree();
      param_1[1] = 0;
    }
    asdLoadFileAsyncSimple(temp_v5,param_1 + 1,0);
    *param_1 = 0xc;
    FUN_0023fffc(param_1,param_2);
  }
  else {
    puVar5 = (unsigned int *)(param_2 + 0x44a0);
    *param_1 = 0xd;
    if ((*puVar5 & 0x40000000) == 0) {
      frameTexApplyMode(2);
      *puVar5 = *puVar5 | 0x40000000;
    }
    FUN_00338458(param_2);
    FUN_0033a144(param_2);
    FUN_00338424(param_2);
    FUN_00339de0(param_2);
    vec3CopyFromOffsetC(g_btlMain);
    if ((*(char *)(param_2 + 0x44b7) == '\0') &&
       (((*(unsigned int *)(param_2 + 0xe0) & 0x2000000) != 0 || ((*puVar5 & 2) != 0)))) {
      temp_v2 = 4;
      do {
        temp_v3 = *(int *)(param_2 + 0x1e98) + temp_v2 * 0x114;
        if ((((*(unsigned int *)(temp_v3 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v3 + 0x50) & 2) != 0) &&
            ((*(unsigned int *)(temp_v3 + 0x54) & 8) != 0)) &&
           (*(unsigned int *)(temp_v3 + 0x54) = *(unsigned int *)(temp_v3 + 0x54) & 0xfffffff7,
           (*(unsigned short *)(temp_v3 + 0x58) & 0x800) == 0)) {
          temp_v1 = FUN_0027da30(param_2,(int)*(short *)(temp_v3 + 0x62));
          temp_v1 = pairedEntryTableContains(param_2,*(unsigned short *)(temp_v1 + 2));
          if (temp_v1 == 0) {
            *(unsigned short *)(temp_v3 + 0x58) = *(unsigned short *)(temp_v3 + 0x58) | 0x800;
          }
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x36);
      FUN_002505c0(0,0,0x100017b,0,0,0,0);
      FUN_00254f58(param_2);
      *puVar5 = *puVar5 | 0x200000;
      if ((*(unsigned int *)(param_2 + 0xe4) & 0x20) == 0) {
        btlSetSelectedListedValue(3);
      }
    }
    temp_v2 = FUN_002c2a04(0);
    if (temp_v2 == 3) {
      FUN_002c29d8(0,10,0xff);
    }
    temp_v2 = FUN_002c2a04(1);
    if (temp_v2 == 3) {
      FUN_002c29d8(1,10,0xff);
    }
    temp_v2 = FUN_002896bc();
    if (temp_v2 != 0) {
      *param_1 = 0xe;
      param_1[3] = 0;
      FUN_0023fbdc(param_1,param_2);
      return;
    }
  }
  return;
}

} /* extern "C" */
