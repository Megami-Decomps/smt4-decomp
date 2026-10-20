/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334838` (_code @ 0x334838, 0x184 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023fb84(int);
int FUN_00293f98(int, int);
int FUN_00334228(unsigned int *, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_0023fb84. */
extern int FUN_0027d9e8(int, unsigned int);
/* Supplied declaration required: FUN_00293f98. */
extern int FUN_00294fe0(int);
extern int FUN_0029505c(int);
/* Supplied declaration required: FUN_00334228. */


unsigned int * FUN_00334838(unsigned int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  
  temp_v2 = 0;
  temp_v0 = 1;
  if (0 < (int)param_1[2]) {
    do {
      temp_v3 = param_2 + temp_v2 * 8;
      temp_v1 = FUN_0027d9e8(param_2,*(unsigned int *)(temp_v3 + 0x1fe8));
      puVar5 = (unsigned int *)(temp_v3 + 0x1fe4);
      if ((*puVar5 & 1) == 0) {
        temp_v3 = FUN_0029505c(temp_v1);
        if (temp_v3 == 0) {
          temp_v0 = 0;
        }
        else {
          *puVar5 = *puVar5 | 1;
          FUN_00293f98(temp_v1,7);
        }
      }
      if ((*puVar5 & 2) == 0) {
        temp_v3 = FUN_00294fe0(temp_v1);
        if (temp_v3 == 0) {
          temp_v0 = 0;
        }
        else {
          FUN_0023fb84(temp_v1);
          *puVar5 = *puVar5 | 2;
          temp_v3 = param_2 + temp_v2 * 0x48;
          *(unsigned int *)(temp_v3 + 0x1078) = *(unsigned int *)(temp_v1 + 4);
          *(unsigned int *)(temp_v3 + 0x107c) = *(unsigned int *)(temp_v1 + 8);
          *(unsigned int *)(temp_v3 + 0x1080) = *(unsigned int *)(temp_v1 + 0xc);
          *(unsigned int *)(temp_v3 + 0x1084) = *(unsigned int *)(temp_v1 + 0x10);
          *(unsigned int *)(temp_v3 + 0x1088) = *(unsigned int *)(temp_v1 + 0x14);
          *(unsigned int *)(temp_v3 + 0x108c) = *(unsigned int *)(temp_v1 + 0x18);
          *(unsigned int *)(temp_v3 + 0x1090) = *(unsigned int *)(temp_v1 + 0x1c);
          *(unsigned int *)(temp_v3 + 0x1094) = *(unsigned int *)(temp_v1 + 0x20);
          *(unsigned int *)(temp_v3 + 0x1098) = *(unsigned int *)(temp_v1 + 0x24);
          *(unsigned int *)(temp_v3 + 0x109c) = *(unsigned int *)(temp_v1 + 0x28);
          *(unsigned int *)(temp_v3 + 0x10a0) = *(unsigned int *)(temp_v1 + 0x2c);
          *(unsigned int *)(temp_v3 + 0x10a4) = *(unsigned int *)(temp_v1 + 0x30);
          *(unsigned int *)(temp_v3 + 0x10a8) = *(unsigned int *)(temp_v1 + 0x34);
          *(unsigned int *)(temp_v3 + 0x10ac) = *(unsigned int *)(temp_v1 + 0x38);
          *(unsigned char *)(temp_v3 + 0x10b0) = *(unsigned char *)(temp_v1 + 0x3c);
          *(unsigned char *)(temp_v3 + 0x10b1) = *(unsigned char *)(temp_v1 + 0x3d);
          *(unsigned int *)(temp_v3 + 0x10b4) = *(unsigned int *)(temp_v1 + 0x40);
          *(unsigned int *)(temp_v3 + 0x10b8) = *(unsigned int *)(temp_v1 + 0x44);
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < (int)param_1[2]);
    if (!temp_v0) {
      return (unsigned int *)0x0;
    }
  }
  *param_1 = 6;
  FUN_00334228(param_1,param_2);
  return param_1;
}

} /* extern "C" */
