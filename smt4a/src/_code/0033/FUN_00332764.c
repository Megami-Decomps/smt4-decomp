/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00332764` (_code @ 0x332764, 0x85c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char DAT_0060fc08; /* 0x60fc08 */
extern int DAT_0060fd08; /* 0x60fd08 */
extern int DAT_0060fd0c; /* 0x60fd0c */
extern int DAT_0060ff94; /* 0x60ff94 */
extern int DAT_0060ff98; /* 0x60ff98 */
extern int DAT_0060ffa0; /* 0x60ffa0 */
extern int DAT_006105e4; /* 0x6105e4 */

extern int FUN_0014bef4(unsigned int);
extern int FUN_00162e8c(void);
extern int FUN_003683b8(int);
extern int FUN_00376f94(void);


void FUN_00332764(void)

{
/* irregular: 2 goto(s) */
  char temp_v0;
  unsigned char temp_v1;
  char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  char temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar11;
  unsigned char *puVar12;
  int *piVar13;
  int temp_v10;
  int unaff_r7;
  int temp_v11;
  unsigned int temp_v12;
  unsigned char *puVar17;
  int *piVar18;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  
  temp_v3 = FUN_00162e8c();
  *(unsigned char *)(temp_v3 + 0xe09) = 0;
  *(unsigned char *)(temp_v3 + 0xe0a) = 0;
  *(unsigned char *)(temp_v3 + 0xe0b) = 0;
  temp_v9 = DAT_0060fd0c;
  temp_v5 = DAT_0060fd08;
  temp_v11 = 0;
  puVar17 = (unsigned char *)0x0;
  temp_v8 = 0;
  temp_v4 = 0;
  if (DAT_0060ff94 >= 2) {
    temp_v8 = DAT_0060ff94 - 1;
    if (0 < temp_v8) {
      piVar13 = (int *)0x60fd14;
      piVar18 = (int *)0x60fd18;
      piVar11 = (int *)0x60fd1c;
      do {
        temp_v4 = *piVar13;
        piVar13 = piVar13 + 3;
        temp_v4 = temp_v5 - temp_v4;
        temp_v11 = temp_v9 - *piVar18;
        if (temp_v4 < 0) {
          temp_v4 = -temp_v4;
        }
        if (temp_v11 < 0) {
          temp_v11 = -temp_v11;
        }
        temp_v8 = temp_v8 - 1;
        piVar18 = piVar18 + 3;
        *piVar11 = temp_v4 + temp_v11;
        piVar11 = piVar11 + 3;
      } while (temp_v8 != 0);
    }
    temp_v8 = 1;
    if (temp_v8 < DAT_0060ff94 - 1) {
      do {
        temp_v4 = temp_v8 + 1;
        if (temp_v4 < DAT_0060ff94) {
          do {
            temp_v11 = *(int *)(temp_v8 * 0xc + 0x60fd10);
            temp_v13 = *(int *)(temp_v4 * 0xc + 0x60fd10);
            if (temp_v13 < temp_v11) {
              temp_v12 = (&DAT_0060fd0c)[temp_v4 * 3];
              temp_v14 = (&DAT_0060fd08)[temp_v8 * 3];
              temp_v15 = (&DAT_0060fd0c)[temp_v8 * 3];
              (&DAT_0060fd08)[temp_v8 * 3] = (&DAT_0060fd08)[temp_v4 * 3];
              (&DAT_0060fd0c)[temp_v8 * 3] = temp_v12;
              *(int *)(temp_v8 * 0xc + 0x60fd10) = temp_v13;
              (&DAT_0060fd08)[temp_v4 * 3] = temp_v14;
              (&DAT_0060fd0c)[temp_v4 * 3] = temp_v15;
              *(int *)(temp_v4 * 0xc + 0x60fd10) = temp_v11;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < DAT_0060ff94);
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < DAT_0060ff94 - 1);
    }
    if (DAT_0060ff94 / 2 >= 2) {
      temp_v8 = FUN_0014bef4((DAT_0060ff94 / 2 - 1U) & 0xffff);
      unaff_r7 = (DAT_0060ff94 - temp_v8) - 1;
      if (*(int *)(unaff_r7 * 0xc + 0x60fd10) < 5) {
        unaff_r7 = DAT_0060ff94 - 1;
      }
    }
    else {
      unaff_r7 = DAT_0060ff94 - 1;
    }
    temp_v11 = (&DAT_0060fd08)[unaff_r7 * 3];
    puVar17 = (unsigned char *)(&DAT_0060fd0c)[unaff_r7 * 3];
    *(char *)(temp_v3 + 0xe00) = (char)temp_v5;
    *(char *)(temp_v3 + 0xe01) = (char)temp_v9;
    *(char *)(temp_v3 + 0xe02) = (char)temp_v11;
    *(char *)(temp_v3 + 0xe03) = (char)puVar17;
    *(unsigned char *)(temp_v3 + temp_v9 * 0x78 + temp_v5 * 8 + 0x3e) = 1;
    *(unsigned char *)(temp_v3 + (int)puVar17 * 0x78 + temp_v11 * 8 + 0x3f) = 1;
    temp_v8 = temp_v5;
    temp_v4 = temp_v9;
  }
  temp_v5 = FUN_00376f94();
  if (temp_v5 < 100) {
    temp_v5 = 0;
    if ('\0' < *(char *)(temp_v3 + 0xe05)) {
      do {
        temp_v9 = 0;
        if ('\0' < *(char *)(temp_v3 + 0xe04)) {
          do {
            temp_v8 = temp_v3 + temp_v5 * 0x78 + temp_v9 * 8;
            if (*(char *)(temp_v8 + 0x3c) == '\x02') {
              temp_v6 = (unsigned int)(*(char *)(temp_v8 + 0x34) == '\x01');
              if (*(char *)(temp_v8 + 0x44) == '\x01') {
                temp_v6 = temp_v6 | 2;
              }
              if (*(char *)(temp_v8 - 0x3c) == '\x01') {
                temp_v6 = temp_v6 | 4;
              }
              if (*(char *)(temp_v8 + 0xb4) == '\x01') {
                temp_v6 = temp_v6 | 8;
              }
              temp_v0 = *(char *)(temp_v6 + 0x5814a4);
              if (((temp_v0 == '\0' || temp_v0 == '\x10') ||
                  ((temp_v0 == '\x11' || temp_v0 == '\x12') || temp_v0 == '\x13')) &&
                 (DAT_0060ff98 < 0x10)) {
                *(int *)(DAT_0060ff98 * 8 + 0x60fdc8) = temp_v9;
                *(int *)(DAT_0060ff98 * 8 + 0x60fdcc) = temp_v5;
                DAT_0060ff98 = DAT_0060ff98 + 1;
              }
            }
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < *(char *)(temp_v3 + 0xe04));
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < *(char *)(temp_v3 + 0xe05));
    }
    if (DAT_0060ff98 < 1) {
      return;
    }
    temp_v5 = FUN_0014bef4((DAT_0060ff98 - 1U) & 0xffff);
    *(unsigned char *)(temp_v3 + 0xe09) = 1;
    *(char *)(temp_v3 + 0xe0a) = (char)*(unsigned int *)(temp_v5 * 8 + 0x60fdc8);
    *(char *)(temp_v3 + 0xe0b) = (char)*(unsigned int *)(temp_v5 * 8 + 0x60fdcc);
    return;
  }
  temp_v5 = FUN_003683b8((int)*(float *)(temp_v3 + 0x15c4));
  if (temp_v5 != 1) {
    if (temp_v5 == 2) {
      temp_v13 = temp_v3 + temp_v4 * 0x78;
      temp_v11 = temp_v13 + temp_v8 * 8;
      temp_v5 = 0;
      temp_v9 = 0;
      temp_v6 = (unsigned int)(*(char *)(temp_v11 + 0x34) == '\x01');
      if (*(char *)(temp_v11 + 0x44) == '\x01') {
        temp_v6 = temp_v6 | 2;
      }
      if (*(char *)(temp_v11 - 0x3c) == '\x01') {
        temp_v6 = temp_v6 | 4;
      }
      if (*(char *)(temp_v11 + 0xb4) == '\x01') {
        temp_v6 = temp_v6 | 8;
      }
      temp_v0 = *(char *)(temp_v6 + 0x5814a4);
      if (temp_v0 == '@') {
        temp_v11 = 0;
        do {
          if (*(char *)(temp_v3 + (temp_v4 + temp_v11) * 0x78 + temp_v8 * 8 + 0x3c) == '\x01') {
            temp_v9 = (temp_v4 + temp_v11) - 1;
            temp_v5 = temp_v8;
            break;
          }
          temp_v11 = temp_v11 + 1;
        } while (temp_v11 < 0xf);
      }
      else if (temp_v0 == 'A') {
        temp_v11 = 0;
        do {
          if (*(char *)(temp_v13 + (temp_v8 - temp_v11) * 8 + 0x3c) == '\x01') {
            temp_v5 = (temp_v8 - temp_v11) + 1;
            temp_v9 = temp_v4;
            break;
          }
          temp_v11 = temp_v11 + 1;
        } while (temp_v11 < 0xf);
      }
      else if (temp_v0 == 'B') {
        temp_v11 = 0;
        do {
          if (*(char *)(temp_v3 + (temp_v4 - temp_v11) * 0x78 + temp_v8 * 8 + 0x3c) == '\x01') {
            temp_v5 = temp_v8;
            temp_v9 = (temp_v4 - temp_v11) + 1;
            break;
          }
          temp_v11 = temp_v11 + 1;
        } while (temp_v11 < 0xf);
      }
      else if (temp_v0 == 'C') {
        temp_v11 = 0;
        do {
          if (*(char *)(temp_v13 + (temp_v8 + temp_v11) * 8 + 0x3c) == '\x01') {
            temp_v5 = (temp_v8 + temp_v11) - 1;
            temp_v9 = temp_v4;
            break;
          }
          temp_v11 = temp_v11 + 1;
        } while (temp_v11 < 0xf);
      }
      *(unsigned char *)(temp_v3 + 0x166c) = 0;
      temp_v2 = (char)temp_v5;
      *(unsigned char *)(temp_v3 + 0xe09) = 1;
      temp_v5 = temp_v3 + 0xe00;
      temp_v7 = (char)temp_v9;
      *(char *)(temp_v3 + 0xe0a) = temp_v2;
      *(char *)(temp_v3 + 0xe0b) = temp_v7;
      temp_v9 = (int)*(char *)(temp_v3 + 0xe02);
      if (temp_v2 == temp_v9) {
        temp_v5 = (int)*(char *)(temp_v3 + 0xe03);
      }
      if (!(temp_v2 != temp_v9 || temp_v5 != temp_v7)) {
        temp_v11 = 1;
        if (temp_v11 < DAT_0060ff94) {
          do {
            if (unaff_r7 != temp_v11) {
              *(unsigned char *)(temp_v3 + temp_v5 * 0x78 + temp_v9 * 8 + 0x3f) = 0;
              temp_v5 = (&DAT_0060fd08)[temp_v11 * 3];
              temp_v9 = (&DAT_0060fd0c)[temp_v11 * 3];
              *(char *)(temp_v3 + 0xe02) = (char)temp_v5;
              *(char *)(temp_v3 + 0xe03) = (char)temp_v9;
              *(unsigned char *)(temp_v3 + temp_v9 * 0x78 + temp_v5 * 8 + 0x3f) = 1;
              goto LAB_00332d68;
            }
            temp_v11 = temp_v11 + 1;
          } while (temp_v11 < DAT_0060ff94);
        }
        if (temp_v0 != '@') {
          if (temp_v0 != 'A') {
            if (temp_v0 != 'B') {
              if (temp_v0 == 'C') {
                temp_v1 = 0x43;
                temp_v8 = temp_v8 + 1;
                temp_v7 = (char)temp_v4;
                temp_v2 = (char)temp_v8;
                *(unsigned char *)(temp_v3 + 0x166c) = temp_v1;
              }
            }
            else {
              temp_v1 = 0x42;
              temp_v4 = temp_v4 - 1;
              temp_v7 = (char)temp_v4;
              temp_v2 = (char)temp_v8;
              *(unsigned char *)(temp_v3 + 0x166c) = temp_v1;
            }
          }
          else {
            temp_v1 = 0x41;
            temp_v8 = temp_v8 - 1;
            temp_v7 = (char)temp_v4;
            temp_v2 = (char)temp_v8;
            *(unsigned char *)(temp_v3 + 0x166c) = temp_v1;
          }
        }
        else {
          temp_v1 = 0x40;
          temp_v4 = temp_v4 + 1;
          temp_v7 = (char)temp_v4;
          temp_v2 = (char)temp_v8;
          *(unsigned char *)(temp_v3 + 0x166c) = temp_v1;
        }
        *(unsigned char *)(temp_v3 + 0xe09) = 1;
        *(char *)(temp_v3 + 0xe0a) = temp_v2;
        *(char *)(temp_v3 + 0xe0b) = temp_v7;
      }
    }
  }
  else {
    if (DAT_0060ff94 >= 3) {
      temp_v5 = FUN_0014bef4((DAT_0060ff94 - 3U) & 0xffff);
      temp_v13 = 0;
      temp_v9 = 0;
      if (temp_v9 < DAT_0060ff94) {
        do {
          puVar12 = &DAT_0060fc08 + temp_v9 * 0xc;
          temp_v10 = (&DAT_0060fd08)[temp_v9 * 3];
          if (temp_v10 == temp_v8) {
            unaff_r7 = (&DAT_0060fd0c)[temp_v9 * 3];
          }
          if (temp_v10 != temp_v8 || unaff_r7 != temp_v4) {
            if (temp_v10 == temp_v11) {
              puVar12 = (unsigned char *)(&DAT_0060fd0c)[temp_v9 * 3];
            }
            if (temp_v10 != temp_v11 || puVar12 != puVar17) {
              if (temp_v5 == temp_v13) {
                if (temp_v9 != -1) {
                  *(unsigned char *)(temp_v3 + 0xe09) = 1;
                  *(char *)(temp_v3 + 0xe0a) = (char)(&DAT_0060fd08)[temp_v9 * 3];
                  temp_v1 = (unsigned char)(&DAT_0060fd0c)[temp_v9 * 3];
                  goto LAB_00332b10;
                }
                break;
              }
              temp_v13 = temp_v13 + 1;
            }
          }
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < DAT_0060ff94);
      }
    }
    temp_v5 = 0;
    if ('\0' < *(char *)(temp_v3 + 0xe05)) {
      do {
        temp_v9 = 0;
        if ('\0' < *(char *)(temp_v3 + 0xe04)) {
          do {
            temp_v8 = temp_v3 + temp_v5 * 0x78 + temp_v9 * 8;
            if (*(char *)(temp_v8 + 0x3c) == '\x02') {
              temp_v6 = (unsigned int)(*(char *)(temp_v8 + 0x34) == '\x01');
              if (*(char *)(temp_v8 + 0x44) == '\x01') {
                temp_v6 = temp_v6 | 2;
              }
              if (*(char *)(temp_v8 - 0x3c) == '\x01') {
                temp_v6 = temp_v6 | 4;
              }
              if (*(char *)(temp_v8 + 0xb4) == '\x01') {
                temp_v6 = temp_v6 | 8;
              }
              temp_v0 = *(char *)(temp_v6 + 0x5814a4);
              if (((temp_v0 == '0' || temp_v0 == '1') || (temp_v0 == '2' || temp_v0 == '3')) &&
                 (DAT_006105e4 < 0x10)) {
                *(int *)(DAT_006105e4 * 8 + 0x6105e8) = temp_v9;
                *(int *)(DAT_006105e4 * 8 + 0x6105ec) = temp_v5;
                DAT_006105e4 = DAT_006105e4 + 1;
              }
            }
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < *(char *)(temp_v3 + 0xe04));
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < *(char *)(temp_v3 + 0xe05));
    }
    if (0 < DAT_006105e4) {
      temp_v5 = FUN_0014bef4((DAT_006105e4 - 1U) & 0xffff);
      *(unsigned char *)(temp_v3 + 0xe09) = 1;
      *(char *)(temp_v3 + 0xe0a) = (char)*(unsigned int *)(temp_v5 * 8 + 0x6105e8);
      temp_v1 = (unsigned char)*(unsigned int *)(temp_v5 * 8 + 0x6105ec);
LAB_00332b10:
      *(unsigned char *)(temp_v3 + 0xe0b) = temp_v1;
    }
  }
LAB_00332d68:
  temp_v5 = 0;
  *(unsigned char *)(temp_v3 + 0x1664) = 0;
  if ('\0' < *(char *)(temp_v3 + 0xe05)) {
    do {
      temp_v9 = 0;
      if ('\0' < *(char *)(temp_v3 + 0xe04)) {
        do {
          temp_v8 = temp_v3 + temp_v5 * 0x78 + temp_v9 * 8;
          if (*(char *)(temp_v8 + 0x3c) == '\x02') {
            temp_v6 = (unsigned int)(*(char *)(temp_v8 + 0x34) == '\x01');
            if (*(char *)(temp_v8 + 0x44) == '\x01') {
              temp_v6 = temp_v6 | 2;
            }
            if (*(char *)(temp_v8 - 0x3c) == '\x01') {
              temp_v6 = temp_v6 | 4;
            }
            if (*(char *)(temp_v8 + 0xb4) == '\x01') {
              temp_v6 = temp_v6 | 8;
            }
            if ((*(char *)(temp_v6 + 0x5814a4) == '\0') && (DAT_0060ffa0 < 0x10)) {
              *(int *)(DAT_0060ffa0 * 8 + 0x60fe48) = temp_v9;
              *(int *)(DAT_0060ffa0 * 8 + 0x60fe4c) = temp_v5;
              DAT_0060ffa0 = DAT_0060ffa0 + 1;
            }
          }
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < *(char *)(temp_v3 + 0xe04));
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(char *)(temp_v3 + 0xe05));
  }
  if (0 < DAT_0060ffa0) {
    temp_v5 = FUN_0014bef4((DAT_0060ffa0 - 1U) & 0xffff);
    *(unsigned char *)(temp_v3 + 0x1664) = 1;
    *(char *)(temp_v3 + 0x1665) = (char)*(unsigned int *)(temp_v5 * 8 + 0x60fe48);
    *(char *)(temp_v3 + 0x1666) = (char)*(unsigned int *)(temp_v5 * 8 + 0x60fe4c);
  }
  return;
}
