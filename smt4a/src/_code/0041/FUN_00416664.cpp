/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00416664` (_code @ 0x416664, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001634b4(int);
int FUN_00164168(unsigned int, int, int, int, int, int);
int FUN_001677c0(void);
int FUN_00183bb0(void);
int FUN_001879d0(int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001634b4. */
/* Supplied declaration required: FUN_00164168. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001692ac(unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */


void FUN_00416664(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  unsigned long long temp_v5;
  
  temp_v3 = DAT_0059dbb4;
  temp_v0 = FUN_001692ac(1,0);
  piVar4 = (int *)(temp_v3 + 0x1258);
  temp_v1 = *piVar4;
  temp_v2 = piVar4[temp_v1 + 2];
  *piVar4 = temp_v1 + 1;
  piVar4[temp_v1 + 3] = temp_v0;
  if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v2 != temp_v0) {
    (**(romwright_code **)(temp_v3 + 0x1274))();
    *(unsigned char *)(temp_v3 + 0x1270) = 0;
  }
  FUN_001677c0();
  FUN_00183bb0();
  temp_v5 = 0x3e8a3d7100000000;
  temp_v3 = 0;
  do {
    temp_v0 = param_1 + temp_v3 * 0xb0;
    if (*(char *)(temp_v0 + 0xa0) != '\0') {
      temp_v4 = (float)((unsigned long long)temp_v5 >> 0x20);
      FUN_001879d0(DAT_0059dbb4);
      VectorSignedToFloat((int)temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001634b4(temp_v0 + 0x14);
    }
    if (*(char *)(temp_v0 + 0xa0) != '\0') {
      temp_v4 = (float)((unsigned long long)temp_v5 >> 0x20);
      FUN_001879d0(DAT_0059dbb4);
      temp_v1 = FUN_001834a4(8,0x8e);
      if ((*(int *)(temp_v0 + 0xa4) == 2) &&
         ((*(unsigned char *)(temp_v0 + 0x9c) & *(unsigned char *)(temp_v0 + 0x9b)) != 0)) {
        FUN_00164168(*(unsigned int *)(temp_v0 + 0xa8),
                     (((int)*(short *)(temp_v0 + 0x2c) +
                      (int)*(short *)(temp_v1 + 8) + (int)**(short **)(temp_v1 + 0xc) / 2) -
                     *(int *)(temp_v0 + 0xac) / 2) + (int)temp_v4,
                     (int)*(short *)(temp_v0 + 0x2e) + (int)*(short *)(temp_v1 + 10),0x3d,6,0);
      }
    }
    temp_v0 = DAT_0059dbb4;
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0xc);
  piVar4 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v3 = *piVar4;
  temp_v1 = piVar4[temp_v3 + 2];
  *piVar4 = temp_v3 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v1 != piVar4[temp_v3 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  return;
}

} /* extern "C" */
