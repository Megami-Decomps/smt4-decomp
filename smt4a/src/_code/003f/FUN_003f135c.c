/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f135c` (_code @ 0x3f135c, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_00573990; /* 0x573990 */
extern unsigned int DAT_00573994; /* 0x573994 */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */

/* Unsupported intrinsic, declaration required: SCARRY4 (INT_SCARRY). */
extern int FUN_001801a4(void);
extern int FUN_001ab854(int);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_004c6c08. */


void FUN_003f135c(int param_1)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  
  temp_v4 = 0;
  do {
    puVar7 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + temp_v4 * 0x408);
    if (puVar7 != (unsigned int *)0x0) {
      temp_v1 = *puVar7;
      temp_v3 = puVar7[1];
      if ((((DAT_00573978 & temp_v1) != 0 || (DAT_0057397c & temp_v3) != 0) &&
          ((DAT_005739a0 & temp_v1) == 0 && (DAT_005739a4 & temp_v3) == 0)) &&
         ((temp_v3 & DAT_00573994) == 0 && (DAT_00573990 & temp_v1) == 0)) {
        if (puVar7[0xfe] != 0) {
          FUN_004c6c08(puVar7[0xfe] + 0x5e);
          temp_v1 = puVar7[0xfe];
          temp_v0 = *(unsigned short *)(temp_v1 + 0x5e);
          if ((temp_v0 & 2) != 0) {
            *(unsigned short *)(temp_v1 + 0x2a) = 0;
          }
        }
        else if (puVar7[0xff] != 0) {
          FUN_004c6c08(puVar7[0xff] + 0x60);
          temp_v1 = puVar7[0xff];
          temp_v0 = *(unsigned short *)(temp_v1 + 0x60);
          if ((temp_v0 & 2) != 0) {
            *(unsigned short *)(temp_v1 + 0x2a) = 0;
          }
        }
        else if (puVar7[0x100] != 0) {
          FUN_004c6c08(puVar7[0x100] + 0x60);
        }
      }
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x6d) {
      temp_v4 = FUN_001ab888();
      temp_v5 = -1;
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v4 + 0x1ca3);
      if (temp_v1 == 0xffffffff || SCARRY4(temp_v1,1)) {
        return;
      }
LAB_003f1464:
      temp_v2 = FUN_001801a4();
      temp_v2 = temp_v2 + 0x5e;
      do {
        FUN_004c6c08(temp_v2);
        do {
          temp_v5 = temp_v5 + 1;
          if ((int)(unsigned int)*(unsigned char *)(temp_v4 + 0x1ca3) <= temp_v5) {
            return;
          }
          if (temp_v5 < 0) goto LAB_003f1464;
          temp_v2 = FUN_001ab854(temp_v5);
        } while (temp_v2 == 0);
        temp_v2 = temp_v2 + 0x60;
      } while( 1 );
    }
  } while( 1 );
}
