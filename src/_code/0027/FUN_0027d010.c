/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d010` (_code @ 0x27d010, 0x30c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0027d320; /* 0x27d320 */
extern int DAT_00447a48; /* 0x447a48 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0024af28. */
extern unsigned int FUN_0028549c(unsigned int, unsigned int);
extern unsigned int FUN_0029a2d0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002a06c8. */
extern int FUN_002ae16c(unsigned int);
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002c0ba8(int);
extern int FUN_0030f728(void);


unsigned int FUN_0027d010(void)

{
/* irregular: 2 unstructured edge(s); 2 goto(s); irregular input(s): in_fpscr; 4 native warning(s); review required */
  short temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  char *pcVar6;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  unsigned char temp_v5 [128];
  
  temp_v0 = *(short *)(DAT_00447a48 + 10);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 == 99) {
          return 1;
        }
        return 0;
      }
LAB_0027d200:
      temp_v1 = (int)*(short *)(DAT_00447a48 + 0xc);
      FUN_0024af28();
      temp_v2 = DAT_00447a48 + *(short *)(DAT_00447a48 + 0xe) * 0x28;
      if ((*(char *)(temp_v2 + 0x40) != '\0') ||
         (temp_v3 = FUN_002ae16c(*(unsigned int *)(temp_v2 + 0x34)), temp_v3 != 0)) {
        temp_v3 = DAT_00447a48;
        if (*(short *)(temp_v2 + 0x32) == 0xe) {
          *(unsigned char *)(DAT_00447a48 + 0x14) = 1;
          *(int *)(temp_v3 + 0x18) = (int)*(short *)(temp_v3 + 0xe);
        }
        FUN_002a06c8(*(unsigned int *)(temp_v2 + 0x34),1);
        *(unsigned char *)(temp_v2 + 0x1c) = 1;
        *(unsigned char *)(temp_v2 + 0x1d) = 1;
        temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0x20) = temp_v4;
        temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0x24) = temp_v4;
        temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0x28) = temp_v4;
        temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0x2c) = temp_v4;
        *(unsigned short *)(temp_v2 + 0x30) = 0;
        temp_v3 = DAT_00447a48;
        *(int *)(temp_v2 + 0x38) = *(short *)(DAT_00447a48 + 0xc) + 0x2000;
        *(unsigned short *)(temp_v2 + 0x3c) = *(unsigned short *)(temp_v1 + 0xc);
        *(unsigned short *)(temp_v2 + 0x3e) = *(unsigned short *)(temp_v1 + 0xe);
        *(int *)(temp_v3 + 0x10) = *(int *)(temp_v3 + 0x10) + 1;
        *(short *)(temp_v3 + 0xc) = *(short *)(temp_v3 + 0xc) + 1;
        *(unsigned short *)(temp_v3 + 10) = 0;
      }
    }
    else {
      temp_v1 = (int)*(short *)(DAT_00447a48 + 0xc);
      FUN_0024af28();
      temp_v2 = DAT_00447a48 + *(short *)(DAT_00447a48 + 0xe) * 0x28;
      *(unsigned short *)(temp_v2 + 0x32) = *(unsigned short *)(temp_v1 + 2);
      FUN_002be7fc(temp_v5,&LAB_0027d320);
      if (*(short *)(temp_v2 + 0x32) != 0xe) {
        temp_v4 = FUN_0029a2d0(temp_v5,7);
        *(unsigned int *)(temp_v2 + 0x34) = temp_v4;
      }
      else {
        if (*(char *)(DAT_00447a48 + 0x14) != '\0') {
          temp_v4 = FUN_0028549c(*(unsigned int *)
                                (DAT_00447a48 + *(int *)(DAT_00447a48 + 0x18) * 0x28 + 0x34),1);
          *(unsigned int *)(temp_v2 + 0x34) = temp_v4;
          *(unsigned char *)(temp_v2 + 0x40) = 1;
          *(short *)(DAT_00447a48 + 10) = *(short *)(DAT_00447a48 + 10) + 1;
          goto LAB_0027d200;
        }
        temp_v4 = FUN_0029a2d0(temp_v5,0x38);
        *(unsigned int *)(temp_v2 + 0x34) = temp_v4;
      }
      *(unsigned char *)(temp_v2 + 0x40) = 0;
      *(short *)(DAT_00447a48 + 10) = *(short *)(DAT_00447a48 + 10) + 1;
    }
    return 0;
  }
  pcVar6 = (char *)(int)*(short *)(DAT_00447a48 + 0xc);
  temp_v1 = FUN_0030f728();
  if ((int)pcVar6 < temp_v1) {
    do {
      pcVar2 = pcVar6;
      FUN_0024af28();
      if (((-1 < *pcVar2) && ((int)*pcVar2 == (int)*(short *)(DAT_00447a48 + 6))) &&
         ((int)pcVar2[1] == (int)*(short *)(DAT_00447a48 + 8))) {
        temp_v0 = *(short *)(pcVar2 + 0xe);
        if (((*(short *)(pcVar2 + 0xc) == 0) ||
            (temp_v1 = FUN_002c0ba8((int)*(short *)(pcVar2 + 0xc)), temp_v1 != 0)) &&
           ((temp_v0 == 0 || (temp_v1 = FUN_002c0ba8((int)temp_v0), temp_v1 == 0)))) {
          temp_v1 = DAT_00447a48;
          temp_v2 = 0;
          *(short *)(DAT_00447a48 + 0xc) = (short)pcVar6;
LAB_0027d10c:
          if (*(char *)(temp_v1 + temp_v2 * 0x28 + 0x1c) != '\0') {
            temp_v2 = temp_v2 + 1;
            if (temp_v2 < 0x18) goto LAB_0027d10c;
            temp_v2 = -1;
          }
          *(short *)(temp_v1 + 0xe) = (short)temp_v2;
          if ((short)temp_v2 != -1) {
            *(short *)(temp_v1 + 10) = *(short *)(temp_v1 + 10) + 1;
            return 0;
          }
          *(unsigned short *)(temp_v1 + 10) = 99;
          return 1;
        }
      }
      pcVar6 = pcVar6 + 1;
      temp_v1 = FUN_0030f728();
    } while ((int)pcVar6 < temp_v1);
  }
  *(unsigned short *)(DAT_00447a48 + 10) = 99;
  return 1;
}
