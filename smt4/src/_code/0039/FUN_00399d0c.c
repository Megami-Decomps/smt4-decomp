/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399d0c` (_code @ 0x399d0c, 0xf58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 21 slot(s), 84 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
} param_1_stack;

extern unsigned int DAT_0044cdd8; /* 0x44cdd8 */
extern signed char DAT_0049f941; /* 0x49f941 */
extern int DAT_0049fcfc; /* 0x49fcfc */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern unsigned int FUN_002319e0(unsigned int, int, int);
/* Supplied declaration required: FUN_00231ad4. */
/* Supplied declaration required: FUN_00231bb8. */
/* Supplied declaration required: FUN_00231bcc. */
extern int FUN_00231ca4(int);
/* Supplied declaration required: FUN_00231d2c. */
/* Supplied declaration required: FUN_00231dec. */
/* Supplied declaration required: FUN_00232554. */
extern float *FUN_00232658(int);
extern int FUN_00288f78(int);
/* Supplied declaration required: FUN_002b04e8. */
extern int FUN_002b8694(void);
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: FUN_002c2950. */
/* Supplied declaration required: FUN_0039e8b8. */
/* Supplied declaration required: FUN_0039eb4c. */
extern unsigned int *NaviMain_GetCursorPos(int);
extern int NaviMain_GetPosX(void);
/* Supplied declaration required: NaviMain_GetPosY. */
/* Supplied declaration required: NaviMain_GetState. */


void FUN_00399d0c(int param_1)

{
/* irregular: 26 goto(s); irregular input(s): in_fpscr; 15 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  float *pfVar5;
  unsigned int *puVar6;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int in_fpscr;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  int temp_v18;
  float temp_v19;
  unsigned long long temp_v20;
  unsigned long long temp_v21;
  long long temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned long long temp_v25;
  unsigned long long temp_v26;
  unsigned long long temp_v27;
  int temp_v28;
  int temp_v29;
  int temp_v30;
  int temp_v31;
  int temp_v32;
  int iStack_b4;
  int temp_v33;
  int temp_v34;
  float temp_v35;
  float temp_v36;
  int temp_v37;
  int temp_v38;
  int temp_v39;
  int temp_v40;
  int temp_v41;
  int temp_v42;
  int temp_v43;
  int temp_v44;
  
  temp_v44 = param_1;
  FUN_002c2950();
  temp_v37 = temp_v44 + 0x162;
  temp_v3 = NaviMain_GetPosX();
  NaviMain_GetPosY(temp_v37);
  pfVar5 = (float *)FUN_00232658(temp_v37);
  temp_v24 = *pfVar5;
  temp_v19 = pfVar5[2];
  puVar6 = (unsigned int *)NaviMain_GetCursorPos(temp_v37);
  temp_v22 = (unsigned long long)*puVar6 << 0x20;
  temp_v23 = (float)puVar6[1];
  FUN_00231bb8(temp_v44 + 0x164,&temp_v35);
  DAT_0044cdd8 = 0xb;
  if ((*(unsigned int *)(temp_v44 + 0x10) & 2) != 0) {
    DAT_0044cdd8 = 0xb;
    return;
  }
  temp_v4 = FUN_002c09d0(0x529);
  if (temp_v4 == 0) {
    return;
  }
  temp_v4 = FUN_00288f78(temp_v3);
  temp_v12 = (unsigned int)(temp_v4 == 2 || temp_v4 == 3);
  FUN_00232554(temp_v44,1);
  temp_v15 = (float)((unsigned long long)temp_v22 >> 0x20);
  temp_v27 = 0x4320000000000000;
  temp_v13 = 160.0f;
  if (DAT_0049f941 == '\0') {
    temp_v4 = FUN_002b8694();
    temp_v15 = (float)((unsigned long long)temp_v22 >> 0x20);
    temp_v13 = (float)((unsigned long long)temp_v27 >> 0x20);
    if (temp_v4 == 0) {
      if (temp_v3 != 0x65) {
        if (temp_v3 != 0x66) {
          if (temp_v3 != 0x67) goto LAB_0039aba4;
          temp_v3 = 0;
          temp_v17 = temp_v23 + 120.0f;
          temp_v14 = temp_v15 + temp_v13;
          temp_v16 = CONCAT44(temp_v17,temp_v14);
          temp_v21 = CONCAT44(temp_v17 - 8.0f,temp_v19);
          temp_v22 = CONCAT44(temp_v15,temp_v17 + 8.0f);
          temp_v20 = CONCAT44(temp_v14 + 8.0f,temp_v14 - 8.0f);
          temp_v18 = (int)(temp_v15 - ((temp_v24 - -17000.0f) * 0.010566667f - temp_v13));
          temp_v4 = (int)(temp_v23 - ((temp_v19 - -19000.0f) * 0.010810811f - 120.0f));
          temp_v17 = temp_v17 + 16.0f;
          do {
            temp_v9 = temp_v3 + 0x40;
            temp_v40 = temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1a);
            temp_v41 = temp_v4 + temp_v3;
            temp_v8 = 0;
            temp_v11 = temp_v3 + temp_v4;
            temp_v10 = temp_v9 + temp_v4;
            do {
              temp_v31 = temp_v8 + 0x40;
              temp_v5 = temp_v31 + temp_v18;
              temp_v28 = temp_v3;
              temp_v29 = temp_v9;
              temp_v30 = temp_v8;
              if (((-1 < temp_v5) && (temp_v7 = temp_v8 + temp_v18, temp_v7 < 0x141)) &&
                 ((temp_v10 >= 8 && (temp_v11 < 0xe9)))) {
                temp_v19 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v24 = (float)temp_v16;
                temp_v0 = in_fpscr & 0xfffffff;
                temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v24) << 0x1f);
                in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v24 != temp_v24)) << 0x1c);
                temp_v19 = (float)((unsigned long long)temp_v16 >> 0x20);
                temp_v6 = temp_v8 >> 0x1f;
                if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  temp_v15 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                  in_fpscr = temp_v0 | ((unsigned int)(temp_v15 == temp_v24) << 0x1e) |
                             ((unsigned int)(temp_v24 <= temp_v15) << 0x1d);
                  temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                  if ((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) goto LAB_0039a8c0;
                  temp_v15 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v1 = temp_v0 | ((unsigned int)(temp_v15 < temp_v19) << 0x1f);
                  in_fpscr = temp_v1 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v19 != temp_v19)) << 0x1c);
                  if ((unsigned char)(temp_v1 >> 0x1f) != ((unsigned char)(in_fpscr >> 0x1c) & 1)) goto LAB_0039a8c0;
                  temp_v15 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                  in_fpscr = temp_v0 | ((unsigned int)(temp_v15 == temp_v19) << 0x1e) |
                             ((unsigned int)(temp_v19 <= temp_v15) << 0x1d);
                  temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                  if ((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) goto LAB_0039a8c0;
LAB_0039aa00:
                  FUN_00231ad4(0x67,(int)(temp_v8 + (temp_v6 >> 0x1a)) >> 6,temp_v40 >> 6);
                }
                else {
LAB_0039a8c0:
                  temp_v15 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v13 = (float)temp_v20;
                  temp_v0 = in_fpscr & 0xfffffff;
                  temp_v1 = temp_v0 | ((unsigned int)(temp_v15 < temp_v13) << 0x1f);
                  in_fpscr = temp_v1 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v13 != temp_v13)) << 0x1c);
                  if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v15 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v15 == temp_v13) << 0x1e) |
                               ((unsigned int)(temp_v13 <= temp_v15) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                      temp_v15 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                      temp_v1 = temp_v0 | ((unsigned int)(temp_v15 < temp_v19) << 0x1f);
                      in_fpscr = temp_v1 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v19 != temp_v19)) << 0x1c);
                      if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                        temp_v15 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                        in_fpscr = temp_v0 | ((unsigned int)(temp_v15 == temp_v19) << 0x1e) |
                                   ((unsigned int)(temp_v19 <= temp_v15) << 0x1d);
                        temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                        if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) goto LAB_0039aa00;
                      }
                    }
                  }
                  temp_v15 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v13 = (float)((unsigned long long)temp_v20 >> 0x20);
                  temp_v0 = in_fpscr & 0xfffffff;
                  temp_v1 = temp_v0 | ((unsigned int)(temp_v15 < temp_v13) << 0x1f);
                  in_fpscr = temp_v1 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v13 != temp_v13)) << 0x1c);
                  if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v15 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v15 == temp_v13) << 0x1e) |
                               ((unsigned int)(temp_v13 <= temp_v15) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                      temp_v15 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                      temp_v1 = temp_v0 | ((unsigned int)(temp_v15 < temp_v19) << 0x1f);
                      in_fpscr = temp_v1 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v19 != temp_v19)) << 0x1c);
                      if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                        temp_v15 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                        in_fpscr = temp_v0 | ((unsigned int)(temp_v15 == temp_v19) << 0x1e) |
                                   ((unsigned int)(temp_v19 <= temp_v15) << 0x1d);
                        temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                        if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) goto LAB_0039aa00;
                      }
                    }
                  }
                  temp_v19 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v0 = in_fpscr & 0xfffffff;
                  temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v24) << 0x1f);
                  in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v24 != temp_v24)) << 0x1c);
                  if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v19 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v19 == temp_v24) << 0x1e) |
                               ((unsigned int)(temp_v24 <= temp_v19) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                      temp_v19 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                      temp_v15 = (float)((unsigned long long)temp_v21 >> 0x20);
                      temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v15) << 0x1f);
                      in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v15 != temp_v15)) << 0x1c);
                      if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                        temp_v19 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                        in_fpscr = temp_v0 | ((unsigned int)(temp_v19 == temp_v15) << 0x1e) |
                                   ((unsigned int)(temp_v15 <= temp_v19) << 0x1d);
                        temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                        if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) goto LAB_0039aa00;
                      }
                    }
                  }
                  temp_v19 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v0 = in_fpscr & 0xfffffff;
                  temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v24) << 0x1f);
                  in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v24 != temp_v24)) << 0x1c);
                  if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v19 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v19 == temp_v24) << 0x1e) |
                               ((unsigned int)(temp_v24 <= temp_v19) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                      temp_v19 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                      temp_v24 = (float)temp_v22;
                      temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v24) << 0x1f);
                      in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v24 != temp_v24)) << 0x1c);
                      if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                        temp_v19 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                        in_fpscr = temp_v0 | ((unsigned int)(temp_v19 == temp_v24) << 0x1e) |
                                   ((unsigned int)(temp_v24 <= temp_v19) << 0x1d);
                        temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                        if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                          FUN_00231ad4(0x67,(int)(temp_v8 + (temp_v6 >> 0x1a)) >> 6,temp_v40 >> 6);
                        }
                      }
                    }
                  }
                }
                if ((int)temp_v21 >= 0x453b8001) {
                  temp_v19 = (float)VectorSignedToFloat(temp_v31 + temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3
                                                     );
                  temp_v24 = (float)temp_v16;
                  temp_v0 = in_fpscr & 0xfffffff;
                  in_fpscr = temp_v0 | ((unsigned int)(temp_v24 == temp_v19) << 0x1e) |
                             ((unsigned int)(temp_v19 <= temp_v24) << 0x1d);
                  temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                  if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                    temp_v19 = (float)VectorSignedToFloat(temp_v30 + temp_v18,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v19 == temp_v24) << 0x1e) |
                               ((unsigned int)(temp_v24 <= temp_v19) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                      temp_v19 = (float)VectorSignedToFloat(temp_v29 + temp_v4,
                                                          (unsigned char)(in_fpscr >> 0x16) & 3);
                      temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v17) << 0x1f);
                      in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v17 != temp_v17)) << 0x1c);
                      if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                        temp_v19 = (float)VectorSignedToFloat(temp_v28 + temp_v4,
                                                            (unsigned char)(in_fpscr >> 0x16) & 3);
                        in_fpscr = temp_v0 | ((unsigned int)(temp_v19 == temp_v17) << 0x1e) |
                                   ((unsigned int)(temp_v17 <= temp_v19) << 0x1d);
                        temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                        if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                          FUN_00231ad4(0x67,(int)(temp_v8 + (temp_v6 >> 0x1a)) >> 6,temp_v40 >> 6);
                        }
                      }
                    }
                  }
                }
                temp_v6 = FUN_002319e0(0x67,(int)(temp_v8 + (temp_v6 >> 0x1a)) >> 6,temp_v40 >> 6);
                if (((temp_v6 & ~temp_v12) != 0) || (DAT_0049fcfc != 0)) {
                  temp_v19 = (float)VectorSignedToFloat(temp_v41,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v24 = (float)VectorSignedToFloat(temp_v18 + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_002b04e8(2,0x1c,8000,(int)(temp_v24 + temp_v35),(int)(temp_v19 + temp_v36),
                               DAT_0044cdd8,&temp_v28);
                }
              }
              temp_v8 = temp_v8 + 0x40;
            } while (temp_v8 < 0x140);
            temp_v3 = temp_v3 + 0x40;
          } while (temp_v3 < 400);
        }
        else {
          temp_v3 = 0;
          temp_v17 = temp_v23 + 120.0f;
          temp_v20 = CONCAT44(temp_v19,temp_v17);
          temp_v14 = temp_v15 + temp_v13;
          temp_v18 = (int)(temp_v15 - ((temp_v24 - -17000.0f) * 0.010225806f - temp_v13));
          temp_v4 = (int)(temp_v23 - ((temp_v19 - -18000.0f) * 0.010810811f - 120.0f));
          temp_v25 = CONCAT44(temp_v14 - 28.0f,temp_v17 - 32.0f);
          temp_v16 = CONCAT44(temp_v14 - 14.0f,temp_v14);
          temp_v22 = CONCAT44(temp_v15,temp_v17 + 14.0f);
          temp_v21 = CONCAT44(temp_v14 + 14.0f,temp_v14 + 32.0f);
          temp_v27 = CONCAT44(temp_v13,temp_v17 + 32.0f);
          temp_v26 = CONCAT44(temp_v17 - 14.0f,temp_v14 + 24.0f);
          do {
            temp_v9 = temp_v3 + 0x40;
            temp_v42 = temp_v3 + temp_v4;
            temp_v43 = temp_v4 + temp_v3;
            temp_v8 = 0;
            temp_v10 = temp_v9 + temp_v4;
            do {
              temp_v31 = temp_v8 + 0x40;
              temp_v11 = temp_v31 + temp_v18;
              temp_v28 = temp_v3;
              temp_v29 = temp_v9;
              temp_v30 = temp_v8;
              if ((((-1 < temp_v11) && (temp_v5 = temp_v8 + temp_v18, temp_v5 < 0x141)) && (temp_v10 >= 8)) &&
                 (temp_v42 < 0xe9)) {
                temp_v19 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v15 = (float)temp_v16;
                temp_v0 = in_fpscr & 0xfffffff;
                temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v15) << 0x1f);
                in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v15 != temp_v15)) << 0x1c);
                temp_v19 = (float)temp_v20;
                temp_v6 = temp_v8 >> 0x1f;
                temp_v7 = (int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1a)) >> 6;
                if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  temp_v13 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                  in_fpscr = temp_v0 | ((unsigned int)(temp_v13 == temp_v15) << 0x1e) |
                             ((unsigned int)(temp_v15 <= temp_v13) << 0x1d);
                  temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                  if ((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) goto LAB_0039a290;
                  temp_v13 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v1 = temp_v0 | ((unsigned int)(temp_v13 < temp_v19) << 0x1f);
                  in_fpscr = temp_v1 | ((unsigned int)((temp_v13 != temp_v13) || (temp_v19 != temp_v19)) << 0x1c);
                  if ((unsigned char)(temp_v1 >> 0x1f) != ((unsigned char)(in_fpscr >> 0x1c) & 1)) goto LAB_0039a290;
                  temp_v13 = (float)VectorSignedToFloat(temp_v42,(unsigned char)(in_fpscr >> 0x16) & 3);
                  in_fpscr = temp_v0 | ((unsigned int)(temp_v13 == temp_v19) << 0x1e) |
                             ((unsigned int)(temp_v19 <= temp_v13) << 0x1d);
                  temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                  if ((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) goto LAB_0039a290;
LAB_0039a428:
                  FUN_00231ad4(0x66,(int)(temp_v8 + (temp_v6 >> 0x1a)) >> 6,temp_v7);
                }
                else {
LAB_0039a290:
                  temp_v13 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v14 = (float)((unsigned long long)temp_v16 >> 0x20);
                  temp_v0 = in_fpscr & 0xfffffff;
                  temp_v1 = temp_v0 | ((unsigned int)(temp_v13 < temp_v14) << 0x1f);
                  in_fpscr = temp_v1 | ((unsigned int)((temp_v13 != temp_v13) || (temp_v14 != temp_v14)) << 0x1c);
                  if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v13 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v13 == temp_v14) << 0x1e) |
                               ((unsigned int)(temp_v14 <= temp_v13) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                      temp_v13 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                      temp_v1 = temp_v0 | ((unsigned int)(temp_v13 < temp_v19) << 0x1f);
                      in_fpscr = temp_v1 | ((unsigned int)((temp_v13 != temp_v13) || (temp_v19 != temp_v19)) << 0x1c);
                      if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                        temp_v13 = (float)VectorSignedToFloat(temp_v42,(unsigned char)(in_fpscr >> 0x16) & 3);
                        in_fpscr = temp_v0 | ((unsigned int)(temp_v13 == temp_v19) << 0x1e) |
                                   ((unsigned int)(temp_v19 <= temp_v13) << 0x1d);
                        temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                        if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) goto LAB_0039a428;
                      }
                    }
                  }
                  temp_v13 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v17 = (float)((unsigned long long)temp_v21 >> 0x20);
                  temp_v0 = in_fpscr & 0xfffffff;
                  temp_v1 = temp_v0 | ((unsigned int)(temp_v13 < temp_v17) << 0x1f);
                  in_fpscr = temp_v1 | ((unsigned int)((temp_v13 != temp_v13) || (temp_v17 != temp_v17)) << 0x1c);
                  if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v13 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v13 == temp_v17) << 0x1e) |
                               ((unsigned int)(temp_v17 <= temp_v13) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                      temp_v13 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                      temp_v1 = temp_v0 | ((unsigned int)(temp_v13 < temp_v19) << 0x1f);
                      in_fpscr = temp_v1 | ((unsigned int)((temp_v13 != temp_v13) || (temp_v19 != temp_v19)) << 0x1c);
                      if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                        temp_v13 = (float)VectorSignedToFloat(temp_v42,(unsigned char)(in_fpscr >> 0x16) & 3);
                        in_fpscr = temp_v0 | ((unsigned int)(temp_v13 == temp_v19) << 0x1e) |
                                   ((unsigned int)(temp_v19 <= temp_v13) << 0x1d);
                        temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                        if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) goto LAB_0039a428;
                      }
                    }
                  }
                  temp_v19 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v0 = in_fpscr & 0xfffffff;
                  temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v15) << 0x1f);
                  in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v15 != temp_v15)) << 0x1c);
                  if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v19 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v19 == temp_v15) << 0x1e) |
                               ((unsigned int)(temp_v15 <= temp_v19) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                      temp_v13 = (float)((unsigned long long)temp_v26 >> 0x20);
                      temp_v19 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                      temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v13) << 0x1f);
                      in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v13 != temp_v13)) << 0x1c);
                      if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                        temp_v19 = (float)VectorSignedToFloat(temp_v42,(unsigned char)(in_fpscr >> 0x16) & 3);
                        in_fpscr = temp_v0 | ((unsigned int)(temp_v19 == temp_v13) << 0x1e) |
                                   ((unsigned int)(temp_v13 <= temp_v19) << 0x1d);
                        temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                        if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) goto LAB_0039a428;
                      }
                    }
                  }
                  temp_v19 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v0 = in_fpscr & 0xfffffff;
                  temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v15) << 0x1f);
                  in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v15 != temp_v15)) << 0x1c);
                  temp_v19 = (float)temp_v22;
                  if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v13 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v13 == temp_v15) << 0x1e) |
                               ((unsigned int)(temp_v15 <= temp_v13) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                      temp_v15 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                      temp_v1 = temp_v0 | ((unsigned int)(temp_v15 < temp_v19) << 0x1f);
                      in_fpscr = temp_v1 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v19 != temp_v19)) << 0x1c);
                      if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                        temp_v15 = (float)VectorSignedToFloat(temp_v42,(unsigned char)(in_fpscr >> 0x16) & 3);
                        in_fpscr = temp_v0 | ((unsigned int)(temp_v15 == temp_v19) << 0x1e) |
                                   ((unsigned int)(temp_v19 <= temp_v15) << 0x1d);
                        temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                        if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) goto LAB_0039a428;
                      }
                    }
                  }
                  temp_v15 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v0 = in_fpscr & 0xfffffff;
                  temp_v1 = temp_v0 | ((unsigned int)(temp_v15 < temp_v14) << 0x1f);
                  in_fpscr = temp_v1 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v14 != temp_v14)) << 0x1c);
                  if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v15 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v15 == temp_v14) << 0x1e) |
                               ((unsigned int)(temp_v14 <= temp_v15) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                      temp_v15 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                      temp_v1 = temp_v0 | ((unsigned int)(temp_v15 < temp_v19) << 0x1f);
                      in_fpscr = temp_v1 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v19 != temp_v19)) << 0x1c);
                      if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                        temp_v15 = (float)VectorSignedToFloat(temp_v42,(unsigned char)(in_fpscr >> 0x16) & 3);
                        in_fpscr = temp_v0 | ((unsigned int)(temp_v15 == temp_v19) << 0x1e) |
                                   ((unsigned int)(temp_v19 <= temp_v15) << 0x1d);
                        temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                        if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                          FUN_00231ad4(0x66,(int)(temp_v8 + (temp_v6 >> 0x1a)) >> 6,temp_v7);
                        }
                      }
                    }
                  }
                }
                if ((int)temp_v24 >= 0x459c4001) {
                  temp_v19 = (float)VectorSignedToFloat(temp_v31 + temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3
                                                     );
                  temp_v15 = (float)temp_v21;
                  temp_v0 = in_fpscr & 0xfffffff;
                  temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v15) << 0x1f);
                  in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v15 != temp_v15)) << 0x1c);
                  if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v19 = (float)VectorSignedToFloat(temp_v30 + temp_v18,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v19 == temp_v15) << 0x1e) |
                               ((unsigned int)(temp_v15 <= temp_v19) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if ((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) goto LAB_0039a4c0;
                    temp_v19 = (float)VectorSignedToFloat(temp_v29 + temp_v4,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v13 = (float)temp_v25;
                    temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v13) << 0x1f);
                    in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v13 != temp_v13)) << 0x1c);
                    if ((unsigned char)(temp_v1 >> 0x1f) != ((unsigned char)(in_fpscr >> 0x1c) & 1)) goto LAB_0039a4c0;
                    temp_v19 = (float)VectorSignedToFloat(temp_v28 + temp_v4,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v19 == temp_v13) << 0x1e) |
                               ((unsigned int)(temp_v13 <= temp_v19) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if ((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) goto LAB_0039a4c0;
                    FUN_00231ad4(0x66,(int)(temp_v8 + (temp_v6 >> 0x1a)) >> 6,temp_v7);
                  }
                  else {
LAB_0039a4c0:
                    temp_v19 = (float)VectorSignedToFloat(temp_v31 + temp_v18,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v0 = in_fpscr & 0xfffffff;
                    temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v15) << 0x1f);
                    in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v15 != temp_v15)) << 0x1c);
                    if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                      temp_v19 = (float)VectorSignedToFloat(temp_v30 + temp_v18,
                                                          (unsigned char)(in_fpscr >> 0x16) & 3);
                      in_fpscr = temp_v0 | ((unsigned int)(temp_v19 == temp_v15) << 0x1e) |
                                 ((unsigned int)(temp_v15 <= temp_v19) << 0x1d);
                      temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                      if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                        temp_v19 = (float)VectorSignedToFloat(temp_v29 + temp_v4,
                                                            (unsigned char)(in_fpscr >> 0x16) & 3);
                        temp_v15 = (float)temp_v22;
                        temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v15) << 0x1f);
                        in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v15 != temp_v15)) << 0x1c);
                        if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                          temp_v19 = (float)VectorSignedToFloat(temp_v28 + temp_v4,
                                                              (unsigned char)(in_fpscr >> 0x16) & 3);
                          in_fpscr = temp_v0 | ((unsigned int)(temp_v19 == temp_v15) << 0x1e) |
                                     ((unsigned int)(temp_v15 <= temp_v19) << 0x1d);
                          temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                          if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                            FUN_00231ad4(0x66,(int)(temp_v8 + (temp_v6 >> 0x1a)) >> 6,temp_v7);
                          }
                        }
                      }
                    }
                  }
                }
                if (0xc59c4000 < (unsigned int)((unsigned long long)temp_v20 >> 0x20)) {
                  temp_v19 = (float)VectorSignedToFloat(temp_v31 + temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3
                                                     );
                  temp_v15 = (float)((unsigned long long)temp_v25 >> 0x20);
                  temp_v0 = in_fpscr & 0xfffffff;
                  temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v15) << 0x1f);
                  in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v15 != temp_v15)) << 0x1c);
                  temp_v19 = (float)temp_v25;
                  if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v13 = (float)VectorSignedToFloat(temp_v30 + temp_v18,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v13 == temp_v15) << 0x1e) |
                               ((unsigned int)(temp_v15 <= temp_v13) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if ((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) goto LAB_0039a5e0;
                    temp_v15 = (float)VectorSignedToFloat(temp_v29 + temp_v4,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v1 = temp_v0 | ((unsigned int)(temp_v15 < temp_v19) << 0x1f);
                    in_fpscr = temp_v1 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v19 != temp_v19)) << 0x1c);
                    if ((unsigned char)(temp_v1 >> 0x1f) != ((unsigned char)(in_fpscr >> 0x1c) & 1)) goto LAB_0039a5e0;
                    temp_v15 = (float)VectorSignedToFloat(temp_v28 + temp_v4,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v15 == temp_v19) << 0x1e) |
                               ((unsigned int)(temp_v19 <= temp_v15) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if ((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) goto LAB_0039a5e0;
                    FUN_00231ad4(0x66,(int)(temp_v8 + (temp_v6 >> 0x1a)) >> 6,temp_v7);
                  }
                  else {
LAB_0039a5e0:
                    temp_v15 = (float)VectorSignedToFloat(temp_v31 + temp_v18,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v13 = (float)temp_v26;
                    temp_v0 = in_fpscr & 0xfffffff;
                    temp_v1 = temp_v0 | ((unsigned int)(temp_v15 < temp_v13) << 0x1f);
                    in_fpscr = temp_v1 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v13 != temp_v13)) << 0x1c);
                    if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                      temp_v15 = (float)VectorSignedToFloat(temp_v30 + temp_v18,
                                                          (unsigned char)(in_fpscr >> 0x16) & 3);
                      in_fpscr = temp_v0 | ((unsigned int)(temp_v15 == temp_v13) << 0x1e) |
                                 ((unsigned int)(temp_v13 <= temp_v15) << 0x1d);
                      temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                      if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                        temp_v15 = (float)VectorSignedToFloat(temp_v29 + temp_v4,
                                                            (unsigned char)(in_fpscr >> 0x16) & 3);
                        temp_v1 = temp_v0 | ((unsigned int)(temp_v15 < temp_v19) << 0x1f);
                        in_fpscr = temp_v1 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v19 != temp_v19)) << 0x1c);
                        if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                          temp_v15 = (float)VectorSignedToFloat(temp_v28 + temp_v4,
                                                              (unsigned char)(in_fpscr >> 0x16) & 3);
                          in_fpscr = temp_v0 | ((unsigned int)(temp_v15 == temp_v19) << 0x1e) |
                                     ((unsigned int)(temp_v19 <= temp_v15) << 0x1d);
                          temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                          if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                            FUN_00231ad4(0x66,(int)(temp_v8 + (temp_v6 >> 0x1a)) >> 6,temp_v7);
                          }
                        }
                      }
                    }
                  }
                }
                if ((int)((unsigned long long)temp_v20 >> 0x20) >= 0x45fa0001) {
                  temp_v19 = (float)VectorSignedToFloat(temp_v31 + temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3
                                                     );
                  temp_v15 = (float)temp_v16;
                  temp_v0 = in_fpscr & 0xfffffff;
                  in_fpscr = temp_v0 | ((unsigned int)(temp_v15 == temp_v19) << 0x1e) |
                             ((unsigned int)(temp_v19 <= temp_v15) << 0x1d);
                  temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                  if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                    temp_v19 = (float)VectorSignedToFloat(temp_v30 + temp_v18,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v19 == temp_v15) << 0x1e) |
                               ((unsigned int)(temp_v15 <= temp_v19) << 0x1d);
                    temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                    if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                      temp_v19 = (float)VectorSignedToFloat(temp_v29 + temp_v4,
                                                          (unsigned char)(in_fpscr >> 0x16) & 3);
                      temp_v15 = (float)temp_v27;
                      temp_v1 = temp_v0 | ((unsigned int)(temp_v19 < temp_v15) << 0x1f);
                      in_fpscr = temp_v1 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v15 != temp_v15)) << 0x1c);
                      if ((unsigned char)(temp_v1 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                        temp_v19 = (float)VectorSignedToFloat(temp_v28 + temp_v4,
                                                            (unsigned char)(in_fpscr >> 0x16) & 3);
                        in_fpscr = temp_v0 | ((unsigned int)(temp_v19 == temp_v15) << 0x1e) |
                                   ((unsigned int)(temp_v15 <= temp_v19) << 0x1d);
                        temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                        if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                          FUN_00231ad4(0x66,(int)(temp_v8 + (temp_v6 >> 0x1a)) >> 6,temp_v7);
                        }
                      }
                    }
                  }
                }
                temp_v6 = FUN_002319e0(0x66,(int)(temp_v8 + (temp_v6 >> 0x1a)) >> 6,temp_v7);
                if (((temp_v6 & ~temp_v12) != 0) || (DAT_0049fcfc != 0)) {
                  temp_v19 = (float)VectorSignedToFloat(temp_v43,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v15 = (float)VectorSignedToFloat(temp_v18 + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_002b04e8(2,0x1c,7000,(int)(temp_v15 + temp_v35),(int)(temp_v19 + temp_v36),
                               DAT_0044cdd8,&temp_v28);
                }
              }
              temp_v8 = temp_v8 + 0x40;
            } while (temp_v8 < 0x140);
            temp_v3 = temp_v3 + 0x40;
          } while (temp_v3 < 400);
        }
      }
      else {
        temp_v3 = 0;
        temp_v17 = temp_v23 + 120.0f;
        temp_v14 = temp_v15 + temp_v13;
        temp_v16 = CONCAT44(temp_v17,temp_v14);
        temp_v21 = CONCAT44(temp_v17 + 8.0f,temp_v17 - 8.0f);
        temp_v20 = CONCAT44(temp_v14 + 8.0f,temp_v14 - 8.0f);
        temp_v4 = (int)(temp_v15 - ((temp_v24 - -25500.0f) * 0.010745763f - temp_v13));
        temp_v18 = (int)(temp_v23 - ((temp_v19 - -18500.0f) * 0.010526316f - 120.0f));
        do {
          temp_v9 = temp_v3 + 0x40;
          temp_v38 = temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1a);
          temp_v39 = temp_v18 + temp_v3;
          temp_v8 = 0;
          temp_v11 = temp_v3 + temp_v18;
          temp_v10 = temp_v9 + temp_v18;
          do {
            temp_v34 = temp_v8 + 0x40;
            temp_v5 = temp_v34 + temp_v4;
            temp_v32 = temp_v3;
            iStack_b4 = temp_v9;
            temp_v33 = temp_v8;
            if ((((-1 < temp_v5) && (temp_v7 = temp_v8 + temp_v4, temp_v7 < 0x141)) && (temp_v10 >= 8)) &&
               (temp_v11 < 0xe9)) {
              temp_v19 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v24 = (float)temp_v16;
              temp_v6 = in_fpscr & 0xfffffff;
              temp_v0 = temp_v6 | ((unsigned int)(temp_v19 < temp_v24) << 0x1f);
              in_fpscr = temp_v0 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v24 != temp_v24)) << 0x1c);
              temp_v19 = (float)((unsigned long long)temp_v16 >> 0x20);
              if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                temp_v15 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                in_fpscr = temp_v6 | ((unsigned int)(temp_v15 == temp_v24) << 0x1e) |
                           ((unsigned int)(temp_v24 <= temp_v15) << 0x1d);
                temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                if ((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) goto LAB_00399f14;
                temp_v15 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v0 = temp_v6 | ((unsigned int)(temp_v15 < temp_v19) << 0x1f);
                in_fpscr = temp_v0 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v19 != temp_v19)) << 0x1c);
                if ((unsigned char)(temp_v0 >> 0x1f) != ((unsigned char)(in_fpscr >> 0x1c) & 1)) goto LAB_00399f14;
                temp_v15 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                in_fpscr = temp_v6 | ((unsigned int)(temp_v15 == temp_v19) << 0x1e) |
                           ((unsigned int)(temp_v19 <= temp_v15) << 0x1d);
                temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                if ((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) goto LAB_00399f14;
LAB_0039a054:
                FUN_00231ad4(0x65,(int)(temp_v8 + ((unsigned int)(temp_v8 >> 0x1f) >> 0x1a)) >> 6,
                             temp_v38 >> 6);
              }
              else {
LAB_00399f14:
                temp_v15 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v13 = (float)temp_v20;
                temp_v6 = in_fpscr & 0xfffffff;
                temp_v0 = temp_v6 | ((unsigned int)(temp_v15 < temp_v13) << 0x1f);
                in_fpscr = temp_v0 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v13 != temp_v13)) << 0x1c);
                if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  temp_v15 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                  in_fpscr = temp_v6 | ((unsigned int)(temp_v15 == temp_v13) << 0x1e) |
                             ((unsigned int)(temp_v13 <= temp_v15) << 0x1d);
                  temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                  if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                    temp_v15 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v0 = temp_v6 | ((unsigned int)(temp_v15 < temp_v19) << 0x1f);
                    in_fpscr = temp_v0 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v19 != temp_v19)) << 0x1c);
                    if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                      temp_v15 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                      in_fpscr = temp_v6 | ((unsigned int)(temp_v15 == temp_v19) << 0x1e) |
                                 ((unsigned int)(temp_v19 <= temp_v15) << 0x1d);
                      temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                      if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) goto LAB_0039a054;
                    }
                  }
                }
                temp_v15 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v13 = (float)((unsigned long long)temp_v20 >> 0x20);
                temp_v6 = in_fpscr & 0xfffffff;
                temp_v0 = temp_v6 | ((unsigned int)(temp_v15 < temp_v13) << 0x1f);
                in_fpscr = temp_v0 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v13 != temp_v13)) << 0x1c);
                if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  temp_v15 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                  in_fpscr = temp_v6 | ((unsigned int)(temp_v15 == temp_v13) << 0x1e) |
                             ((unsigned int)(temp_v13 <= temp_v15) << 0x1d);
                  temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                  if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                    temp_v15 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v0 = temp_v6 | ((unsigned int)(temp_v15 < temp_v19) << 0x1f);
                    in_fpscr = temp_v0 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v19 != temp_v19)) << 0x1c);
                    if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                      temp_v15 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                      in_fpscr = temp_v6 | ((unsigned int)(temp_v15 == temp_v19) << 0x1e) |
                                 ((unsigned int)(temp_v19 <= temp_v15) << 0x1d);
                      temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                      if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) goto LAB_0039a054;
                    }
                  }
                }
                temp_v19 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v6 = in_fpscr & 0xfffffff;
                temp_v0 = temp_v6 | ((unsigned int)(temp_v19 < temp_v24) << 0x1f);
                in_fpscr = temp_v0 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v24 != temp_v24)) << 0x1c);
                if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  temp_v19 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                  in_fpscr = temp_v6 | ((unsigned int)(temp_v19 == temp_v24) << 0x1e) |
                             ((unsigned int)(temp_v24 <= temp_v19) << 0x1d);
                  temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                  if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                    temp_v19 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v15 = (float)temp_v21;
                    temp_v0 = temp_v6 | ((unsigned int)(temp_v19 < temp_v15) << 0x1f);
                    in_fpscr = temp_v0 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v15 != temp_v15)) << 0x1c);
                    if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                      temp_v19 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                      in_fpscr = temp_v6 | ((unsigned int)(temp_v19 == temp_v15) << 0x1e) |
                                 ((unsigned int)(temp_v15 <= temp_v19) << 0x1d);
                      temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                      if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) goto LAB_0039a054;
                    }
                  }
                }
                temp_v19 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v6 = in_fpscr & 0xfffffff;
                temp_v0 = temp_v6 | ((unsigned int)(temp_v19 < temp_v24) << 0x1f);
                in_fpscr = temp_v0 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v24 != temp_v24)) << 0x1c);
                if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  temp_v19 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                  in_fpscr = temp_v6 | ((unsigned int)(temp_v19 == temp_v24) << 0x1e) |
                             ((unsigned int)(temp_v24 <= temp_v19) << 0x1d);
                  temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                  if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                    temp_v19 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v24 = (float)((unsigned long long)temp_v21 >> 0x20);
                    temp_v0 = temp_v6 | ((unsigned int)(temp_v19 < temp_v24) << 0x1f);
                    in_fpscr = temp_v0 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v24 != temp_v24)) << 0x1c);
                    if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                      temp_v19 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                      in_fpscr = temp_v6 | ((unsigned int)(temp_v19 == temp_v24) << 0x1e) |
                                 ((unsigned int)(temp_v24 <= temp_v19) << 0x1d);
                      temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                      if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
                        FUN_00231ad4(0x65,(int)(temp_v8 + ((unsigned int)(temp_v8 >> 0x1f) >> 0x1a)) >> 6,
                                     temp_v38 >> 6);
                      }
                    }
                  }
                }
              }
              temp_v6 = FUN_002319e0(0x65,(int)(temp_v8 + ((unsigned int)(temp_v8 >> 0x1f) >> 0x1a)) >> 6,
                                   temp_v38 >> 6);
              if (((temp_v6 & ~temp_v12) != 0) || (DAT_0049fcfc != 0)) {
                temp_v19 = (float)VectorSignedToFloat(temp_v39,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v24 = (float)VectorSignedToFloat(temp_v4 + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                FUN_002b04e8(2,0x1c,6000,(int)(temp_v24 + temp_v35),(int)(temp_v19 + temp_v36),
                             DAT_0044cdd8,&temp_v32);
              }
            }
            temp_v8 = temp_v8 + 0x40;
          } while (temp_v8 < 0x140);
          temp_v3 = temp_v3 + 0x40;
        } while (temp_v3 < 400);
      }
      temp_v15 = (float)((unsigned long long)temp_v22 >> 0x20);
      temp_v13 = (float)((unsigned long long)temp_v27 >> 0x20);
      if (temp_v12 == 0) {
        FUN_0039eb4c(temp_v44);
        FUN_0039e8b8(temp_v44);
      }
    }
  }
LAB_0039aba4:
  temp_v23 = temp_v23 + 120.0f;
  temp_v15 = temp_v15 + temp_v13;
  if (temp_v12 == 0) {
    FUN_00231d2c(temp_v37);
    temp_v3 = FUN_00231ca4(temp_v44);
    temp_v18 = (int)temp_v23;
    temp_v4 = (int)temp_v15;
    FUN_00231bcc(temp_v44 + 0x164,temp_v3 + 0xbc1,temp_v4,temp_v18,0xb,1);
    NaviMain_GetState(temp_v37);
    temp_v3 = FUN_00231ca4(temp_v44);
    FUN_00231bcc(temp_v44 + 0x164,temp_v3 + 0xbb9,temp_v4,temp_v18,0xb,1);
  }
  FUN_00232554(temp_v44,0);
  DAT_0044cdd8 = 0xf1;
  FUN_00231dec(temp_v44);
  return;
}
