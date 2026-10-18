/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273c54` (_code @ 0x273c54, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00267144. */
extern int FUN_002671bc(void);
extern int FUN_0027d968(void);
/* Supplied declaration required: FUN_002c09d0. */
extern int FUN_002c2950(void);


void FUN_00273c54(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  char *pcVar4;
  unsigned int temp_v3;
  int temp_v4;
  char *pcVar7;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v1 = FUN_002c2950();
  temp_v5 = 0;
  pcVar7 = (char *)0x0;
  temp_v2 = FUN_002671bc();
  if (0 < temp_v2) {
    do {
      pcVar4 = pcVar7;
      FUN_00267144();
      temp_v3 = (unsigned int)*pcVar4;
      temp_v6 = temp_v3 != 0xffffffff;
      if (temp_v6) {
        temp_v3 = (unsigned int)*(unsigned short *)(pcVar4 + 0x12);
      }
      if ((temp_v6 && temp_v3 != 0) && (temp_v2 = FUN_0027d968(), temp_v2 == *(short *)(pcVar4 + 0x12))) {
        temp_v2 = temp_v1 + temp_v5 * 0x14;
        if ((*(unsigned char *)(temp_v2 + 0xf20) & 1) != 0) {
          temp_v4 = FUN_002c09d0(temp_v5 + 0x310);
          if (temp_v4 != 0) {
            temp_v0 = *(unsigned char *)(temp_v2 + 0xf20) & 0xfb;
            *(unsigned char *)(temp_v2 + 0xf20) = temp_v0;
          }
          else if (((*(short *)(pcVar4 + 0x14) == 0) || (temp_v4 = FUN_002c09d0(), temp_v4 != 0)) &&
                  ((*(short *)(pcVar4 + 0x16) == 0 || (temp_v4 = FUN_002c09d0(), temp_v4 == 0)))) {
            temp_v0 = *(unsigned char *)(temp_v2 + 0xf20) | 4;
            *(unsigned char *)(temp_v2 + 0xf20) = temp_v0;
          }
        }
        temp_v5 = temp_v5 + 1;
      }
      pcVar7 = pcVar7 + 1;
      temp_v2 = FUN_002671bc();
    } while ((int)pcVar7 < temp_v2);
  }
  return;
}
