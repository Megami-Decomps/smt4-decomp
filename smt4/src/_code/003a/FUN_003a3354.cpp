/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a3354` (_code @ 0x3a3354, 0x488 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029cc44(...);

int scrRunOpcodesStub(...);
int shopSelectEntryStart(...);
int FUN_0022e818(...);
int dataTable17Sub0GetRecord(...);
int FUN_0022fcb8(...);
int FUN_00230234(...);
int FUN_002302d8(...);
int pointConvertToFloat(...);
int FUN_00233240(unsigned int *, int);
int FUN_00296e90(void);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int FUN_0029ee6c(...);
int FUN_002bf818(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned char LAB_003a377c; /* 0x3a377c */
extern unsigned char LAB_003a3788; /* 0x3a3788 */
extern unsigned char LAB_003a3798; /* 0x3a3798 */

/* Supplied declaration required: scrRunOpcodesStub. */
/* Supplied declaration required: shopSelectEntryStart. */
/* Supplied declaration required: FUN_0022e818. */
/* Supplied declaration required: dataTable17Sub0GetRecord. */
/* Supplied declaration required: FUN_0022fcb8. */
/* Supplied declaration required: FUN_00230234. */
/* Supplied declaration required: FUN_002302d8. */
/* Supplied declaration required: pointConvertToFloat. */
/* Supplied declaration required: FUN_00233240. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
extern int FUN_00290e78(void);
extern int messageTargetGetValue(void);
extern int messageWindowIsState1(void);
/* Supplied declaration required: FUN_00296e90. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_002973d8(void);
/* Supplied declaration required: FUN_0029cc44. */
/* Supplied declaration required: FUN_0029ee6c. */
extern unsigned int vec2GetYInt(unsigned int *);
extern unsigned int vec2GetXInt(unsigned int *);
/* Supplied declaration required: FUN_002bf818. */


void FUN_003a3354(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 14 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  
  temp_v0 = param_1[2];
  temp_v4 = param_4;
  if (temp_v0 == 0) {
    if ((*param_1 & 4) != 0) {
      temp_v1 = tableGroupFindEntryIndex(param_1[0x58],&LAB_003a377c);
      scrScriptProcessStartEntry(param_1[0x5a],temp_v1);
    }
    else if (*(char *)((int)param_1 + 0x1d) != '\0') {
      temp_v1 = tableGroupFindEntryIndex(param_1[0x58],&LAB_003a3788);
      scrScriptProcessStartEntry(param_1[0x5a],temp_v1);
    }
    else {
      temp_v1 = tableGroupFindEntryIndex(param_1[0x58],&LAB_003a3798);
      scrScriptProcessStartEntry(param_1[0x5a],temp_v1);
    }
    scrRunOpcodesStub(param_1[0x5a]);
    *param_1 = *param_1 | 4;
    FUN_0022e818(param_1,0);
    shopSelectEntryStart(param_1,0);
    FUN_00233240(param_1 + 0xea,1);
    param_1[2] = 1;
    return;
  }
  puVar5 = param_1 + 0x115;
  if (temp_v0 != 1) {
    if (temp_v0 == 3 || temp_v0 == 4) {
      scrRunOpcodesStub(param_1[0x5a]);
      scrRunOpcodesStub(param_1[0x5b]);
      FUN_002bf818(puVar5);
      temp_v1 = vec2GetYInt(puVar5);
      temp_v2 = vec2GetXInt(puVar5);
      pointConvertToFloat(param_1 + 0xe0,temp_v2,temp_v1);
      if (*(char *)((int)param_1 + 0x4de) != '\0') {
        temp_v3 = messageWindowIsState1();
        if (temp_v3 != 0) {
          temp_v3 = messageTargetGetValue();
          temp_v3 = dataTable17Sub0GetRecord(&temp_v4,param_1[temp_v3 + 0x574b] + 4);
          FUN_0029ee6c(temp_v3 + 0x40,0x323232ff);
        }
        temp_v3 = FUN_00290e78();
        if (temp_v3 != 0) {
          FUN_00296e90();
          FUN_0029ee6c(0,0x323232ff);
          temp_v3 = FUN_002973d8();
          if (temp_v3 != -1) {
            param_1[0x218] = param_1[temp_v3 + 0x574b];
            FUN_002302d8(param_1,1);
            param_1[2] = 0;
            param_1[1] = 4;
            FUN_00296e90();
            FUN_00230234(param_1);
            return;
          }
          if (param_1[2] == 3) {
            param_1[0x5758] = 0;
          }
          else {
            param_1[0x5758] = 1;
          }
          FUN_0022e818(param_1,0);
          shopSelectEntryStart(param_1,0);
          param_1[2] = 1;
          return;
        }
      }
    }
  }
  else {
    scrRunOpcodesStub(param_1[0x5a]);
    scrRunOpcodesStub(param_1[0x5b]);
    FUN_002bf818(puVar5);
    temp_v1 = vec2GetYInt(puVar5);
    temp_v2 = vec2GetXInt(puVar5);
    pointConvertToFloat(param_1 + 0xe0,temp_v2,temp_v1);
    if (*(char *)((int)param_1 + 0x4de) != '\0') {
      *param_1 = *param_1 & 0xfffff0ff;
      temp_v3 = messageWindowIsState1();
      if (temp_v3 != 0) {
        temp_v3 = messageTargetGetValue();
        temp_v3 = dataTable17Sub0GetRecord(&temp_v4,param_1[temp_v3 + 0x574b]);
        FUN_0029ee6c(temp_v3 + 0x40,0x323232ff);
      }
      temp_v3 = FUN_00290e78();
      if (temp_v3 != 0) {
        FUN_00296e90();
        FUN_0029ee6c(0,0x323232ff);
        temp_v3 = FUN_002973d8();
        if (temp_v3 != -1) {
          temp_v0 = param_1[temp_v3 + 0x574b];
          if (temp_v0 != 0) {
            if (temp_v0 != 1) {
              if (temp_v0 == 2) {
                param_1[0x218] = 7;
                FUN_002302d8(param_1,1);
                param_1[1] = 4;
                param_1[2] = 0;
                FUN_00296e90();
                return;
              }
              if (temp_v0 != 3) {
                return;
              }
              param_1[0x218] = 8;
              FUN_0022fcb8(param_1,1);
              param_1[1] = 4;
              param_1[2] = 0;
              FUN_00296e90();
              return;
            }
            FUN_0022e818(param_1,2);
            if ((int)param_1[0x574f] >= 2) {
              puVar5 = param_1 + 0x5759;
              *(unsigned char *)puVar5 = 1;
              shopSelectEntryStart(param_1,2);
              param_1[2] = 4;
              *(unsigned char *)puVar5 = 0;
              return;
            }
          }
          else {
            FUN_0022e818(param_1,1);
            if ((int)param_1[0x574f] >= 2) {
              puVar5 = (unsigned int *)((int)param_1 + 0x15d65);
              *(unsigned char *)puVar5 = 1;
              shopSelectEntryStart(param_1,1);
              param_1[2] = 3;
              *(unsigned char *)puVar5 = 0;
              return;
            }
          }
          param_1[0x218] = param_1[0x574b];
          FUN_002302d8(param_1,1);
          param_1[2] = 0;
          param_1[1] = 4;
          FUN_00296e90();
          FUN_00230234(param_1);
          return;
        }
        FUN_0029cc44(1);
        param_1[1] = 0xc;
        param_1[2] = 0;
      }
    }
  }
  return;
}

} /* extern "C" */
