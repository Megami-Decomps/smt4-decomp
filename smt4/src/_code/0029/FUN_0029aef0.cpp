/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029aef0` (_code @ 0x29aef0, 0x184 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4938(char *, int);

extern int FUN_00229e84(void);
extern int FUN_0029ea68(unsigned int);
extern int FUN_002c09bc(void);
/* Supplied declaration required: FUN_002c4938. */


int FUN_0029aef0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  char acStack_7d [109];
  
  temp_v1 = FUN_00229e84();
  temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 8);
  temp_v1 = FUN_00229e84();
  temp_v0 = *(unsigned short *)(temp_v1 + 10);
  FUN_002c4938(acStack_7d + 5,100);
  if (temp_v3 <= temp_v0) {
    do {
      temp_v1 = FUN_0029ea68(temp_v3 & 0xffff);
      if (temp_v1 != 0) {
        temp_v1 = FUN_002c09bc();
        temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + temp_v3 * 0x34 + 0xc170);
        if ((temp_v2 - 1 < 99) && ((unsigned char)acStack_7d[temp_v2 + 5] < 0x14)) {
          acStack_7d[temp_v2 + 5] = acStack_7d[temp_v2 + 5] + 1;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 <= (int)(unsigned int)temp_v0);
  }
  temp_v1 = 99;
  do {
    temp_v3 = (unsigned int)(unsigned char)acStack_7d[temp_v1 + 5];
    if (temp_v3 != 0) {
      if (temp_v3 >= 3) {
        if (temp_v1 == 0) {
          return 1;
        }
        return temp_v1;
      }
      temp_v2 = temp_v3;
      if (((((((temp_v1 >= 2) && (acStack_7d[temp_v1 + 4] != '\0')) && (temp_v2 = temp_v3 * 2, temp_v2 >= 3)) ||
            (((temp_v1 >= 3 && (acStack_7d[temp_v1 + 3] != '\0')) && (temp_v2 = temp_v2 + temp_v3, temp_v2 >= 3)))
            ) || (((temp_v1 >= 4 && (acStack_7d[temp_v1 + 2] != '\0')) &&
                  (temp_v2 = temp_v2 + temp_v3, temp_v2 >= 3)))) ||
          ((((temp_v1 >= 5 && (acStack_7d[temp_v1 + 1] != '\0')) && (temp_v2 = temp_v2 + temp_v3, temp_v2 >= 3))
           || (((temp_v1 >= 6 && (acStack_7d[temp_v1] != '\0')) && (temp_v2 + temp_v3 >= 3)))))) &&
         (temp_v1 != 0)) {
        return temp_v1;
      }
    }
    temp_v1 = temp_v1 - 1;
    if (temp_v1 < 1) {
      return 1;
    }
  } while( 1 );
}

} /* extern "C" */
