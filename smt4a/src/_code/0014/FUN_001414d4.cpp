/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001414d4` (_code @ 0x1414d4, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015e76c(int, int, unsigned int);

extern int *DAT_0063e944; /* 0x63e944 */
extern int DAT_0063e948; /* 0x63e948 */

/* Supplied declaration required: FUN_0015e76c. */
extern int FUN_00160050(void);
extern int FUN_00160064(void);


unsigned int FUN_001414d4(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  
  temp_v1 = 0;
  piVar3 = DAT_0063e944;
  if (0 < DAT_0063e948) {
    while (piVar3 != (int *)0x0) {
      if (piVar3[6] == param_1) {
        if (param_2 != 0) {
          if ((param_2 == 1) && ((*(unsigned char *)(piVar3 + 3) & 0x20) == 0)) {
            if (*piVar3 == 0) goto LAB_001415e4;
            temp_v1 = FUN_00160064();
            if (temp_v1 != 0) {
              if (*piVar3 != 0) {
                FUN_0015e76c(*piVar3,0,param_3);
              }
              temp_v0 = (*(unsigned char *)(piVar3 + 3) & 0xfb) | 0x20;
              *(unsigned char *)(piVar3 + 3) = temp_v0;
            }
          }
        }
        else if (((*(unsigned char *)(piVar3 + 3) & 0x10) == 0) &&
                ((*piVar3 == 0 || (temp_v1 = FUN_00160064(), temp_v1 == 0)))) {
          if (*piVar3 != 0) {
            FUN_0015e76c(*piVar3,1,param_3);
          }
          temp_v0 = *(unsigned char *)(piVar3 + 3) | 0x14;
          *(unsigned char *)(piVar3 + 3) = temp_v0;
        }
        if ((*piVar3 != 0) && (temp_v1 = FUN_00160050(), 0 < temp_v1)) {
          return 0;
        }
LAB_001415e4:
        temp_v0 = *(unsigned char *)(piVar3 + 3);
        if ((temp_v0 & 0x10) != 0) {
          temp_v0 = temp_v0 & 0xef;
          *(unsigned char *)(piVar3 + 3) = temp_v0;
        }
        if ((temp_v0 & 0x20) == 0) {
          return 1;
        }
        *(unsigned char *)(piVar3 + 3) = temp_v0 & 0xdf;
        return 1;
      }
      piVar3 = (int *)piVar3[5];
      temp_v1 = temp_v1 + 1;
      if (DAT_0063e948 <= temp_v1) {
        return 0;
      }
    }
  }
  return 0;
}

} /* extern "C" */
