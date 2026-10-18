/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114474` (_code @ 0x114474, 0x1800 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern signed char DAT_0043e188; /* 0x43e188 */
extern int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */
extern int DAT_0049381c; /* 0x49381c */
extern int DAT_00493820; /* 0x493820 */
extern unsigned int DAT_00493824; /* 0x493824 */
extern signed char DAT_00493828; /* 0x493828 */
extern signed char DAT_00493829; /* 0x493829 */
extern signed char DAT_0049382a; /* 0x49382a */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00124324. */
/* Supplied declaration required: FUN_00124594. */
/* Supplied declaration required: FUN_00126058. */
extern int FUN_0012650c(unsigned int);
/* Supplied declaration required: FUN_001269fc. */
/* Supplied declaration required: FUN_002b8234. */
/* Supplied declaration required: FUN_002b8244. */
/* Supplied declaration required: FUN_002b827c. */
/* Supplied declaration required: FUN_002b8454. */
extern unsigned short FUN_002b8584(unsigned int, unsigned int);
extern int FUN_002b8660(void);
extern int FUN_002b8694(void);
extern int FUN_002b86bc(void);
extern int FUN_002b8740(void);
extern int FUN_002b879c(void);
extern int FUN_002b8804(void);
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002b898c. */
extern int FUN_002b89a4(unsigned int);
/* Supplied declaration required: FUN_002b89e4. */
/* Supplied declaration required: FUN_002b8b4c. */
/* Supplied declaration required: FUN_002b8cc8. */
extern int FUN_002b8cec(unsigned int);
extern int FUN_002b8d54(void);
extern int FUN_002b8d68(void);
/* Supplied declaration required: FUN_002b8d80. */
extern int FUN_002b8d90(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b8da0. */
/* Supplied declaration required: FUN_002b8db0. */
/* Supplied declaration required: FUN_002b8dc0. */
/* Supplied declaration required: FUN_002b8e84. */
/* Supplied declaration required: FUN_002b8ee0. */
/* Supplied declaration required: FUN_002bc01c. */
/* Supplied declaration required: FUN_002bc02c. */
extern int FUN_002bc088(void);
/* Supplied declaration required: FUN_002bf818. */
extern int FUN_002c08f0(void);
extern int FUN_002c15fc(unsigned int);
/* Supplied declaration required: FUN_002c1658. */
/* Supplied declaration required: FUN_002c49f8. */
/* Supplied declaration required: FUN_002c53f4. */


unsigned int FUN_00114474(void)

{
/* irregular: 24 goto(s); irregular input(s): in_fpscr; 27 native warning(s); review required */
  short *psVar1;
  short temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  char temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned int in_fpscr;
  float temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned long long temp_v16;
  
  temp_v3 = FUN_002c08f0();
  if (DAT_0043e190 == temp_v3) {
    temp_v7 = *(char *)(temp_v3 + 0x7d);
    temp_v10 = temp_v7 == '\0';
    if (temp_v10) {
      temp_v7 = *(char *)(temp_v3 + 0x7e);
    }
    if (!temp_v10 || temp_v7 != '\0') {
      if (*(char *)(temp_v3 + 0x82) != '\x01') {
        if (*(char *)(temp_v3 + 0x82) == '\x02') {
          temp_v6 = FUN_002bf818(temp_v3 + 0x7e0);
          if (temp_v6 != 0) {
            *(unsigned char *)(temp_v3 + 0x82) = 3;
          }
        }
      }
      else {
        temp_v6 = FUN_002bf818(temp_v3 + 0x7e0);
        if (temp_v6 != 0) {
          *(unsigned char *)(temp_v3 + 0x82) = 3;
        }
      }
      if ((*(char *)(DAT_0043e190 + 0xa0) == '\x01') && (*(char *)(DAT_0043e190 + 0x7de) != '\0')) {
        *(unsigned char *)(DAT_0043e190 + 0xa0) = 2;
      }
      switch(*(unsigned char *)(temp_v3 + 0x7c)) {
      case 1:
        if ((*(char *)(DAT_0043e18c + 0x5f) == '\0') &&
           (temp_v6 = FUN_002b8ee0(temp_v3 + 0x754,0), temp_v6 != 0)) {
          *(unsigned char *)(temp_v3 + 0x7c) = 2;
        }
        break;
      case 3:
        if (*(char *)(temp_v3 + 0x7d) != '\0') {
          if (*(int *)(temp_v3 + 0x70) != 0) {
            temp_v6 = *(int *)(temp_v3 + 100);
            if (temp_v6 < 0xb) {
              temp_v4 = *(int *)(temp_v3 + 0x70) / 10;
              temp_v5 = *(int *)(temp_v3 + 0x74) - temp_v4;
              *(unsigned int *)(temp_v3 + 0x74) = temp_v5;
              *(int *)(temp_v3 + 0x6c) = temp_v4 + *(int *)(temp_v3 + 0x6c);
              if (temp_v6 == 0) {
                temp_v5 = (unsigned int)*(unsigned char *)(temp_v3 + 0x81);
              }
              if (temp_v6 == 0 && temp_v5 == 0) {
                FUN_002b8e84(0x1000170);
              }
              temp_v6 = *(int *)(temp_v3 + 0x6c);
              if (temp_v6 < 1) {
                temp_v6 = 0;
              }
              *(int *)(temp_v3 + 0x6c) = temp_v6;
              if (temp_v6 >= 1000000000) {
                temp_v6 = 999999999;
              }
              *(int *)(temp_v3 + 0x6c) = temp_v6;
              if (*(int *)(temp_v3 + 100) != 10) {
                if (*(int *)(temp_v3 + 100) >= 0x14) {
                  *(unsigned char *)(temp_v3 + 0x7c) = 0;
                  *(unsigned int *)(temp_v3 + 0x78) = *(unsigned int *)(temp_v3 + 0x6c);
                }
              }
              else {
                temp_v6 = *(int *)(temp_v3 + 0x78) + *(int *)(temp_v3 + 0x70);
                *(int *)(temp_v3 + 0x6c) = temp_v6;
                if (temp_v6 < 1) {
                  temp_v6 = 0;
                }
                *(unsigned int *)(temp_v3 + 0x74) = 0;
                *(int *)(temp_v3 + 0x6c) = temp_v6;
                if (temp_v6 >= 1000000000) {
                  temp_v6 = 999999999;
                }
                *(int *)(temp_v3 + 0x6c) = temp_v6;
              }
            }
            else if (*(int *)(temp_v3 + 100) >= 0x14) {
              *(unsigned char *)(temp_v3 + 0x7c) = 0;
              *(unsigned int *)(temp_v3 + 0x78) = *(unsigned int *)(temp_v3 + 0x6c);
            }
          }
          else {
            *(unsigned char *)(temp_v3 + 0x7c) = 0;
            *(unsigned int *)(temp_v3 + 0x78) = *(unsigned int *)(temp_v3 + 0x6c);
          }
        }
        if (*(char *)(temp_v3 + 0x7e) != '\0') {
          if (*(int *)(temp_v3 + 0x70) != 0) {
            if (*(int *)(temp_v3 + 100) == 0) {
              temp_v6 = *(int *)(temp_v3 + 0x70) + *(int *)(temp_v3 + 0x78);
              *(int *)(temp_v3 + 0x6c) = temp_v6;
              if (temp_v6 < 1) {
                temp_v6 = 0;
              }
              *(unsigned int *)(temp_v3 + 0x74) = 0;
              *(int *)(temp_v3 + 0x6c) = temp_v6;
              temp_v6 = FUN_002b8dc0(*(unsigned int *)(temp_v3 + 0x68));
              if (temp_v6 < *(int *)(temp_v3 + 0x6c)) {
                temp_v14 = FUN_002b8dc0(*(unsigned int *)(temp_v3 + 0x68));
                *(unsigned int *)(temp_v3 + 0x6c) = temp_v14;
              }
            }
            if (*(int *)(temp_v3 + 100) < 10) {
              *(int *)(temp_v3 + 100) = *(int *)(temp_v3 + 100) + 1;
              break;
            }
          }
          *(unsigned char *)(temp_v3 + 0x7c) = 0;
          *(unsigned int *)(temp_v3 + 0x78) = *(unsigned int *)(temp_v3 + 0x6c);
        }
        *(int *)(temp_v3 + 100) = *(int *)(temp_v3 + 100) + 1;
        break;
      case 4:
        temp_v6 = FUN_002bf818(temp_v3 + 0x754);
        if (temp_v6 != 0) {
          *(unsigned char *)(temp_v3 + 0x7d) = 0;
          *(unsigned char *)(temp_v3 + 0x7e) = 0;
        }
      }
    }
    temp_v6 = DAT_0043e190;
    switch(*(unsigned char *)(DAT_0043e190 + 0x88)) {
    case 1:
      if ((*(char *)(DAT_0043e18c + 0x5f) == '\0') &&
         (FUN_002b8ee0(DAT_0043e190 + 0x984,0), *(char *)(DAT_0043e190 + 0xa0e) != '\0')) {
        *(unsigned char *)(temp_v6 + 0x88) = 2;
      }
      break;
    case 3:
      if (*(int *)(DAT_0043e190 + 0x84) >= 1) {
        if (*(int *)(DAT_0043e190 + 0x84) == 10) {
          FUN_002b8e84(0x1000170);
        }
        *(int *)(temp_v6 + 0x84) = *(int *)(temp_v6 + 0x84) - 1;
        temp_v13 = (float)VectorUnsignedToFloat
                                  (*(unsigned short *)(temp_v6 + 0x98) / 10,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v13 = *(float *)(temp_v6 + 0x94) - temp_v13;
        *(float *)(temp_v6 + 0x94) = temp_v13;
        temp_v14 = VectorFloatToUnsigned(temp_v13,3);
        *(short *)(temp_v6 + 0x90) = (short)temp_v14;
      }
      else {
        psVar1 = (short *)(DAT_0043e190 + 0x92);
        temp_v0 = *(short *)(DAT_0043e190 + 0x98);
        *(unsigned char *)(DAT_0043e190 + 0x88) = 0;
        *(short *)(temp_v6 + 0x90) = *psVar1 - temp_v0;
        FUN_00124594(temp_v0);
      }
      break;
    case 4:
      temp_v4 = FUN_002bf818(DAT_0043e190 + 0x984);
      if (temp_v4 != 0) {
        *(unsigned char *)(temp_v6 + 0x88) = 2;
      }
    }
  }
  temp_v5 = (unsigned int)*(unsigned char *)(temp_v3 + 8);
  temp_v15 = 0x3f800000;
  temp_v14 = 0;
  temp_v16 = 0x3f80000000000000;
  switch(temp_v5) {
  case 1:
    FUN_002b8db0(*(unsigned int *)(temp_v3 + 4),8);
    if (*(char *)(temp_v3 + 9) == '\f') {
      temp_v6 = 0;
      if (temp_v6 < *(int *)(temp_v3 + 0x24)) {
        do {
          temp_v4 = temp_v3 + temp_v6;
          if (*(char *)(temp_v4 + 0x37) != '\0') {
            temp_v7 = *(char *)(temp_v4 + 0x41) + '\x01';
            *(char *)(temp_v4 + 0x41) = temp_v7;
            if ('\x05' < temp_v7) {
              *(unsigned char *)(temp_v4 + 0x41) = 0;
            }
            FUN_002b8da0(temp_v3 + temp_v6 * 0x8c + 0x498,(int)*(char *)(temp_v4 + 0x41) / 2 + 0x8b);
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < *(int *)(temp_v3 + 0x24));
      }
      if (*(char *)(temp_v3 + 0x83) == '\0') {
        temp_v6 = 0;
        FUN_002c1658(0,1);
        if (temp_v6 == 0) {
          if (*(char *)(temp_v3 + 0x83) == '\0') {
            temp_v6 = 9;
            FUN_002c1658(9,2);
            if ((temp_v6 != 0) ||
               ((*(char *)(temp_v3 + 0x83) == '\0' && (temp_v6 = FUN_002c15fc(6), temp_v6 != 0))))
            goto LAB_001149c8;
          }
          goto LAB_001149b8;
        }
      }
      else {
LAB_001149b8:
        if (DAT_00493829 == '\0') break;
      }
LAB_001149c8:
      if ((*(unsigned int *)(temp_v3 + 0xc) & 8) != 0) {
        if (DAT_00493829 != '\0') {
          DAT_00493829 = '\0';
          DAT_0049381c = 0;
          DAT_0049382a = '\0';
        }
        else {
          FUN_002bc01c(0x100016c);
        }
        if (temp_v3 != 0) {
          temp_v7 = *(char *)(temp_v3 + 8);
          goto joined_r0x00114a10;
        }
      }
      break;
    }
    if (*(char *)(temp_v3 + 0x36) != '\0') {
      FUN_002c49f8(*(unsigned int *)(temp_v3 + 4),0x20);
    }
    temp_v7 = *(char *)(temp_v3 + 9);
    if (((((temp_v7 != '\x01' && temp_v7 != '\x02') && (temp_v7 != '\x03' && temp_v7 != '\x04')) &&
         (temp_v7 != '\x05' && temp_v7 != '\x10')) &&
        ((temp_v7 != '\x11' && temp_v7 != '\x12' && (temp_v7 != '\x06' && temp_v7 != '\a')))) &&
       (temp_v7 != '\b' && temp_v7 != '\t')) {
      temp_v11 = 0;
      temp_v12 = 0;
      temp_v6 = *(int *)(temp_v3 + 0x18);
      temp_v10 = 0;
      if (temp_v7 == '\v') {
        FUN_002bf818(temp_v3 + 0x380);
        if (0 < *(int *)(temp_v3 + 0x60)) {
          *(int *)(temp_v3 + 0x60) = *(int *)(temp_v3 + 0x60) - 1;
        }
        temp_v9 = *(int *)(temp_v3 + 0x20);
        temp_v8 = FUN_002b8d68();
        temp_v4 = FUN_002b8d54();
        if ((temp_v4 != 1) && (temp_v4 = FUN_002b8d54(), temp_v4 != 2)) {
          temp_v4 = FUN_002b8d54();
          if (((temp_v4 == 6) && (*(short *)(temp_v3 + 0x56) <= temp_v8)) &&
             (temp_v8 <= *(short *)(temp_v3 + temp_v9 * 2 + 0x54))) {
            temp_v10 = 1;
            *(int *)(temp_v3 + 0x18) = temp_v8 - *(short *)(temp_v3 + 0x56);
          }
        }
        else if ((*(short *)(temp_v3 + 0x56) <= temp_v8) &&
                ((temp_v8 <= *(short *)(temp_v3 + temp_v9 * 2 + 0x54) &&
                 (temp_v8 = temp_v8 - *(short *)(temp_v3 + 0x56), *(int *)(temp_v3 + 0x18) = temp_v8,
                 temp_v8 != temp_v6)))) {
          FUN_002bc01c(0x100016c);
        }
        temp_v4 = FUN_002b8cec(5);
        if (temp_v4 == 0) {
          temp_v4 = FUN_002b8cec(6);
          if (temp_v4 == 0) {
            temp_v4 = FUN_002b8cec(0xe);
            if (((temp_v4 == 0) || (temp_v4 = FUN_002c15fc(5), temp_v4 != 0)) ||
               (temp_v4 = FUN_002c15fc(6), temp_v4 != 0)) {
              temp_v4 = FUN_002b8cec(0xf);
              if (((temp_v4 == 0) || (temp_v4 = FUN_002c15fc(6), temp_v4 != 0)) ||
                 (temp_v4 = FUN_002c15fc(5), temp_v4 != 0)) {
                if (*(char *)(temp_v3 + 0x83) == '\0') {
                  temp_v4 = 0;
                  FUN_002c1658(0,1);
                  if ((temp_v4 == 0 && !temp_v10) || (0 < *(int *)(temp_v3 + 0x60))) goto LAB_00114d48;
                  *(unsigned char *)(temp_v3 + 0x30) = 0;
                  *(unsigned char *)(temp_v3 + 0x31) = 0;
                  FUN_002bc01c(0x100016d);
                  temp_v4 = 0;
                  if (temp_v4 < temp_v9) {
                    do {
                      FUN_002b8cc8();
                      temp_v4 = temp_v4 + 1;
                    } while (temp_v4 < temp_v9);
                  }
                  if (*(char *)(temp_v3 + 0x2f) == '\0') {
                    temp_v7 = *(char *)(temp_v3 + 0x7d);
                    temp_v11 = temp_v7 == '\0';
                    if (temp_v11) {
                      temp_v7 = *(char *)(temp_v3 + 0x7e);
                    }
                    if ((!(temp_v11 && temp_v7 == '\0')) &&
                       (temp_v5 = *(unsigned int *)(temp_v3 + 0xc), (temp_v5 & 8) != 0)) {
                      *(unsigned char *)(temp_v3 + 8) = 5;
                      *(unsigned int *)(temp_v3 + 0xc) = temp_v5 & 0xfffffff7;
                    }
                  }
                  temp_v11 = 1;
                  *(unsigned char *)(temp_v3 + 0x2f) = 0;
                }
                else {
LAB_00114d48:
                  if (*(char *)(temp_v3 + 0x30) != '\0') {
                    temp_v4 = 1;
                    FUN_002c1658();
                    if (temp_v4 != 0) {
                      temp_v12 = *(char *)(temp_v3 + 0x31) == '\0';
                      if (!temp_v12) {
                        *(int *)(temp_v3 + 0x18) = temp_v9 - 1;
                        FUN_002b8b4c(temp_v3);
                      }
                      *(unsigned char *)(temp_v3 + 0x30) = 0;
                      *(unsigned char *)(temp_v3 + 0x31) = 0;
                      FUN_002bc01c(0x100016e);
                      temp_v4 = 0;
                      if (temp_v4 < temp_v9) {
                        do {
                          FUN_002b8cc8();
                          temp_v4 = temp_v4 + 1;
                        } while (temp_v4 < temp_v9);
                      }
                      if (*(char *)(temp_v3 + 0x2f) == '\0') {
                        temp_v7 = *(char *)(temp_v3 + 0x7d);
                        temp_v11 = temp_v7 == '\0';
                        if (temp_v11) {
                          temp_v7 = *(char *)(temp_v3 + 0x7e);
                        }
                        if ((!temp_v11 || temp_v7 != '\0') &&
                           (temp_v5 = *(unsigned int *)(temp_v3 + 0xc), (temp_v5 & 8) != 0)) {
                          *(unsigned char *)(temp_v3 + 8) = 5;
                          *(unsigned int *)(temp_v3 + 0xc) = temp_v5 & 0xfffffff7;
                        }
                      }
                      temp_v11 = 1;
                      *(unsigned char *)(temp_v3 + 0x2f) = 0;
                    }
                  }
                }
              }
              else {
                *(int *)(temp_v3 + 0x18) = *(int *)(temp_v3 + 0x18) + 1;
                FUN_002bc01c(0x100016c);
                *(unsigned int *)(temp_v3 + 0x60) = 0;
              }
            }
            else {
              *(int *)(temp_v3 + 0x18) = *(int *)(temp_v3 + 0x18) - 1;
              FUN_002bc01c(0x100016c);
              *(unsigned int *)(temp_v3 + 0x60) = 0;
            }
          }
          else {
            *(int *)(temp_v3 + 0x18) = *(int *)(temp_v3 + 0x18) + 1;
            FUN_002bc01c(0x100016c);
            *(unsigned int *)(temp_v3 + 0x60) = 0;
          }
        }
        else {
          *(int *)(temp_v3 + 0x18) = *(int *)(temp_v3 + 0x18) - 1;
          FUN_002bc01c(0x100016c);
          *(unsigned int *)(temp_v3 + 0x60) = 0;
        }
        temp_v4 = *(int *)(temp_v3 + 0x18);
        if (temp_v4 < 0) {
          temp_v4 = temp_v9 - 1;
          *(int *)(temp_v3 + 0x18) = temp_v4;
        }
        if (temp_v9 <= temp_v4) {
          *(unsigned int *)(temp_v3 + 0x18) = 0;
        }
      }
      if (*(char *)(temp_v3 + 9) == '\x13') {
        temp_v9 = *(int *)(temp_v3 + 0x20);
        temp_v4 = FUN_002b8d68();
        temp_v8 = FUN_002b8d54();
        if ((temp_v8 != 1) && (temp_v8 = FUN_002b8d54(), temp_v8 != 2)) {
          temp_v8 = FUN_002b8d54();
          if (((temp_v8 != 6) || (temp_v4 < *(short *)(temp_v3 + 0x56))) ||
             (*(short *)(temp_v3 + temp_v9 * 2 + 0x54) < temp_v4)) goto LAB_00114ea4;
          *(int *)(temp_v3 + 0x18) = temp_v4 - *(short *)(temp_v3 + 0x56);
        }
        else {
          if ((*(short *)(temp_v3 + 0x56) <= temp_v4) &&
             (temp_v4 <= *(short *)(temp_v3 + temp_v9 * 2 + 0x54))) {
            *(int *)(temp_v3 + 0x18) = temp_v4 - *(short *)(temp_v3 + 0x56);
          }
LAB_00114ea4:
          if (!temp_v10) goto LAB_00114ee0;
        }
        *(unsigned char *)(temp_v3 + 0x30) = 0;
        *(unsigned char *)(temp_v3 + 0x31) = 0;
        FUN_002bc01c(0x100016d);
        temp_v6 = 0;
        if (temp_v6 < temp_v9) {
          do {
            FUN_002b8cc8();
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < temp_v9);
        }
      }
      else {
LAB_00114ee0:
        if (!temp_v11) {
          if (*(int *)(temp_v3 + 0x18) != temp_v6) {
            FUN_002b8b4c(temp_v3);
          }
          break;
        }
      }
      if (temp_v12) {
        temp_v14 = 0xffffffff;
        *(unsigned int *)(temp_v3 + 0x18) = 0xffffffff;
      }
      else {
        temp_v14 = *(unsigned int *)(temp_v3 + 0x18);
      }
      *(unsigned int *)(temp_v3 + 0x1c) = temp_v14;
      temp_v6 = FUN_002bc088();
      if (temp_v6 != 0) {
        FUN_002bc02c();
      }
      temp_v5 = *(unsigned int *)(temp_v3 + 0xc);
      if ((temp_v5 & 8) != 0) {
        if (temp_v3 != 0) {
          temp_v5 = (unsigned int)*(unsigned char *)(temp_v3 + 8);
        }
        if (temp_v3 != 0 && temp_v5 != 0) {
          FUN_002b89e4(temp_v3,*(unsigned char *)(temp_v3 + 9));
          *(unsigned char *)(temp_v3 + 8) = 3;
          *(unsigned char *)(temp_v3 + 0x35) = 0;
        }
        temp_v6 = DAT_0043e18c;
        if ((*(char *)(DAT_0043e18c + 8) != '\x01' && DAT_0043e18c != 0) &&
            *(char *)(DAT_0043e18c + 8) != '\0') {
          FUN_002b89e4(DAT_0043e18c,*(unsigned char *)(DAT_0043e18c + 9));
          *(unsigned char *)(temp_v6 + 8) = 3;
          *(unsigned char *)(temp_v6 + 0x35) = 0;
        }
      }
      break;
    }
    FUN_002bf818(temp_v3 + 0x2f4);
    temp_v6 = FUN_002b8d90(*(unsigned int *)(temp_v3 + 4),0x20);
    if ((temp_v6 != 0) && (temp_v6 = FUN_002b8d90(*(unsigned int *)(temp_v3 + 4),0x40), temp_v6 != 0)) {
      temp_v1 = 4;
      goto LAB_00114fc0;
    }
    if ((*(char *)(temp_v3 + 0x2c) == '\0') &&
       (temp_v6 = FUN_002b8d90(*(unsigned int *)(temp_v3 + 4),0x10), temp_v6 == 0)) break;
    *(unsigned int *)(temp_v3 + 0x1c) = 0;
    if ((*(unsigned int *)(temp_v3 + 0xc) & 8) == 0) {
      *(unsigned char *)(temp_v3 + 0x35) = 1;
      *(unsigned char *)(temp_v3 + 8) = 0;
      FUN_002b8db0(*(unsigned int *)(temp_v3 + 4),0x20);
      FUN_002b8db0(*(unsigned int *)(temp_v3 + 4),0x40);
      FUN_002b8d80(*(unsigned int *)(temp_v3 + 4));
      break;
    }
    if (temp_v3 == 0) break;
    temp_v7 = *(char *)(temp_v3 + 8);
joined_r0x00114a10:
    if (temp_v7 != '\0') goto LAB_001158ec;
    goto LAB_00115ab4;
  case 2:
    temp_v7 = *(char *)(temp_v3 + 9);
    if (temp_v7 != '\f') {
      if (temp_v7 != '\v') {
        if (((!(temp_v7 == '\x02' || temp_v7 == '\x03')) && (!(temp_v7 == '\x04' || temp_v7 == '\x05'))) &&
           (!((temp_v7 == '\x10' || temp_v7 == '\x11') || temp_v7 == '\x12'))) {
          if (temp_v7 != '\x13') {
            if ((temp_v7 == '\a' || temp_v7 == '\b') || temp_v7 == '\t') {
              FUN_002bf818(temp_v3 + 0x40c);
            }
            temp_v6 = FUN_002bf818(temp_v3 + 0xc4);
            if (temp_v6 != 0) goto LAB_00115134;
          }
          else {
            FUN_002b8ee0(temp_v3 + 0xc4,0);
            if (*(char *)(temp_v3 + 0x14e) != '\0') {
              *(unsigned char *)(temp_v3 + 8) = 1;
              temp_v2 = FUN_002b8584(0x3a,0x98);
              *(unsigned short *)(temp_v3 + 0x56) = temp_v2;
              temp_v2 = FUN_002b8584(0x3a,0x99);
              *(unsigned short *)(temp_v3 + 0x58) = temp_v2;
              *(unsigned int *)(temp_v3 + 0x60) = 0;
            }
          }
        }
        else {
          FUN_002bf818(temp_v3 + 0x1dc);
          temp_v6 = FUN_002bf818(temp_v3 + 0xc4);
          if ((temp_v6 != 0) && (temp_v6 = FUN_002bf818(temp_v3 + 0x150), temp_v6 != 0)) {
            temp_v7 = *(char *)(temp_v3 + 0x266);
            goto joined_r0x001159d0;
          }
        }
        break;
      }
      FUN_002bf818(DAT_0043e18c + 0x2f4);
      temp_v6 = 0;
      FUN_002c1658(0,1);
      if (temp_v6 == 0) {
        temp_v6 = 9;
        FUN_002c1658(9,2);
        if (((temp_v6 != 0) || (temp_v6 = FUN_002c15fc(6), temp_v6 != 0)) || (DAT_00493828 != '\0'))
        goto LAB_001151a8;
LAB_001151d8:
        if (*(char *)(temp_v3 + 0x5f) == '\0') goto LAB_001151e4;
      }
      else {
LAB_001151a8:
        if (*(char *)(temp_v3 + 0x5f) != '\0') {
          *(unsigned char *)(temp_v3 + 0x5f) = 0;
          *(unsigned char *)(DAT_0043e18c + 0x5f) = 0;
          temp_v1 = FUN_002b898c();
          *(unsigned char *)(temp_v3 + 0xa12) = temp_v1;
          if (*(char *)(temp_v3 + 9) == '\v') {
            FUN_002bc01c(0x1000183);
          }
          goto LAB_001151d8;
        }
LAB_001151e4:
        FUN_002b8ee0(temp_v3 + 0xc4,0);
        FUN_002b8ee0(temp_v3 + 0x268,0);
        if (*(char *)(temp_v3 + 9) == '\v') {
          temp_v7 = *(char *)(temp_v3 + 0xa12);
          if (temp_v7 != -0x23) {
            if (temp_v7 != -0x70) {
              if (temp_v7 == -0x60) {
                temp_v14 = 0xa1;
                FUN_002b8838(temp_v14);
              }
              else if (temp_v7 != -0x57) {
                if (!((temp_v7 == -0x37 || temp_v7 == -0x36) || temp_v7 == -0x35)) {
                  if (*(char *)(temp_v3 + 0x30) != '\0') {
                    if (*(char *)(temp_v3 + 0x31) != '\0') {
                      if (*(char *)(temp_v3 + 0x32) != '\0') {
                        temp_v14 = 0x9d;
                      }
                      else {
                        temp_v14 = 0x9a;
                      }
                    }
                    else if (*(char *)(temp_v3 + 0x33) == '\0') {
                      temp_v14 = 0x9c;
                    }
                    else {
                      temp_v14 = 0xcd;
                    }
                  }
                  else {
                    temp_v6 = FUN_002b8804();
                    if ((((temp_v6 == 0) && (temp_v6 = FUN_002b879c(), temp_v6 == 0)) &&
                        ((temp_v6 = FUN_002b8740(), temp_v6 == 0 && (temp_v6 = FUN_002b86bc(), temp_v6 == 0)
                         ))) || ((temp_v6 = FUN_002b8694(), temp_v6 != 0 ||
                                 (temp_v6 = FUN_002b8660(), temp_v6 == 0)))) {
                      temp_v14 = 0x9b;
                    }
                    else {
                      temp_v14 = 0xd2;
                    }
                  }
                  FUN_002b8838(temp_v14);
                }
              }
              else {
                if (*(char *)(temp_v3 + 0x30) == '\0') {
                  temp_v14 = 0xab;
                }
                else {
                  temp_v14 = 0xaa;
                }
                FUN_002b8838(temp_v14);
              }
            }
            else {
              if (*(char *)(temp_v3 + 0x30) == '\0') {
                temp_v14 = 0x92;
              }
              else if (*(char *)(temp_v3 + 0x31) == '\0') {
                temp_v14 = 0x93;
              }
              else {
                temp_v14 = 0x91;
              }
              FUN_002b8838(temp_v14);
            }
          }
          else if (*(char *)(temp_v3 + 0x30) != '\0') {
            if (*(char *)(temp_v3 + 0x31) == '\0') {
              temp_v14 = 0x9c;
            }
            else {
              temp_v14 = 0x9d;
            }
            FUN_002b8838(temp_v14);
          }
          else {
            FUN_002b8838(0x9b);
          }
        }
      }
      if ((*(char *)(temp_v3 + 0x14e) != '\0') && (*(char *)(temp_v3 + 0x2f2) != '\0')) {
        *(unsigned char *)(temp_v3 + 8) = 1;
        if (*(char *)(temp_v3 + 0x5e) == '\0') {
          *(unsigned int *)(temp_v3 + 0x60) = 0;
        }
        else {
          *(unsigned int *)(temp_v3 + 0x60) = 10;
        }
        temp_v6 = *(int *)(temp_v3 + 0x20);
        if (temp_v6 != 2) {
          if (temp_v6 != 3) {
            if (temp_v6 != 4) goto LAB_001159f0;
            temp_v2 = FUN_002b8584(0xe,0xb8);
            *(unsigned short *)(temp_v3 + 0x56) = temp_v2;
            temp_v2 = FUN_002b8584(0xe,0xb9);
            *(unsigned short *)(temp_v3 + 0x58) = temp_v2;
            temp_v2 = FUN_002b8584(0xe,0xba);
            *(unsigned short *)(temp_v3 + 0x5a) = temp_v2;
            temp_v2 = FUN_002b8584(0xe,0xbb);
            *(unsigned short *)(temp_v3 + 0x5c) = temp_v2;
          }
          else {
            temp_v2 = FUN_002b8584(0xe,0xa2);
            *(unsigned short *)(temp_v3 + 0x56) = temp_v2;
            temp_v2 = FUN_002b8584(0xe,0xa3);
            *(unsigned short *)(temp_v3 + 0x58) = temp_v2;
            temp_v2 = FUN_002b8584(0xe,0xa4);
            *(unsigned short *)(temp_v3 + 0x5a) = temp_v2;
          }
        }
        else {
          temp_v2 = FUN_002b8584(0xe,0xac);
          *(unsigned short *)(temp_v3 + 0x56) = temp_v2;
          temp_v2 = FUN_002b8584(0xe,0xad);
          *(unsigned short *)(temp_v3 + 0x58) = temp_v2;
        }
      }
      break;
    }
    if (*(int *)(temp_v3 + 0x28) < 0xffff) {
      *(int *)(temp_v3 + 0x28) = *(int *)(temp_v3 + 0x28) + 1;
    }
    temp_v6 = *(int *)(temp_v3 + 0x24);
    if (0 < temp_v6) {
      temp_v4 = 0;
      do {
        temp_v8 = temp_v3 + temp_v4;
        if ((*(char *)(temp_v8 + 0x37) == '\0') &&
           ((int)*(char *)(temp_v8 + 0x46) <= *(int *)(temp_v3 + 0x28))) {
          *(unsigned char *)(temp_v8 + 0x37) = 1;
        }
        temp_v6 = temp_v6 - 1;
        temp_v4 = temp_v4 + 1;
      } while (temp_v6 != 0);
    }
    temp_v10 = 1;
    temp_v6 = 0;
    if (0 < *(int *)(temp_v3 + 0x24)) {
      do {
        temp_v4 = temp_v3 + temp_v6;
        if (*(char *)(temp_v4 + 0x37) != '\0') {
          temp_v8 = temp_v3 + temp_v6 * 0x8c;
          FUN_002bf818(temp_v8 + 0x498);
          if ((*(unsigned char *)(temp_v8 + 0x520) & *(unsigned char *)(temp_v8 + 0x51f)) != 0) {
            temp_v7 = *(char *)(temp_v4 + 0x41) + '\x01';
            *(char *)(temp_v4 + 0x41) = temp_v7;
            if ('\x05' < temp_v7) {
              *(unsigned char *)(temp_v4 + 0x41) = 0;
            }
            FUN_002b8da0(temp_v8 + 0x498,(int)*(char *)(temp_v4 + 0x41) / 2 + 0x8b);
          }
          else {
            temp_v10 = 0;
          }
        }
        else {
          temp_v10 = 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < *(int *)(temp_v3 + 0x24));
      if (!temp_v10) break;
    }
LAB_00115134:
    *(unsigned char *)(temp_v3 + 8) = 1;
    goto LAB_001159f0;
  case 3:
    temp_v7 = *(char *)(temp_v3 + 9);
    if (temp_v7 != '\f') {
      if (temp_v7 != '\v') {
        if (temp_v7 != '\x13') {
          if (((!(temp_v7 == '\x02' || temp_v7 == '\x03')) && (!(temp_v7 == '\x04' || temp_v7 == '\x05')))
             && (!((temp_v7 == '\x10' || temp_v7 == '\x11') || temp_v7 == '\x12'))) {
            if (((temp_v7 == '\a' || temp_v7 == '\b') || temp_v7 == '\t') &&
               (FUN_002bf818(temp_v3 + 0x40c), *(char *)(temp_v3 + 0xa12) != '\0')) {
              if (*(char *)(temp_v3 + 0xa26) != '\0') {
                FUN_002b8838();
                temp_v5 = 0;
                do {
                  FUN_002b8454(temp_v5 & 0xff,*(unsigned char *)(temp_v3 + temp_v5 + 0xa13),
                               *(unsigned short *)(temp_v3 + temp_v5 * 2 + 0xa1a),1);
                  temp_v5 = temp_v5 + 1;
                } while ((int)temp_v5 < 6);
                *(unsigned char *)(temp_v3 + 0xa26) = 0;
              }
              *(unsigned char *)(temp_v3 + 0xa12) = 0;
            }
            temp_v6 = FUN_002bf818(temp_v3 + 0xc4);
            if (temp_v6 != 0) {
              *(unsigned char *)(temp_v3 + 8) = 0;
              FUN_002b8d80(*(unsigned int *)(temp_v3 + 4));
              FUN_002b8db0(*(unsigned int *)(temp_v3 + 4),0x20);
              FUN_002b8db0(*(unsigned int *)(temp_v3 + 4),0x40);
            }
          }
          else {
            FUN_002bf818(temp_v3 + 0xc4);
            FUN_002bf818(temp_v3 + 0x1dc);
            if ((*(char *)(temp_v3 + 0x14e) != '\0') && (*(char *)(temp_v3 + 0x266) != '\0')) {
              *(unsigned char *)(temp_v3 + 8) = 0;
              FUN_002b8d80(*(unsigned int *)(temp_v3 + 4));
              FUN_002b8db0(*(unsigned int *)(temp_v3 + 4),0x20);
              FUN_002b8db0(*(unsigned int *)(temp_v3 + 4),0x40);
            }
          }
        }
        else {
          FUN_002bf818(temp_v3 + 0xc4);
          if (*(char *)(temp_v3 + 0x14e) != '\0') {
            *(unsigned char *)(temp_v3 + 8) = 0;
            FUN_002b8d80(*(unsigned int *)(temp_v3 + 4));
            *(unsigned char *)(temp_v3 + 0xa12) = 0;
            FUN_002b8244(0);
          }
        }
      }
      else {
        FUN_002bf818(temp_v3 + 0xc4);
        FUN_002bf818(temp_v3 + 0x268);
        if ((*(char *)(temp_v3 + 0x14e) != '\0') && (*(char *)(temp_v3 + 0x2f2) != '\0')) {
          *(unsigned char *)(temp_v3 + 8) = 0;
          FUN_002b8d80(*(unsigned int *)(temp_v3 + 4));
          if (*(char *)(temp_v3 + 0xa12) != '\0') {
            if (*(char *)(temp_v3 + 0xa26) != '\0') {
              if (*(unsigned char *)(temp_v3 + 0xa12) != 0xa0) {
                FUN_002b8838();
                temp_v5 = 0;
                do {
                  FUN_002b8454(temp_v5 & 0xff,*(unsigned char *)(temp_v3 + temp_v5 + 0xa13),
                               *(unsigned short *)(temp_v3 + temp_v5 * 2 + 0xa1a),1);
                  temp_v5 = temp_v5 + 1;
                } while ((int)temp_v5 < 6);
              }
              else {
                FUN_002b827c(0xa0);
              }
            }
            *(unsigned char *)(temp_v3 + 0xa12) = 0;
          }
        }
      }
    }
    else {
      temp_v10 = 1;
      temp_v6 = 0;
      if (0 < *(int *)(temp_v3 + 0x24)) {
        do {
          temp_v4 = temp_v3 + temp_v6 * 0x8c;
          FUN_002bf818(temp_v4 + 0x498);
          if (*(char *)(temp_v4 + 0x51f) != '\0') {
            *(unsigned char *)(temp_v3 + temp_v6 + 0x37) = 0;
          }
          else {
            temp_v10 = 0;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < *(int *)(temp_v3 + 0x24));
        if (!temp_v10) break;
      }
      *(unsigned char *)(temp_v3 + 8) = 0;
      FUN_002b8d80(*(unsigned int *)(temp_v3 + 4));
    }
    break;
  case 4:
    temp_v13 = *(float *)(temp_v3 + 0xa2c) + 1.0f;
    *(float *)(temp_v3 + 0xa2c) = temp_v13;
    if ((int)temp_v13 < 0x41200000) {
      FUN_002c53f4(10,(int)temp_v13);
      *(unsigned int *)(temp_v3 + 0xa28) = temp_v14;
    }
    else if ((int)temp_v13 >= 0x41a00001) {
      *(unsigned int *)(temp_v3 + 0xa2c) = 0;
    }
    else {
      FUN_002c53f4(10,(int)(temp_v13 - 10.0f));
      *(unsigned int *)(temp_v3 + 0xa28) = temp_v15;
    }
    temp_v15 = 0xc0000000;
    temp_v6 = (int)*(float *)(temp_v3 + 0xa2c) % 10;
    temp_v14 = (unsigned int)temp_v16;
    if (temp_v6 < 5) {
      FUN_002c53f4(5);
      *(unsigned int *)(temp_v3 + 0xa30) = temp_v14;
    }
    else if (temp_v6 >= 10) {
      *(unsigned int *)(temp_v3 + 0xa30) = temp_v14;
    }
    else {
      FUN_002c53f4(5,temp_v6 - 5);
      *(unsigned int *)(temp_v3 + 0xa30) = temp_v15;
    }
    if ((DAT_0043e190 != 0) && (*(char *)(DAT_0043e190 + 8) == '\x03')) {
      temp_v14 = (unsigned int)temp_v16;
      *(unsigned int *)(temp_v3 + 0xa28) = temp_v14;
      *(unsigned int *)(temp_v3 + 0xa2c) = temp_v14;
      *(unsigned int *)(temp_v3 + 0xa30) = temp_v14;
      *(unsigned int *)(temp_v3 + 0x1c) = 0;
      if ((*(unsigned int *)(temp_v3 + 0xc) & 8) == 0) {
        *(unsigned char *)(temp_v3 + 0x35) = 1;
        *(unsigned char *)(temp_v3 + 8) = 0;
        FUN_002b8d80(*(unsigned int *)(temp_v3 + 4));
        FUN_002b8db0(*(unsigned int *)(temp_v3 + 4),0x20);
        FUN_002b8db0(*(unsigned int *)(temp_v3 + 4),0x40);
        break;
      }
      if (temp_v3 == 0) break;
      if (*(char *)(temp_v3 + 8) == '\0') goto LAB_00115ab4;
LAB_001158ec:
      FUN_002b89e4(temp_v3,*(unsigned char *)(temp_v3 + 9));
      *(unsigned char *)(temp_v3 + 8) = 3;
      *(unsigned char *)(temp_v3 + 0x35) = 0;
      goto LAB_001159f0;
    }
    break;
  case 6:
    FUN_001269fc();
    if ((temp_v5 != 0) && (temp_v6 = FUN_002b89a4(0), temp_v6 != 0)) {
LAB_00114fbc:
      temp_v1 = 2;
LAB_00114fc0:
      *(unsigned char *)(temp_v3 + 8) = temp_v1;
      goto LAB_001159f0;
    }
    break;
  case 7:
    if ((*(char *)(temp_v3 + 9) != '\v') || (*(char *)(DAT_0043e190 + 0x5f) != '\0'))
    goto LAB_00115ab4;
    FUN_002bf818(temp_v3 + 0xc4);
    FUN_002bf818(temp_v3 + 0x268);
    FUN_002bf818(temp_v3 + 0x380);
    break;
  case 8:
    if (*(char *)(temp_v3 + 9) != '\v') goto LAB_00115ab4;
    if (*(char *)(DAT_0043e190 + 0x5f) != '\0') goto LAB_00114fbc;
    FUN_002b8ee0(temp_v3 + 0xc4,0);
    FUN_002b8ee0(temp_v3 + 0x268,0);
    FUN_002b8ee0(temp_v3 + 0x380,0);
    if ((*(char *)(temp_v3 + 0x14e) != '\0') && (*(char *)(temp_v3 + 0x2f2) != '\0')) {
      temp_v7 = *(char *)(temp_v3 + 0x40a);
joined_r0x001159d0:
      if (temp_v7 != '\0') goto LAB_00115134;
    }
  }
  temp_v7 = *(char *)(temp_v3 + 8);
  if ((temp_v7 == '\x01' || temp_v7 == '\x04') || (temp_v7 == '\x02' || temp_v7 == '\x03')) {
LAB_001159f0:
    if (*(char *)(temp_v3 + 0x83) != '\0') {
      temp_v6 = 7;
      FUN_002c1658(7,2);
      if (temp_v6 == 0) {
        *(unsigned char *)(temp_v3 + 0x83) = 0;
        if ((*(unsigned int *)(temp_v3 + 0xc) & 0x20) != 0) goto LAB_00115ad8;
        FUN_002b8d80(*(unsigned int *)(temp_v3 + 4));
      }
    }
    else {
      temp_v6 = FUN_002b898c();
      if ((temp_v6 != 0x51) && (DAT_0043e188 != '\0')) {
        temp_v6 = 7;
        FUN_002c1658(7,2);
        if (temp_v6 != 0) {
          temp_v6 = FUN_0012650c(*(unsigned int *)(temp_v3 + 4));
          if (temp_v6 != 0) {
            *(unsigned char *)(temp_v3 + 0x83) = 2;
            FUN_002b8234(*(unsigned int *)(temp_v3 + 4));
          }
          else {
            *(unsigned char *)(temp_v3 + 0x83) = 1;
            FUN_002b8234(*(unsigned int *)(temp_v3 + 4));
          }
        }
      }
    }
  }
LAB_00115ab4:
  if ((*(char *)(temp_v3 + 0x83) != '\0') &&
     (temp_v6 = FUN_002b8d90(*(unsigned int *)(temp_v3 + 4),0x80), temp_v6 == 0)) {
    FUN_002b8234(*(unsigned int *)(temp_v3 + 4));
  }
LAB_00115ad8:
  if (temp_v3 == 0) {
    return 0;
  }
  if (*(char *)(temp_v3 + 8) != '\x01') {
    return 0;
  }
  FUN_00124324(*(unsigned int *)(temp_v3 + 4));
  if (*(int *)(temp_v3 + 4) != 0) {
    if (DAT_0049382a == '\0') {
      FUN_00126058();
    }
    if (*(char *)(temp_v3 + 0x83) != '\0') {
      DAT_00493829 = '\0';
      DAT_0049381c = 0;
      DAT_0049382a = '\0';
    }
    if ((DAT_00493828 == '\0') || (*(char *)(*(int *)(temp_v3 + 4) + 0x44) != '\x02')) {
      DAT_00493829 = '\0';
      DAT_0049381c = 0;
      DAT_0049382a = '\0';
    }
    else {
      temp_v6 = FUN_002bc088();
      if (temp_v6 == 0) {
        if (DAT_0049382a == '\0') {
          temp_v6 = 0x69;
        }
        else {
          temp_v6 = 8;
        }
        if (DAT_0049381c < temp_v6) {
          DAT_0049381c = DAT_0049381c + 1;
        }
        else {
          temp_v7 = *(char *)(temp_v3 + 9);
          if ((temp_v7 != '\a' && temp_v7 != '\b') && (temp_v7 != '\t')) {
            DAT_00493829 = '\x01';
            DAT_0049381c = 0;
            DAT_0049382a = '\0';
          }
        }
      }
    }
  }
  temp_v14 = (unsigned int)temp_v16;
  if (DAT_00493828 == '\0') {
    DAT_00493820 = 0;
    DAT_00493824 = temp_v14;
    return 0;
  }
  if (DAT_00493820 < 0x29) {
    temp_v14 = (unsigned int)((unsigned long long)temp_v16 >> 0x20);
    FUN_002c53f4(0x28);
    DAT_00493824 = temp_v14;
  }
  else {
    if (DAT_00493820 >= 0x3d) {
      DAT_00493820 = 0;
      return 0;
    }
    FUN_002c53f4(0x14,DAT_00493820 - 0x29);
    DAT_00493824 = temp_v14;
  }
  if (DAT_00493820 >= 0x3c) {
    DAT_00493820 = 0;
    return 0;
  }
  DAT_00493820 = DAT_00493820 + 1;
  return 0;
}
