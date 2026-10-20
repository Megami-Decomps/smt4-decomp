/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e9964` (_code @ 0x3e9964, 0x1bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_003e9964_arg0 fn_003e9964_arg0;
struct fn_003e9964_arg0 {
    unsigned char pad_0x0[0x12c];
    int field_0x12c; /* +0x12c */
    unsigned char pad_0x130[0x4470];
    unsigned char field_0x45a0; /* +0x45a0 */
    unsigned char pad_0x45a1[0x3];
    unsigned char field_0x45a4; /* +0x45a4 */
    unsigned char pad_0x45a5[0x8a7];
    byte field_0x4e4c; /* +0x4e4c */
    unsigned char pad_0x4e4d[0x1];
    ushort field_0x4e4e; /* +0x4e4e */
};

extern unsigned int DAT_0057392c; /* 0x57392c */
extern int DAT_00573934; /* 0x573934 */
extern unsigned int DAT_005739f0; /* 0x5739f0 */
extern unsigned int DAT_005739f4; /* 0x5739f4 */
extern unsigned int DAT_00573ae8; /* 0x573ae8 */
extern unsigned int DAT_00573aec; /* 0x573aec */

extern int FUN_004bd340(int, unsigned int);


unsigned int FUN_003e9964(fn_003e9964_arg0 *param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  if (param_1->field_0x4e4c != 0) {
    param_1->field_0x4e4c = 0;
    temp_v4 = param_1->field_0x12c != 0;
    temp_v3 = 0;
    if (temp_v4) {
      temp_v3 = DAT_0057392c;
    }
    if (temp_v4 && temp_v3 != 0) {
      if ((DAT_00573934 != 0) && (temp_v0 = FUN_004bd340(DAT_00573934,1), temp_v0 == 0)) {
        return 1;
      }
      temp_v0 = 0;
      if (*(char *)(DAT_0057392c + 0x1ca3) != '\0') {
        do {
          temp_v1 = DAT_0057392c + temp_v0 * 300;
          temp_v2 = temp_v1 + 0x68;
          temp_v3 = DAT_0057392c;
          if (temp_v2 != 0) {
            temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0xca);
          }
          if ((temp_v2 != 0 && temp_v3 != 0) && (temp_v1 = FUN_004bd340(temp_v2,1), temp_v1 == 0)) {
            return 1;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < (int)(unsigned int)*(unsigned char *)(DAT_0057392c + 0x1ca3));
      }
    }
  }
  else if (((*(unsigned int *)&param_1->field_0x45a4 & DAT_005739f4) != 0 ||
            (*(unsigned int *)&param_1->field_0x45a0 & DAT_005739f0) != 0) && (param_1->field_0x4e4e != 0))
  {
    if ((DAT_00573aec & *(unsigned int *)&param_1->field_0x45a4) != 0 ||
        (*(unsigned int *)&param_1->field_0x45a0 & DAT_00573ae8) != 0) {
      return 1;
    }
    temp_v4 = param_1->field_0x12c != 0;
    temp_v3 = 0;
    if (temp_v4) {
      temp_v3 = DAT_0057392c;
    }
    if (temp_v4 && temp_v3 != 0) {
      if ((DAT_00573934 != 0) && (temp_v0 = FUN_004bd340(DAT_00573934,1), temp_v0 == 0)) {
        return 1;
      }
      temp_v0 = 0;
      if (*(char *)(DAT_0057392c + 0x1ca3) != '\0') {
        do {
          temp_v1 = DAT_0057392c + temp_v0 * 300;
          temp_v2 = temp_v1 + 0x68;
          temp_v3 = DAT_0057392c;
          if (temp_v2 != 0) {
            temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0xca);
          }
          if ((temp_v2 != 0 && temp_v3 != 0) && (temp_v1 = FUN_004bd340(temp_v2,1), temp_v1 == 0)) {
            return 1;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < (int)(unsigned int)*(unsigned char *)(DAT_0057392c + 0x1ca3));
      }
    }
  }
  return 0;
}

} /* extern "C" */
