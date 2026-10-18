/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b52ec` (_code @ 0x3b52ec, 0x32c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int DAT_00570280; /* 0x570280 */
extern int DAT_005f15fc; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */
extern signed char DAT_005f1623; /* 0x5f1623 */

extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_00187180. */
/* Supplied declaration required: FUN_0018719c. */
/* Supplied declaration required: FUN_00192748. */
extern int FUN_00192798(void);
extern int FUN_0032526c(void);
extern unsigned int FUN_00376f94(void);
extern int FUN_004185ec(short);


unsigned char * FUN_003b52ec(void)

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
  
  temp_v0 = FUN_00162e8c();
  temp_v1 = FUN_0032526c();
  if (DAT_005f1623 != '\0') {
    temp_v2 = FUN_00376f94();
    if (temp_v2 != 0) {
      temp_v6 = 0;
      FUN_00187180(0x23,7);
      temp_v3 = FUN_00192748();
      if (0 < temp_v3 + *(int *)(DAT_00570280 + 0x41c)) {
        do {
          temp_v4 = FUN_00187180(0x23,7);
          temp_v3 = FUN_00192798();
          temp_v5 = FUN_00192748(temp_v4);
          if (temp_v6 < temp_v5) {
            pbVar8 = (unsigned char *)(temp_v3 + temp_v6 * 0xc);
          }
          else if (temp_v6 >= temp_v5 + *(int *)(DAT_00570280 + 0x41c)) {
            pbVar8 = (unsigned char *)0x0;
          }
          else {
            pbVar8 = (unsigned char *)(*(int *)(DAT_00570280 + 0x420) + (temp_v6 - temp_v5) * 0xc);
          }
          temp_v5 = (unsigned int)*pbVar8;
          temp_v7 = temp_v5 == 2;
          if (temp_v7) {
            temp_v5 = (unsigned int)(char)pbVar8[3];
          }
          if (temp_v7 && temp_v5 == temp_v2) {
            if (*(short *)(pbVar8 + 4) != 0) {
              temp_v3 = FUN_0018719c();
              if (temp_v3 != 0) {
                if (*(short *)(pbVar8 + 6) != 0) goto LAB_003b53e8;
                if (((*(short *)(pbVar8 + 8) == 0) ||
                    (temp_v3 = FUN_004185ec(*(short *)(pbVar8 + 8)), temp_v3 != 0)) &&
                   (*(short *)(pbVar8 + 10) != 1 || temp_v1 != 0)) {
                  if (*(unsigned int *)(temp_v0 + 0xe88) == temp_v6) {
                    return (unsigned char *)0x0;
                  }
                  *(unsigned int *)(temp_v0 + 0xe88) = temp_v6;
                  return pbVar8;
                }
              }
            }
            else if (*(short *)(pbVar8 + 6) != 0) {
LAB_003b53e8:
              temp_v3 = FUN_0018719c((int)*(short *)(pbVar8 + 6));
              if (temp_v3 == 0) {
                if (((*(short *)(pbVar8 + 8) == 0) ||
                    (temp_v3 = FUN_004185ec(*(short *)(pbVar8 + 8)), temp_v3 != 0)) &&
                   (*(short *)(pbVar8 + 10) != 1 || temp_v1 != 0)) {
                  if (*(unsigned int *)(temp_v0 + 0xe88) == temp_v6) {
                    return (unsigned char *)0x0;
                  }
                  *(unsigned int *)(temp_v0 + 0xe88) = temp_v6;
                  return pbVar8;
                }
              }
            }
          }
          temp_v6 = temp_v6 + 1;
          FUN_00187180(0x23,7);
          temp_v3 = FUN_00192748();
        } while ((int)temp_v6 < temp_v3 + *(int *)(DAT_00570280 + 0x41c));
      }
    }
  }
  else {
    temp_v6 = 0;
    FUN_00187180(0x23,7);
    temp_v3 = FUN_00192748();
    if (0 < temp_v3 + *(int *)(DAT_00570280 + 0x41c)) {
      do {
        temp_v4 = FUN_00187180(0x23,7);
        temp_v3 = FUN_00192798();
        temp_v2 = FUN_00192748(temp_v4);
        if (temp_v6 < temp_v2) {
          pbVar8 = (unsigned char *)(temp_v3 + temp_v6 * 0xc);
        }
        else if (temp_v6 >= temp_v2 + *(int *)(DAT_00570280 + 0x41c)) {
          pbVar8 = (unsigned char *)0x0;
        }
        else {
          pbVar8 = (unsigned char *)(*(int *)(DAT_00570280 + 0x420) + (temp_v6 - temp_v2) * 0xc);
        }
        if (((*pbVar8 == 1) && ((char)pbVar8[1] == DAT_005f15fc)) &&
           ((char)pbVar8[2] == DAT_005f1600)) {
          if (*(short *)(pbVar8 + 4) != 0) {
            temp_v3 = FUN_0018719c();
            if (temp_v3 != 0) {
              if (*(short *)(pbVar8 + 6) != 0) goto LAB_003b5564;
LAB_003b558c:
              if (((*(short *)(pbVar8 + 8) == 0) ||
                  (temp_v3 = FUN_004185ec(*(short *)(pbVar8 + 8)), temp_v3 != 0)) &&
                 (*(short *)(pbVar8 + 10) != 1 || temp_v1 != 0)) {
                if (*(unsigned int *)(temp_v0 + 0xe88) == temp_v6) {
                  return (unsigned char *)0x0;
                }
                *(unsigned int *)(temp_v0 + 0xe88) = temp_v6;
                return pbVar8;
              }
            }
          }
          else if (*(short *)(pbVar8 + 6) != 0) {
LAB_003b5564:
            temp_v3 = FUN_0018719c((int)*(short *)(pbVar8 + 6));
            if (temp_v3 == 0) goto LAB_003b558c;
          }
        }
        temp_v6 = temp_v6 + 1;
        FUN_00187180(0x23,7);
        temp_v3 = FUN_00192748();
      } while ((int)temp_v6 < temp_v3 + *(int *)(DAT_00570280 + 0x41c));
    }
  }
  *(unsigned int *)(temp_v0 + 0xe88) = 0xffffffff;
  return (unsigned char *)0x0;
}
