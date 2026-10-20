/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399c90` (_code @ 0x399c90, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001886bc(void);
int FUN_002e0e04(int, short [248], unsigned int);
int FUN_002e59f8(short [248], unsigned char [528], int);
int FUN_002e6dd0(unsigned char [528], unsigned int);
int FUN_0042b2c0(void);

extern unsigned char *DAT_005b40c4; /* 0x5b40c4 */

/* Supplied declaration required: FUN_001886bc. */
/* Supplied declaration required: FUN_002e0e04. */
/* Supplied declaration required: FUN_002e59f8. */
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: FUN_0042b2c0. */


void FUN_00399c90(unsigned int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int unaff_r10;
  short asStack_420 [248];
  unsigned char temp_v3 [528];
  
  FUN_002e0e04(param_2,asStack_420,param_1);
  if (param_2 == 0) {
    return;
  }
  temp_v0 = 0;
  do {
    temp_v2 = temp_v0;
    if (asStack_420[temp_v0] == 0) break;
    temp_v0 = temp_v0 + 1;
    temp_v2 = 0xf8;
  } while (temp_v0 < 0xf8);
  if (0 < temp_v2) {
    unaff_r10 = 0x1f2;
  }
  temp_v1 = 0;
  temp_v0 = 0;
  if (temp_v0 < temp_v2) {
    do {
      if ((asStack_420[temp_v0] == 0x2f) && (temp_v1 = temp_v1 + 1, temp_v1 != 1)) {
        FUN_002e6dd0(temp_v3,unaff_r10);
        FUN_002e59f8(asStack_420,temp_v3,temp_v0 * 2 + 2);
        FUN_001886bc();
        puVar2 = temp_v3;
        FUN_0042b2c0();
        if ((int)puVar2 < 0) {
          if (((((unsigned int)puVar2 & 0x3fc00) == 0x4400) && (((unsigned int)puVar2 & 0x3ff) >= 100)) &&
             (((unsigned int)puVar2 & 0x3ff) < 0xb4)) {
            DAT_005b40c4 = puVar2;
            return;
          }
          if (((unsigned int)puVar2 & 0x3fc00) != 0x4400) {
            DAT_005b40c4 = puVar2;
            return;
          }
          if (((unsigned int)puVar2 & 0x3ff) < 0xb4) {
            DAT_005b40c4 = puVar2;
            return;
          }
          if (((unsigned int)puVar2 & 0x3ff) >= 200) {
            DAT_005b40c4 = puVar2;
            return;
          }
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < temp_v2);
  }
  DAT_005b40c4 = (unsigned char *)0x0;
  return;
}

} /* extern "C" */
