/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ca648` (_code @ 0x1ca648, 0x22a8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} void_stack;

extern unsigned char LAB_001cc640; /* 0x1cc640 */
extern unsigned char LAB_001cc908; /* 0x1cc908 */
extern unsigned char LAB_001cc90c; /* 0x1cc90c */
extern int FUN_001f60dc(); /* 0x1f60dc */
extern int FUN_001f6174(); /* 0x1f6174 */
extern int FUN_00206be8(); /* 0x206be8 */
extern int FUN_002dc96c(); /* 0x2dc96c */
extern int FUN_002dca04(); /* 0x2dca04 */
extern int FUN_002e4534(); /* 0x2e4534 */
extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_00221544. */
/* Supplied declaration required: FUN_0026ad50. */
extern int FUN_0026ada8(void);
/* Supplied declaration required: FUN_0026adcc. */
/* Supplied declaration required: FUN_0026b01c. */
/* Supplied declaration required: FUN_0026b0d0. */
extern int FUN_00288408(void);
extern int FUN_00288700(void);
/* Supplied declaration required: FUN_002890d0. */
/* Supplied declaration required: FUN_002923d0. */
extern int FUN_00293d64(void);
/* Supplied declaration required: FUN_002954cc. */
extern int FUN_00295624(unsigned int);
/* Supplied declaration required: FUN_00296154. */
/* Supplied declaration required: FUN_00297128. */
/* Supplied declaration required: FUN_00299558. */
extern int FUN_0029af30(void);
extern unsigned short *FUN_0029af4c(void);
/* Supplied declaration required: FUN_0029bfec. */
/* Supplied declaration required: FUN_0029cbec. */
/* Supplied declaration required: FUN_0029d8c0. */
/* Supplied declaration required: FUN_0029d8fc. */
/* Supplied declaration required: FUN_0029e3bc. */
extern int FUN_0029e3d0(void);
/* Supplied declaration required: FUN_0029e41c. */
extern int FUN_0029e468(void);
/* Supplied declaration required: FUN_0029e48c. */
/* Supplied declaration required: FUN_0029e5c8. */
/* Supplied declaration required: FUN_0029e63c. */
/* Supplied declaration required: FUN_0029eba8. */
extern short FUN_0029ebdc(int);
extern int FUN_0029ec6c(unsigned short);
/* Supplied declaration required: FUN_0029edfc. */
/* Supplied declaration required: FUN_0029f0f4. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_0029f248. */
/* Supplied declaration required: FUN_0029f260. */
/* Supplied declaration required: FUN_0029f278. */
/* Supplied declaration required: FUN_0029f878. */
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002a0f68. */
extern int FUN_002a0fac(void);
/* Supplied declaration required: FUN_002b7f0a. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002b91c4. */
extern int FUN_002b9220(int, unsigned int);
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002bc200. */
extern int FUN_002bc26c(void);
extern unsigned int FUN_002bd020(unsigned int, unsigned int);
extern unsigned int FUN_002bd258(unsigned int);
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002bf6d0. */
extern unsigned int FUN_002bf9e8(unsigned int);
/* Supplied declaration required: FUN_002bf9f0. */
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_002c1830. */
/* Supplied declaration required: FUN_0032c4bc. */


unsigned int FUN_001ca648(void)

{
/* irregular: 4 goto(s); 48 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  short temp_v4;
  short temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int *puVar10;
  int temp_v9;
  int temp_v10;
  unsigned int *puVar13;
  unsigned short *puVar14;
  unsigned int temp_v11;
  unsigned char *puVar16;
  unsigned int temp_v12;
  unsigned short temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17;
  unsigned char temp_v18 [68];
  
  temp_v2 = DAT_0044e190;
  *(unsigned char *)(DAT_0044e190 + 0x2388) = 0;
  temp_v6 = FUN_0029e3bc(temp_v2 + 0x4d4);
  *(unsigned char *)(temp_v2 + 0x481) = 0;
  temp_v7 = FUN_0029d8fc((int)*(short *)(temp_v2 + 0x476));
  *(unsigned int *)(temp_v2 + 0x418) = temp_v7;
  temp_v7 = FUN_0029d8fc((int)*(short *)(temp_v2 + 0x478));
  *(unsigned int *)(temp_v2 + 0x41c) = temp_v7;
  temp_v7 = FUN_0029d8fc((int)*(short *)(temp_v2 + 0x474));
  *(unsigned int *)(temp_v2 + 0x420) = temp_v7;
  temp_v7 = FUN_0029d8fc((int)*(short *)(temp_v2 + 0x47a));
  *(unsigned int *)(temp_v2 + 0x424) = temp_v7;
  temp_v7 = FUN_0029d8fc((int)*(short *)(temp_v2 + 0x47c));
  *(unsigned int *)(temp_v2 + 0x428) = temp_v7;
  temp_v15 = 0;
  *(unsigned int *)(temp_v2 + 0x414) = 0xffffffff;
  do {
    if ((-1 < *(short *)(temp_v2 + temp_v15 * 2 + 0x42c)) &&
       (temp_v8 = FUN_0029d8fc(), temp_v8 == 1 || temp_v8 == 2)) {
      *(int *)(temp_v2 + 0x414) = temp_v15;
      break;
    }
    temp_v15 = temp_v15 + 1;
  } while (temp_v15 < 0x24);
  temp_v8 = FUN_00288700();
  if (temp_v8 == 0) {
    *(unsigned int *)(temp_v2 + 0x424) = 0;
    *(unsigned int *)(temp_v2 + 0x428) = 0;
  }
  switch(*(unsigned int *)(temp_v2 + 0x400)) {
  case 1:
    if (*(short *)(temp_v2 + 0x78) != 0) {
      temp_v15 = FUN_002b9220(temp_v2 + 0x28,0);
      temp_v6 = DAT_0044e190;
    }
    else {
      temp_v15 = FUN_002b9220(temp_v2 + 0x28,1);
      temp_v6 = DAT_0044e190;
    }
    DAT_0044e190 = temp_v6;
    if (temp_v15 != 0) {
      temp_v7 = *(unsigned int *)(temp_v2 + 0x408);
      *(unsigned int *)(temp_v6 + 0x40c) = 0;
      temp_v12 = *(unsigned int *)(temp_v6 + 0x400);
      *(unsigned int *)(temp_v6 + 0x400) = temp_v7;
      *(unsigned int *)(temp_v6 + 0x404) = temp_v12;
      FUN_0026b0d0();
      *(unsigned char *)(temp_v2 + 0x410) = 1;
    }
    break;
  case 2:
    FUN_002bf9f0(temp_v2 + 0x28);
    temp_v6 = DAT_0044e190;
    if (*(char *)(temp_v2 + 0xb2) != '\0') {
      if (*(int *)(temp_v2 + 0x408) != 0) {
        if (*(short *)(temp_v2 + 0x78) != 3) {
          FUN_002bdac0(temp_v2 + 0x28,1,0);
        }
        else {
          FUN_002bdac0(temp_v2 + 0x28,0,0);
        }
        temp_v6 = DAT_0044e190;
        *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x400);
        temp_v7 = *puVar13;
        *puVar13 = 1;
        *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
        temp_v6 = FUN_0029af30();
        temp_v17 = temp_v6 != 0xd;
        temp_v16 = temp_v6 == 6;
        temp_v7 = 0x27;
        if (*(int *)(temp_v2 + 0x408) == 3) {
          if (temp_v17 && !temp_v16) {
            temp_v6 = FUN_00293d64();
            if (temp_v6 == 2) {
              temp_v7 = 0x28;
            }
            else if (*(short *)(temp_v2 + 0x47e) < 0) {
              temp_v7 = 0x1f;
            }
            goto LAB_001ca8f0;
          }
          temp_v7 = 0x2f;
        }
        else {
LAB_001ca8f0:
          if (*(int *)(temp_v2 + 0x408) == 0x10) {
            temp_v7 = 0x20;
          }
          else {
            if (*(int *)(temp_v2 + 0x408) == 0x11) {
              if (!temp_v17 || temp_v16) {
                temp_v7 = 0x30;
                goto LAB_001caa18;
              }
              temp_v6 = FUN_0029af30();
              if ((((temp_v6 == 8) || (temp_v6 = FUN_0029af30(), temp_v6 == 9)) ||
                  (temp_v6 = FUN_0029af30(), temp_v6 == 0xb)) || (temp_v6 = FUN_0029af30(), temp_v6 == 7)) {
                temp_v7 = 0x5e;
              }
              else {
                temp_v7 = 0x29;
              }
            }
            if (*(int *)(temp_v2 + 0x408) == 0x13) {
              temp_v6 = FUN_0029af30();
              if (((temp_v6 == 8) || (temp_v6 = FUN_0029af30(), temp_v6 == 9)) ||
                 ((temp_v6 = FUN_0029af30(), temp_v6 == 0xb || (temp_v6 = FUN_0029af30(), temp_v6 == 7)))) {
                temp_v7 = 0x5f;
              }
              else {
                temp_v7 = 0x2a;
              }
            }
            if (*(int *)(temp_v2 + 0x408) == 0x15) {
              if (!temp_v17 || temp_v16) {
                temp_v7 = 0x31;
              }
              else {
                temp_v6 = FUN_0029af30();
                if (((temp_v6 == 8) || (temp_v6 = FUN_0029af30(), temp_v6 == 9)) ||
                   ((temp_v6 = FUN_0029af30(), temp_v6 == 0xb || (temp_v6 = FUN_0029af30(), temp_v6 == 7))))
                {
                  temp_v7 = 0x60;
                }
                else {
                  temp_v7 = 0x2b;
                }
              }
            }
          }
        }
LAB_001caa18:
        temp_v6 = FUN_0029af30();
        temp_v17 = temp_v6 == 8;
        if (temp_v17) {
          temp_v6 = *(int *)(temp_v2 + 0x408);
        }
        if (!temp_v17 || temp_v6 != 3) {
          temp_v6 = FUN_0029af30();
          temp_v17 = temp_v6 == 9;
          if (temp_v17) {
            temp_v6 = *(int *)(temp_v2 + 0x408);
          }
          if (!temp_v17 || temp_v6 != 3) {
            temp_v6 = FUN_0029af30();
            temp_v17 = temp_v6 == 0xb;
            if (temp_v17) {
              temp_v6 = *(int *)(temp_v2 + 0x408);
            }
            if (!temp_v17 || temp_v6 != 3) {
              temp_v6 = FUN_0029af30();
              temp_v17 = temp_v6 == 7;
              if (temp_v17) {
                temp_v6 = *(int *)(temp_v2 + 0x408);
              }
              if (((!temp_v17 || temp_v6 != 3) && (temp_v6 = FUN_00288408(), temp_v6 != 5)) &&
                 (temp_v6 = FUN_00288408(), temp_v6 != 6)) {
                FUN_002b8b78(temp_v7);
              }
            }
          }
        }
      }
      else {
        *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
        temp_v7 = *(unsigned int *)(temp_v6 + 0x400);
        *(unsigned int *)(temp_v6 + 0x400) = 0;
        *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
      }
    }
    break;
  case 3:
    FUN_002bf9f0(temp_v2 + 0xb4);
    FUN_002bf9f0(temp_v2 + 0x1cc);
    if ((((*(char *)(temp_v2 + 0x411) != '\0') || (temp_v15 = FUN_00288700(), temp_v15 == 0)) ||
        (temp_v15 = FUN_002c1830(4,0), temp_v15 == 0)) && (*(int *)(temp_v2 + 0x428) != 6)) {
      if ((((*(char *)(temp_v2 + 0x411) != '\0') || (temp_v15 = FUN_00288700(), temp_v15 == 0)) ||
          (temp_v15 = FUN_002c1830(3,0), temp_v15 == 0)) && (*(int *)(temp_v2 + 0x424) != 6)) {
        temp_v8 = temp_v2 + 0x4d4;
        temp_v15 = temp_v8;
        FUN_0029f878(temp_v8,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
        if (temp_v15 != 0) {
          *(unsigned char *)(temp_v2 + 0x410) = 1;
          temp_v15 = FUN_0029e3bc(temp_v8);
        }
        else {
          if ((*(char *)(temp_v2 + 0x412) != '\0') ||
             (temp_v15 = temp_v8, FUN_0029f278(temp_v8,0), temp_v15 == 0)) break;
          *(unsigned char *)(temp_v2 + 0x410) = 1;
          temp_v15 = FUN_0029e3bc(temp_v8);
        }
        if (temp_v15 != temp_v6) {
          FUN_002bc200(0x100016c);
        }
        break;
      }
      temp_v3 = 1;
    }
    else {
      temp_v3 = 0xff;
    }
    *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
    break;
  case 4:
    temp_v6 = *(int *)(temp_v2 + 0x40c);
    if (temp_v6 == 8) {
      temp_v15 = 0;
    }
    if (temp_v6 >= 8) {
      if (temp_v6 == 8) {
        do {
          if (*(short *)(temp_v2 + temp_v15 * 2 + 0x482) == 0) {
            *(unsigned short *)(temp_v2 + temp_v15 * 2 + 0x482) = *(unsigned short *)(temp_v2 + 0x4a2);
            break;
          }
          temp_v15 = temp_v15 + 1;
        } while (temp_v15 < 8);
        FUN_0029fae8(temp_v2 + 0x4d4,temp_v15 + 1,8,1,0,1);
        FUN_0029d8c0(temp_v2 + 0x4d4,temp_v15);
        *(unsigned char *)(temp_v2 + 0x410) = 1;
        FUN_002bdac0(temp_v2 + 0x2e4,0);
        FUN_002bf030(temp_v2 + 0x370,2);
        FUN_00296154(temp_v2 + 0x370,0x1a,temp_v15 + 0x414);
        *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
      }
      temp_v6 = FUN_002b9220(temp_v2 + 0x2e4,0);
      if ((temp_v6 != 0) && (temp_v6 = FUN_002bf9f0(temp_v2 + 0x370), temp_v6 != 0)) {
        FUN_0026b01c();
        FUN_0026b0d0();
        temp_v6 = DAT_0044e190;
        *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x400);
        temp_v7 = *puVar13;
        *puVar13 = 5;
        *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
      }
    }
    break;
  case 6:
    FUN_002bf9f0(temp_v2 + 0xb4);
    FUN_002bf9f0(temp_v2 + 0x1cc);
    puVar13 = (unsigned int *)(temp_v2 + 0x40c);
    if (*(int *)(temp_v2 + 0x40c) >= 8) {
      if (*(int *)(temp_v2 + 0x40c) == 8) {
        temp_v6 = temp_v2 + 0x4d4;
        temp_v7 = FUN_0029f248();
        temp_v15 = FUN_0029f0f4(temp_v6);
        FUN_0029fae8(temp_v6,temp_v15 + 1,9,1,0,1);
        FUN_0029edfc(temp_v6,temp_v7);
        *(unsigned char *)(temp_v2 + 0x410) = 1;
      }
      temp_v15 = temp_v2 + 0x4d4;
      temp_v8 = FUN_0029e3bc();
      temp_v6 = temp_v15;
      FUN_0029f878(temp_v15,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
      if ((temp_v6 != 0) || (temp_v6 = temp_v15, FUN_0029f278(temp_v15,0), temp_v6 != 0)) {
        *(unsigned char *)(temp_v2 + 0x410) = 1;
        temp_v6 = FUN_0029e3bc(temp_v15);
        if (temp_v6 != temp_v8) {
          FUN_002bc200(0x100016c);
        }
      }
      else {
        temp_v6 = FUN_002c1830(0,1);
        if ((temp_v6 != 0) || (*(char *)(temp_v2 + 0x2388) != '\0')) {
          temp_v6 = FUN_0029f260(temp_v15);
          temp_v8 = FUN_0029f248(temp_v15);
          temp_v10 = FUN_0029f0f4(temp_v15);
          if ((temp_v6 + temp_v8) - temp_v10 != -1) {
            FUN_0029f260();
            FUN_0029f248(temp_v15);
            temp_v6 = FUN_0029f260(temp_v15);
            temp_v15 = FUN_0029f248(temp_v15);
            *(int *)(temp_v2 + 0x53c) = temp_v15 + temp_v6;
            temp_v7 = FUN_002bf9e8(0x100016d);
            *(unsigned int *)(temp_v2 + 0x238c) = temp_v7;
            temp_v6 = DAT_0044e190;
            temp_v7 = *(unsigned int *)(temp_v2 + 0x40c);
            *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
            puVar10 = (unsigned int *)(temp_v6 + 0x400);
            temp_v12 = *puVar10;
            *puVar10 = 7;
            *(unsigned int *)(temp_v6 + 0x404) = temp_v12;
            *(unsigned int *)(temp_v2 + 0x550) = 0;
            *puVar13 = temp_v7;
          }
          else {
            temp_v6 = FUN_0029f0f4(temp_v15);
            *(int *)(temp_v2 + 0x53c) = temp_v6 - 1;
            temp_v6 = DAT_0044e190;
            temp_v12 = *(unsigned int *)(temp_v2 + 0x40c);
            *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
            puVar10 = (unsigned int *)(temp_v6 + 0x400);
            temp_v7 = *puVar10;
            *puVar10 = 7;
            *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
            temp_v7 = FUN_002bf9e8(0x100016d);
            *(unsigned int *)(temp_v2 + 0x238c) = temp_v7;
            *(unsigned int *)(temp_v2 + 0x550) = 0;
            *puVar13 = temp_v12;
          }
        }
        else {
          temp_v6 = FUN_002c1830(10,1);
          if (temp_v6 != 0) {
            temp_v7 = FUN_002bf9e8(0x100016e);
            *(unsigned int *)(temp_v2 + 0x238c) = temp_v7;
            temp_v6 = FUN_0029f0f4(temp_v15);
            *(int *)(temp_v2 + 0x53c) = temp_v6 - 1;
            temp_v6 = DAT_0044e190;
            temp_v7 = *(unsigned int *)(temp_v2 + 0x40c);
            *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
            puVar10 = (unsigned int *)(temp_v6 + 0x400);
            temp_v12 = *puVar10;
            *puVar10 = 7;
            *(unsigned int *)(temp_v6 + 0x404) = temp_v12;
            *(unsigned int *)(temp_v2 + 0x550) = 0;
            *puVar13 = temp_v7;
          }
        }
      }
    }
    break;
  case 7:
    FUN_002bf9f0(temp_v2 + 0xb4);
    FUN_002bf9f0(temp_v2 + 0x1cc);
    temp_v6 = FUN_00295624(*(unsigned int *)(temp_v2 + 0x238c));
    if ((temp_v6 == 0) && (*(char *)(temp_v2 + 0x2391) != '\0')) {
      temp_v6 = FUN_0029f0f4(temp_v2 + 0x4d4);
      if (temp_v6 - 1 == *(int *)(temp_v2 + 0x53c)) {
        FUN_002954cc((int)*(short *)(temp_v2 + 0x47e),3);
      }
LAB_001cb004:
      temp_v6 = DAT_0044e190;
      *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x400);
      temp_v7 = *puVar13;
      *puVar13 = 9;
      *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
    }
    break;
  case 8:
    FUN_002bf9f0(temp_v2 + 0xb4);
    FUN_002bf9f0(temp_v2 + 0x1cc);
    temp_v6 = *(int *)(temp_v2 + 0x550) + 1;
    *(int *)(temp_v2 + 0x550) = temp_v6;
    if ((temp_v6 >= 9) && (temp_v6 = FUN_002bc26c(), temp_v6 == 0)) goto LAB_001cb004;
    break;
  case 9:
    if (*(int *)(temp_v2 + 0x40c) >= 8) {
      if (*(int *)(temp_v2 + 0x40c) == 8) {
        *(unsigned char *)(temp_v2 + 0x2390) = 0;
        temp_v6 = temp_v2 + 0x4d4;
        temp_v15 = FUN_0029f0f4();
        if (temp_v15 - 1 == *(int *)(temp_v2 + 0x53c)) {
          FUN_0026b01c();
          temp_v15 = DAT_0044e190;
          *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
          puVar13 = (unsigned int *)(temp_v15 + 0x400);
          temp_v7 = *puVar13;
          *puVar13 = 10;
          *(unsigned int *)(temp_v15 + 0x404) = temp_v7;
        }
        else {
          *(unsigned short *)(temp_v2 + *(int *)(temp_v2 + 0x53c) * 2 + 0x482) =
               *(unsigned short *)(temp_v2 + 0x4a2);
          FUN_002b91c4(0x100017a);
        }
        temp_v15 = FUN_0029f0f4(temp_v6);
        FUN_0029fae8(temp_v6,temp_v15 - 1,8,1,0,1);
        if (*(int *)(temp_v2 + 0x53c) >= 8) {
          FUN_0029d8c0(temp_v6,0);
        }
        else {
          FUN_0029d8c0(temp_v6);
        }
        *(unsigned char *)(temp_v2 + 0x410) = 1;
        FUN_002bdac0(temp_v2 + 0x2e4,0);
        FUN_002bf030(temp_v2 + 0x370,2);
        FUN_00296154(temp_v2 + 0x370,0x1a,*(int *)(temp_v2 + 0x53c) + 0x414);
        *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
      }
      temp_v6 = FUN_002b9220(temp_v2 + 0x2e4,0);
      if (temp_v6 != 0) {
        if (*(char *)(temp_v2 + 0x2390) == '\0') {
          FUN_002954cc((int)*(short *)(temp_v2 + 0x47e),0);
          *(unsigned char *)(temp_v2 + 0x2390) = 1;
        }
        temp_v6 = FUN_002bf9f0(temp_v2 + 0x370);
        if (temp_v6 != 0) {
          FUN_0026b01c();
          FUN_0026b0d0();
          temp_v6 = DAT_0044e190;
          *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
          puVar13 = (unsigned int *)(temp_v6 + 0x400);
          temp_v7 = *puVar13;
          *puVar13 = 10;
          *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
        }
      }
    }
    break;
  case 0xb:
    FUN_002bf9f0(temp_v2 + 0xb4);
    FUN_002bf9f0(temp_v2 + 0x1cc);
    if (*(char *)(temp_v2 + 0x412) == '\0') {
      temp_v15 = temp_v2 + 0x4d4;
      temp_v8 = FUN_0029e3bc();
      temp_v6 = temp_v15;
      FUN_0029f878(temp_v15,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
      if ((temp_v6 != 0) || (temp_v6 = temp_v15, FUN_0029f278(temp_v15,0), temp_v6 != 0)) {
        *(unsigned char *)(temp_v2 + 0x410) = 1;
        temp_v6 = FUN_0029e3bc(temp_v15);
        if (temp_v6 != temp_v8) {
          temp_v7 = 0x100016c;
          FUN_002bc200(temp_v7);
        }
      }
    }
    break;
  case 0xe:
    if (*(int *)(temp_v2 + 0x40c) >= 8) {
      if (*(int *)(temp_v2 + 0x40c) == 8) {
        if (*(int *)(temp_v2 + 0x544) < 0) {
          temp_v6 = FUN_0029f0f4();
          FUN_0029fae8(temp_v2 + 0x4d4,temp_v6 - 1,8,1,0,1);
          FUN_0029d8c0(temp_v2 + 0x4d4,0);
          temp_v6 = DAT_0044e190;
          *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
          puVar13 = (unsigned int *)(temp_v6 + 0x400);
          temp_v7 = *puVar13;
          *puVar13 = 0xf;
          *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
          *(unsigned char *)(temp_v2 + 0x410) = 1;
        }
        else {
          *(short *)(temp_v2 + *(int *)(temp_v2 + 0x544) * 2 + 0x482) =
               (short)*(unsigned int *)(temp_v2 + 0x540);
          temp_v6 = FUN_0029f0f4();
          FUN_0029fae8(temp_v2 + 0x4d4,temp_v6 - 1,8,1,0,1);
          FUN_002bdac0(temp_v2 + 0x2e4,0);
          FUN_002bf030(temp_v2 + 0x370,2);
          FUN_00296154(temp_v2 + 0x370,0x1a,*(int *)(temp_v2 + 0x544) + 0x414);
          *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
        }
      }
      temp_v6 = FUN_002b9220(temp_v2 + 0x2e4,0);
      if ((temp_v6 != 0) && (temp_v15 = FUN_002bf9f0(temp_v2 + 0x370), temp_v6 = DAT_0044e190, temp_v15 != 0))
      {
        *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x400);
        temp_v7 = *puVar13;
        *puVar13 = 0xf;
        *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
        *(unsigned char *)(temp_v2 + 0x410) = 1;
      }
    }
    break;
  case 0xf:
    FUN_002bf9f0(temp_v2 + 0xb4);
    FUN_002bf9f0(temp_v2 + 0x1cc);
    temp_v15 = temp_v2 + 0x4d4;
    temp_v6 = temp_v15;
    FUN_0029f878(temp_v15,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
    if (temp_v6 != 0) {
      *(unsigned char *)(temp_v2 + 0x410) = 1;
    }
    if (*(char *)(temp_v2 + 0x412) == '\0') {
      FUN_0029f278(temp_v15,1);
      if (temp_v15 != 0) {
        *(unsigned char *)(temp_v2 + 0x410) = 1;
      }
    }
    break;
  case 0x10:
    FUN_002bf9f0(temp_v2 + 0xb4);
    FUN_002bf9f0(temp_v2 + 600);
    if (*(char *)(temp_v2 + 0x412) == '\0') {
      temp_v6 = temp_v2 + 0x564;
      temp_v15 = FUN_0029f248();
      if ((((*(char *)(temp_v2 + 0x411) == '\0') && (temp_v8 = FUN_00288700(), temp_v8 != 0)) &&
          (temp_v8 = FUN_002c1830(4,0), temp_v8 != 0)) || (*(int *)(temp_v2 + 0x428) == 6)) {
        temp_v3 = 0xff;
        *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
        break;
      }
      if ((((*(char *)(temp_v2 + 0x411) == '\0') && (temp_v8 = FUN_00288700(), temp_v8 != 0)) &&
          (temp_v8 = FUN_002c1830(3,0), temp_v8 != 0)) || (*(int *)(temp_v2 + 0x424) == 6)) {
        temp_v3 = 1;
        *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
        break;
      }
      temp_v8 = temp_v6;
      FUN_0029f878(temp_v6,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
      if (temp_v8 == 0) {
        temp_v8 = temp_v6;
        FUN_0029f278(temp_v6,1);
        if (temp_v8 == 0) break;
        temp_v8 = FUN_002c0ba8(0x410);
        if (temp_v8 == 0) {
          if (temp_v15 != 0) {
            if ((temp_v15 == 3) && (temp_v15 = FUN_0029f248(temp_v6), temp_v15 == 2)) {
              FUN_0029d8c0(temp_v6,0);
            }
          }
          else {
            temp_v15 = FUN_0029f248(temp_v6);
            if (temp_v15 == 1) {
              FUN_0029d8c0(temp_v6,3);
            }
          }
        }
      }
      *(unsigned char *)(temp_v2 + 0x410) = 1;
    }
    break;
  case 0x11:
    FUN_002bf9f0(temp_v2 + 0xb4);
    FUN_002bf9f0(temp_v2 + 0x1cc);
    if (*(char *)(temp_v2 + 0x412) == '\0') {
      if ((((*(char *)(temp_v2 + 0x411) != '\0') || (temp_v6 = FUN_00288700(), temp_v6 == 0)) ||
          (temp_v6 = FUN_002c1830(4,0), temp_v6 == 0)) && (*(int *)(temp_v2 + 0x428) != 6)) {
        if ((((*(char *)(temp_v2 + 0x411) == '\0') && (temp_v6 = FUN_00288700(), temp_v6 != 0)) &&
            (temp_v6 = FUN_002c1830(3,0), temp_v6 != 0)) || (*(int *)(temp_v2 + 0x424) == 6)) {
          temp_v3 = 1;
          *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
          break;
        }
        temp_v6 = FUN_002c1830(9,1);
        if (temp_v6 != 0) {
          FUN_0029e63c(0x15,0);
          FUN_0029e5c8(1);
          FUN_0029e5c8(0x21);
          FUN_0029e5c8(3);
          FUN_0029e48c();
          temp_v6 = DAT_0044e190;
          *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
          puVar13 = (unsigned int *)(temp_v6 + 0x400);
          temp_v7 = *puVar13;
          *puVar13 = 0x12;
          *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
          FUN_002a0f68(1);
          temp_v7 = 0x100016d;
          FUN_002bc200(temp_v7);
          break;
        }
        temp_v7 = FUN_002bf6d0(0x1a,0x406);
        temp_v15 = temp_v2 + 0xdcc;
        temp_v6 = temp_v15;
        FUN_0029f878(temp_v15,temp_v7,temp_v2 + 0x42c,(int)*(short *)(temp_v2 + 0x474),
                     (int)*(short *)(temp_v2 + 0x476),(int)*(short *)(temp_v2 + 0x478),temp_v2 + 0x2388,0,
                     1);
        if (temp_v6 == 0) {
          FUN_0029f278(temp_v15,1);
          if (temp_v15 != 0) {
            *(unsigned char *)(temp_v2 + 0x410) = 1;
          }
          break;
        }
        *(unsigned char *)(temp_v2 + 0x410) = 1;
        break;
      }
      temp_v3 = 0xff;
      *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
    }
    break;
  case 0x12:
    temp_v6 = FUN_0029e468();
    if (temp_v6 != 0) {
      FUN_0029e41c();
      FUN_002a0f68(0);
      temp_v6 = FUN_0029af30();
      if (temp_v6 == 0xd || temp_v6 == 6) {
        temp_v7 = 0x30;
      }
      else {
        temp_v7 = 0x29;
      }
      FUN_002b8b78(temp_v7);
      *(unsigned char *)(temp_v2 + 0x410) = 1;
      temp_v6 = DAT_0044e190;
      *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x400);
      temp_v7 = *puVar13;
      *puVar13 = 0x11;
      *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
    }
    else {
      temp_v15 = FUN_0029e3d0();
      temp_v6 = DAT_0044e190;
      if (temp_v15 != 0x4b) {
        temp_v15 = FUN_002a0fac();
        if ((*(unsigned char *)(temp_v15 + 0x15) & 0x7f) == 1) {
          if ((char)*(unsigned char *)(temp_v15 + 0x15) < '\0') {
            FUN_002b7f0a(temp_v6 + 0x5c8,(int)*(short *)(temp_v6 + 0xdc8),4,FUN_002e4534);
          }
          else {
            FUN_002b7f0a(temp_v6 + 0x5c8,(int)*(short *)(temp_v6 + 0xdc8),4,FUN_00206be8);
          }
        }
        temp_v0 = *(unsigned char *)(temp_v15 + 0x15);
        if ((temp_v0 & 0x7f) == 0x21) {
          if ((char)temp_v0 < '\0') {
            FUN_002b7f0a(temp_v6 + 0x5c8,(int)*(short *)(temp_v6 + 0xdc8),4,FUN_002dc96c);
          }
          else {
            FUN_002b7f0a(temp_v6 + 0x5c8,(int)*(short *)(temp_v6 + 0xdc8),4,FUN_001f60dc);
          }
        }
        temp_v0 = *(unsigned char *)(temp_v15 + 0x15);
        if ((temp_v0 & 0x7f) == 3) {
          if ((char)temp_v0 < '\0') {
            FUN_002b7f0a(temp_v6 + 0x5c8,(int)*(short *)(temp_v6 + 0xdc8),4,FUN_002dca04);
          }
          else {
            FUN_002b7f0a(temp_v6 + 0x5c8,(int)*(short *)(temp_v6 + 0xdc8),4,FUN_001f6174);
          }
        }
        *(unsigned char *)(temp_v2 + 0x410) = 1;
      }
    }
    break;
  case 0x13:
    FUN_002bf9f0(temp_v2 + 0x140);
    if (*(char *)(temp_v2 + 0x412) == '\0') {
      temp_v9 = temp_v2 + 0x223c;
      temp_v6 = FUN_0029f260();
      temp_v15 = FUN_0029f248(temp_v9);
      temp_v8 = FUN_0029eba8(temp_v9);
      temp_v10 = FUN_002bf6d0(0x1a,0x406);
      temp_v7 = *(unsigned int *)(temp_v10 + 8);
      temp_v12 = **(unsigned int **)(temp_v10 + 0xc);
      if ((((*(char *)(temp_v2 + 0x411) != '\0') || (temp_v10 = FUN_00288700(), temp_v10 == 0)) ||
          (((temp_v10 = FUN_0029eba8(temp_v9), temp_v10 != 0 && (*(short *)(temp_v2 + 0x2232) != 0)) ||
           (temp_v10 = FUN_002c1830(4,0), temp_v10 == 0)))) && (*(int *)(temp_v2 + 0x428) != 6)) {
        if (((((*(char *)(temp_v2 + 0x411) != '\0') || (temp_v10 = FUN_00288700(), temp_v10 == 0)) ||
             ((temp_v10 = FUN_0029eba8(temp_v9), temp_v10 != 3 &&
              (!((int)*(short *)(temp_v2 + 0x2232) == temp_v8 + (temp_v6 + temp_v15) * 4 + 1 ||
                *(short *)(temp_v2 + 0x2232) == 0))))) || (temp_v6 = FUN_002c1830(3,0), temp_v6 == 0)) &&
           (*(int *)(temp_v2 + 0x424) != 6)) {
          temp_v6 = FUN_002c1830(9,1);
          if (temp_v6 != 0) {
            FUN_0029e63c(0x16,0);
            FUN_0029e5c8(1);
            FUN_0029e5c8(8);
            FUN_0029e5c8(2);
            FUN_0029e5c8(3);
            FUN_0029e48c();
            temp_v6 = DAT_0044e190;
            *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
            puVar13 = (unsigned int *)(temp_v6 + 0x400);
            temp_v7 = *puVar13;
            *puVar13 = 0x14;
            *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
            FUN_002a0f68(1);
            temp_v7 = 0x100016d;
            FUN_002bc200(temp_v7);
            break;
          }
          if ((-1 < *(int *)(temp_v2 + 0x414)) && (0 < *(short *)(temp_v2 + 0x2232))) {
            temp_v6 = *(int *)(temp_v2 + 0x428);
            temp_v17 = temp_v6 == 0;
            if (temp_v17) {
              temp_v6 = *(int *)(temp_v2 + 0x424);
            }
            if (temp_v17 && temp_v6 == 0) {
              temp_v6 = FUN_0029eba8(temp_v9);
              temp_v15 = FUN_0029f248(temp_v9);
              FUN_0029d8c0(temp_v9,(int)(*(int *)(temp_v2 + 0x414) +
                                       ((unsigned int)(*(int *)(temp_v2 + 0x414) >> 0x1f) >> 0x1e)) >> 2);
              FUN_00299558(temp_v9,*(int *)(temp_v2 + 0x414) % 4);
              if (*(int *)(temp_v2 + 0x414) != temp_v6 + temp_v15 * 4) {
                FUN_002bc200(0x100016c);
              }
              *(unsigned char *)(temp_v2 + 0x410) = 1;
              break;
            }
          }
          temp_v6 = temp_v9;
          FUN_0029f278(temp_v9,1);
          if (temp_v6 != 0) {
            temp_v4 = FUN_0029f260(temp_v9);
            temp_v5 = FUN_0029f248(temp_v9);
            *(short *)(temp_v2 + 0x2236) = temp_v5 + temp_v4;
            temp_v4 = FUN_0029ebdc(temp_v9);
            temp_v5 = FUN_0029eba8(temp_v9);
            *(short *)(temp_v2 + 0x2234) = temp_v5 + temp_v4;
            *(unsigned char *)(temp_v2 + 0x410) = 1;
          }
          else {
            FUN_0026adcc(temp_v9,temp_v7,temp_v12,(int)*(short *)(temp_v2 + 0x474),
                         (int)*(short *)(temp_v2 + 0x476),(int)*(short *)(temp_v2 + 0x478),0,1);
            if (temp_v9 != 0) {
              *(unsigned char *)(temp_v2 + 0x410) = 1;
            }
          }
        }
        else {
          *(unsigned char *)(temp_v2 + 0x481) = 1;
          temp_v4 = FUN_0029f260(temp_v9);
          temp_v5 = FUN_0029f248(temp_v9);
          *(short *)(temp_v2 + 0x2236) = temp_v5 + temp_v4;
          temp_v4 = FUN_0029ebdc(temp_v9);
          temp_v5 = FUN_0029eba8(temp_v9);
          *(short *)(temp_v2 + 0x2234) = temp_v5 + temp_v4;
        }
      }
      else {
        *(unsigned char *)(temp_v2 + 0x481) = 0xff;
        temp_v4 = FUN_0029f260(temp_v9);
        temp_v5 = FUN_0029f248(temp_v9);
        *(short *)(temp_v2 + 0x2236) = temp_v5 + temp_v4;
        temp_v4 = FUN_0029ebdc(temp_v9);
        temp_v5 = FUN_0029eba8(temp_v9);
        *(short *)(temp_v2 + 0x2234) = temp_v5 + temp_v4;
      }
    }
    break;
  case 0x14:
    temp_v6 = FUN_0029e468();
    if (temp_v6 != 0) {
      FUN_0029e41c();
      FUN_002a0f68(0);
      temp_v6 = FUN_0029af30();
      if ((((temp_v6 == 8) || (temp_v6 = FUN_0029af30(), temp_v6 == 9)) ||
          (temp_v6 = FUN_0029af30(), temp_v6 == 0xb)) || (temp_v6 = FUN_0029af30(), temp_v6 == 7)) {
        temp_v7 = 0x5f;
      }
      else {
        temp_v7 = 0x2a;
      }
      FUN_002b8b78(temp_v7);
      *(unsigned char *)(temp_v2 + 0x410) = 1;
      temp_v6 = DAT_0044e190;
      *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x400);
      temp_v7 = *puVar13;
      *puVar13 = 0x13;
      *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
    }
    else {
      temp_v6 = FUN_0029e3d0();
      if (temp_v6 != 0x4b) {
        FUN_0032c4bc();
        *(unsigned char *)(temp_v2 + 0x410) = 1;
      }
    }
    break;
  case 0x15:
    if (*(char *)(temp_v2 + 0x412) == '\0') {
      temp_v6 = temp_v2 + 0x22a8;
      temp_v15 = FUN_0029f260();
      if ((((*(char *)(temp_v2 + 0x411) == '\0') && (temp_v8 = FUN_00288700(), temp_v8 != 0)) &&
          (temp_v8 = FUN_002c1830(4,0), temp_v8 != 0)) || (*(int *)(temp_v2 + 0x428) == 6)) {
        temp_v3 = 0xff;
        *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
        break;
      }
      if ((((*(char *)(temp_v2 + 0x411) == '\0') && (temp_v8 = FUN_00288700(), temp_v8 != 0)) &&
          (temp_v8 = FUN_002c1830(3,0), temp_v8 != 0)) || (*(int *)(temp_v2 + 0x424) == 6)) {
        temp_v3 = 1;
        *(unsigned char *)(temp_v2 + 0x481) = temp_v3;
        break;
      }
      temp_v7 = FUN_002bf6d0(0x1a,0x48c);
      temp_v8 = temp_v6;
      FUN_0029f878(temp_v6,temp_v7,0,(int)*(short *)(temp_v2 + 0x474),(int)*(short *)(temp_v2 + 0x476),
                   (int)*(short *)(temp_v2 + 0x478),temp_v2 + 0x2388,0,0);
      if (temp_v8 != 0) {
        temp_v6 = FUN_0029f260(temp_v6);
        if (temp_v6 != temp_v15) {
          temp_v7 = 0x100016c;
          FUN_002bc200(temp_v7);
        }
      }
      else {
        temp_v8 = temp_v6;
        FUN_0029f278(temp_v6,0);
        if ((temp_v8 != 0) && (temp_v8 = FUN_0029f0f4(temp_v6), temp_v8 >= 9)) {
          FUN_0029f260(temp_v6);
          temp_v8 = FUN_0029f248(temp_v6);
          if ((temp_v8 != 7) && (temp_v8 = FUN_0029f248(temp_v6), temp_v8 != 0)) {
            FUN_002bc200(0x100016c);
          }
          temp_v8 = FUN_0029f260(temp_v6);
          while ((temp_v8 == temp_v15 &&
                 ((temp_v8 = FUN_0029f260(temp_v6), temp_v8 != 0 ||
                  (temp_v8 = FUN_0029f248(temp_v6), temp_v8 != 0))))) {
            temp_v8 = FUN_0029f260(temp_v6);
            temp_v10 = FUN_0029f0f4(temp_v6);
            if ((temp_v8 == temp_v10 - 8) && (temp_v8 = FUN_0029f248(temp_v6), temp_v8 == 7)) break;
            FUN_0029f278(temp_v6,0);
            temp_v8 = FUN_0029f260(temp_v6);
          }
        }
      }
    }
    break;
  case 0x16:
    temp_v15 = FUN_002c1830(0,1);
    temp_v6 = DAT_0044e190;
    if (temp_v15 != 0) {
      *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x400);
      temp_v7 = *puVar13;
      *puVar13 = 0x17;
      *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
    }
    break;
  case 0x17:
    temp_v6 = *(int *)(temp_v2 + 0x40c);
    if (temp_v6 == 8) {
      temp_v15 = 0;
    }
    if (temp_v6 >= 8) {
      if (temp_v6 == 8) {
        do {
          if (*(short *)(temp_v2 + temp_v15 * 2 + 0x2370) == 0) {
            *(unsigned short *)(temp_v2 + temp_v15 * 2 + 0x2370) = *(unsigned short *)(temp_v2 + 0x2380);
            break;
          }
          temp_v15 = temp_v15 + 1;
        } while (temp_v15 < 8);
        FUN_0029d8c0(temp_v2 + 0x230c,temp_v15);
        *(unsigned char *)(temp_v2 + 0x410) = 1;
        FUN_002bdac0(temp_v2 + 0x2e4,0);
        FUN_002bf030(temp_v2 + 0x370,2);
        FUN_00296154(temp_v2 + 0x370,0x1a,temp_v15 + 0x414);
        *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
      }
      temp_v6 = FUN_002b9220(temp_v2 + 0x2e4,0);
      if ((temp_v6 != 0) && (temp_v15 = FUN_002bf9f0(temp_v2 + 0x370), temp_v6 = DAT_0044e190, temp_v15 != 0))
      {
        *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x400);
        temp_v7 = *puVar13;
        *puVar13 = 0x18;
        *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
      }
    }
    break;
  case 0x18:
    temp_v15 = temp_v2 + 0x230c;
    temp_v6 = temp_v15;
    FUN_0029f878(temp_v15,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
    if ((temp_v6 == 0) && (FUN_0029f278(temp_v15,1), temp_v15 == 0)) {
      temp_v6 = FUN_002c1830(0,1);
      if ((temp_v6 != 0) || (temp_v6 = FUN_002c1830(1), temp_v6 != 0)) {
        temp_v6 = FUN_0026ada8();
        if (temp_v6 == 0) {
          FUN_00297128();
        }
        FUN_0029f10c(0,0x323232ff);
        FUN_0029bfec();
        *(unsigned int *)(temp_v2 + 0x2384) = 0;
      }
    }
    else {
      *(unsigned char *)(temp_v2 + 0x410) = 1;
    }
    break;
  case 0x19:
    temp_v15 = temp_v2 + 0x230c;
    temp_v6 = temp_v15;
    FUN_0029f878(temp_v15,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
    if ((temp_v6 != 0) || (temp_v6 = temp_v15, FUN_0029f278(temp_v15,1), temp_v6 != 0)) {
      *(unsigned char *)(temp_v2 + 0x410) = 1;
      break;
    }
    temp_v6 = FUN_002c1830(0,1);
    if ((temp_v6 != 0) || (*(char *)(temp_v2 + 0x2388) != '\0')) {
      temp_v6 = FUN_0029f248(temp_v15);
      temp_v8 = FUN_0029f0f4(temp_v15);
      if (temp_v6 == temp_v8 - 1) {
        *(unsigned int *)(temp_v2 + 0x2384) = 0;
        if (*(char *)(temp_v2 + 0x413) != '\0') {
          temp_v6 = FUN_0026ada8();
          if (temp_v6 == 0) {
            FUN_00297128();
          }
          FUN_0029f10c(0,0x323232ff);
          FUN_0029bfec();
          break;
        }
      }
      else {
        temp_v6 = FUN_0029f248(temp_v15);
        *(unsigned int *)(temp_v2 + 0x2384) = (unsigned int)*(unsigned short *)(temp_v2 + temp_v6 * 2 + 0x2370);
      }
      temp_v6 = DAT_0044e190;
      *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
      puVar13 = (unsigned int *)(temp_v6 + 0x400);
      temp_v7 = *puVar13;
      *puVar13 = 0x1a;
      *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
    }
    else {
      temp_v6 = FUN_002c1830(1);
      if (temp_v6 != 0) {
        *(unsigned int *)(temp_v2 + 0x2384) = 0;
        temp_v6 = FUN_0026ada8();
        if (temp_v6 == 0) {
          FUN_00297128();
        }
        FUN_0029f10c(0,0x323232ff);
        FUN_0029bfec();
      }
    }
    break;
  case 0x1a:
    if (*(int *)(temp_v2 + 0x40c) >= 8) {
      if (*(int *)(temp_v2 + 0x40c) == 8) {
        temp_v6 = temp_v2 + 0x230c;
        if (*(int *)(temp_v2 + 0x2384) != 0) {
          temp_v15 = FUN_0029f248();
          *(unsigned short *)(temp_v2 + temp_v15 * 2 + 0x2370) = *(unsigned short *)(temp_v2 + 0x2380);
          temp_v8 = FUN_0029f0f4(temp_v6);
          FUN_0029fae8(temp_v6,temp_v8 - 1,8,1,1,1);
          FUN_0029d8c0(temp_v6,temp_v15);
          *(unsigned char *)(temp_v2 + 0x410) = 1;
          FUN_002bdac0(temp_v2 + 0x2e4,0);
          FUN_002bf030(temp_v2 + 0x370,2);
          FUN_00296154(temp_v2 + 0x370,0x1a,temp_v15 + 0x414);
          *(unsigned short *)(temp_v2 + 0x388) = 0xa0;
        }
        else {
          temp_v15 = FUN_0029f0f4();
          FUN_0029fae8(temp_v6,temp_v15 - 1,8,1,1,1);
          FUN_0029d8c0(temp_v6,0);
          temp_v6 = DAT_0044e190;
          *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
          puVar13 = (unsigned int *)(temp_v6 + 0x400);
          temp_v7 = *puVar13;
          *puVar13 = 0x1b;
          *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
        }
      }
      temp_v6 = FUN_002b9220(temp_v2 + 0x2e4,0);
      if ((temp_v6 != 0) && (temp_v15 = FUN_002bf9f0(temp_v2 + 0x370), temp_v6 = DAT_0044e190, temp_v15 != 0))
      {
        *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
        puVar13 = (unsigned int *)(temp_v6 + 0x400);
        temp_v7 = *puVar13;
        *puVar13 = 0x1b;
        *(unsigned int *)(temp_v6 + 0x404) = temp_v7;
      }
    }
    break;
  case 0x1b:
    temp_v15 = temp_v2 + 0x230c;
    temp_v6 = temp_v15;
    FUN_0029f878(temp_v15,0,temp_v2 + 0x42c,0xffffffff,0xffffffff,0xffffffff,temp_v2 + 0x2388,0,1);
    if ((temp_v6 != 0) || (FUN_0029f278(temp_v15,1), temp_v15 != 0)) {
      *(unsigned char *)(temp_v2 + 0x410) = 1;
      break;
    }
    temp_v6 = FUN_002c1830(0,1);
    if ((temp_v6 != 0) || (temp_v6 = FUN_002c1830(1), temp_v6 != 0)) {
      temp_v6 = FUN_0026ada8();
      if (temp_v6 == 0) {
        FUN_00297128();
      }
      FUN_0029f10c(0,0x323232ff);
      FUN_0029bfec();
    }
  }
  temp_v17 = *(char *)(temp_v2 + 0x410) == '\0';
  temp_v6 = 0;
  if (!temp_v17) {
    temp_v6 = *(int *)(temp_v2 + 0x400);
  }
  if (temp_v17 || temp_v6 < 3) {
    *(int *)(temp_v2 + 0x40c) = *(int *)(temp_v2 + 0x40c) + 1;
    return 0;
  }
  *(unsigned char *)(temp_v2 + 0x410) = 0;
  temp_v17 = 0;
  temp_v6 = FUN_0029af30();
  if (temp_v6 != 0xd) {
    if (temp_v6 == 6) {
      puVar14 = (unsigned short *)FUN_0029af4c();
      temp_v6 = FUN_0029ec6c(*puVar14);
      if (temp_v6 == 0) {
        temp_v17 = 1;
      }
    }
  }
  else {
    temp_v17 = 1;
  }
  temp_v6 = *(int *)(temp_v2 + 0x400);
  if (((temp_v6 == 3 || temp_v6 == 6) || (temp_v6 == 0xb || temp_v6 == 0xe)) ||
     ((temp_v6 == 0xf || temp_v6 == 4 ||
      ((temp_v6 == 9 || temp_v6 == 7 || ((temp_v6 == 8 || temp_v6 == 0xc) || temp_v6 == 0xd)))))) {
    temp_v6 = temp_v2 + 0x4d4;
    temp_v15 = FUN_0029f260();
    temp_v8 = FUN_0029f248(temp_v6);
    temp_v15 = temp_v15 + temp_v8;
    if (*(int *)(temp_v2 + 0x400) == 6) {
      if (*(int *)(temp_v2 + 0x40c) >= 8) {
        temp_v8 = FUN_0029f0f4(temp_v6);
        if (temp_v8 - 1 != temp_v15) goto LAB_001cc5b4;
        temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + 0x4a2);
      }
      else {
        temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v15 * 2 + 0x482);
      }
    }
    else {
LAB_001cc5b4:
      if ((*(int *)(temp_v2 + 0x400) == 0xb) && (temp_v6 = FUN_0029f0f4(temp_v6), temp_v6 - 1 == temp_v15)) {
        temp_v11 = *(unsigned int *)(temp_v2 + 0x540);
      }
      else {
        temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v15 * 2 + 0x482);
      }
    }
    if (temp_v17) {
      FUN_002be7fc(temp_v18,&LAB_001cc640);
      FUN_0029f10c(temp_v18,0x323232ff);
    }
    else {
      FUN_0029cbec(temp_v11);
    }
  }
  if (*(int *)(temp_v2 + 0x400) == 0x10) {
    temp_v13 = 0;
    temp_v6 = FUN_0029f260();
    temp_v15 = FUN_0029f248(temp_v2 + 0x564);
    temp_v15 = temp_v15 + temp_v6;
    if (temp_v15 == 0) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x554);
    }
    else if (temp_v15 == 1) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x556);
    }
    else if (temp_v15 == 2) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x558);
    }
    else if (temp_v15 == 3) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x55a);
    }
    else if (temp_v15 == 4) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x55c);
    }
    else if (temp_v15 == 5) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x55e);
    }
    else if (temp_v15 == 6) {
      temp_v13 = *(unsigned short *)(temp_v2 + 0x560);
    }
    FUN_002923d0(temp_v13);
  }
  if (*(int *)(temp_v2 + 0x400) == 0x11) {
    if (temp_v17) {
      FUN_002be7fc(temp_v18,&LAB_001cc640);
      FUN_0029f10c(temp_v18,0x323232ff);
    }
    else {
      temp_v6 = FUN_0029f260();
      temp_v15 = FUN_0029f248(temp_v2 + 0xdcc);
      temp_v11 = (unsigned int)*(unsigned short *)(temp_v2 + (temp_v15 + temp_v6) * 4 + 0x5ca);
      if (temp_v11 != 0) {
        FUN_00221544();
        FUN_002be7fc(temp_v18,&LAB_001cc908,temp_v11);
        FUN_0029f10c(temp_v18,0x323232ff);
      }
    }
  }
  if (*(int *)(temp_v2 + 0x400) == 0x13) {
    temp_v6 = FUN_0029eba8();
    temp_v15 = FUN_0029f260(temp_v2 + 0x223c);
    temp_v8 = FUN_0029f248(temp_v2 + 0x223c);
    temp_v6 = temp_v2 + (temp_v6 + (temp_v8 + temp_v15) * 4) * 4;
    temp_v4 = *(short *)(temp_v6 + 0xe32);
    if (temp_v4 == 0) {
      puVar16 = (unsigned char *)0x0;
    }
    else {
      temp_v14 = (unsigned int)*(unsigned short *)(temp_v6 + 0xe30);
      temp_v11 = temp_v14;
      FUN_002b9364(temp_v14,temp_v4);
      FUN_0026ad50(*(unsigned short *)(temp_v11 + 0x38));
      temp_v7 = FUN_002bd258(temp_v14);
      temp_v12 = FUN_002bd020(temp_v14,0);
      FUN_002be7fc(temp_v18,&LAB_001cc90c,temp_v12,temp_v7);
      puVar16 = temp_v18;
    }
    FUN_0029f10c(puVar16,0x323232ff);
  }
  temp_v6 = *(int *)(temp_v2 + 0x400);
  if (((temp_v6 != 0x16 && temp_v6 != 0x17) && (temp_v6 != 0x18 && temp_v6 != 0x19)) &&
     (temp_v6 != 0x1a && temp_v6 != 0x1b)) {
    *(int *)(temp_v2 + 0x40c) = *(int *)(temp_v2 + 0x40c) + 1;
    return 0;
  }
  temp_v6 = temp_v2 + 0x230c;
  temp_v15 = FUN_0029f248();
  temp_v8 = FUN_0029f0f4(temp_v6);
  if (temp_v15 == temp_v8 - 1) {
    temp_v1 = *(unsigned short *)(temp_v2 + 0x2380);
    temp_v11 = (unsigned int)temp_v1;
    FUN_002890d0();
    if (temp_v11 != 0) {
      FUN_0029cbec();
      *(int *)(temp_v2 + 0x40c) = *(int *)(temp_v2 + 0x40c) + 1;
      return 0;
    }
  }
  else {
    temp_v15 = FUN_0029f248(temp_v6);
    if (*(short *)(temp_v2 + temp_v15 * 2 + 0x2370) != 0) {
      temp_v6 = FUN_0029f248(temp_v6);
      temp_v1 = *(unsigned short *)(temp_v2 + temp_v6 * 2 + 0x2370);
      temp_v11 = (unsigned int)temp_v1;
      FUN_002890d0();
      if (temp_v11 != 0) {
        FUN_0029cbec();
        *(int *)(temp_v2 + 0x40c) = *(int *)(temp_v2 + 0x40c) + 1;
        return 0;
      }
    }
  }
  FUN_0029f10c(0,0x323232ff);
  *(int *)(temp_v2 + 0x40c) = *(int *)(temp_v2 + 0x40c) + 1;
  return 0;
}
