/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002266dc` (_code @ 0x2266dc, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(int, int, int, unsigned int);
int FUN_0027da30(int, int);
int FUN_002939f4(void);

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */
/* Supplied declaration required: FUN_0027da30. */
extern int FUN_0027dab0(unsigned int, int);
/* Supplied declaration required: FUN_002939f4. */


int FUN_002266dc(short param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  
  if ((*(unsigned int *)(param_3 + 0x50) & 1) != 0) {
    temp_v0 = *(int *)(DAT_00434290 + 8);
    do {
      if (temp_v0 == 0) {
        temp_v0 = DAT_00434290;
        FUN_0022699c(DAT_00434290,(int)param_1,0,param_2);
        temp_v1 = FUN_002939f4();
        FUN_0027da30(temp_v1,(int)*(short *)(param_3 + 0x62));
        temp_v2 = FUN_002939f4();
        temp_v3 = FUN_0027dab0(temp_v2,param_3);
        if (temp_v3 < 0) {
          temp_v3 = 0;
        }
        *(unsigned char *)(temp_v0 + 4) = 0x26;
        *(int *)(temp_v0 + 0x14) = param_3;
        *(unsigned int *)(temp_v0 + 0x28) = param_4;
        *(short *)(temp_v0 + 0x24) = (short)*(unsigned int *)(temp_v1 + temp_v3 * 4 + 0xc);
        *(unsigned short *)(temp_v0 + 0x26) = *(unsigned short *)(param_3 + 0x62);
        return temp_v0;
      }
      temp_v4 = (unsigned int)*(unsigned char *)(temp_v0 + 4);
      temp_v5 = temp_v4 == 0x26;
      if (temp_v5) {
        temp_v4 = *(unsigned int *)(temp_v0 + 8);
      }
      temp_v6 = temp_v5 && temp_v4 == param_2;
      if (temp_v5 && temp_v4 == param_2) {
        temp_v6 = *(int *)(temp_v0 + 0x14) == param_3;
      }
      temp_v0 = *(int *)(temp_v0 + 0xc);
    } while (!temp_v6);
  }
  return 0;
}

} /* extern "C" */
