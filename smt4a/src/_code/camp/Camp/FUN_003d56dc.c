/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d56dc` (_code @ 0x3d56dc, 0x34dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned short spF6; /* 0xf6: local_f6 */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp158; /* 0x158: local_158 */
} void_stack;

extern unsigned int *DAT_0057f108; /* 0x57f108 */
extern unsigned int DAT_00588e2c; /* 0x588e2c */
extern signed char DAT_005e1eb0; /* 0x5e1eb0 */
extern unsigned char DAT_005e1eb1; /* 0x5e1eb1 */
extern unsigned char DAT_005e1eb2; /* 0x5e1eb2 */
extern unsigned char DAT_005e1eb3; /* 0x5e1eb3 */
extern signed char DAT_005e1eb4; /* 0x5e1eb4 */
extern unsigned short DAT_005e1eb6; /* 0x5e1eb6 */
extern unsigned short DAT_005e1eb8; /* 0x5e1eb8 */
extern unsigned char DAT_005e1eba; /* 0x5e1eba */
extern unsigned char DAT_005f1634; /* 0x5f1634 */
extern unsigned char DAT_005f19ef; /* 0x5f19ef */

/* Supplied declaration required: FUN_0014afa8. */
/* Supplied declaration required: FUN_001517b4. */
extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_001631d0. */
extern int FUN_0016345c(void);
/* Supplied declaration required: FUN_00163aa4. */
extern int FUN_00163e40(unsigned int);
extern int FUN_00163e84(unsigned int);
/* Supplied declaration required: FUN_001641b4. */
/* Supplied declaration required: FUN_00164288. */
extern unsigned char FUN_001643a0(void);
/* Supplied declaration required: FUN_001643b4. */
extern int FUN_00164a34(void);
extern unsigned int FUN_00167f08(void);
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019de98. */
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_001f4908. */
/* Supplied declaration required: FUN_001fdde8. */
/* Supplied declaration required: FUN_001ffe84. */
/* Supplied declaration required: FUN_00202ea4. */
extern int FUN_0020a2fc(void);
/* Supplied declaration required: FUN_0020b660. */
/* Supplied declaration required: FUN_0020d700. */
/* Supplied declaration required: FUN_0020dc1c. */
extern int FUN_0020eaa4(void);
extern int FUN_00212968(void);
/* Supplied declaration required: FUN_0021545c. */
/* Supplied declaration required: FUN_00215bbc. */
/* Supplied declaration required: FUN_00215bd0. */
/* Supplied declaration required: FUN_0021b274. */
/* Supplied declaration required: FUN_0021c354. */
/* Supplied declaration required: FUN_002277d8. */
/* Supplied declaration required: FUN_00227e08. */
extern int FUN_002292f0(void);
extern int FUN_0022a030(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_002309dc. */
extern int FUN_00237608(void);
extern int FUN_00237620(void);
extern int FUN_00239480(void);
/* Supplied declaration required: FUN_00239a94. */
extern int FUN_0023b258(void);
/* Supplied declaration required: FUN_0023b27c. */
/* Supplied declaration required: FUN_0023b45c. */
extern int FUN_0023c068(void);
/* Supplied declaration required: FUN_0023c08c. */
/* Supplied declaration required: FUN_0023f604. */
extern int FUN_00261458(void);
/* Supplied declaration required: FUN_0026f0c4. */
/* Supplied declaration required: FUN_0026f7f0. */
/* Supplied declaration required: FUN_0026fc00. */
/* Supplied declaration required: FUN_0028187c. */
/* Supplied declaration required: FUN_00284168. */
/* Supplied declaration required: FUN_002844e4. */
extern int FUN_00284e94(void);
/* Supplied declaration required: FUN_00284ee4. */
/* Supplied declaration required: FUN_00287598. */
/* Supplied declaration required: FUN_0028b088. */
/* Supplied declaration required: FUN_002a1a78. */
extern int FUN_002a21e8(void);
extern int FUN_002a2814(void);
extern int FUN_002a4860(unsigned int *);
extern unsigned int FUN_002a4878(unsigned int *);
extern int FUN_002a4894(unsigned int *);
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_002a7324. */
extern int FUN_002a73f8(void);
extern int FUN_002a7410(void);
extern int FUN_002a746c(void);
/* Supplied declaration required: FUN_002a7b74. */
extern int FUN_002ab790(void);
extern int FUN_002ab7ac(void);
/* Supplied declaration required: FUN_002ab804. */
/* Supplied declaration required: FUN_002abff8. */
/* Supplied declaration required: FUN_002add8c. */
/* Supplied declaration required: FUN_002bf4f4. */
extern int FUN_002bf508(void);
/* Supplied declaration required: FUN_002bf534. */
extern int FUN_002bfd04(void);
/* Supplied declaration required: FUN_002c2344. */
extern int FUN_002c2bd0(void);
/* Supplied declaration required: FUN_002c2c4c. */
extern int FUN_002c2c68(unsigned int *);
/* Supplied declaration required: FUN_002c39dc. */
extern int FUN_002c7c54(void);
/* Supplied declaration required: FUN_002c8538. */
extern int FUN_002e07f4(void);
/* Supplied declaration required: FUN_002e1308. */
extern int FUN_002e2030(void);
extern int FUN_002e2054(void);
/* Supplied declaration required: FUN_002e2404. */
/* Supplied declaration required: FUN_002e2680. */
/* Supplied declaration required: FUN_002e26a4. */
/* Supplied declaration required: FUN_002e26c4. */
extern int FUN_002e27b8(void);
extern unsigned long long FUN_002e5ac0(unsigned int, unsigned int, int);
/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: FUN_002e738c. */
extern int FUN_002ebce4(void);
extern int FUN_002ebd74(void);
extern int FUN_002ef9f0(void);
extern int FUN_002f153c(void);
extern int FUN_002f3b90(void);
/* Supplied declaration required: FUN_002f3bc4. */
/* Supplied declaration required: FUN_002f78a0. */
/* Supplied declaration required: FUN_002f7bc4. */
/* Supplied declaration required: FUN_00312d6c. */
/* Supplied declaration required: FUN_00319aec. */
/* Supplied declaration required: FUN_0031d088. */
extern int FUN_0031d864(void);
/* Supplied declaration required: FUN_0031d890. */
/* Supplied declaration required: FUN_0031db84. */
/* Supplied declaration required: FUN_0031f718. */
extern int FUN_0031f90c(void);
/* Supplied declaration required: FUN_0031fad8. */
/* Supplied declaration required: FUN_0031fb04. */
/* Supplied declaration required: FUN_00324ae4. */
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: FUN_0032d388. */
extern int FUN_003309e0(void);
/* Supplied declaration required: FUN_00330b74. */
/* Supplied declaration required: FUN_00331380. */
extern int FUN_0033413c(void);
/* Supplied declaration required: FUN_00334214. */
/* Supplied declaration required: FUN_003343c0. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_00334434. */
/* Supplied declaration required: FUN_0033449c. */
extern int FUN_00334518(void);
extern char FUN_00334530(void);
extern int FUN_00334548(void);
/* Supplied declaration required: FUN_003423e8. */
extern int FUN_00344c6c(void);
extern int FUN_0034919c(void);
/* Supplied declaration required: FUN_003492dc. */
extern int FUN_00349af0(void);
extern unsigned int FUN_0034a9ac(void);
/* Supplied declaration required: FUN_0034aae4. */
/* Supplied declaration required: FUN_00357ad8. */
/* Supplied declaration required: FUN_003599e8. */
extern int FUN_0035a028(void);
extern int FUN_0035a044(void);
/* Supplied declaration required: FUN_0035a094. */
/* Supplied declaration required: FUN_0035ab90. */
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0035d8a4. */
extern int FUN_0035db94(void);
/* Supplied declaration required: FUN_0035dbd4. */
/* Supplied declaration required: FUN_00368390. */
/* Supplied declaration required: FUN_0036b6cc. */
extern int FUN_0036cf78(void);
extern unsigned char FUN_0036d134(void);
extern unsigned int FUN_0036d18c(int);
/* Supplied declaration required: FUN_00370f7c. */
extern unsigned short FUN_00372140(void);
extern int FUN_00372158(void);
/* Supplied declaration required: FUN_0037a2e4. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_0037c8e4. */
extern int FUN_0037d438(void);
extern int FUN_0037d9dc(void);
/* Supplied declaration required: FUN_0037dab0. */
extern int FUN_0037db9c(void);
/* Supplied declaration required: FUN_0037e1b0. */
extern int FUN_003871c0(void);
extern int FUN_003881d0(void);
/* Supplied declaration required: FUN_003881e0. */
/* Supplied declaration required: FUN_0038843c. */
/* Supplied declaration required: FUN_00388758. */
/* Supplied declaration required: FUN_0038a654. */
extern int FUN_0038b358(void);
extern int FUN_0038b568(void);
extern int FUN_0039ba04(void);
/* Supplied declaration required: FUN_0039c0e4. */
/* Supplied declaration required: FUN_0039c244. */
/* Supplied declaration required: FUN_0039c2a4. */
extern int FUN_0039c608(void);
extern unsigned short FUN_0039c628(void);
/* Supplied declaration required: FUN_003a43ec. */
/* Supplied declaration required: FUN_003a76b8. */
/* Supplied declaration required: FUN_003a7788. */
/* Supplied declaration required: FUN_003a7c00. */
extern int FUN_003ae848(void);
/* Supplied declaration required: FUN_003b01e8. */
/* Supplied declaration required: FUN_003b078c. */
/* Supplied declaration required: FUN_003b6dc4. */
extern unsigned char FUN_003b6f00(void);
extern int FUN_003b70d0(void);
extern unsigned char FUN_003c0dcc(void);
extern int FUN_003c3ec4(void);
/* Supplied declaration required: FUN_003d0bc0. */
/* Supplied declaration required: FUN_003d2d6c. */
/* Supplied declaration required: FUN_003d386c. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: FUN_003da8f4. */
/* Supplied declaration required: FUN_003daf0c. */
/* Supplied declaration required: FUN_003dc628. */
extern int FUN_003deee4(unsigned int);
extern unsigned char FUN_003e42f0(void);
extern int FUN_003f86c8(unsigned int);
extern int FUN_00418768(unsigned int);
/* Supplied declaration required: FUN_004188e0. */
extern int FUN_00481104(unsigned int);
extern int MapMode_IsBusy(void);


unsigned int FUN_003d56dc(void)

{
/* irregular: 61 unstructured edge(s); 3 goto(s); 125 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int temp_v5;
  unsigned int *puVar10;
  unsigned int temp_v6;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int *puVar19;
  unsigned char *pbVar20;
  char *pcVar21;
  int temp_v12;
  unsigned char temp_v13;
  unsigned long long temp_v14;
  unsigned int temp_v15;
  unsigned int uStack_154;
  unsigned int temp_v16;
  unsigned int uStack_14c;
  unsigned short temp_v17;
  
  puVar2 = DAT_0057f108;
  puVar7 = &temp_v15;
  puVar8 = &temp_v15;
  puVar10 = &temp_v15;
  puVar13 = &temp_v15;
  if (DAT_0057f108[9] == 0x11) {
    temp_v4 = DAT_0057f108[7];
    if (!((temp_v4 == 4 || temp_v4 == 5) || temp_v4 == 0x47)) {
      temp_v4 = FUN_0023b258();
      FUN_003343f0(temp_v4 == 0);
    }
    else {
      FUN_003343f0(1);
    }
  }
  FUN_00163aa4(puVar2 + 0x1dc);
  FUN_00163aa4(puVar2 + 0x1ff);
  FUN_00163aa4(DAT_0057f108 + 0x6a5);
  if (DAT_0057f108 != (unsigned int *)0x0) {
    puVar12 = DAT_0057f108 + 0x6c8;
    switch(*(unsigned char *)puVar12) {
    case 1:
      temp_v4 = FUN_00163aa4(DAT_0057f108 + 0x682);
      if (temp_v4 != 0) {
        *(unsigned char *)puVar12 = 2;
      }
      break;
    case 3:
      temp_v4 = FUN_00163aa4(DAT_0057f108 + 0x682);
      if (temp_v4 != 0) {
        *(unsigned char *)puVar12 = 4;
      }
    }
  }
  temp_v2 = FUN_001643a0();
  temp_v4 = puVar2[7];
  *(unsigned char *)(puVar2 + 0xe) = temp_v2;
  puVar12 = DAT_0057f108;
  if ((((temp_v4 != 7 && temp_v4 != 8) && ((temp_v4 != 9 && temp_v4 != 0x1e) && temp_v4 != 0x1f)) &&
      (*(short *)(puVar2 + 0x1aa) != 3)) && (*(short *)(puVar2 + 0x1aa) != 4)) {
    temp_v4 = FUN_002c2c4c(DAT_0057f108 + 0x10);
    FUN_00163aa4(puVar12 + 0x196);
    if ((*(short *)(puVar12 + 0x259) != 2) && (*(short *)(puVar12 + 0x259) != 10)) {
      temp_v10 = 0;
      if (temp_v10 < temp_v4) {
        do {
          if (temp_v10 <= puVar12[5] - 1) {
            FUN_00163aa4(puVar12 + temp_v10 * 0x23 + 0x245);
          }
          temp_v10 = temp_v10 + 1;
        } while (temp_v10 < temp_v4);
      }
    }
    else {
      temp_v10 = 0;
      while (temp_v4 = temp_v4 - 1, -1 < temp_v4) {
        if (temp_v10 <= puVar12[5] - 1) {
          FUN_00163aa4(puVar12 + temp_v4 * 0x23 + 0x245);
        }
        temp_v10 = temp_v10 + 1;
      }
    }
    temp_v4 = 0;
    do {
      if (temp_v4 <= (int)puVar2[6]) {
        FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x3a3);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0xd);
    FUN_00163aa4(puVar2 + 0x65f);
    puVar2[6] = puVar2[6] + 1;
    FUN_00163aa4(puVar2 + 0x58d);
    temp_v4 = FUN_0020a2fc();
    if (((temp_v4 == 0) && (temp_v4 = FUN_002ab7ac(), temp_v4 == 3)) &&
       (temp_v4 = FUN_002f3b90(), temp_v4 != 0)) {
      FUN_00163aa4(puVar2 + 0x222);
    }
  }
  puVar12 = DAT_0057f108;
  switch(puVar2[7]) {
  case 0:
    temp_v6 = FUN_00167f08();
    puVar2[0xc5d] = temp_v6;
    FUN_002add8c();
    puVar2[9] = 6;
    puVar2[7] = 1;
    FUN_0037c8e4(1,0);
    FUN_0038843c();
    FUN_002f78a0(puVar2);
    break;
  case 1:
    puVar2[7] = 2;
    puVar2[5] = 0;
    break;
  case 2:
    temp_v4 = FUN_00163e84(0);
    if (temp_v4 != 0) {
      temp_v6 = FUN_002a4878(puVar2 + 0x10);
      temp_v4 = FUN_003da8f4((int)*(char *)(puVar2 + 0x29),temp_v6);
      if ((((temp_v4 != 0x48 && temp_v4 != 0x49) && (temp_v4 != 0x4a && temp_v4 != 0x4b)) &&
          ((temp_v4 != 0x4c && temp_v4 != 0x4d) && temp_v4 != 0x4e)) ||
         (temp_v10 = FUN_0036cf78(), temp_v10 != 0)) {
        temp_v7 = puVar2[9];
        puVar2[7] = temp_v7;
        temp_v13 = *(char *)((int)puVar2 + 0xb7) != '\0';
        if (temp_v13) {
          temp_v7 = (unsigned int)*(unsigned char *)((int)puVar2 + 0xb9);
        }
        if (!temp_v13 || temp_v7 == 3) {
          temp_v10 = FUN_0035a094();
          if (temp_v10 == 0) {
            temp_v6 = FUN_0036d18c(temp_v4);
            FUN_0019de98(temp_v6,0xf4f4f4ff);
          }
          if (temp_v4 == 0x2f) {
            FUN_003599e8(0x48c722ff,1,0x12,0x15);
          }
        }
        temp_v4 = FUN_002e26c4(temp_v4);
        puVar12 = DAT_0057f108;
        if ((*(unsigned char *)(temp_v4 + 3) & 0xf) != 0) {
          pcVar21 = (char *)((int)DAT_0057f108 + 0x1b6d);
          if (*pcVar21 == '\0') {
            temp_v4 = 0;
            do {
              *(unsigned short *)((int)puVar12 + temp_v4 * 2 + 0x1b54) = 0xffff;
              *(unsigned short *)((int)puVar12 + temp_v4 * 6 + 0x1b5a) = 0xffff;
              *(unsigned short *)((int)puVar12 + temp_v4 * 6 + 0x1b5c) = 0xffff;
              *(unsigned short *)((int)puVar12 + temp_v4 * 6 + 0x1b5e) = 0xffff;
              puVar7 = &temp_v15;
              FUN_002f3bc4(&temp_v15,temp_v4,0);
              if (puVar7 != (unsigned int *)0x0) {
                temp_v10 = FUN_001834a4(0x1a,temp_v4 + 0x87);
                temp_v3 = FUN_001643b4(0x1a,temp_v4 + 0x87);
                *(unsigned short *)((int)puVar12 + temp_v4 * 2 + 0x1b54) = temp_v3;
                temp_v12 = FUN_001834a4(0x1a,0x7f);
                temp_v11 = (int)(short)(*(short *)(temp_v10 + 8) + *(short *)(temp_v12 + 8));
                FUN_00284168(temp_v11,(int)(short)(*(short *)(temp_v10 + 10) + *(short *)(temp_v12 + 10)),
                             (int)**(short **)(temp_v12 + 0xc),(int)(*(short **)(temp_v12 + 0xc))[1]);
                *(short *)((int)puVar12 + temp_v4 * 6 + 0x1b5a) = (short)temp_v11;
                temp_v12 = FUN_001834a4(0x1a,0x80);
                temp_v11 = (int)(short)(*(short *)(temp_v10 + 8) + *(short *)(temp_v12 + 8));
                FUN_00284168(temp_v11,(int)(short)(*(short *)(temp_v10 + 10) + *(short *)(temp_v12 + 10)),
                             (int)**(short **)(temp_v12 + 0xc),(int)(*(short **)(temp_v12 + 0xc))[1]);
                *(short *)((int)puVar12 + temp_v4 * 6 + 0x1b5c) = (short)temp_v11;
                temp_v12 = FUN_001834a4(0x1a,0x81);
                temp_v11 = (int)(short)(*(short *)(temp_v10 + 8) + *(short *)(temp_v12 + 8));
                FUN_00284168(temp_v11,(int)(short)(*(short *)(temp_v10 + 10) + *(short *)(temp_v12 + 10)),
                             (int)**(short **)(temp_v12 + 0xc),(int)(*(short **)(temp_v12 + 0xc))[1]);
                *(short *)((int)puVar12 + temp_v4 * 6 + 0x1b5e) = (short)temp_v11;
                *pcVar21 = *pcVar21 + '\x04';
              }
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < 3);
          }
        }
        else {
          temp_v4 = FUN_00237608();
          if (temp_v4 != 0) {
            FUN_002e6dd4((int)puVar2 + 0x1b22,0x25);
          }
          else {
            FUN_002c39dc(1,0,0xffffffff);
          }
        }
        temp_v7 = FUN_002c2c4c(puVar2 + 0x10);
        temp_v4 = 0;
        if (0 < (int)temp_v7) {
          pbVar20 = (unsigned char *)(puVar2 + 0x6db);
          do {
            temp_v10 = (int)(8 - temp_v7) / 2 + 4;
            if ((temp_v7 & 1) != 0) {
              temp_v10 = (int)(7 - temp_v7) / 2 + 0x14;
            }
            temp_v3 = FUN_001643b4(0x14,temp_v10 + temp_v4);
            temp_v4 = temp_v4 + 1;
            *(unsigned short *)((int)puVar2 + (unsigned int)*pbVar20 * 2 + 0x1b22) = temp_v3;
            *pbVar20 = *pbVar20 + 1;
          } while (temp_v4 < (int)temp_v7);
        }
        if (*(char *)((int)puVar2 + 0xb7) != '\0') {
          if (*(char *)((int)puVar2 + 0xa5) != '\x01') break;
          if (*(char *)((int)puVar2 + 0xb9) == '\x03') {
            temp_v6 = 0x51;
          }
          else {
            temp_v6 = 0x52;
          }
        }
        else {
          temp_v4 = FUN_00237608();
          if (temp_v4 != 0) {
            temp_v4 = FUN_002bf508();
            if (temp_v4 != 0) {
              temp_v6 = 0xb3;
            }
            else {
              temp_v4 = FUN_0035a094(0);
              if (temp_v4 != 0) break;
              temp_v6 = 0x10d;
            }
          }
          else {
            temp_v3 = FUN_001643b4(0x14,0xe0);
            *(unsigned short *)((int)puVar2 + 0x1b32) = temp_v3;
            *(char *)(puVar2 + 0x6db) = *(char *)(puVar2 + 0x6db) + '\x01';
            if (*(char *)((int)puVar2 + 0xa5) == '\x01') {
              temp_v4 = FUN_00349af0();
              if (temp_v4 == 0) {
                temp_v6 = 3;
              }
              else {
                temp_v6 = 4;
              }
              FUN_001681cc(temp_v6);
              FUN_00331380(0);
            }
            if (*(char *)(puVar2 + 0x29) == '\x01') {
              if (*(char *)((int)puVar2 + 0xa5) < '\x02') break;
              temp_v4 = FUN_00349af0();
              if (temp_v4 == 0) {
                temp_v6 = 1;
              }
              else {
                temp_v6 = 2;
              }
              FUN_001681cc(temp_v6);
              FUN_00331380(1);
            }
            temp_v0 = *(char *)(puVar2 + 0x29);
            temp_v13 = temp_v0 != '\t';
            if (!temp_v13) {
              temp_v0 = *(char *)((int)puVar2 + 0xa5);
            }
            if (temp_v13 || temp_v0 != '\f') break;
            temp_v4 = FUN_00349af0();
            if (temp_v4 == 0) {
              temp_v6 = 3;
            }
            else {
              temp_v6 = 4;
            }
          }
        }
        FUN_001681cc(temp_v6);
      }
    }
    break;
  case 3:
    FUN_0026fc00(0,1,0xffffffff);
    *(unsigned char *)((int)puVar2 + 0xa5) = *(unsigned char *)(puVar2 + 0x29);
    *(unsigned char *)(puVar2 + 0x29) = *(unsigned char *)((int)puVar2 + 0xa6);
    FUN_0020d700();
    if (*(char *)((int)puVar2 + 0x32a9) != '\0') {
      FUN_0020b660(0x1e);
      *(unsigned char *)((int)puVar2 + 0x32a9) = 0;
    }
    else {
      puVar2[9] = 6;
      FUN_0020b660(2);
    }
    FUN_0019de98(0,0xf4f4f4ff);
    if (puVar2[10] != 0x22) {
      FUN_003da8f4((int)*(char *)(puVar2 + 0x29),
                   (int)*(char *)((int)puVar2 + *(char *)(puVar2 + 0x29) + 0xa7));
      temp_v4 = FUN_002e26c4();
      if ((*(unsigned char *)(temp_v4 + 3) & 0xf) == 0) {
        FUN_003da8f4((int)*(char *)((int)puVar2 + 0xa5),
                     (int)*(char *)((int)puVar2 + *(char *)((int)puVar2 + 0xa5) + 0xa7));
        temp_v10 = FUN_002e26c4();
        if ((*(unsigned char *)(temp_v10 + 3) & 0xf) != 0) {
          FUN_00284ee4(1);
        }
      }
      if (*(unsigned char *)(temp_v4 + 3) >> 4 == 0) {
        FUN_003da8f4((int)*(char *)((int)puVar2 + 0xa5),
                     (int)*(char *)((int)puVar2 + *(char *)((int)puVar2 + 0xa5) + 0xa7));
        temp_v4 = FUN_002e26c4();
        if ((*(unsigned char *)(temp_v4 + 3) & 0xf0) != 0) {
          FUN_0037c8e4(1,0);
          FUN_0038843c();
          puVar12 = puVar2;
          FUN_002f78a0(puVar12);
        }
      }
    }
    break;
  case 4:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    FUN_00163aa4(DAT_0057f108 + 0x1b9);
    temp_v4 = FUN_002ebce4();
    if (((temp_v4 == 0) || (*(char *)((int)puVar2 + 0x6e2) == '\0')) ||
       (*(char *)((int)puVar2 + 0x76e) == '\0')) break;
    temp_v6 = FUN_002a4878(puVar2 + 0x10);
    temp_v6 = FUN_003da8f4((int)*(char *)(puVar2 + 0x29),temp_v6);
    temp_v4 = puVar2[9];
    if (temp_v4 == 0x11) {
      temp_v4 = FUN_002c2c68(puVar2 + 0x7b);
      if (temp_v4 >= 1) {
        temp_v5 = 0x34;
        FUN_001681cc(temp_v5);
        FUN_0028b088(temp_v6);
        temp_v4 = puVar2[9];
        FUN_0020b660(temp_v4);
        break;
      }
      temp_v5 = 7;
      FUN_001681cc(temp_v5);
      FUN_0028b088(temp_v6);
      temp_v4 = puVar2[9];
      FUN_0020b660(temp_v4);
      break;
    }
    if (temp_v4 != 0x1d) {
      if (temp_v4 == 10) {
        temp_v5 = 9;
      }
      else if (temp_v4 != 0xf) {
        if (temp_v4 == 0x10) {
          temp_v5 = 8;
        }
        else if (temp_v4 == 0x2e) {
          temp_v5 = 5;
        }
        else {
          if (temp_v4 != 0x2f) {
            if (temp_v4 == 0x30) {
              FUN_0028b088(temp_v6);
              temp_v4 = puVar2[9];
              FUN_0020b660(temp_v4);
              break;
            }
            FUN_002add8c();
            FUN_0028b088(temp_v6);
            temp_v4 = puVar2[9];
            FUN_0020b660(temp_v4);
            break;
          }
          FUN_003423e8(2);
          temp_v4 = FUN_00261458();
          if (*(short *)(temp_v4 + 0x66) == 0) {
            temp_v5 = 0x9a;
          }
          else {
            temp_v5 = 0x120;
          }
        }
      }
      else {
        temp_v5 = 7;
      }
      FUN_001681cc(temp_v5);
    }
    else {
      FUN_002f7bc4(temp_v6);
    }
    FUN_0028b088(temp_v6);
    temp_v4 = puVar2[9];
    FUN_0020b660(temp_v4);
    break;
  case 5:
    FUN_00163aa4();
    if (*(char *)((int)puVar2 + 0x76e) == '\0') break;
    if (puVar2[10] == 0x2e) {
      FUN_00227e08();
    }
    if (puVar2[10] == 0x2f) {
      FUN_00239a94();
      FUN_003423e8(0);
    }
    temp_v4 = puVar2[9];
    if (temp_v4 != 0x12) {
      if (temp_v4 < 0x13) {
        switch(temp_v4) {
        case 6:
          temp_v6 = FUN_002a4878(puVar2 + 0x10);
          temp_v4 = FUN_003da8f4((int)*(char *)(puVar2 + 0x29),temp_v6);
          temp_v6 = FUN_002a4878(puVar2 + 0x10);
          FUN_003da8f4((int)*(char *)(puVar2 + 0x29),temp_v6);
          temp_v10 = FUN_002e26c4();
          if ((((temp_v4 != 0x48 && temp_v4 != 0x49) && (temp_v4 != 0x4a && temp_v4 != 0x4b)) &&
              (temp_v4 != 0x4c && temp_v4 != 0x4d)) && (temp_v4 != 0x4e && temp_v4 != 0x35)) {
            if ((*(unsigned char *)(temp_v10 + 3) & 0xf) == 0) {
              FUN_002c39dc(1,0,0xffffffff);
              FUN_00284ee4(1);
            }
            if (((*(unsigned char *)(temp_v10 + 3) & 0xf0) == 0) && (temp_v4 = FUN_0034919c(), temp_v4 == 0)) {
              FUN_0037c8e4(1,0);
              FUN_0038843c();
              FUN_002f78a0(puVar2);
            }
          }
          FUN_0026fc00(2,1,0xffffffff,0);
          if (puVar2[10] != 0x30) {
            FUN_002add8c();
          }
          temp_v4 = 1;
          FUN_0020b660(temp_v4);
          break;
        case 0xb:
          FUN_002c39dc(9,puVar2[0xd],0xffffffff);
          FUN_00284ee4(1);
          FUN_00215bbc();
          temp_v4 = puVar2[9];
        case 0xc:
        case 0xd:
        case 0xe:
          FUN_0020b660(temp_v4);
        }
      }
      else {
        if (temp_v4 == 0x14) {
          FUN_002c39dc(7,puVar2[0xd],0xffffffff);
          FUN_00284ee4(1);
          temp_v4 = puVar2[9];
          FUN_0020b660(temp_v4);
          break;
        }
        if (!((temp_v4 != 0x18 && temp_v4 != 0x38) && temp_v4 != 0x39)) {
          FUN_0020b660(temp_v4);
        }
      }
      break;
    }
    temp_v4 = FUN_002a4860(puVar2 + 0x7b);
    temp_v10 = FUN_002a4894(puVar2 + 0x7b);
    FUN_002c39dc(6,puVar2[(temp_v10 + temp_v4) * 2 + 0x6dc],puVar2[(temp_v10 + temp_v4) * 2 + 0x6dd]);
    FUN_00284ee4(1);
    temp_v4 = puVar2[9];
    FUN_0020b660(temp_v4);
    break;
  case 6:
    FUN_003dc628();
    break;
  case 7:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    FUN_00163aa4(puVar2 + 0x222);
    if (*(char *)((int)puVar2 + 0x6e2) != '\0') {
      temp_v4 = 8;
      FUN_0020b660(temp_v4);
    }
    break;
  case 8:
    temp_v4 = FUN_0033413c();
    if (temp_v4 != 0) {
      temp_v0 = (char)temp_v4 + *(char *)(puVar2 + 0x2e);
      *(char *)(puVar2 + 0x2e) = temp_v0;
      if (temp_v0 < '\0') {
        *(unsigned char *)(puVar2 + 0x2e) = 2;
      }
      else if ('\x02' < temp_v0) {
        *(unsigned char *)(puVar2 + 0x2e) = 0;
      }
      FUN_002f3bc4(&temp_v15,(int)*(char *)((int)puVar2 + 0xb9),(int)*(char *)(puVar2 + 0x2e));
      if (puVar7 != (unsigned int *)0x0) {
        if (*(char *)(puVar2 + 0x2e) != '\0') {
          FUN_0033449c(0);
          FUN_00334214(&temp_v15,0,0);
        }
        else {
          FUN_0033449c(1);
          FUN_0031f718((int)(short)temp_v17,0);
          FUN_00334434(&temp_v15,1,0);
          FUN_003343c0(0);
        }
        FUN_002a7324(1);
        FUN_0037e1b0((int)*(char *)(puVar2 + 0x2e),1);
      }
    }
    temp_v4 = FUN_002a7410();
    if (temp_v4 == 0) {
      temp_v4 = FUN_0035db94();
      if (temp_v4 < 0) {
        FUN_0026fc00(2,2,0xffffffff,0);
      }
      else {
        temp_v4 = FUN_0035db94();
        if (0 < temp_v4) {
          FUN_0026fc00(2,1,0xffffffff,0);
        }
      }
      FUN_001681cc(0x52);
      temp_v4 = 9;
      FUN_0020b660(temp_v4);
    }
    break;
  case 9:
    if (*(short *)(puVar2 + 0x1aa) != 2) {
      FUN_00163aa4(puVar2 + 0x222);
      FUN_00163aa4(puVar2 + 0x196);
    }
    else {
      FUN_00163aa4(puVar2 + 0x222);
      FUN_00163aa4(puVar2 + 0x196);
      temp_v4 = 0;
      do {
        FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
    }
    if ((*(char *)((int)puVar2 + 0x6e2) != '\0') && (*(char *)((int)puVar2 + 0x912) != '\0')) {
      FUN_0020b660(6);
      if ((*(char *)((int)puVar2 + 0xb9) != 3) &&
         (FUN_002f3bc4(&temp_v15,(int)*(char *)((int)puVar2 + 0xb9),(int)*(char *)(puVar2 + 0x2e)),
         puVar8 != (unsigned int *)0x0)) {
        FUN_0032d0c8(0,1,temp_v17,&temp_v15);
      }
    }
    break;
  case 10:
    temp_v6 = 0xb;
    FUN_003daf0c(temp_v6);
    break;
  case 0xb:
    temp_v4 = FUN_00284e94();
    if (temp_v4 != 0) {
      temp_v4 = FUN_00481104(puVar12[0xd]);
      if (temp_v4 == 0) {
        FUN_0023f604(0xb);
      }
      temp_v4 = FUN_002c2c68(puVar12 + 0x30);
      if (temp_v4 < 1) {
        FUN_0021b274(3,0xffffffff,0);
        puVar12[9] = 6;
        temp_v6 = 5;
      }
      else {
        FUN_0021b274(1,0xffffffff,0);
        puVar12[9] = 10;
        temp_v6 = 4;
      }
      FUN_0020b660(temp_v6);
      FUN_0037c8e4(1,0);
      FUN_0038843c();
      FUN_002f78a0(puVar12);
      temp_v4 = FUN_0039c608();
      if (temp_v4 == 0) {
        FUN_003a7c00(1);
      }
    }
    break;
  case 0xc:
    temp_v4 = DAT_0057f108[8];
    if (temp_v4 == 0) {
      temp_v4 = 0x7b6;
      FUN_00192550();
      FUN_0036b6cc(*(unsigned short *)(temp_v4 + 0x54));
      puVar12[8] = puVar12[8] + 1;
      goto LAB_003d6870;
    }
    if (temp_v4 != 1) {
      if (temp_v4 != 2) break;
    }
    else {
LAB_003d6870:
      temp_v4 = FUN_003c3ec4();
      if (temp_v4 == 0) break;
      puVar12[8] = puVar12[8] + 1;
    }
    FUN_002277d8();
    FUN_0021b274(1,0xffffffff,0);
    puVar12[9] = 10;
    temp_v4 = 4;
    FUN_0020b660(temp_v4);
    break;
  case 0xd:
    FUN_0020dc1c();
    break;
  case 0xe:
    temp_v4 = DAT_0057f108[8];
    if (temp_v4 != 0) {
      if (temp_v4 != 1) {
        if (temp_v4 != 2) break;
      }
      else {
        temp_v4 = FUN_002ebd74();
        if (temp_v4 == 0) break;
        FUN_003492dc();
        puVar12[8] = 2;
      }
      temp_v4 = FUN_00481104(puVar12[0xcee]);
      if (temp_v4 == 0) {
        FUN_0023f604(0xb);
      }
      FUN_002277d8();
      temp_v4 = FUN_002c2c68(puVar12 + 0x30);
      if (temp_v4 >= 1) {
        FUN_0021b274(1,0xffffffff,0);
        puVar12[9] = 10;
        temp_v4 = 4;
        FUN_0020b660(temp_v4);
        break;
      }
      FUN_0021b274(3,0xffffffff,0);
      puVar12[9] = 6;
      temp_v4 = 5;
      FUN_0020b660(temp_v4);
      break;
    }
    FUN_002e738c(2);
    FUN_00370f7c(puVar12[0xcee]);
    puVar12[8] = 1;
    break;
  case 0xf:
    temp_v6 = 0xd;
    FUN_003daf0c(temp_v6);
    break;
  case 0x10:
    FUN_003daf0c(0xe);
    break;
  case 0x11:
    FUN_001ffe84();
    break;
  case 0x12:
    temp_v4 = FUN_00284e94();
    if (temp_v4 != 0) {
      temp_v4 = FUN_002a4860(puVar12 + 0x7b);
      temp_v10 = FUN_002a4894(puVar12 + 0x7b);
      temp_v4 = FUN_0022a030(puVar12[(temp_v10 + temp_v4) * 2 + 0x6dd],
                           puVar12[(temp_v10 + temp_v4) * 2 + 0x6dc]);
      if (temp_v4 == 0) {
        FUN_0026f7f0();
      }
      FUN_0023b45c(0);
      FUN_0021b274(1,0xffffffff,0);
      puVar12[9] = 0x11;
      FUN_0020b660(4);
      FUN_0035dbd4(1);
    }
    break;
  case 0x15:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if (*(char *)((int)puVar2 + 0x6e2) != '\0') {
      FUN_002c39dc(0xc,0,0xffffffff);
      FUN_00284ee4(0);
      FUN_00215bbc();
      FUN_00331380(1);
      temp_v4 = 0x17;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x16:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if (*(char *)((int)puVar2 + 0x6e2) != '\0') {
      FUN_002c39dc(0xd,0,0xffffffff);
      FUN_00284ee4(0);
      FUN_00215bbc();
      temp_v4 = 0x17;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x17:
    temp_v4 = FUN_00284e94();
    if (temp_v4 != 0) {
      temp_v4 = FUN_0037db9c();
      if (temp_v4 != 0) {
        *(unsigned char *)(puVar12 + 0x29) = 4;
        *(unsigned char *)(puVar12 + 0x2a) = 2;
      }
      if (*(char *)(puVar12 + 0x29) != '\b') {
        FUN_002c39dc(1,0,0xffffffff);
      }
      if (*(char *)(puVar12 + 0xcaa) != '\0') {
        temp_v4 = FUN_0037db9c();
        if (temp_v4 == 0) {
          *(unsigned char *)(puVar12 + 0x29) = 1;
        }
        *(unsigned char *)(puVar12 + 0xcaa) = 0;
      }
      FUN_003a7788();
      FUN_0020d700();
      puVar12[9] = 6;
      FUN_0020b660(2);
      if (*(char *)(puVar12 + 0x29) != '\b') {
        FUN_0026fc00(1,1,0xffffffff,0);
        temp_v4 = FUN_0034919c();
        if (temp_v4 == 0) {
          FUN_0037c8e4(1,0);
          FUN_0038843c();
          FUN_002f78a0(puVar12);
        }
      }
      FUN_002add8c();
      temp_v0 = *(char *)(puVar12 + 0x29);
      if (temp_v0 == '\b') {
        FUN_0026fc00(2,1,0xffffffff,0);
        FUN_002abff8(3);
        FUN_0023c08c(0);
      }
    }
    break;
  case 0x18:
    FUN_003d386c(1);
    temp_v4 = FUN_002a4860(puVar2 + 0x7b);
    temp_v10 = FUN_002a4894(puVar2 + 0x7b);
    if (DAT_0057f108 != (unsigned int *)0x0) {
      DAT_0057f108[0x2f] = temp_v4 + temp_v10;
    }
    temp_v4 = FUN_002a7410();
    if (temp_v4 == 0) {
      temp_v4 = FUN_0035db94();
      if (temp_v4 < 0) {
        temp_v6 = 2;
      }
      else {
        temp_v4 = FUN_0035db94();
        if (0 >= temp_v4) {
          puVar2[9] = 0x11;
          temp_v4 = 4;
          FUN_0020b660(temp_v4);
          break;
        }
        temp_v6 = 1;
      }
      FUN_0021b274(temp_v6,0xffffffff,0);
      puVar2[9] = 0x11;
      temp_v4 = 4;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x19:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if (*(char *)((int)puVar2 + 0x6e2) != '\0') {
      FUN_002c39dc(4,0,0xffffffff);
      FUN_00284ee4(0);
      FUN_00215bbc();
      FUN_00331380(1);
      temp_v4 = 0x1b;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x1a:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if (*(char *)((int)puVar2 + 0x6e2) != '\0') {
      FUN_002c39dc(0xf,0,0xffffffff);
      FUN_00284ee4(0);
      FUN_00215bbc();
      FUN_00331380(1);
      temp_v4 = 0x1c;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x1b:
  case 0x1c:
  case 0x4a:
    temp_v15 = 0;
    uStack_154 = 0;
    temp_v16 = 0;
    uStack_14c = 0;
    FUN_0031db84(&temp_v15,&temp_v16);
    if (puVar10 != (unsigned int *)0x0) {
      temp_v4 = FUN_001ab888();
      temp_v1 = uStack_14c;
      temp_v7 = temp_v16;
      temp_v10 = -1;
      temp_v12 = -1;
      if ((temp_v15 & 1) == 0) {
        if ((temp_v15 & 2) != 0) {
          temp_v10 = 0;
        }
        else if ((temp_v15 & 4) != 0) {
          temp_v10 = 1;
        }
        else if ((temp_v15 & 8) != 0) {
          temp_v10 = 2;
        }
      }
      temp_v11 = 0;
      do {
        temp_v14 = FUN_002e5ac0(1,0,temp_v11);
        if (((unsigned int)temp_v14 & temp_v7) != 0 || ((unsigned int)((unsigned long long)temp_v14 >> 0x20) & temp_v1) != 0) {
          temp_v12 = temp_v11 - 1;
          break;
        }
        temp_v11 = temp_v11 + 1;
      } while (temp_v11 < 0x19);
      if (puVar12[7] == 0x1b) {
        temp_v10 = temp_v4 + temp_v10;
        if (*(char *)(temp_v10 + 0x1ca0) == *(char *)(temp_v4 + temp_v12 + 0x1c88)) {
          *(unsigned char *)(temp_v10 + 0x1ca0) = 0xff;
          temp_v6 = 0x1000213;
        }
        else {
          *(char *)(temp_v10 + 0x1ca0) = -1;
          temp_v0 = *(char *)(temp_v4 + temp_v12 + 0x1c88);
          if (-1 < temp_v0) {
            *(char *)(temp_v10 + 0x1ca0) = temp_v0;
          }
          temp_v6 = 0x1000212;
        }
        FUN_001641b4(temp_v6);
      }
      FUN_0031d890();
      if (puVar12[7] == 0x1b) {
        FUN_002c39dc(4,0,0xffffffff);
        FUN_00284ee4(0);
      }
      if (puVar12[7] == 0x1c) {
        FUN_002c39dc(0xf,0,0xffffffff);
        FUN_00284ee4(0);
      }
      if (puVar12[7] == 0x4a) {
        FUN_002c39dc(0x11,0,0xffffffff);
        FUN_00284ee4(0);
      }
    }
    temp_v4 = FUN_00284e94();
    if (temp_v4 != 0) {
      if (puVar12[7] == 0x4a) {
        FUN_0035ab90();
        puVar19 = DAT_0057f108;
        *(unsigned char *)(DAT_0057f108 + 0xcad) = 0;
        temp_v4 = FUN_002e27b8();
        if (0 < temp_v4) {
          *(unsigned char *)(puVar19 + 0xcad) = 1;
        }
      }
      FUN_0020d700();
      FUN_0026f7f0();
      FUN_002c39dc(1,0,0xffffffff);
      FUN_0026fc00(1,1,0xffffffff,0);
      puVar12[9] = 6;
      FUN_0020b660(2);
      temp_v4 = FUN_0034919c();
      if (temp_v4 == 0) {
        FUN_0037c8e4(1,0);
        FUN_0038843c();
        FUN_002f78a0(puVar12);
      }
      FUN_002add8c();
      FUN_0037c8e4(1,0);
      FUN_0038843c();
      FUN_002f78a0(puVar12);
    }
    break;
  case 0x1d:
    temp_v6 = FUN_002a4878(puVar2 + 0x10);
    FUN_003da8f4((int)*(char *)(puVar2 + 0x29),temp_v6);
    FUN_001fdde8();
    break;
  case 0x1e:
    temp_v4 = FUN_00163e84(0);
    if (temp_v4 == 0) {
      puVar2[5] = 0;
      break;
    }
    if ((int)puVar2[5] >= 2) {
      FUN_0014afa8();
      FUN_002ab804();
      FUN_002abff8(3);
      temp_v4 = 0x1f;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x1f:
    temp_v4 = FUN_002f3b90();
    if ((temp_v4 != 0) && (temp_v4 = FUN_003f86c8(0x1f), temp_v4 != 0)) {
      *(unsigned char *)((int)puVar2 + 0xb7) = 1;
      *(unsigned char *)(puVar2 + 0x2e) = 0;
      *(unsigned char *)((int)puVar2 + 0xb9) = 3;
      FUN_003b078c();
      FUN_00184758(puVar2 + 0x222,9,0);
      FUN_00184c00(puVar2 + 0x222,0x13,0);
      FUN_0023c08c(0);
      puVar2[9] = 6;
      temp_v4 = 2;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x20:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if ((*(char *)((int)puVar2 + 0x6e2) != '\0') && (temp_v4 = FUN_0020a2fc(), temp_v4 != 0)) {
      FUN_0031d890();
      FUN_002abff8(3);
      FUN_0026f7f0();
      puVar2[9] = 6;
      FUN_0020b660(5);
      FUN_002a7b74();
      FUN_0023c08c(0);
    }
    break;
  case 0x21:
    temp_v4 = FUN_002ab790();
    if ((temp_v4 == 0x10) && (temp_v4 = FUN_0023c068(), temp_v4 != 0)) {
      FUN_001f4908(0,0x14,0xff);
      FUN_0020b660(0x22);
      FUN_003d2d6c(10);
      FUN_00287598();
    }
    else {
      temp_v4 = 1;
      FUN_001517b4();
      if ((temp_v4 != 0) && (temp_v4 = FUN_00239480(), temp_v4 != 0)) {
        FUN_002844e4();
        FUN_001641b4(0x100020e);
      }
    }
    break;
  case 0x22:
    temp_v4 = FUN_00163e84(0);
    if (temp_v4 != 0) {
      FUN_0031fb04();
      FUN_002e1308();
      FUN_002c39dc(1,0,0xffffffff);
      FUN_00284ee4(1);
      puVar12 = DAT_0057f108;
      *(unsigned char *)(DAT_0057f108 + 0xcad) = 0;
      temp_v4 = FUN_002e27b8();
      if (0 < temp_v4) {
        *(unsigned char *)(puVar12 + 0xcad) = 1;
      }
      *(unsigned char *)((int)puVar2 + 0xb7) = 0;
      FUN_0026f0c4();
      temp_v4 = FUN_0016345c();
      if (temp_v4 != 0) {
        FUN_00164288();
      }
      FUN_0020b660(3);
      FUN_003d54f8(0,10);
      temp_v4 = MapMode_IsBusy();
      if (temp_v4 != 0) {
        FUN_00312d6c();
      }
      else {
        temp_v4 = FUN_00164a34();
        if (temp_v4 != 0) {
          FUN_00324ae4();
        }
        else {
          FUN_0021c354(0x2d);
        }
      }
      FUN_002c2344(1);
    }
    break;
  case 0x23:
    FUN_00163aa4(puVar2 + 0x222);
    FUN_00163aa4(puVar2 + 0x196);
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    temp_v4 = FUN_002f3b90();
    if (temp_v4 != 0) {
      FUN_002f3bc4(&temp_v15,(int)*(char *)((int)puVar2 + 0xb9),(int)*(char *)(puVar2 + 0x2e));
      if (puVar13 != (unsigned int *)0x0) {
        temp_v4 = FUN_002a73f8();
        if (temp_v4 != 0) {
          if (*(char *)(puVar2 + 0x2e) != '\0') {
            FUN_0033449c(0);
            FUN_00334214(&temp_v15,0,1);
          }
          else {
            FUN_0033449c(1);
            FUN_0031f718((int)(short)temp_v17,0);
            FUN_00334434(&temp_v15,1,0);
            FUN_003343c0(0);
          }
          FUN_0037e1b0((int)*(char *)(puVar2 + 0x2e),1);
          temp_v7 = FUN_0034a9ac();
          FUN_002a7324(temp_v7 != temp_v17);
        }
        else {
          FUN_0037e1b0((int)*(char *)(puVar2 + 0x2e),1);
          FUN_002c8538(1);
          FUN_00215bd0();
        }
      }
      else {
        *(unsigned char *)((int)puVar2 + 0xb9) = 3;
        *(unsigned char *)(puVar2 + 0x2e) = 0;
        FUN_0037e1b0(0xffffffff,1);
        FUN_0022e774();
        FUN_003da8f4((int)*(char *)(puVar2 + 0x29),
                     (int)*(char *)((int)puVar2 + *(char *)(puVar2 + 0x29) + 0xa7));
        FUN_002a7b74();
        FUN_0023c08c(0);
      }
      FUN_002add8c();
      FUN_0031d890();
      FUN_0026f7f0();
      FUN_0026fc00(2,1,0xffffffff,0);
      puVar2[9] = 6;
      temp_v4 = 2;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x24:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    FUN_00163aa4(puVar2 + 0x222);
    if ((*(char *)((int)puVar2 + 0x6e2) != '\0') && (temp_v4 = FUN_0020eaa4(), temp_v4 != 0)) {
      puVar2[9] = 6;
      FUN_0020b660(5);
      FUN_0026f7f0();
      FUN_0031d890();
      temp_v4 = FUN_003da8f4((int)*(char *)(puVar2 + 0x29),
                           (int)*(char *)((int)puVar2 + *(char *)(puVar2 + 0x29) + 0xa7));
      if (temp_v4 == 0x1b) {
        FUN_0037c8e4(1,0);
        FUN_0038843c();
        if ((DAT_0057f108 != (unsigned int *)0x0) &&
           (pcVar21 = (char *)(DAT_0057f108 + 0x6c8), temp_v0 = *pcVar21,
           temp_v0 != '\x04' && temp_v0 != '\x03')) {
          FUN_00184c00(DAT_0057f108 + 0x682,0x18,0);
          *pcVar21 = '\x03';
        }
        FUN_002f78a0(puVar2);
      }
      FUN_002abff8(3);
      FUN_0023c08c(0);
      FUN_0031fad8();
    }
    break;
  case 0x25:
    temp_v4 = puVar2[3];
    FUN_002a1a78();
    if (temp_v4 == 4) {
      temp_v4 = FUN_0037d438();
      if (temp_v4 != 0) {
        FUN_0038a654();
        temp_v4 = 0x33;
        FUN_0020b660(temp_v4);
        break;
      }
      FUN_0038a654();
      FUN_002c39dc(1,0,0xffffffff);
      FUN_00284ee4(1);
      puVar12 = DAT_0057f108;
      temp_v2 = FUN_003e42f0();
      *(unsigned char *)((int)puVar12 + 0x32b5) = temp_v2;
      FUN_0026fc00(1,1,0xffffffff,0);
      FUN_0031d890();
      puVar2[9] = 6;
      FUN_0020b660(2);
      temp_v4 = FUN_0034919c();
      if (temp_v4 == 0) {
        FUN_0037c8e4(1,0);
        FUN_0038843c();
        FUN_002f78a0(puVar2);
      }
      FUN_002add8c();
    }
    break;
  case 0x26:
    temp_v4 = FUN_002a746c();
    if (temp_v4 != 0) {
      FUN_0034aae4();
      if (*(char *)(puVar2 + 0xcaa) != '\0') {
        *(unsigned char *)(puVar2 + 0x29) = 1;
        FUN_0020d700();
        *(unsigned char *)(puVar2 + 0xcaa) = 0;
      }
      FUN_0028b088(0);
      puVar2[9] = 6;
      FUN_0020b660(5);
      FUN_0037c8e4(1,0);
      FUN_0038843c();
      FUN_002f78a0(puVar2);
      puVar12 = DAT_0057f108;
      puVar19 = DAT_0057f108 + 0xcac;
      *(unsigned char *)puVar19 = 0;
      temp_v4 = FUN_003deee4(1);
      if ((temp_v4 != 0) || (temp_v4 = FUN_00418768(1), temp_v4 == 0)) {
        *(unsigned char *)puVar19 = 1;
      }
      *(unsigned char *)((int)puVar12 + 0x32b1) = 0;
      temp_v4 = FUN_003deee4(0);
      if ((temp_v4 != 0) || (temp_v4 = FUN_00418768(0), temp_v4 == 0)) {
        *(unsigned char *)((int)puVar12 + 0x32b1) = 1;
      }
    }
    break;
  case 0x27:
    temp_v4 = FUN_002a746c();
    if (temp_v4 != 0) {
      if (DAT_005e1eb4 == '\0') {
        DAT_005e1eb4 = FUN_00334530();
      }
      DAT_005e1eb6 = FUN_0039c628();
      DAT_005e1eb8 = FUN_00372140();
      temp_v4 = FUN_002f153c();
      temp_v10 = FUN_00334518();
      temp_v12 = FUN_0031f90c();
      temp_v11 = FUN_00372158();
      temp_v8 = FUN_00334548();
      FUN_0034aae4();
      if (DAT_005e1eb4 != '\0') {
        temp_v9 = FUN_00162e8c();
        *(unsigned short *)(temp_v9 + 0x22) = 0;
        FUN_00368390();
        FUN_00357ad8();
      }
      if (!((((temp_v4 == 0 && temp_v10 == 0) && temp_v12 == 0) && temp_v11 == 0) && temp_v8 == 0)) {
        DAT_005e1eb0 = (char)temp_v4;
        DAT_005e1eb1 = (unsigned char)temp_v10;
        DAT_005e1eb2 = (unsigned char)temp_v12;
        DAT_005e1eb3 = (unsigned char)temp_v11;
        FUN_0020b660(0x33);
      }
      else {
        FUN_0028b088(0);
        puVar2[9] = 6;
        FUN_0020b660(5);
        FUN_0037c8e4(1,0);
        FUN_0038843c();
        FUN_002f78a0(puVar2);
        puVar12 = DAT_0057f108;
        puVar19 = DAT_0057f108 + 0xcac;
        *(unsigned char *)puVar19 = 0;
        temp_v4 = FUN_003deee4(1);
        if ((temp_v4 != 0) || (temp_v4 = FUN_00418768(1), temp_v4 == 0)) {
          *(unsigned char *)puVar19 = 1;
        }
        *(unsigned char *)((int)puVar12 + 0x32b1) = 0;
        temp_v4 = FUN_003deee4(0);
        if ((temp_v4 != 0) || (temp_v4 = FUN_00418768(0), temp_v4 == 0)) {
          *(unsigned char *)((int)puVar12 + 0x32b1) = 1;
        }
      }
      if (DAT_005e1eb0 == '\0') {
        temp_v4 = FUN_00162e8c();
        *(unsigned short *)(temp_v4 + 0x1e) = DAT_005e1eb6;
      }
    }
    break;
  case 0x2b:
    FUN_0023b27c();
    temp_v6 = 0x2c;
    puVar2[7] = temp_v6;
    break;
  case 0x2c:
    temp_v6 = FUN_002a4878(puVar2 + 0x10);
    temp_v6 = FUN_003da8f4((int)*(char *)(puVar2 + 0x29),temp_v6);
    puVar12 = DAT_0057f108;
    temp_v4 = FUN_0023b258();
    if (temp_v4 != 0) {
      FUN_0035d8a4();
      temp_v6 = FUN_002a4878(puVar12 + 0x10);
      FUN_003da8f4((int)*(char *)(puVar12 + 0x29),temp_v6);
      FUN_0028b088();
      FUN_001681cc(*(unsigned short *)((int)puVar12 + 0x3a));
      if (puVar12[10] == 0x11) {
        FUN_0023b45c(0);
      }
      FUN_0020b660(puVar12[10]);
      if (puVar12[7] == 0x1d) {
        temp_v6 = 3;
      }
      else {
        temp_v6 = 1;
      }
      puVar12[8] = temp_v6;
    }
    else {
      temp_v4 = FUN_002c7c54();
      if (temp_v4 != 0x69) {
        FUN_003d0bc0(temp_v6);
      }
    }
    break;
  case 0x2d:
    temp_v4 = FUN_0031d864();
    if (temp_v4 != 0) {
      FUN_002add8c();
      temp_v4 = 6;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x2e:
    FUN_00202ea4();
    temp_v4 = FUN_00212968();
joined_r0x003d7c38:
    if (temp_v4 != 0) {
      FUN_0028b088(0);
      FUN_0021b274(0,0xffffffff);
      puVar2[9] = 6;
      temp_v4 = 5;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x2f:
    FUN_0021545c();
    temp_v4 = FUN_002292f0();
    goto joined_r0x003d7c38;
  case 0x30:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if ((*(char *)((int)puVar2 + 0x6e2) != '\0') && (temp_v4 = FUN_00163e40(puVar2[4]), temp_v4 == 0)) {
      puVar2[9] = 6;
      temp_v4 = 5;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x31:
  case 0x37:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    FUN_00163aa4(puVar2 + 0x222);
    if ((puVar2[5] == 1) && (FUN_0039c2a4(1), puVar2[7] == 0x37)) {
      FUN_004188e0(DAT_00588e2c);
    }
    if ((((int)puVar2[5] >= 2) && (*(char *)((int)puVar2 + 0x6e2) != '\0')) &&
       (temp_v4 = FUN_002ef9f0(), temp_v4 == 0)) {
      if (puVar2[7] != 0x37) {
        puVar2[9] = 6;
        FUN_0037c8e4(1,0);
        FUN_0038843c();
        FUN_002f78a0(puVar2);
      }
      else {
        temp_v4 = FUN_003b70d0();
        if (temp_v4 == 0) {
          temp_v6 = 0x39;
        }
        else {
          temp_v6 = 0x38;
        }
        puVar2[9] = temp_v6;
        puVar2[0xb] = 0;
      }
      temp_v4 = 5;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x32:
    if (puVar2[5] == 1) {
      FUN_0039c244();
    }
    if (((int)puVar2[5] >= 2) && (temp_v4 = FUN_002ef9f0(), temp_v4 == 0)) {
      temp_v4 = FUN_0038b358();
      if (temp_v4 != 0) {
        DAT_005e1eba = 1;
        DAT_005f1634 = 1;
        temp_v4 = 0x55;
        FUN_0020b660(temp_v4);
        break;
      }
      puVar2[9] = 6;
      FUN_0020b660(5);
      FUN_0037c8e4(1,0);
      FUN_0038843c();
      FUN_002f78a0(puVar2);
    }
    break;
  case 0x33:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    temp_v4 = FUN_002ebce4();
    if (((temp_v4 != 0) && (*(char *)((int)puVar2 + 0x6e2) != '\0')) &&
       (temp_v4 = FUN_003309e0(), temp_v4 != 0)) {
      FUN_0020b660(0x55);
    }
    puVar12 = puVar2 + 0x58d;
    FUN_00163aa4(puVar12);
    break;
  case 0x34:
  case 0x3b:
  case 0x3c:
  case 0x45:
    temp_v4 = FUN_002bfd04();
    if (temp_v4 != 0) {
      temp_v4 = FUN_003881d0();
      if (temp_v4 == 0) {
LAB_003d801c:
        FUN_0020d700();
        puVar2[9] = 6;
        FUN_0037c8e4(1,0);
        FUN_0038843c();
        FUN_002f78a0(puVar2);
        FUN_0026fc00(2,1,0xffffffff,0);
        temp_v4 = 1;
        FUN_0020b660(temp_v4);
        break;
      }
      FUN_00319aec(0);
      FUN_0020b660(0x36);
      temp_v4 = 0;
      puVar2[0xb] = temp_v4;
    }
    break;
  case 0x35:
    if (puVar2[0xb] != 0) {
      if ((puVar2[0xb] == 1) && (temp_v4 = FUN_00237620(), temp_v4 == 0)) {
        FUN_0020d700();
        puVar2[0xb] = 0;
        puVar2[9] = 6;
        temp_v4 = FUN_0034919c();
        if (temp_v4 == 0) {
          FUN_0037c8e4(1,0);
          FUN_0038843c();
        }
        FUN_002f78a0(puVar2);
        FUN_0026fc00(2,1,0xffffffff,0);
        temp_v4 = 1;
        FUN_0020b660(temp_v4);
      }
    }
    else {
      temp_v4 = FUN_00237620();
      if (temp_v4 == 0) {
        temp_v4 = FUN_002a4b74();
        if (temp_v4 != 0) {
          FUN_0028187c(0x27);
          FUN_001681cc(0x92);
          temp_v4 = puVar2[0xb] + 1;
          puVar2[0xb] = temp_v4;
          break;
        }
        FUN_0026fc00(2,3,0xffffffff,0);
        FUN_00388758(1);
        FUN_00319aec(0);
        FUN_0020b660(0x36);
        temp_v4 = 0;
        puVar2[0xb] = temp_v4;
      }
    }
    break;
  case 0x36:
    if (puVar2[0xb] != 0) {
      if ((puVar2[0xb] == 1) && (temp_v4 = FUN_00344c6c(), temp_v4 != 0)) {
        FUN_0032d388(1);
        FUN_0020b660(0x37);
        temp_v4 = 0;
        puVar2[0xb] = temp_v4;
      }
    }
    else {
      temp_v4 = FUN_00344c6c();
      if (temp_v4 != 0) {
        temp_v4 = puVar2[0xb] + 1;
        puVar2[0xb] = temp_v4;
      }
    }
    break;
  case 0x38:
    temp_v4 = puVar2[0xb];
    if (temp_v4 != 0) {
      if (temp_v4 != 1) {
        if ((temp_v4 == 2) && (temp_v4 = FUN_00344c6c(), temp_v4 != 0)) {
          temp_v4 = FUN_003881d0();
          if (temp_v4 != 0) {
            FUN_003881e0(0);
            FUN_003343f0(0);
            temp_v6 = 0x34;
            puVar2[7] = temp_v6;
            break;
          }
          puVar2[7] = 0x34;
          FUN_003343f0(0);
          FUN_002e2404(3);
        }
      }
      else {
        temp_v4 = FUN_002bfd04();
        if (temp_v4 != 0) {
          FUN_002e2680(0);
          temp_v4 = puVar2[0xb] + 1;
          puVar2[0xb] = temp_v4;
        }
      }
    }
    else {
      temp_v4 = FUN_002ef9f0();
      if (temp_v4 == 0) {
        FUN_002bf534(1);
        temp_v4 = puVar2[0xb] + 1;
        puVar2[0xb] = temp_v4;
      }
    }
    break;
  case 0x39:
    temp_v4 = puVar2[0xb];
    if (temp_v4 == 0) {
      temp_v4 = FUN_002ef9f0();
      if (temp_v4 == 0) {
        FUN_002bf534(1);
        temp_v4 = puVar2[0xb] + 1;
        puVar2[0xb] = temp_v4;
      }
      break;
    }
    if (temp_v4 != 1) {
      if ((temp_v4 == 2) && (temp_v4 = FUN_00344c6c(), temp_v4 != 0)) {
        puVar2[9] = 6;
        puVar2[0xb] = 0;
        temp_v4 = 5;
        FUN_0020b660(temp_v4);
      }
    }
    else {
      temp_v4 = FUN_002bfd04();
      if (temp_v4 != 0) {
        FUN_002e2680(0);
        FUN_0037c8e4(1,0);
        FUN_0038843c();
        FUN_002f78a0(puVar2);
        temp_v4 = puVar2[0xb] + 1;
        puVar2[0xb] = temp_v4;
      }
    }
    break;
  case 0x3a:
    temp_v4 = FUN_00237620();
    if (temp_v4 == 0) goto LAB_003d801c;
    break;
  case 0x3d:
    temp_v4 = FUN_002e2030();
    if ((temp_v4 != 0) && (temp_v4 = FUN_002e2054(), temp_v4 != 0)) {
      temp_v4 = FUN_002e26c4(0x36);
      temp_v2 = *(unsigned char *)(temp_v4 + 2);
      *(unsigned char *)((int)puVar2 + 0xa6) = temp_v2;
      *(unsigned char *)((int)puVar2 + 0xa5) = *(unsigned char *)(puVar2 + 0x29);
      *(unsigned char *)(puVar2 + 0x29) = temp_v2;
      FUN_0020d700();
      puVar2[9] = 6;
      puVar12 = DAT_0057f108;
      temp_v2 = FUN_0036d134();
      *(unsigned char *)((int)puVar12 + 0x32b6) = temp_v2;
      FUN_0026fc00(2,1,0xffffffff,0);
      FUN_0019de98(0,0xf4f4f4ff);
      temp_v4 = 1;
      FUN_0020b660(temp_v4);
      break;
    }
    temp_v4 = FUN_002bfd04();
    if (temp_v4 != 0) {
      *(unsigned char *)(puVar2 + 0x29) = 0xc;
      FUN_0020d700();
      FUN_0026fc00(1,1,0xffffffff,0);
      puVar2[9] = 6;
      FUN_0020b660(2);
      FUN_002309dc();
    }
    break;
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x42:
  case 0x43:
  case 0x44:
    temp_v4 = FUN_0035a028();
    if (temp_v4 == 0) {
      *(unsigned char *)(puVar2 + 0x29) = 0xd;
      FUN_0020d700();
      puVar12 = DAT_0057f108;
      if (puVar2[7] != 0x3f) {
        FUN_0026fc00(1,1,0xffffffff,0);
        puVar2[9] = 6;
        FUN_0020b660(2);
        FUN_002309dc();
        break;
      }
      temp_v2 = FUN_0036d134();
      *(unsigned char *)((int)puVar12 + 0x32b6) = temp_v2;
      FUN_0026fc00(1,1,0xffffffff,0);
      puVar2[9] = 6;
      FUN_0020b660(2);
      FUN_002309dc();
    }
    break;
  case 0x41:
    temp_v4 = FUN_0035a028();
    if (temp_v4 == 0) {
      *(unsigned char *)(puVar2 + 0x29) = 0xd;
      FUN_0020d700();
      FUN_002e2680(0);
      FUN_0026fc00(1,1,0xffffffff,0);
      puVar2[9] = 6;
      FUN_0020b660(2);
      FUN_002309dc();
      break;
    }
    temp_v4 = FUN_0035a044();
    if (temp_v4 != 0) {
      temp_v4 = FUN_002e26c4(0x3d);
      temp_v2 = *(unsigned char *)(temp_v4 + 2);
      *(unsigned char *)((int)puVar2 + 0xa6) = temp_v2;
      *(unsigned char *)((int)puVar2 + 0xa5) = *(unsigned char *)(puVar2 + 0x29);
      *(unsigned char *)(puVar2 + 0x29) = temp_v2;
      FUN_0020d700();
      puVar2[9] = 6;
      FUN_0026fc00(1,1,0xffffffff,0);
      temp_v4 = 1;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x46:
    temp_v4 = FUN_00237608();
    if (temp_v4 == 0) {
      temp_v4 = 0;
      while( 1 ) {
        FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
        temp_v4 = temp_v4 + 1;
        if (temp_v4 >= 8) break;
        if ((temp_v4 == 7) && (*(char *)((int)puVar2 + 0xd72) != '\0')) {
          FUN_002bf534(0);
        }
      }
      puVar12 = puVar2 + 0x196;
      FUN_00163aa4(puVar12);
      break;
    }
    temp_v4 = FUN_002bfd04();
    if ((temp_v4 != 0) || (temp_v4 = FUN_0035a094(), temp_v4 != 0)) {
      temp_v4 = FUN_002e26c4(0x33);
      temp_v2 = *(unsigned char *)(temp_v4 + 2);
      *(unsigned char *)((int)puVar2 + 0xa6) = temp_v2;
      *(unsigned char *)((int)puVar2 + 0xa5) = *(unsigned char *)(puVar2 + 0x29);
      *(unsigned char *)(puVar2 + 0x29) = temp_v2;
      FUN_0020d700();
      puVar2[9] = 6;
      FUN_0026fc00(2,1,0xffffffff,0);
      FUN_0019de98(0,0xf4f4f4ff);
      FUN_0020b660(1);
      FUN_002e2680(0);
    }
    else {
      temp_v4 = FUN_002a2814();
      if (temp_v4 != 0) {
        FUN_0032d388(0);
        FUN_002c39dc(1,0,0xffffffff);
        FUN_00284ee4(1);
        *(unsigned char *)(puVar2 + 0x29) = 9;
        FUN_0020d700();
        FUN_0026fc00(1,1,0xffffffff,0);
        puVar2[9] = 6;
        FUN_0020b660(2);
        FUN_002309dc();
      }
    }
    break;
  case 0x47:
    temp_v4 = FUN_002a21e8();
    if (temp_v4 != 0) {
      temp_v4 = FUN_002c2c68(puVar2 + 0x7b);
      if (temp_v4 < 1) {
        temp_v6 = 7;
      }
      else {
        temp_v6 = 0x34;
      }
      FUN_001681cc(temp_v6);
      temp_v4 = puVar2[10];
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x48:
    temp_v4 = FUN_002ebd74();
    if (temp_v4 != 0) {
      FUN_003492dc();
      FUN_0028b088(0);
      FUN_0021b274(3,0xffffffff,0);
      puVar2[9] = 6;
      temp_v4 = 5;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x49:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if (*(char *)((int)puVar2 + 0x6e2) != '\0') {
      FUN_002c39dc(0x11,0,0xffffffff);
      FUN_00284ee4(0);
      FUN_00215bbc();
      FUN_00331380(1);
      temp_v4 = 0x4a;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x4b:
    FUN_00163aa4();
    temp_v4 = 0;
    do {
      FUN_00163aa4(puVar2 + temp_v4 * 0x23 + 0x245);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    if (*(char *)((int)puVar2 + 0x6e2) != '\0') {
      FUN_002c39dc(0x13,0,0xffffffff);
      FUN_00284ee4(0);
      FUN_00215bbc();
      FUN_00331380(1);
      temp_v4 = 0x4c;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x4c:
    temp_v4 = FUN_00284e94();
    if (temp_v4 != 0) {
      temp_v4 = FUN_0037db9c();
      if (temp_v4 != 0) {
        *(unsigned char *)(puVar12 + 0x29) = 4;
        *(unsigned char *)(puVar12 + 0x2a) = 2;
      }
      if (*(char *)(puVar12 + 0x29) != '\b') {
        FUN_002c39dc(1,0,0xffffffff);
      }
      if (*(char *)(puVar12 + 0xcaa) != '\0') {
        temp_v4 = FUN_0037db9c();
        if (temp_v4 == 0) {
          *(unsigned char *)(puVar12 + 0x29) = 1;
        }
        *(unsigned char *)(puVar12 + 0xcaa) = 0;
      }
      FUN_003a7788();
      FUN_0020d700();
      puVar12[9] = 6;
      FUN_0020b660(2);
      if (*(char *)(puVar12 + 0x29) != '\b') {
        FUN_0026fc00(1,1,0xffffffff,0);
        temp_v4 = FUN_0034919c();
        if (temp_v4 == 0) {
          FUN_0037c8e4(1,0);
          FUN_0038843c();
          FUN_002f78a0(puVar12);
        }
      }
      FUN_002add8c();
      temp_v0 = *(char *)(puVar12 + 0x29);
      if (temp_v0 == '\b') {
        FUN_0026fc00(2,1,0xffffffff,0);
        FUN_002abff8(3);
        FUN_0023c08c(0);
      }
    }
    break;
  case 0x4d:
    FUN_002bf4f4(0);
    FUN_00388758(1);
    FUN_001f4908(0,10,0xff);
    FUN_001f4908(1,10,0xff);
    FUN_0020b660(0x4f);
    DAT_005f19ef = 1;
    break;
  case 0x4f:
    temp_v4 = FUN_002e07f4();
    if (temp_v4 != 0) {
      FUN_002bf4f4(1);
      temp_v4 = 0x55;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x50:
    temp_v4 = FUN_0039ba04();
    if (temp_v4 != 0) {
      FUN_003b01e8();
      puVar12 = DAT_0057f108;
      temp_v2 = FUN_003c0dcc();
      *(unsigned char *)((int)puVar12 + 0x32b2) = temp_v2;
      temp_v2 = FUN_003b6f00();
      *(unsigned char *)((int)puVar12 + 0x32b3) = temp_v2;
      FUN_002277d8();
      FUN_00184758(puVar2 + 0x1b9,3,0);
      FUN_0028b088(0);
      puVar2[9] = 6;
      temp_v4 = 5;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x51:
    temp_v4 = FUN_0037d9dc();
    if (temp_v4 != 0) {
      FUN_0039c0e4();
      puVar12 = DAT_0057f108;
      temp_v2 = FUN_003c0dcc();
      *(unsigned char *)((int)puVar12 + 0x32b2) = temp_v2;
      temp_v2 = FUN_003b6f00();
      *(unsigned char *)((int)puVar12 + 0x32b3) = temp_v2;
      FUN_002277d8();
      FUN_00184758(puVar2 + 0x1b9,3,0);
      FUN_0028b088(0);
      puVar2[9] = 6;
      temp_v4 = 5;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x52:
    temp_v4 = FUN_002c2bd0();
    if (temp_v4 != 0) {
      FUN_0031d088();
      FUN_002277d8();
      FUN_00184758(puVar2 + 0x1b9,3,0);
      FUN_0028b088(0);
      puVar2[9] = 6;
      temp_v4 = 5;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x53:
    temp_v4 = FUN_003ae848();
    if ((temp_v4 != 0) && (temp_v4 = FUN_003f86c8(0x3a), temp_v4 != 0)) {
      FUN_0037a2e4();
      temp_v4 = 0x54;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x54:
    temp_v4 = FUN_003871c0();
    if (temp_v4 != 0) {
      FUN_003a43ec();
      FUN_001add24(0x3a);
      FUN_00184758(puVar2 + 0x1b9,3,0);
      FUN_0028b088(0);
      puVar2[9] = 6;
      temp_v4 = 5;
      FUN_0020b660(temp_v4);
    }
    break;
  case 0x55:
    FUN_003b6dc4();
    FUN_003a76b8();
    FUN_00330b74();
    FUN_002309dc();
    FUN_0037dab0();
    FUN_0035b304();
    FUN_0037b450();
    FUN_002e26a4();
    FUN_001631d0(*puVar12,0);
    FUN_0019a5a0(puVar12);
    DAT_0057f108 = (unsigned int *)0x0;
    break;
  case 0x56:
    temp_v4 = FUN_0038b568();
    if (temp_v4 != 0) {
      FUN_0020b660(0x55);
    }
  }
  puVar2[5] = puVar2[5] + 1;
  return 0;
}
