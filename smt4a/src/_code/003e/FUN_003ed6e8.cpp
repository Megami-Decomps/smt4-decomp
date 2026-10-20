/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ed6e8` (_code @ 0x3ed6e8, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_003eaf20(void);

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */
extern unsigned int DAT_005739f0; /* 0x5739f0 */
extern unsigned int DAT_005739f4; /* 0x5739f4 */
extern unsigned int DAT_00573a20; /* 0x573a20 */
extern unsigned int DAT_00573a24; /* 0x573a24 */
extern unsigned int DAT_00573a28; /* 0x573a28 */
extern unsigned int DAT_00573a2c; /* 0x573a2c */
extern unsigned int DAT_00573a50; /* 0x573a50 */
extern unsigned int DAT_00573a54; /* 0x573a54 */
extern unsigned int DAT_00573ae8; /* 0x573ae8 */
extern unsigned int DAT_00573aec; /* 0x573aec */

extern int FUN_001633a0(unsigned int);
/* Supplied declaration required: FUN_00184310. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_003eaf20. */


char FUN_003ed6e8(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int *puVar6;
  
  temp_v1 = param_1[0x1168];
  temp_v3 = param_1[0x1169];
  if (((((DAT_005739f4 & temp_v3) == 0 && (DAT_005739f0 & temp_v1) == 0) &&
       ((temp_v3 & DAT_00573a2c) == 0 && (temp_v1 & DAT_00573a28) == 0)) &&
      ((DAT_00573a20 & temp_v1) == 0 && (DAT_00573a24 & temp_v3) == 0)) &&
     (((temp_v3 & DAT_00573aec) == 0 && (DAT_00573ae8 & temp_v1) == 0 &&
      (temp_v2 = FUN_0018719c(0x1f9), temp_v2 == 0)))) {
    puVar6 = param_1 + 0x135b;
    *puVar6 = 0;
    puVar4 = param_1;
    FUN_003eaf20();
    if (puVar4 == (unsigned int *)0x0) {
      return '\0';
    }
    if (((DAT_00573978 & *puVar4) != 0 || (DAT_0057397c & puVar4[1]) != 0) &&
       ((puVar4[1] & DAT_005739a4) == 0 && (DAT_005739a0 & *puVar4) == 0)) {
      if (puVar4[0x100] == 0) {
        return '\0';
      }
      temp_v1 = (unsigned int)*(unsigned short *)(puVar4[0x100] + 0x62);
      FUN_00184310();
      temp_v0 = '\0';
      if (temp_v1 != 0) {
        temp_v0 = *(char *)(temp_v1 + 0xb2);
      }
      if (temp_v1 == 0 || temp_v0 == '\0') {
        return temp_v0;
      }
      if ((param_1[0x1169] & DAT_00573a54) != 0 || (param_1[0x1168] & DAT_00573a50) != 0) {
        *puVar6 = param_1[0x135c];
        return '\x01';
      }
      temp_v2 = FUN_001633a0(99);
      if (temp_v2 <= (int)(unsigned int)*(unsigned char *)(temp_v1 + 0xb2)) {
        temp_v2 = FUN_001633a0(99);
        if (temp_v2 < 0x28) {
          temp_v1 = 1;
        }
        else if (temp_v2 < 0x46) {
          temp_v1 = 2;
        }
        else if (temp_v2 < 0x5a) {
          temp_v1 = 3;
        }
        else {
          temp_v1 = 4;
        }
        *puVar6 = temp_v1;
        return '\x01';
      }
    }
  }
  return '\0';
}

} /* extern "C" */
