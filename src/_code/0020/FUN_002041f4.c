/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002041f4` (_code @ 0x2041f4, 0xb5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 10 slot(s), 37 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00191b64. */
extern int FUN_0019dfbc(unsigned int);
extern int FUN_00254248(int);
extern int FUN_002958e0(void);
/* Supplied declaration required: FUN_00296a18. */
/* Supplied declaration required: FUN_002971e4. */
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_0029960c. */
/* Supplied declaration required: FUN_0029a368. */
/* Supplied declaration required: FUN_0029c6c4. */
/* Supplied declaration required: FUN_0029d8c0. */
extern int FUN_0029d8fc(int);
/* Supplied declaration required: FUN_0029e2f4. */
/* Supplied declaration required: FUN_0029f088. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_0029f248. */
/* Supplied declaration required: FUN_0029f278. */
/* Supplied declaration required: FUN_0029f878. */
/* Supplied declaration required: FUN_002a7540. */
/* Supplied declaration required: FUN_002b66ec. */
extern unsigned short FUN_002b88c4(unsigned int, int);
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002b8ccc(void);
/* Supplied declaration required: FUN_002b9220. */
/* Supplied declaration required: FUN_002bc200. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bf6d0. */
/* Supplied declaration required: FUN_002bf9f0. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c1830. */


void FUN_002041f4(int param_1)

{
/* irregular: 23 unstructured edge(s); 17 goto(s); 23 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  short *psVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int temp_v12;
  short *psVar18;
  unsigned int *puVar19;
  unsigned char temp_v13;
  unsigned char temp_v14 [8];
  int temp_v15;
  int temp_v16;
  
  FUN_002bf9f0(param_1 + 0x3f4);
  piVar16 = (int *)(param_1 + 0x3534);
  temp_v10 = param_1 + 0xcfd4;
  temp_v12 = param_1 + 0x50c;
  puVar19 = (unsigned int *)(param_1 + 0x3568);
  piVar15 = (int *)(param_1 + 0xcf78);
  switch(*piVar16) {
  case 0:
    temp_v10 = FUN_002b66ec();
    FUN_0029f088(0x18,(unsigned int)*(unsigned char *)(temp_v10 + 0x76) -
                      (unsigned int)*(unsigned char *)(param_1 + *piVar15 * 0x620 + 0x36ce),0xffffffff,0);
    FUN_002bdac0(temp_v12,0);
    temp_v10 = 0;
    do {
      temp_v1 = FUN_002b88c4(0x28,temp_v10 + 0xba);
      *(unsigned short *)(param_1 + temp_v10 * 2 + 0x357e) = temp_v1;
      temp_v5 = FUN_002bf6d0(0x28,temp_v10 + 0xba);
      temp_v4 = FUN_002bf6d0(0x28,0x117);
      temp_v2 = **(short **)(temp_v4 + 0xc);
      temp_v3 = (int)(short)(*(short *)(temp_v5 + 8) + *(short *)(temp_v4 + 8) + temp_v2 * -2);
      FUN_0029e2f4(temp_v3,(int)(short)(*(short *)(temp_v5 + 10) + *(short *)(temp_v4 + 10)),
                   (int)(short)(temp_v2 * 3),(int)(*(short **)(temp_v4 + 0xc))[1]);
      temp_v11 = param_1 + temp_v10 * 4;
      *(short *)(temp_v11 + 0x359e) = (short)temp_v3;
      temp_v5 = FUN_002bf6d0(0x28,temp_v10 + 0xba);
      temp_v4 = FUN_002bf6d0(0x28,0x116);
      temp_v3 = (int)(short)(*(short *)(temp_v5 + 8) + *(short *)(temp_v4 + 8));
      FUN_0029e2f4(temp_v3,(int)(short)(*(short *)(temp_v5 + 10) + *(short *)(temp_v4 + 10)),
                   (int)(short)(**(short **)(temp_v4 + 0xc) * 3),(int)(*(short **)(temp_v4 + 0xc))[1]);
      *(short *)(temp_v11 + 0x35a0) = (short)temp_v3;
      temp_v10 = temp_v10 + 1;
      *(short *)(param_1 + 0x357c) = *(short *)(param_1 + 0x357c) + 3;
    } while (temp_v10 < 5);
    *piVar16 = *piVar16 + 1;
  case 1:
    FUN_002b9220(temp_v12,0);
    temp_v10 = FUN_002958e0();
    if (temp_v10 == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x596) == '\0') {
      return;
    }
    temp_v10 = FUN_002971e4(*puVar19,0);
    if (temp_v10 == 0) {
      return;
    }
    *piVar16 = *piVar16 + 1;
    break;
  case 2:
    temp_v12 = FUN_0019dfbc(*puVar19);
    if (temp_v12 == 2) {
      FUN_002b8b78(99);
      temp_v6 = FUN_0029f248(temp_v10);
      temp_v7 = FUN_002c0ec4(0x25,1);
      temp_v10 = FUN_002c0e9c();
      temp_v8 = FUN_002c0e4c(temp_v7);
      temp_v9 = 0;
      if (temp_v9 < temp_v8) {
        do {
          if (temp_v9 == temp_v6) {
            FUN_0029f10c(temp_v10,0x323232ff);
            *piVar16 = *piVar16 + 1;
            return;
          }
          temp_v9 = temp_v9 + 1;
          temp_v10 = temp_v10 + 0x50;
        } while (temp_v9 < temp_v8);
      }
      temp_v10 = 0;
      FUN_0029f10c(temp_v10,0x323232ff);
      *piVar16 = *piVar16 + 1;
      break;
    }
    return;
  case 3:
    temp_v13 = 0;
    temp_v16 = 0;
    temp_v0 = 0;
    temp_v14[0] = 0;
    temp_v15 = FUN_0029f248(temp_v10);
    psVar13 = (short *)0x0;
    psVar18 = (short *)0x0;
    temp_v7 = FUN_0029f248(temp_v10);
    switch(temp_v7) {
    case 0:
      temp_v12 = FUN_002b66ec();
      psVar13 = (short *)(temp_v12 + 0x12);
      psVar18 = (short *)(param_1 + *piVar15 * 0x620 + 0x366a);
      break;
    case 1:
      temp_v12 = FUN_002b66ec();
      psVar13 = (short *)(temp_v12 + 0x14);
      psVar18 = (short *)(param_1 + *piVar15 * 0x620 + 0x366c);
      break;
    case 2:
      temp_v12 = FUN_002b66ec();
      psVar13 = (short *)(temp_v12 + 0x16);
      psVar18 = (short *)(param_1 + *piVar15 * 0x620 + 0x366e);
      break;
    case 3:
      temp_v12 = FUN_002b66ec();
      psVar13 = (short *)(temp_v12 + 0x18);
      psVar18 = (short *)(param_1 + *piVar15 * 0x620 + 0x3670);
      break;
    case 4:
      temp_v12 = FUN_002b66ec();
      psVar13 = (short *)(temp_v12 + 0x1a);
      psVar18 = (short *)(param_1 + *piVar15 * 0x620 + 0x3672);
    }
    temp_v12 = 0;
    do {
      temp_v5 = param_1 + temp_v12 * 4;
      temp_v4 = FUN_0029d8fc((int)*(short *)(temp_v5 + 0x359e));
      if (temp_v4 == 1 || temp_v4 == 2) {
        FUN_0029d8c0(temp_v10,temp_v12);
        break;
      }
      if (temp_v4 == 6) {
        FUN_0029d8c0(temp_v10,temp_v12);
        temp_v0 = 1;
        break;
      }
      temp_v5 = FUN_0029d8fc((int)*(short *)(temp_v5 + 0x35a0));
      if (temp_v5 == 1 || temp_v5 == 2) {
        FUN_0029d8c0(temp_v10,temp_v12);
        break;
      }
      if (temp_v5 == 6) {
        FUN_0029d8c0(temp_v10,temp_v12);
        temp_v13 = 1;
        break;
      }
      temp_v12 = temp_v12 + 1;
    } while (temp_v12 < 5);
    if ((temp_v13 || temp_v0) || (temp_v12 = FUN_0029f248(temp_v10), temp_v12 != temp_v15)) {
      temp_v6 = FUN_0029f248(temp_v10);
      temp_v7 = FUN_002c0ec4(0x25,1);
      temp_v12 = FUN_002c0e9c();
      temp_v8 = FUN_002c0e4c(temp_v7);
      temp_v9 = 0;
      if (temp_v9 < temp_v8) {
        do {
          if (temp_v9 == temp_v6) goto LAB_002046d4;
          temp_v9 = temp_v9 + 1;
          temp_v12 = temp_v12 + 0x50;
        } while (temp_v9 < temp_v8);
      }
      temp_v12 = 0;
LAB_002046d4:
      FUN_0029f10c(temp_v12,0x323232ff);
    }
    temp_v12 = FUN_0029f248(temp_v10);
    if (temp_v12 != temp_v15) {
      FUN_002bc200(0x100016c);
    }
    temp_v12 = temp_v10;
    FUN_0029f878(temp_v10,0,param_1 + 0x357e,0xffffffff,0xffffffff,0xffffffff,temp_v14,0,1);
    piVar14 = (int *)(param_1 + 0xcfcc);
    if (temp_v12 == 0) {
      temp_v12 = temp_v10;
      FUN_0029f278(temp_v10,0);
      if (temp_v12 == 0) {
        temp_v10 = FUN_002c1830(4,0);
        if (temp_v0 || temp_v10 != 0) {
          if (*psVar13 > *psVar18) {
            *psVar13 = *psVar13 - 1;
            *piVar14 = *piVar14 + 1;
            FUN_002bc200(0x100016c);
            goto LAB_00204bb0;
          }
LAB_00204894:
          temp_v7 = 0x100016e;
          goto LAB_00204898;
        }
        temp_v10 = FUN_002c1830(3,0);
        if (!(temp_v10 != 0 || temp_v13)) {
          temp_v10 = FUN_002c1830(1);
          if (temp_v10 != 0) {
            FUN_00191b64(param_1);
            temp_v7 = 0x100016e;
            goto LAB_00204b54;
          }
          temp_v10 = FUN_002c1830(9,1);
          temp_v7 = 0x100016d;
          if (temp_v10 != 0) {
            temp_v13 = 1;
            temp_v10 = FUN_002b66ec();
            temp_v2 = *(short *)(temp_v10 + 0x12) - *(short *)(param_1 + *piVar15 * 0x620 + 0x366a);
            temp_v10 = FUN_002b66ec();
            temp_v12 = param_1 + *piVar15 * 0x620;
            if ((((temp_v2 != (short)(*(short *)(temp_v10 + 0x12) - *(short *)(temp_v12 + 0x366a))) ||
                 (temp_v2 != (short)(*(short *)(temp_v10 + 0x14) - *(short *)(temp_v12 + 0x366c)))) ||
                (temp_v2 != (short)(*(short *)(temp_v10 + 0x16) - *(short *)(temp_v12 + 0x366e)))) ||
               ((temp_v2 != (short)(*(short *)(temp_v10 + 0x18) - *(short *)(temp_v12 + 0x3670)) ||
                (temp_v2 != (short)(*(short *)(temp_v10 + 0x1a) - *(short *)(temp_v12 + 0x3672)))))) {
              temp_v13 = 0;
            }
            if ((*piVar14 < 1) && (temp_v13)) {
              temp_v7 = 0x100016e;
            }
            FUN_002bc200(temp_v7);
            FUN_00191b64(param_1);
            if (0 < *piVar14) {
              temp_v10 = 0;
              do {
                temp_v12 = FUN_002b66ec();
                *(short *)(temp_v12 + 0x12) = *(short *)(temp_v12 + 0x12) + 1;
                while( 1 ) {
                  temp_v12 = *piVar14;
                  *piVar14 = temp_v12 - 1;
                  if (temp_v12 - 1 < 1) goto LAB_00204bdc;
                  temp_v10 = temp_v10 + 1;
                  if (temp_v10 >= 5) {
                    temp_v10 = 0;
                    break;
                  }
                  if (temp_v10 == 0) break;
                  if (temp_v10 != 1) {
                    if (temp_v10 != 2) {
                      if (temp_v10 != 3) {
                        if (temp_v10 == 4) {
                          temp_v12 = FUN_002b66ec();
                          *(short *)(temp_v12 + 0x1a) = *(short *)(temp_v12 + 0x1a) + 1;
                        }
                      }
                      else {
                        temp_v12 = FUN_002b66ec();
                        *(short *)(temp_v12 + 0x18) = *(short *)(temp_v12 + 0x18) + 1;
                      }
                    }
                    else {
                      temp_v12 = FUN_002b66ec();
                      *(short *)(temp_v12 + 0x16) = *(short *)(temp_v12 + 0x16) + 1;
                    }
                  }
                  else {
                    temp_v12 = FUN_002b66ec();
                    *(short *)(temp_v12 + 0x14) = *(short *)(temp_v12 + 0x14) + 1;
                  }
                }
              } while( 1 );
            }
LAB_00204bdc:
            temp_v10 = FUN_002b8ccc();
            if (temp_v10 == 99) {
              temp_v7 = 0xbc;
              FUN_002b8b78(temp_v7);
            }
          }
          else {
            temp_v10 = FUN_002c1830(0,1);
            if (temp_v10 != 0) {
              if (*piVar14 != 0) {
                temp_v10 = FUN_002b66ec();
                temp_v10 = FUN_00254248(temp_v10 + 0xe);
                if (temp_v10 == 0) {
                  temp_v10 = (int)*psVar13;
                  if (temp_v10 >= 0x3e7) goto LAB_00204898;
                  goto LAB_00204b3c;
                }
              }
              FUN_002a7540(0);
              FUN_002b8b78(0x9a);
              FUN_002971e4(*puVar19,0xb);
              *piVar16 = *piVar16 + 1;
              FUN_002bc200(0x100016d);
              if (temp_v16 == 0) goto LAB_00204b94;
            }
            else {
              temp_v10 = FUN_002c1830(0,1);
              if (temp_v10 != 0) {
                temp_v5 = *piVar14;
                temp_v13 = temp_v5 == 0;
                temp_v12 = temp_v5;
                temp_v10 = temp_v5;
                if (0 < temp_v5) {
                  temp_v10 = (int)*psVar13;
                  temp_v12 = 999 - temp_v10;
                  temp_v13 = temp_v10 == 999;
                }
                if (temp_v13 || temp_v12 < 0 != (0 < temp_v5 && SBORROW4(999,temp_v10))) {
LAB_00204898:
                  FUN_002bc200(temp_v7);
                  goto LAB_00204b94;
                }
LAB_00204b3c:
                *psVar13 = (short)temp_v10 + 1;
                *piVar14 = *piVar14 - 1;
LAB_00204b54:
                FUN_002bc200(temp_v7);
              }
              else {
LAB_00204b94:
                temp_v10 = FUN_002b66ec();
                temp_v10 = FUN_00254248(temp_v10 + 0xe);
                if (temp_v10 == 0) {
                  return;
                }
              }
            }
LAB_00204bb0:
            if (*piVar14 < 1) goto LAB_00204bdc;
            temp_v10 = FUN_002b66ec();
            temp_v10 = FUN_00254248(temp_v10 + 0xe);
            if (temp_v10 != 0) goto LAB_00204bdc;
            temp_v10 = FUN_002b8ccc();
            if (temp_v10 == 0xbc) {
              temp_v7 = 99;
              FUN_002b8b78(temp_v7);
            }
          }
          FUN_0029960c(0);
          FUN_002b66ec();
          FUN_0029a368();
          return;
        }
        if (*piVar14 < 1) goto LAB_00204894;
        if (0x3e6 >= *psVar13) {
          *psVar13 = *psVar13 + 1;
          *piVar14 = *piVar14 - 1;
          FUN_002bc200(0x100016c);
          goto LAB_00204bb0;
        }
        goto LAB_0020488c;
      }
    }
    temp_v6 = FUN_0029f248(temp_v10);
    temp_v7 = FUN_002c0ec4(0x25,1);
    temp_v12 = FUN_002c0e9c();
    temp_v8 = FUN_002c0e4c(temp_v7);
    temp_v9 = 0;
    if (temp_v8 != 0) {
      do {
        if (temp_v9 == temp_v6) goto LAB_002047b8;
        temp_v9 = temp_v9 + 1;
        temp_v12 = temp_v12 + 0x50;
      } while (temp_v9 < temp_v8);
    }
    temp_v12 = 0;
LAB_002047b8:
    FUN_0029f10c(temp_v12,0x323232ff);
    temp_v10 = FUN_0029f248(temp_v10);
    if (temp_v10 == temp_v15) goto LAB_00204b94;
LAB_0020488c:
    temp_v7 = 0x100016c;
    goto LAB_00204898;
  case 4:
    temp_v5 = FUN_0019dfbc(*puVar19);
    if (temp_v5 != 2) {
      return;
    }
    FUN_002a7540(1);
    FUN_0029c6c4(0);
    temp_v5 = FUN_00297674();
    if (temp_v5 == 0) {
      FUN_002bdac0(temp_v12,1,0);
      *piVar16 = *piVar16 + 1;
      break;
    }
    *piVar16 = 3;
    FUN_002971e4(*puVar19,0);
    FUN_002b8b78(0xbc);
    temp_v6 = FUN_0029f248(temp_v10);
    temp_v7 = FUN_002c0ec4(0x25,1);
    temp_v10 = FUN_002c0e9c();
    temp_v8 = FUN_002c0e4c(temp_v7);
    temp_v9 = 0;
    if (temp_v8 != 0) {
      do {
        if (temp_v9 == temp_v6) {
          FUN_0029f10c(temp_v10,0x323232ff);
          return;
        }
        temp_v9 = temp_v9 + 1;
        temp_v10 = temp_v10 + 0x50;
      } while (temp_v9 < temp_v8);
    }
    temp_v10 = 0;
    FUN_0029f10c(temp_v10,0x323232ff);
    return;
  case 5:
    temp_v10 = FUN_002bf9f0(temp_v12);
    if (temp_v10 != 0) {
      FUN_0029f10c(0,0x323232ff);
      FUN_00296a18(param_1,0x12);
      return;
    }
  }
  return;
}
