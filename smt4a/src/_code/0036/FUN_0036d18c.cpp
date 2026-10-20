/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036d18c` (_code @ 0x36d18c, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);

extern unsigned char LAB_0036d2f4; /* 0x36d2f4 */
extern unsigned char LAB_0036d304; /* 0x36d304 */
extern unsigned char LAB_0036d310; /* 0x36d310 */
extern unsigned char DAT_005e1ebc; /* 0x5e1ebc */

/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
extern int FUN_00330b58(int);


unsigned char * FUN_0036d18c(unsigned int param_1)

{
/* irregular: 3 unstructured edge(s); 2 goto(s); 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char *puVar5;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6 [128];
  
  temp_v0 = FUN_00187180(0x15,0);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  temp_v3 = 0;
  if (temp_v2 != 0) {
    temp_v3 = temp_v2 & 1;
    temp_v5 = 0;
    if (temp_v3 != 0) {
      do {
        if (*(unsigned char *)(temp_v1 + temp_v5 * 100) == param_1) goto LAB_0036d220;
        temp_v5 = temp_v5 + 1;
        if ((int)temp_v5 >= (int)temp_v3) break;
      } while( 1 );
    }
  }
  do {
    temp_v5 = temp_v3;
    if (temp_v2 <= temp_v5) {
      return (unsigned char *)0x0;
    }
    if (*(unsigned char *)(temp_v1 + temp_v5 * 100) == param_1) {
LAB_0036d220:
      temp_v4 = temp_v5 * 0x19;
      temp_v1 = temp_v1 + temp_v5 * 100;
      goto LAB_0036d248;
    }
    if (*(unsigned char *)(temp_v1 + temp_v5 * 100 + 100) == param_1) {
      temp_v4 = temp_v1 + temp_v5 * 100;
      temp_v1 = temp_v4 + 100;
LAB_0036d248:
      if (temp_v1 != 0) {
        if (param_1 != 0x35) {
          puVar5 = (unsigned char *)(temp_v1 + 4);
        }
        else {
          temp_v4 = FUN_00330b58(temp_v4);
          if ((temp_v4 + 0x3bU) / 0xe10 != 0) {
            FUN_00100388(temp_v6,&LAB_0036d2f4);
          }
          else {
            FUN_00100388(temp_v6,&LAB_0036d310,((temp_v4 + 0x3bU) % 0xe10) / 0x3c);
          }
          FUN_00100388(&DAT_005e1ebc,&LAB_0036d304,temp_v1 + 4,temp_v6);
          puVar5 = &DAT_005e1ebc;
        }
        return puVar5;
      }
      return (unsigned char *)0x0;
    }
    temp_v3 = temp_v5 + 2;
  } while( 1 );
}

} /* extern "C" */
