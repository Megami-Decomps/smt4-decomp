/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00276840` (_code @ 0x276840, 0x32c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int DAT_00433158; /* 0x433158 */
extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */
extern signed char DAT_0049f942; /* 0x49f942 */

extern int FUN_00275a38(void);
extern unsigned int FUN_002857e4(void);
extern int FUN_00299064(short);
/* Supplied declaration required: FUN_002c0ba8. */
/* Supplied declaration required: FUN_002c0e4c. */
extern int FUN_002c0e9c(void);
/* Supplied declaration required: FUN_002c0ec4. */
extern int FUN_002c2b1c(void);


unsigned char * FUN_00276840(void)

{
/* irregular: 3 goto(s); 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char *pbVar8;
  unsigned char temp_v7;
  
  temp_v0 = FUN_002c2b1c();
  temp_v1 = FUN_00275a38();
  if (DAT_0049f942 != '\0') {
    temp_v2 = FUN_002857e4();
    if (temp_v2 != 0) {
      temp_v6 = 0;
      FUN_002c0ec4(0x23,7);
      temp_v3 = FUN_002c0e4c();
      if (0 < temp_v3 + *(int *)(DAT_00433158 + 0x41c)) {
        do {
          temp_v4 = FUN_002c0ec4(0x23,7);
          temp_v3 = FUN_002c0e9c();
          temp_v5 = FUN_002c0e4c(temp_v4);
          if (temp_v6 < temp_v5) {
            pbVar8 = (unsigned char *)(temp_v3 + temp_v6 * 0xc);
          }
          else if (temp_v6 >= temp_v5 + *(int *)(DAT_00433158 + 0x41c)) {
            pbVar8 = (unsigned char *)0x0;
          }
          else {
            pbVar8 = (unsigned char *)(*(int *)(DAT_00433158 + 0x420) + (temp_v6 - temp_v5) * 0xc);
          }
          temp_v5 = (unsigned int)*pbVar8;
          temp_v7 = temp_v5 == 2;
          if (temp_v7) {
            temp_v5 = (unsigned int)(char)pbVar8[3];
          }
          if (temp_v7 && temp_v5 == temp_v2) {
            if (*(short *)(pbVar8 + 4) != 0) {
              temp_v3 = FUN_002c0ba8();
              if (temp_v3 != 0) {
                if (*(short *)(pbVar8 + 6) != 0) goto LAB_0027693c;
                if (((*(short *)(pbVar8 + 8) == 0) ||
                    (temp_v3 = FUN_00299064(*(short *)(pbVar8 + 8)), temp_v3 != 0)) &&
                   (*(short *)(pbVar8 + 10) != 1 || temp_v1 != 0)) {
                  if (*(unsigned int *)(temp_v0 + 0xe54) == temp_v6) {
                    return (unsigned char *)0x0;
                  }
                  *(unsigned int *)(temp_v0 + 0xe54) = temp_v6;
                  return pbVar8;
                }
              }
            }
            else if (*(short *)(pbVar8 + 6) != 0) {
LAB_0027693c:
              temp_v3 = FUN_002c0ba8((int)*(short *)(pbVar8 + 6));
              if (temp_v3 == 0) {
                if (((*(short *)(pbVar8 + 8) == 0) ||
                    (temp_v3 = FUN_00299064(*(short *)(pbVar8 + 8)), temp_v3 != 0)) &&
                   (*(short *)(pbVar8 + 10) != 1 || temp_v1 != 0)) {
                  if (*(unsigned int *)(temp_v0 + 0xe54) == temp_v6) {
                    return (unsigned char *)0x0;
                  }
                  *(unsigned int *)(temp_v0 + 0xe54) = temp_v6;
                  return pbVar8;
                }
              }
            }
          }
          temp_v6 = temp_v6 + 1;
          FUN_002c0ec4(0x23,7);
          temp_v3 = FUN_002c0e4c();
        } while ((int)temp_v6 < temp_v3 + *(int *)(DAT_00433158 + 0x41c));
      }
    }
  }
  else {
    temp_v6 = 0;
    FUN_002c0ec4(0x23,7);
    temp_v3 = FUN_002c0e4c();
    if (0 < temp_v3 + *(int *)(DAT_00433158 + 0x41c)) {
      do {
        temp_v4 = FUN_002c0ec4(0x23,7);
        temp_v3 = FUN_002c0e9c();
        temp_v2 = FUN_002c0e4c(temp_v4);
        if (temp_v6 < temp_v2) {
          pbVar8 = (unsigned char *)(temp_v3 + temp_v6 * 0xc);
        }
        else if (temp_v6 >= temp_v2 + *(int *)(DAT_00433158 + 0x41c)) {
          pbVar8 = (unsigned char *)0x0;
        }
        else {
          pbVar8 = (unsigned char *)(*(int *)(DAT_00433158 + 0x420) + (temp_v6 - temp_v2) * 0xc);
        }
        if (((*pbVar8 == 1) && ((char)pbVar8[1] == DAT_0049f91c)) &&
           ((char)pbVar8[2] == DAT_0049f920)) {
          if (*(short *)(pbVar8 + 4) != 0) {
            temp_v3 = FUN_002c0ba8();
            if (temp_v3 != 0) {
              if (*(short *)(pbVar8 + 6) != 0) goto LAB_00276ab8;
LAB_00276ae0:
              if (((*(short *)(pbVar8 + 8) == 0) ||
                  (temp_v3 = FUN_00299064(*(short *)(pbVar8 + 8)), temp_v3 != 0)) &&
                 (*(short *)(pbVar8 + 10) != 1 || temp_v1 != 0)) {
                if (*(unsigned int *)(temp_v0 + 0xe54) == temp_v6) {
                  return (unsigned char *)0x0;
                }
                *(unsigned int *)(temp_v0 + 0xe54) = temp_v6;
                return pbVar8;
              }
            }
          }
          else if (*(short *)(pbVar8 + 6) != 0) {
LAB_00276ab8:
            temp_v3 = FUN_002c0ba8((int)*(short *)(pbVar8 + 6));
            if (temp_v3 == 0) goto LAB_00276ae0;
          }
        }
        temp_v6 = temp_v6 + 1;
        FUN_002c0ec4(0x23,7);
        temp_v3 = FUN_002c0e4c();
      } while ((int)temp_v6 < temp_v3 + *(int *)(DAT_00433158 + 0x41c));
    }
  }
  *(unsigned int *)(temp_v0 + 0xe54) = 0xffffffff;
  return (unsigned char *)0x0;
}
