/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002342d0` (_code @ 0x2342d0, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001677c0(...);
int FUN_001835b4(int, int, int, unsigned int, int, int);
int FUN_001849bc(int, int, int, unsigned int, int, int, int *);
int FUN_002bf0d4(int, int, int *);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int DAT_0058103c; /* 0x58103c */
extern int DAT_0059dbb4; /* 0x59dbb4 */
extern int DAT_005f15fc; /* 0x5f15fc */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001849bc. */
/* Supplied declaration required: FUN_002bf0d4. */


void FUN_002342d0(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  char *pcVar6;
  unsigned int in_fpscr;
  float temp_v4;
  int temp_v5;
  float temp_v6;
  float temp_v7;
  int temp_v8;
  int temp_v9;
  
  temp_v1 = DAT_0059dbb4;
  temp_v5 = DAT_0058103c;
  pcVar6 = (char *)(DAT_0058103c + 0xcd1c);
  if ((*pcVar6 != '\0') && (DAT_005f15fc < 100)) {
    temp_v0 = FUN_001692ac(1,0);
    piVar5 = (int *)(temp_v1 + 0x1258);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v3 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    temp_v1 = *(int *)(temp_v5 + 0xcd2c);
    temp_v7 = *(float *)(temp_v5 + 0xcd18);
    if (*pcVar6 == '\x03') {
      temp_v7 = 0.0f;
    }
    temp_v6 = 1.0f;
    if (temp_v1 < 10) {
      VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    else if (temp_v1 < 0x19) {
      temp_v1 = temp_v1 - 10;
      VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    else {
      temp_v1 = temp_v1 - 0x19;
      VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    FUN_001677c0(temp_v1);
    FUN_001835b4(2,0x13,0x11f8,param_1,0,0xb);
    FUN_001677c0();
    FUN_001835b4(2,0x13,0x11f9,param_1,0,0xb);
    FUN_002bf0d4(0x13,0x11fa,&temp_v8);
    temp_v4 = (float)VectorSignedToFloat((temp_v9 - temp_v8) - 0x17,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = (int)((temp_v6 - temp_v7) * temp_v4);
    temp_v8 = temp_v8 + temp_v5;
    FUN_001849bc(2,0x13,0x11fa,param_1,temp_v5,0xb,&temp_v8);
    temp_v5 = DAT_0059dbb4;
    piVar5 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v1 = *piVar5;
    temp_v0 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 - 1;
    if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v0 != piVar5[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v5 + 0x1274))();
      *(unsigned char *)(temp_v5 + 0x1270) = 0;
    }
  }
  return;
}

} /* extern "C" */
