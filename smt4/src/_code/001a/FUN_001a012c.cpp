/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a012c` (_code @ 0x1a012c, 0x6b8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019715c(...);
int FUN_001978b4(void);
int FUN_001f20b4(...);
int FUN_00299218(...);
int FUN_002be370(...);
int FUN_002be5a4(...);
int FUN_002be650(...);
int FUN_002bed98(...);
int FUN_002beda4(void);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int FUN_002c39a4(int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned char LAB_001a06b0; /* 0x1a06b0 */
extern int DAT_0043da90; /* 0x43da90 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0019715c. */
/* Supplied declaration required: FUN_001978b4. */
/* Supplied declaration required: FUN_001f20b4. */
extern int FUN_001f302c(void);
/* Supplied declaration required: FUN_00299218. */
extern unsigned int FUN_0029e908(int);
extern unsigned short *FUN_002b63ac(void);
/* Supplied declaration required: FUN_002be370. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be650. */
/* Supplied declaration required: FUN_002bed98. */
/* Supplied declaration required: FUN_002beda4. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned int FUN_001a012c(void)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 16 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned short *puVar6;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar11;
  unsigned int temp_v9;
  unsigned short temp_v10;
  unsigned int in_fpscr;
  
  temp_v1 = DAT_0043da90;
  FUN_002c39a4(DAT_0044ea00);
  temp_v3 = DAT_0044ea00;
  temp_v2 = FUN_002c5d80(1,0);
  piVar11 = (int *)(temp_v3 + 0x124c);
  temp_v7 = *piVar11;
  temp_v8 = piVar11[temp_v7 + 2];
  *piVar11 = temp_v7 + 1;
  piVar11[temp_v7 + 3] = temp_v2;
  if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v8 != temp_v2) {
    (**(romwright_code **)(temp_v3 + 0x1268))();
    *(unsigned char *)(temp_v3 + 0x1264) = 0;
  }
  temp_v3 = *(int *)(temp_v1 + 0x18);
  if (temp_v3 == 0x35) {
    temp_v3 = *(int *)(temp_v1 + 0x24);
  }
  switch(temp_v3) {
  default:
    break;
  case 1:
  case 2:
  case 3:
  case 6:
  case 7:
  case 9:
  case 0x1b:
  case 0x1c:
  case 0x2a:
  case 0x30:
  case 0x34:
    temp_v4 = FUN_0029e908(temp_v1 + 0x34);
    temp_v2 = FUN_00299218((int)*(char *)(temp_v1 + 0x98),temp_v4);
    temp_v3 = DAT_0043da90;
    if (((temp_v2 == 0x11 || temp_v2 == 0x12) || (temp_v2 == 0x13 || temp_v2 == 0x14)) ||
       ((temp_v2 == 0x15 || temp_v2 == 0x16) || temp_v2 == 0x17)) {
      puVar6 = (unsigned short *)FUN_002b63ac();
      temp_v10 = 0;
      temp_v2 = FUN_002beda4();
      temp_v3 = FUN_002bed98(temp_v3 + 0x904);
      FUN_002bf288(2,0x1a,0x52d,temp_v2,temp_v3,0xbf);
      FUN_002bf288(2,0x1a,0x52f,temp_v2,temp_v3,0xbf);
      FUN_002bf288(2,0x1a,0x52e,temp_v2,temp_v3,0xbf);
      FUN_002bf288(2,0x1a,0x530,temp_v2,temp_v3,0xbf);
      FUN_002bf288(2,0x1a,0x532,temp_v2,temp_v3,0xbf);
      FUN_002bf288(2,0x1a,0x531,temp_v2,temp_v3,0xbf);
      temp_v7 = 0;
LAB_001a03b8:
      do {
        temp_v9 = 0;
        if (temp_v7 != 0) {
          if (temp_v7 != 1) {
            if (temp_v7 != 2) {
              if (temp_v7 != 3) {
                if (temp_v7 != 4) {
                  if (temp_v7 != 5) {
                    if (temp_v7 == 6) {
                      temp_v10 = 0x295;
                      temp_v9 = (unsigned int)puVar6[6];
                    }
                  }
                  else {
                    temp_v10 = 0x21d;
                    temp_v9 = (unsigned int)puVar6[5];
                  }
                }
                else {
                  temp_v10 = 0x1a5;
                  temp_v9 = (unsigned int)puVar6[4];
                }
              }
              else {
                temp_v10 = 0x12d;
                temp_v9 = (unsigned int)puVar6[3];
              }
            }
            else {
              temp_v10 = 0x30d;
              temp_v9 = (unsigned int)puVar6[2];
              temp_v8 = FUN_002c09d0(0x410);
              if (temp_v8 == 0) {
                temp_v7 = 3;
                goto LAB_001a03b8;
              }
            }
          }
          else {
            temp_v10 = 0xb5;
            temp_v9 = (unsigned int)puVar6[1];
            temp_v8 = FUN_002c09d0(0x410);
            if (temp_v8 == 0) {
              temp_v7 = 2;
              goto LAB_001a03b8;
            }
          }
        }
        else {
          temp_v10 = 0x3d;
          temp_v9 = (unsigned int)*puVar6;
        }
        temp_v8 = FUN_002bf4f8(0x1a,temp_v7 + 0x533);
        FUN_002bf380(2,0x1a,0xd,*(short *)(temp_v8 + 8) + temp_v2,*(short *)(temp_v8 + 10) + temp_v3,0xbf)
        ;
        temp_v5 = FUN_002bf4f8(0x1a,0xa0);
        FUN_002be370(temp_v10,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v2,
                     (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v3,0xc4,0);
        temp_v5 = FUN_002bf4f8(0x1a,0xa1);
        if (temp_v9 != 0) {
          FUN_002be650(temp_v9,0);
          if (temp_v9 != 0) {
            VectorSignedToFloat((int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v3,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat((int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v2,
                                (unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002be5a4(2,0xff,temp_v9,(int)*(short *)(temp_v8 + 10));
          }
        }
        else {
          VectorSignedToFloat((int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v8 + 10) + temp_v3,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(2,0xff,&LAB_001a06b0,(int)*(short *)(temp_v8 + 10));
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 7);
    }
    if (*(char *)(temp_v1 + 0xab) != '\0') {
      temp_v4 = FUN_002beda4();
      temp_v6 = FUN_002bed98(temp_v1 + 0x878);
      FUN_001f20b4(temp_v4,temp_v6,(int)*(char *)(temp_v1 + 0xad),(int)*(char *)(temp_v1 + 0xac),
                   (int)*(short *)(temp_v1 + *(char *)(temp_v1 + 0xad) * 2 + 0xe22));
    }
    FUN_001978b4();
    break;
  case 4:
  case 5:
  case 0x28:
  case 0x29:
    temp_v4 = FUN_0029e908(temp_v1 + 0x34);
    temp_v4 = FUN_00299218((int)*(char *)(temp_v1 + 0x98),temp_v4);
    temp_v6 = 0;
    FUN_0019715c(temp_v4,temp_v6);
    break;
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x1a:
  case 0x2b:
  case 0x2c:
    temp_v4 = FUN_0029e908(temp_v1 + 0x34);
    temp_v4 = FUN_00299218((int)*(char *)(temp_v1 + 0x98),temp_v4);
    temp_v6 = 1;
    FUN_0019715c(temp_v4,temp_v6);
    break;
  case 0x1d:
  case 0x1e:
  case 0x1f:
    temp_v3 = FUN_001f302c();
    if (temp_v3 != 2) {
      temp_v0 = *(char *)(temp_v1 + 0x6d2);
      if (temp_v0 == '\0') {
        temp_v4 = FUN_002beda4();
        temp_v6 = FUN_002bed98(temp_v1 + 0x878);
        FUN_001f20b4(temp_v4,temp_v6,(int)*(char *)(temp_v1 + 0xad),(int)*(char *)(temp_v1 + 0xac),
                     (int)*(short *)(temp_v1 + *(char *)(temp_v1 + 0xad) * 2 + 0xe22));
        FUN_001978b4();
      }
      break;
    }
    temp_v4 = FUN_002beda4();
    temp_v6 = FUN_002bed98(temp_v1 + 0x878);
    FUN_001f20b4(temp_v4,temp_v6,(int)*(char *)(temp_v1 + 0xad),(int)*(char *)(temp_v1 + 0xac),
                 (int)*(short *)(temp_v1 + *(char *)(temp_v1 + 0xad) * 2 + 0xe22));
    FUN_001978b4();
    break;
  case 0x20:
    if (*(char *)(temp_v1 + 0xab) != '\0') {
      temp_v0 = *(char *)(temp_v1 + 0x6d2);
      if (temp_v0 == '\0') {
        temp_v4 = FUN_002beda4();
        temp_v6 = FUN_002bed98(temp_v1 + 0x878);
        FUN_001f20b4(temp_v4,temp_v6,(int)*(char *)(temp_v1 + 0xad),(int)*(char *)(temp_v1 + 0xac),
                     (int)*(short *)(temp_v1 + *(char *)(temp_v1 + 0xad) * 2 + 0xe22));
        FUN_001978b4();
      }
    }
    break;
  }
  temp_v1 = DAT_0044ea00;
  piVar11 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v3 = *piVar11;
  temp_v2 = piVar11[temp_v3 + 2];
  *piVar11 = temp_v3 - 1;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v2 != piVar11[temp_v3 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  FUN_002c198c(DAT_0044ea00);
  FUN_002c18e4(DAT_0044ea00);
  return 0;
}

} /* extern "C" */
