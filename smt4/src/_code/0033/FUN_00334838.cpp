/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334838` (_code @ 0x334838, 0x184 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023fb84(int);
int aocHandleButtons(int, int);
unsigned int * FUN_00334228(unsigned int *, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_0023fb84. */
extern int FUN_0027d9e8(int, unsigned int);
/* Supplied declaration required: aocHandleButtons. */
extern int FUN_00294fe0(int);
extern int FUN_0029505c(int);
/* Supplied declaration required: FUN_00334228. */


unsigned int * FUN_00334838(unsigned int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int *pD;
  
  temp_v2 = 0;
  temp_v0 = 1;
  if (0 < (int)param_1[2]) {
    do {
      temp_v3 = param_2 + temp_v2 * 8;
      temp_v1 = (unsigned int *)FUN_0027d9e8(param_2,*(unsigned int *)(temp_v3 + 0x1fe8));
      puVar5 = (unsigned int *)(temp_v3 + 0x1fe4);
      if ((*puVar5 & 1) == 0) {
        temp_v3 = FUN_0029505c((int)temp_v1);
        if (temp_v3 == 0) {
          temp_v0 = 0;
        }
        else {
          *puVar5 = *puVar5 | 1;
          aocHandleButtons((int)temp_v1,7);
        }
      }
      if ((*puVar5 & 2) == 0) {
        temp_v3 = FUN_00294fe0((int)temp_v1);
        if (temp_v3 == 0) {
          temp_v0 = 0;
        }
        else {
          FUN_0023fb84((int)temp_v1);
          *puVar5 = *puVar5 | 2;
          pD = (unsigned int *)(param_2 + temp_v2 * 0x48 + 0x1074);
          pD[1] = temp_v1[1];
          pD[2] = temp_v1[2];
          pD[3] = temp_v1[3];
          pD[4] = temp_v1[4];
          pD[5] = temp_v1[5];
          pD[6] = temp_v1[6];
          pD[7] = temp_v1[7];
          pD[8] = temp_v1[8];
          pD[9] = temp_v1[9];
          pD[10] = temp_v1[10];
          pD[11] = temp_v1[11];
          pD[12] = temp_v1[12];
          pD[13] = temp_v1[13];
          pD[14] = temp_v1[14];
          *(unsigned char *)(pD + 15) = *(unsigned char *)(temp_v1 + 15);
          *(unsigned char *)((int)pD + 0x3d) = *(unsigned char *)((int)temp_v1 + 0x3d);
          pD[16] = temp_v1[16];
          pD[17] = temp_v1[17];
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < (int)param_1[2]);
    if (!temp_v0) {
      return (unsigned int *)0x0;
    }
  }
  *param_1 = 6;
  return FUN_00334228(param_1,param_2);
}

} /* extern "C" */
