/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002987c4` (_code @ 0x2987c4, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e314(int);
int FUN_001568f8(int, int);
int FUN_0016c4b8(unsigned int, int);
int VectorSignedToFloat(unsigned int, int);
int VectorUnsignedToFloat(unsigned int, int);

extern unsigned int DAT_0057aa98; /* 0x57aa98 */
extern unsigned int DAT_0057aa9c; /* 0x57aa9c */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0014e314. */
/* Supplied declaration required: FUN_001568f8. */
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0016c4b8. */
extern int FUN_003ec620(int, unsigned int);


unsigned int FUN_002987c4(void)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  
  temp_v0 = FUN_00164a9c();
  piVar2 = (int *)(temp_v0 + 0x1edc);
  temp_v3 = *piVar2;
  temp_v4 = temp_v3 + 1;
  *piVar2 = temp_v4;
  if (temp_v4 >= 0x1e) {
    *piVar2 = temp_v3 - 0x1d;
  }
  if ((DAT_0057aa98 & *(unsigned int *)(temp_v0 + 0x45a8)) != 0 ||
      (DAT_0057aa9c & *(unsigned int *)(temp_v0 + 0x45ac)) != 0) {
    FUN_0016c4b8(DAT_0059dbb4,0);
    temp_v5 = 0;
    do {
      temp_v3 = 4;
      do {
        temp_v4 = *(int *)(temp_v0 + 0x1ed4) + temp_v3 * 0x1d0;
        if ((((temp_v4 != 0) &&
             (temp_v1 = *(unsigned int *)(temp_v4 + 0x50), (temp_v1 & 1) != 0 && (temp_v1 & 2) != 0)) &&
            ((temp_v1 & 0x200000) == 0)) &&
           ((((temp_v1 & 0x80) != 0 && ((temp_v1 & 0x4000) == 0)) &&
            ((*(unsigned short *)(temp_v4 + 0x60) & 0x800) != 0)))) {
          temp_v6 = (temp_v1 & 0x10) == 0;
          if (temp_v6) {
            temp_v1 = (unsigned int)*(char *)(temp_v4 + 0x3c);
          }
          if (temp_v6 && temp_v1 == temp_v5) {
            temp_v2 = temp_v0;
            FUN_001568f8(temp_v0,(int)*(short *)(temp_v4 + 0x6a));
            temp_v4 = FUN_003ec620(temp_v0,*(unsigned int *)(temp_v2 + 0xc));
            temp_v4 = *(int *)(temp_v4 + 0x10);
            VectorUnsignedToFloat((unsigned int)*(unsigned short *)(temp_v4 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(temp_v4 + 0x12) -
                                ((int)*(short *)(temp_v4 + 0x20) +
                                (unsigned int)(*(unsigned short *)(temp_v4 + 0x24) >> 1)),(unsigned char)(in_fpscr >> 0x16) & 3
                               );
            VectorUnsignedToFloat((unsigned int)*(unsigned short *)(temp_v4 + 0x26),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(0x8f - ((int)*(short *)(temp_v4 + 0x22) +
                                       (unsigned int)*(unsigned short *)(temp_v4 + 0x26)),(unsigned char)(in_fpscr >> 0x16) & 3
                               );
            FUN_0014e314(0xff0088);
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x36);
      temp_v5 = temp_v5 + 1;
    } while ((int)temp_v5 < 3);
  }
  return 0;
}

} /* extern "C" */
