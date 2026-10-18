/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010befc` (_code @ 0x10befc, 0x178 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004e3154; /* 0x4e3154 */
extern int DAT_004e3158; /* 0x4e3158 */
extern unsigned char DAT_004e315c; /* 0x4e315c */
extern unsigned int DAT_004e3164; /* 0x4e3164 */
extern signed char DAT_004e3169; /* 0x4e3169 */

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Memory_Barrier (CALLOTHER). */
/* Supplied declaration required: FUN_002bd620. */
extern int FUN_002bd630(void);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_0010befc(void)

{
/* irregular: 6 unstructured edge(s); 1 goto(s); 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  if (DAT_004e3169 != '\0') {
    temp_v0 = FUN_002bd630();
    *(unsigned int *)(temp_v0 + 0x1e8) = 0;
    coproc_moveto_Data_Memory_Barrier(0);
    *(unsigned int *)(temp_v0 + 0x1ec) = 0;
    temp_v3 = 0;
    if (DAT_004e3158 > (int)temp_v3) {
      do {
        if ((-1 < (int)temp_v3) && ((int)temp_v3 < DAT_004e3158)) {
          temp_v0 = DAT_004e3154;
          if (0 < (int)temp_v3) {
            if ((temp_v3 & 1) != 0) {
              temp_v0 = *(int *)(DAT_004e3154 + 0x70);
            }
            for (temp_v1 = (int)temp_v3 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
              temp_v0 = *(int *)(*(int *)(temp_v0 + 0x70) + 0x70);
            }
          }
          if (temp_v0 != 0) {
            FUN_002c3aa8(&DAT_004e315c);
            for (temp_v1 = DAT_004e3154; temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0x70)) {
              if (temp_v1 == temp_v0) {
                temp_v1 = DAT_004e3154;
                if (DAT_004e3154 == 0) break;
                while (temp_v1 != temp_v0) {
                  temp_v1 = *(int *)(temp_v1 + 0x70);
                  if (temp_v1 == 0) {
                    DAT_004e3158 = DAT_004e3158 - 1;
                    goto LAB_0010bfec;
                  }
                }
                temp_v1 = *(int *)(temp_v0 + 0x74);
                if (temp_v1 != 0) {
                  temp_v2 = *(int *)(temp_v0 + 0x70);
                  *(int *)(temp_v1 + 0x70) = temp_v2;
                  if (*(int *)(temp_v0 + 0x70) == 0) {
                    DAT_004e3158 = DAT_004e3158 - 1;
                    break;
                  }
                  *(int *)(temp_v2 + 0x74) = temp_v1;
                  DAT_004e3158 = DAT_004e3158 - 1;
                  break;
                }
                DAT_004e3154 = *(int *)(temp_v0 + 0x70);
                if (DAT_004e3154 != 0) {
                  *(unsigned int *)(DAT_004e3154 + 0x74) = 0;
                  DAT_004e3158 = DAT_004e3158 - 1;
                  break;
                }
                DAT_004e3154 = 0;
                DAT_004e3158 = DAT_004e3158 - 1;
                break;
              }
            }
LAB_0010bfec:
            if (*(int *)(temp_v0 + 0x6c) != 0) {
              FUN_002c4360();
            }
            if (*(int *)(temp_v0 + 0x38) != 0) {
              FUN_002bd620();
            }
            FUN_002c4360(temp_v0);
            FUN_002c3a24(&DAT_004e315c);
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (DAT_004e3158 > (int)temp_v3);
    }
    DAT_004e3169 = '\0';
    DAT_004e3164 = 0xffffffff;
  }
  return;
}
