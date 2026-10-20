/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00235438` (_code @ 0x235438, 0x6cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ad9b4(void);
int FUN_001ada74(...);
int FUN_002466a8(void);
int FUN_00295024(void);
int FUN_00295108(...);
int FUN_002c7b8c(...);
int FUN_002e6dd0(unsigned short [300], int);
int FUN_00365898(...);
int FUN_00365920(...);
int FUN_003deea4(...);
int FUN_003df43c(...);
int FUN_00417b70(...);
int partyEntryFlagsBit3(...);
int FUN_004185c4(...);
int FUN_00480e30(int, int);

/* stack frame of void: 11 slot(s), 42 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned short sp2CC; /* 0x2cc: local_2cc */
    unsigned int sp2D0; /* 0x2d0: local_2d0 */
} void_stack;

extern signed char DAT_005f16d8; /* 0x5f16d8 */
extern int DAT_005f16dc; /* 0x5f16dc */
extern int DAT_005f1998; /* 0x5f1998 */
extern signed char DAT_005f1aca; /* 0x5f1aca */

extern int FUN_00162e8c(void);
extern int FUN_001801a4(void);
extern int FUN_0019f1a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: FUN_001ada74. */
extern int FUN_001bd100(unsigned int);
extern int FUN_001bd118(unsigned int);
/* Supplied declaration required: FUN_002466a8. */
/* Supplied declaration required: FUN_00295024. */
/* Supplied declaration required: FUN_00295108. */
extern int FUN_002c2758(unsigned short);
/* Supplied declaration required: FUN_002c7b8c. */
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: FUN_00365898. */
/* Supplied declaration required: FUN_00365920. */
extern int dataTable2FType1GetEntry(int);
extern int FUN_003de830(unsigned int);
extern int FUN_003de92c(unsigned short);
extern int FUN_003dedf0(unsigned int);
/* Supplied declaration required: FUN_003deea4. */
extern int FUN_003df004(unsigned int, int, unsigned int *);
extern int FUN_003df390(unsigned int);
/* Supplied declaration required: FUN_003df43c. */
/* Supplied declaration required: FUN_00417b70. */
extern int partyEntryBitsBit5(unsigned int);
/* Supplied declaration required: partyEntryFlagsBit3. */
/* Supplied declaration required: FUN_004185c4. */
extern int partyEntryFlagsBit1(unsigned int);
extern int partyEntryBitsBit1(unsigned int);
/* Supplied declaration required: FUN_00480e30. */


int FUN_00235438(void)

{
/* irregular: 3 goto(s); 15 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned short *puVar10;
  int temp_v9;
  unsigned short temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12;
  unsigned int temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15 [300];
  int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  
  temp_v17 = 0;
  temp_v2 = FUN_00162e8c();
  temp_v21 = 0;
  FUN_002e6dd0(temp_v15,600);
  temp_v16 = 0;
  if (DAT_005f16d8 != '\0') {
    temp_v2 = dataTable2FType1GetEntry((int)*(short *)(temp_v2 + 0x2a));
    DAT_005f16dc = (int)*(short *)(temp_v2 + 0x12);
    FUN_00480e30(DAT_005f16dc,1);
    DAT_005f16d8 = 0;
    return 4;
  }
  temp_v20 = 0;
  temp_v19 = temp_v2 + 0x1000;
  temp_v10 = 100;
  do {
    temp_v2 = FUN_003df390(temp_v10);
    if (temp_v2 != 0) {
      temp_v2 = FUN_001bd100(temp_v10);
      if ((temp_v2 == 0) && (temp_v2 = partyEntryFlagsBit3(temp_v10), temp_v2 != 0)) {
        temp_v20 = temp_v20 + 1;
      }
      temp_v2 = partyEntryFlagsBit1(temp_v10);
      if (temp_v2 == 0) goto LAB_002358f0;
      temp_v2 = FUN_001bd118(temp_v10);
      if (temp_v2 != 10) {
        if (temp_v2 != 1) {
          if (temp_v2 == 0) {
            temp_v11 = 0;
            temp_v2 = 0;
            temp_v8 = 0;
            temp_v7 = 0;
            temp_v23 = 0;
            temp_v24 = 0;
            temp_v18 = 0;
            if (temp_v17 == 5 || temp_v17 == 6) goto LAB_002359c4;
            temp_v3 = partyEntryBitsBit1(temp_v10);
            if (temp_v3 != 0) {
              temp_v3 = FUN_003de830(temp_v10);
              if (temp_v3 != 0) {
                temp_v9 = 0;
                temp_v3 = 0;
                temp_v22 = (unsigned int)*(short *)(temp_v19 + 0x94);
                temp_v1 = *(unsigned short *)(temp_v19 + 0x96);
                do {
                  temp_v4 = FUN_003df004(temp_v10,temp_v3,&temp_v13);
                  if (temp_v4 != 0) {
                    temp_v2 = temp_v2 + 1;
                    temp_v5 = (unsigned int)temp_v14;
                    if ((int)temp_v13 >= 1) {
                      if (temp_v5 == temp_v22) {
                        temp_v23 = temp_v13;
                        temp_v11 = 1;
                        if (temp_v7 == 0) {
                          temp_v24 = temp_v13;
                          temp_v7 = temp_v5;
                        }
                      }
                      else {
                        temp_v24 = temp_v13;
                        temp_v7 = temp_v5;
                      }
                    }
                    else {
                      temp_v8 = temp_v8 + 1;
                      if (temp_v5 == (int)(short)temp_v1) {
                        temp_v11 = 1;
                      }
                    }
                    temp_v9 = temp_v9 + temp_v13;
                  }
                  temp_v3 = temp_v3 + 1;
                } while (temp_v3 < 4);
                if ((temp_v11 & ~temp_v18 & ~temp_v21) != 0) {
                  if (temp_v2 >= 2) {
                    if (temp_v9 != 0) {
                      if ((int)(short)temp_v1 != 0) {
                        temp_v5 = temp_v2 - temp_v8;
                        temp_v11 = temp_v24;
                        if ((int)temp_v5 >= 2) {
                          temp_v7 = (unsigned int)temp_v1;
                          temp_v11 = temp_v5;
                        }
                        temp_v11 = temp_v11 & 0xffff;
                        if ((int)temp_v5 < 2) {
                          temp_v6 = 2;
                        }
                        else {
                          temp_v6 = 1;
                        }
                      }
                      else {
                        temp_v11 = temp_v23 & 0xffff;
                        temp_v7 = temp_v22 & 0xffff;
                        temp_v6 = 3;
                      }
                      FUN_00365920(temp_v6,temp_v7,temp_v11);
                    }
                    else {
                      temp_v6 = 0;
                      FUN_00365920(temp_v6,temp_v1,0);
                      temp_v17 = 2;
                    }
                  }
                  else if (temp_v9 != 0) {
                    temp_v11 = temp_v23 & 0xffff;
                    temp_v7 = temp_v22 & 0xffff;
                    temp_v6 = 5;
                    FUN_00365920(temp_v6,temp_v7,temp_v11);
                  }
                  else {
                    temp_v6 = 4;
                    FUN_00365920(temp_v6,temp_v1,0);
                    temp_v17 = 2;
                  }
                }
              }
              FUN_004185c4(temp_v10,0);
            }
          }
        }
        else {
          temp_v7 = 0;
          temp_v8 = 0;
          temp_v3 = 0;
          temp_v22 = 0;
          temp_v23 = 0;
          temp_v24 = 0;
          temp_v18 = 0;
          temp_v2 = partyEntryBitsBit1(temp_v10);
          if (temp_v2 != 0) {
            temp_v9 = 0;
            temp_v2 = 0;
            temp_v1 = *(unsigned short *)(temp_v19 + 0x98);
            temp_v0 = *(unsigned short *)(temp_v19 + 0x9a);
            do {
              temp_v4 = FUN_003df004(temp_v10,temp_v2,&temp_v13);
              if (temp_v4 != 0) {
                temp_v8 = temp_v8 + 1;
                temp_v11 = (unsigned int)temp_v14;
                if ((int)temp_v13 >= 1) {
                  if (temp_v11 == (int)(short)temp_v0) {
                    temp_v7 = 1;
                    temp_v22 = temp_v13;
                  }
                  else {
                    temp_v24 = temp_v13;
                    temp_v23 = temp_v11;
                  }
                }
                else {
                  temp_v3 = temp_v3 + 1;
                  if (temp_v11 == (int)(short)temp_v1) {
                    temp_v7 = 1;
                  }
                }
                temp_v9 = temp_v9 + temp_v13;
              }
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < 4);
            if ((temp_v7 & ~temp_v18) != 0) {
              if (temp_v8 >= 2) {
                if (temp_v9 != 0) {
                  if ((int)(short)temp_v1 != 0) {
                    if (temp_v8 - temp_v3 >= 2) {
                      temp_v11 = (temp_v8 - temp_v3) & 0xffff;
                      temp_v7 = (unsigned int)temp_v1;
                      temp_v6 = 7;
                    }
                    else {
                      temp_v11 = temp_v24 & 0xffff;
                      temp_v7 = temp_v23 & 0xffff;
                      temp_v6 = 8;
                    }
                  }
                  else {
                    temp_v7 = (unsigned int)temp_v0;
                    temp_v11 = temp_v22 & 0xffff;
                    temp_v6 = 9;
                  }
                  FUN_00365898(temp_v6,temp_v7,temp_v11);
                }
                else {
                  FUN_00365898(6,temp_v1,0);
                  FUN_003deea4(temp_v10);
                  temp_v17 = 1;
                  temp_v21 = 1;
                }
              }
              else if (temp_v9 != 0) {
                temp_v7 = (unsigned int)temp_v0;
                temp_v11 = temp_v22 & 0xffff;
                temp_v6 = 0xb;
                FUN_00365898(temp_v6,temp_v7,temp_v11);
              }
              else {
                FUN_00365898(10,temp_v1,0);
                FUN_003deea4(temp_v10);
                temp_v17 = 1;
                temp_v21 = 1;
              }
            }
            FUN_004185c4(temp_v10,0);
          }
        }
LAB_002358f0:
        if (temp_v17 == 0) {
          temp_v2 = FUN_003dedf0(temp_v10);
          if (temp_v2 != 0) {
            FUN_003df43c(temp_v10);
          }
          temp_v2 = FUN_001801a4();
          temp_v1 = *(unsigned short *)(temp_v2 + 0x62);
          temp_v2 = FUN_0019f1a4(temp_v10,0);
          if ((temp_v2 == 0) && (temp_v7 = temp_v10, FUN_001ad9b4(), temp_v7 != 0)) {
            temp_v7 = (unsigned int)*(short *)(temp_v7 + 0x120);
            temp_v12 = temp_v7 == temp_v1;
            if ((int)temp_v7 <= (int)(unsigned int)temp_v1) {
              temp_v12 = temp_v7 != 0;
            }
            if (temp_v12) {
              temp_v2 = FUN_001bd118(temp_v10);
              if ((temp_v2 == 10) && (temp_v2 = FUN_001ada74(temp_v10), temp_v2 != 0)) {
                FUN_00417b70(temp_v10);
                temp_v17 = 99;
              }
              else {
                puVar10 = temp_v15 + temp_v16;
                temp_v16 = temp_v16 + 1;
                *puVar10 = (short)temp_v10;
              }
            }
          }
        }
      }
      else if (temp_v17 != 1) {
        temp_v7 = partyEntryFlagsBit3(temp_v10);
        temp_v11 = FUN_001ada74(temp_v10);
        if ((temp_v11 & ~temp_v7) == 0) goto LAB_002358f0;
        FUN_003deea4(temp_v10);
        temp_v17 = 5;
        temp_v2 = partyEntryBitsBit5(temp_v10);
        if (temp_v2 != 0) {
          temp_v17 = 6;
        }
      }
    }
LAB_002359c4:
    temp_v10 = temp_v10 + 1;
    if (temp_v10 >= 400) {
      if (temp_v17 == 0) {
        temp_v2 = 0;
        if (temp_v2 < temp_v16) {
          do {
            FUN_00417b70(temp_v15[temp_v2]);
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < temp_v16);
        }
        if (temp_v16 != 0) {
          if (DAT_005f1aca != '\0') {
            DAT_005f1aca = '\0';
          }
          else {
            FUN_00295024();
          }
        }
        temp_v1 = 0;
        do {
          temp_v2 = FUN_003de92c(temp_v1);
          if (((temp_v2 != 0) && (temp_v8 = FUN_002c2758(temp_v1), temp_v8 == 0)) &&
             ((int)(unsigned int)*(unsigned short *)(temp_v2 + 2) <= temp_v20)) {
            FUN_002c7b8c(temp_v1,1);
            FUN_002466a8();
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 0x20);
      }
      *(unsigned short *)(temp_v19 + 0x98) = 0;
      *(unsigned short *)(temp_v19 + 0x9a) = 0;
      temp_v2 = temp_v19;
      if (temp_v17 != 5) {
        temp_v2 = temp_v17;
      }
      if (temp_v17 != 5 && temp_v2 != 6) {
        *(unsigned short *)(temp_v19 + 0x96) = 0;
        *(unsigned short *)(temp_v19 + 0x94) = 0;
      }
      if (DAT_005f1998 != 0) {
        FUN_00295108(0);
        DAT_005f1998 = 0;
      }
      return temp_v17;
    }
  } while( 1 );
}

} /* extern "C" */
