/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039568c` (_code @ 0x39568c, 0x144 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001e296c(unsigned int, int);
int FUN_00287aec(void);
int FUN_0039560c(int);

extern signed char DAT_0049f934; /* 0x49f934 */
extern float DAT_0049fb70; /* 0x49fb70 */
extern unsigned int DAT_0049fb74; /* 0x49fb74 */
extern int DAT_0049fb78; /* 0x49fb78 */
extern signed char DAT_0049fc64; /* 0x49fc64 */

/* Supplied declaration required: FUN_001e296c. */
/* Supplied declaration required: FUN_00287aec. */
extern unsigned int FUN_002c09f4(unsigned int);
/* Supplied declaration required: FUN_0039560c. */


void FUN_0039568c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  float temp_v3;
  
  temp_v0 = *(int *)(param_1 + 0xc);
  if ((DAT_0049fc64 == '\0') && (DAT_0049f934 == '\0')) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      if (*(int *)(param_1 + 0x1c) == 1) {
        FUN_0039560c(param_1);
        *(float *)(temp_v0 + 0x28) = *(float *)(temp_v0 + 0x28) + *(float *)(param_1 + 0x10);
        *(float *)(temp_v0 + 0x2c) = *(float *)(temp_v0 + 0x2c) + *(float *)(param_1 + 0x14);
        *(float *)(temp_v0 + 0x30) = *(float *)(temp_v0 + 0x30) + *(float *)(param_1 + 0x18);
      }
    }
    else if (DAT_0049fb78 == 0) {
      temp_v1 = *(unsigned int *)(temp_v0 + 0x58);
      temp_v2 = (int)(((long long)(int)temp_v1 * -0x77777777 + ((unsigned long long)temp_v1 << 0x20)) >> 0x20);
      if ((temp_v1 + ((temp_v2 >> 3) - (temp_v2 >> 0x1f)) * -0xf == 0) &&
         (temp_v1 = FUN_002c09f4(100), temp_v1 < 0x1e)) {
        temp_v3 = *(float *)(temp_v0 + 0x28);
        FUN_00287aec();
        if (temp_v3 < DAT_0049fb70) {
          *(unsigned int *)(param_1 + 0x20) = DAT_0049fb74;
          temp_v2 = *(int *)(temp_v0 + 0x58);
          if (temp_v2 < 0x3d) {
            temp_v2 = 0x3c;
          }
          *(int *)(temp_v0 + 0x58) = temp_v2;
          FUN_001e296c(*(unsigned int *)(temp_v0 + 0x60),1);
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          return;
        }
      }
    }
  }
  return;
}

} /* extern "C" */
