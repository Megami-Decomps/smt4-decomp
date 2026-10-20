#include "romwright_types.h"

extern "C" {

int FUN_00241d58(int);
int FUN_0027da30(int, int);

/* Supplied declaration required: FUN_00241d58. */
/* Supplied declaration required: FUN_0027da30. */
extern int btlGetMainState(void);
extern int FUN_00336e44(int, int);


void FUN_003dc02c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = btlGetMainState();
  temp_v4 = 0x43;
  do {
    temp_v1 = *(int *)(temp_v0 + 0x1e98) + temp_v4 * 0x114;
    if (((*(unsigned int *)(temp_v1 + 0x50) & 1) != 0) &&
       (temp_v2 = FUN_0027da30(temp_v0,(int)*(short *)(temp_v1 + 0x62)), temp_v2 != 0)) {
      temp_v1 = 0;
      do {
        if (((0 < *(int *)(temp_v2 + 0xc)) && (temp_v3 = FUN_00336e44(temp_v0,*(int *)(temp_v2 + 0xc)), temp_v3 == 0)) &&
           (*(int *)(temp_v2 + 0xc) == *(int *)(param_1 + temp_v1 * 0x30 + 0x1398))) {
          temp_v1 = param_1 + temp_v1 * 0x30;
          *(unsigned int *)(temp_v1 + 0x139c) = 0;
          *(unsigned int *)(temp_v1 + 0x1398) = 0xffffffff;
          FUN_00241d58(temp_v1 + 0x13a0);
          *(unsigned int *)(temp_v1 + 0x13c4) = 0;
          break;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x32);
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x6d) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
