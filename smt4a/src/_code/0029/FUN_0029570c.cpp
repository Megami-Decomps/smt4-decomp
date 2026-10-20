/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029570c` (_code @ 0x29570c, 0x4d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5cb4(void);

extern int DAT_00581270; /* 0x581270 */
extern int g_lmapScene; /* 0x581288 */
extern signed char DAT_005f161f; /* 0x5f161f */
extern int DAT_005f1844; /* 0x5f1844 */

/* Supplied declaration required: FUN_002b5cb4. */


void FUN_0029570c(void)

{
/* irregular: 9 unstructured edge(s); 5 goto(s); 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  char *pcVar7;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  
  if (DAT_005f161f == '\0') {
    temp_v7 = 0;
    temp_v10 = 0x3c23d70a;
    do {
      temp_v5 = DAT_00581270 + temp_v7 * 0x44;
      pcVar7 = (char *)(temp_v5 + 0x14);
      if (*pcVar7 != '\0') {
        switch(*(int *)(temp_v5 + 0x18)) {
        case 0:
          if (DAT_005f1844 != 0) {
            temp_v2 = 0;
            do {
              if (pcVar7[temp_v2 + 0x2c] == DAT_005f1844) {
                if (*(char *)(DAT_00581270 + 0x10) != '\0') {
                  temp_v2 = *(int *)(temp_v5 + 0x54);
                  *(unsigned char *)(temp_v5 + 0x15) = 1;
                  *(unsigned char *)(temp_v5 + 0x24) = 1;
                  *(unsigned int *)(temp_v5 + 0x38) = 1;
                  *(unsigned int *)(temp_v5 + 0x1c) = 0;
                  *(unsigned int *)(temp_v5 + 0x18) = 3;
                  if (temp_v2 != -1) {
                    temp_v1 = *(int *)(temp_v5 + 0x3c);
joined_r0x00295908:
                    if (temp_v1 == 1) {
                      temp_v2 = DAT_00581270 + temp_v2 * 0x2c;
                      temp_v2 = temp_v2 + 0x1114;
                      *(unsigned char *)(temp_v2 + 1) = 1;
                      *(unsigned int *)(temp_v2 + 0x14) = *(unsigned int *)(temp_v5 + 0x38);
                    }
                    else {
                      temp_v2 = DAT_00581270 + temp_v2 * 0x2c;
                      temp_v2 = temp_v2 + 0x12a0;
                      *(unsigned char *)(temp_v2 + 1) = 1;
                      *(unsigned int *)(temp_v2 + 0x14) = *(unsigned int *)(temp_v5 + 0x38);
                    }
                  }
                }
                else {
                  temp_v9 = *(float *)(g_lmapScene + 0x1c);
                  FUN_002b5cb4();
                  if (0x4395ffff >= (int)temp_v9) {
                    temp_v2 = *(int *)(temp_v5 + 0x54);
                    *(unsigned char *)(temp_v5 + 0x15) = 1;
                    *(unsigned char *)(temp_v5 + 0x24) = 1;
                    *(unsigned int *)(temp_v5 + 0x38) = 1;
                    *(unsigned int *)(temp_v5 + 0x1c) = 0;
                    *(unsigned int *)(temp_v5 + 0x18) = 3;
                    if (temp_v2 != -1) {
                      if (*(int *)(temp_v5 + 0x3c) == 1) {
                        temp_v2 = DAT_00581270 + temp_v2 * 0x2c;
                        temp_v2 = temp_v2 + 0x1114;
                      }
                      else {
                        temp_v2 = DAT_00581270 + temp_v2 * 0x2c;
                        temp_v2 = temp_v2 + 0x12a0;
                      }
                      *(unsigned char *)(temp_v2 + 1) = 1;
                      *(unsigned int *)(temp_v2 + 0x14) = *(unsigned int *)(temp_v5 + 0x38);
                    }
                  }
                  else {
                    *(int *)(temp_v5 + 0x18) = *(int *)(temp_v5 + 0x18) + 1;
                    *(unsigned int *)(temp_v5 + 0x1c) = 0;
                    *(int *)(temp_v5 + 0x20) = (int)(temp_v9 * (float)temp_v10);
                  }
                }
                goto LAB_002959d0;
              }
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < 8);
          }
LAB_00295930:
          *(int *)(temp_v5 + 0x1c) = *(int *)(temp_v5 + 0x1c) + 1;
          break;
        case 1:
          temp_v2 = *(int *)(temp_v5 + 0x1c) + 1;
          *(int *)(temp_v5 + 0x1c) = temp_v2;
          if (*(int *)(temp_v5 + 0x20) <= temp_v2) {
            temp_v2 = *(int *)(temp_v5 + 0x54);
            *(unsigned char *)(temp_v5 + 0x15) = 1;
            *(unsigned char *)(temp_v5 + 0x24) = 1;
            *(unsigned int *)(temp_v5 + 0x38) = 0;
            *(unsigned int *)(temp_v5 + 0x18) = 2;
            *(unsigned int *)(temp_v5 + 0x1c) = 0;
            if (temp_v2 != -1) {
              temp_v1 = *(int *)(temp_v5 + 0x3c);
              goto joined_r0x00295908;
            }
          }
          break;
        case 2:
          temp_v2 = *(int *)(temp_v5 + 0x1c) + 1;
          *(int *)(temp_v5 + 0x1c) = temp_v2;
          if (temp_v2 >= 0x10) {
            temp_v2 = *(int *)(temp_v5 + 0x54);
            *(unsigned char *)(temp_v5 + 0x15) = 1;
            *(unsigned int *)(temp_v5 + 0x38) = 1;
            *(unsigned int *)(temp_v5 + 0x1c) = 0;
            *(unsigned int *)(temp_v5 + 0x18) = 3;
            if (temp_v2 != -1) {
              temp_v1 = *(int *)(temp_v5 + 0x3c);
              goto joined_r0x00295908;
            }
          }
          break;
        case 3:
          if (DAT_005f1844 != 0) {
            temp_v2 = 0;
            do {
              if (pcVar7[temp_v2 + 0x2c] == DAT_005f1844) goto LAB_00295930;
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < 8);
          }
          *(int *)(temp_v5 + 0x18) = *(int *)(temp_v5 + 0x18) + 1;
          *(unsigned int *)(temp_v5 + 0x1c) = 0;
          *(unsigned char *)(temp_v5 + 0x15) = 1;
          *(unsigned int *)(temp_v5 + 0x38) = 2;
          if (*(int *)(temp_v5 + 0x54) != -1) {
            temp_v2 = DAT_00581270 + *(int *)(temp_v5 + 0x54) * 0x2c;
            if (*(int *)(temp_v5 + 0x3c) != 1) {
              temp_v2 = temp_v2 + 0x12a0;
              *(unsigned char *)(temp_v2 + 1) = 1;
              *(unsigned int *)(temp_v2 + 0x14) = *(unsigned int *)(temp_v5 + 0x38);
              break;
            }
            temp_v2 = temp_v2 + 0x1114;
            *(unsigned char *)(temp_v2 + 1) = 1;
            *(unsigned int *)(temp_v2 + 0x14) = *(unsigned int *)(temp_v5 + 0x38);
          }
          break;
        case 4:
          temp_v2 = *(int *)(temp_v5 + 0x1c) + 1;
          *(int *)(temp_v5 + 0x1c) = temp_v2;
          if (temp_v2 >= 0x10) {
            *(unsigned char *)(temp_v5 + 0x15) = 1;
            *(unsigned char *)(temp_v5 + 0x24) = 0;
            *(unsigned int *)(temp_v5 + 0x18) = 0;
            *(unsigned int *)(temp_v5 + 0x1c) = 0;
          }
        }
      }
LAB_002959d0:
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 0x40);
    temp_v7 = 0;
    do {
      temp_v5 = DAT_00581270 + temp_v7 * 0x44;
      if (((*(char *)(temp_v5 + 0x14) != '\0') && (*(char *)(temp_v5 + 0x24) == '\0')) &&
         (*(int *)(temp_v5 + 0x54) != -1)) {
        temp_v2 = DAT_00581270 + *(int *)(temp_v5 + 0x54) * 0x2c;
        if (*(int *)(temp_v5 + 0x3c) == 1) {
          temp_v2 = temp_v2 + 0x1114;
        }
        else {
          temp_v2 = temp_v2 + 0x12a0;
        }
        *(unsigned int *)(temp_v2 + 0x28) = 0xffffffff;
        *(unsigned char *)(temp_v2 + 2) = 0;
        *(unsigned char *)(temp_v2 + 1) = 1;
        *(unsigned int *)(temp_v5 + 0x54) = 0xffffffff;
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 0x40);
    temp_v7 = 0;
    do {
      temp_v5 = DAT_00581270;
      temp_v2 = DAT_00581270 + temp_v7 * 0x44;
      temp_v8 = *(char *)(temp_v2 + 0x14) != '\0';
      temp_v0 = '\0';
      if (temp_v8) {
        temp_v0 = *(char *)(temp_v2 + 0x24);
      }
      if ((temp_v8 && temp_v0 != '\0') && (*(int *)(temp_v2 + 0x54) == -1)) {
        if (*(int *)(temp_v2 + 0x3c) == 1) {
          temp_v1 = 0;
          do {
            temp_v3 = DAT_00581270 + temp_v1 * 0x2c;
            if ((*(char *)(temp_v3 + 0x1114) != '\0') && (*(int *)(temp_v3 + 0x113c) == -1)) {
              *(int *)(temp_v3 + 0x113c) = temp_v7;
              goto LAB_00295b64;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 9);
          temp_v1 = -1;
        }
        else if ((*(char *)(DAT_00581270 + 0x12a0) != '\0') &&
                (*(int *)(DAT_00581270 + 0x12c8) == -1)) {
          *(int *)(DAT_00581270 + 0x12c8) = temp_v7;
          temp_v1 = 0;
        }
        else if ((*(char *)(DAT_00581270 + 0x12cc) != '\0') &&
                (*(int *)(DAT_00581270 + 0x12f4) == -1)) {
          *(int *)(DAT_00581270 + 0x12f4) = temp_v7;
          temp_v1 = 1;
        }
        else if ((*(char *)(DAT_00581270 + 0x12f8) != '\0') &&
                (*(int *)(DAT_00581270 + 0x1320) == -1)) {
          *(int *)(DAT_00581270 + 0x1320) = temp_v7;
          temp_v1 = 2;
        }
        else {
          temp_v1 = -1;
        }
LAB_00295b64:
        *(int *)(temp_v2 + 0x54) = temp_v1;
        if (temp_v1 != -1) {
          temp_v5 = temp_v5 + temp_v1 * 0x2c;
          if (*(int *)(temp_v2 + 0x3c) == 1) {
            temp_v5 = temp_v5 + 0x1114;
          }
          else {
            temp_v5 = temp_v5 + 0x12a0;
          }
          *(unsigned char *)(temp_v5 + 1) = 1;
          *(unsigned char *)(temp_v5 + 2) = 1;
          temp_v4 = *(unsigned int *)(temp_v2 + 0x2c);
          temp_v6 = *(unsigned int *)(temp_v2 + 0x30);
          *(unsigned int *)(temp_v5 + 4) = *(unsigned int *)(temp_v2 + 0x28);
          *(unsigned int *)(temp_v5 + 8) = temp_v4;
          *(unsigned int *)(temp_v5 + 0xc) = temp_v6;
          *(unsigned int *)(temp_v5 + 0x10) = *(unsigned int *)(temp_v2 + 0x34);
          *(unsigned int *)(temp_v5 + 0x14) = *(unsigned int *)(temp_v2 + 0x38);
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 0x40);
    *(unsigned char *)(DAT_00581270 + 0x10) = 0;
  }
  return;
}

} /* extern "C" */
