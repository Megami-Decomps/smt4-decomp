/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015fa74` (_code @ 0x15fa74, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00176124(int, unsigned int, unsigned int);

extern int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00176124. */
extern int FUN_001801a4(void);
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern int FUN_0018719c(void);
extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);


int FUN_0015fa74(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v1 = DAT_00570280;
  FUN_00176124(DAT_00570280,param_1,param_2);
  if (temp_v1 == 0) {
    temp_v0 = FUN_00187180(2,0);
    temp_v1 = FUN_00192798();
    temp_v2 = FUN_00192748(temp_v0);
    temp_v4 = 0;
    if (temp_v4 < temp_v2) {
      do {
        if ((((*(unsigned char *)(temp_v1 + temp_v4 * 0xa4) == param_1) &&
             (temp_v5 = temp_v1 + temp_v4 * 0xa4, *(unsigned char *)(temp_v5 + 1) == param_2)) &&
            ((*(short *)(temp_v5 + 0xe) == 0 || (temp_v3 = FUN_0018719c(), temp_v3 != 0)))) &&
           (((*(short *)(temp_v5 + 0x10) == 0 || (temp_v3 = FUN_0018719c(), temp_v3 == 0)) &&
            (temp_v3 = FUN_001801a4(),
            *(unsigned short *)(temp_v5 + 10) == 0 || *(unsigned short *)(temp_v5 + 10) <= *(unsigned short *)(temp_v3 + 0x62)))))
        {
          return temp_v1 + temp_v4 * 0xa4;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < temp_v2);
    }
  }
  return temp_v1;
}

} /* extern "C" */
