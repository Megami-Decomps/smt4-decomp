/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356674` (_code @ 0x356674, 0x1168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_00356bcc; /* 0x356bcc */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
#ifndef ROMWRIGHT_STORAGE_s__a_a_00587f08_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s__a_a_00587f08_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__a_a_00587f08_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s__a_a_00587f08_9_1_size_check[(sizeof(union romwright_storage_s__a_a_00587f08_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s__a_a_00587f08_9_1_u1_width_check[(sizeof(((union romwright_storage_s__a_a_00587f08_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__a_a_00587f08_9_1_s1_width_check[(sizeof(((union romwright_storage_s__a_a_00587f08_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__a_a_00587f08_9_1 s__a_a_00587f08; /* 0x587f08 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_00178b04. */
extern int FUN_0018719c(void);
extern int FUN_0033aaac(void);
extern int FUN_00364484(int);
/* Supplied declaration required: FUN_003689d0. */
extern int FUN_003b57f4(void);
/* Supplied declaration required: FUN_003fd784. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aa90. */
/* Supplied declaration required: FUN_0040aad4. */
extern int FUN_0040ab8c(unsigned int);
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */


unsigned int FUN_00356674(void)

{
/* irregular: 4 goto(s); irregular input(s): in_fpscr; 10 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  short temp_v3;
  short temp_v4;
  int temp_v5;
  char *pcVar8;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  int temp_v10;
  
  temp_v0 = FUN_00162e8c();
  temp_v3 = *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 8);
  if (temp_v3 != 0) {
    if (temp_v3 != 1) {
      if (temp_v3 != 2) {
        if (temp_v3 == 99) {
          return 1;
        }
        return 0;
      }
      temp_v1 = (int)*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10);
      if (((temp_v1 != 0) && (temp_v1 != 1 && temp_v1 != 3)) &&
         (temp_v1 = FUN_0040ab8c(*(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v1 * 8 + 0x20)),
         temp_v1 == 0)) {
        return 0;
      }
      goto LAB_003572ac;
    }
  }
  else {
    temp_v1 = 0;
    temp_v10 = 0;
    do {
      temp_v5 = 0;
      pcVar8 = (char *)0x0;
      temp_v6 = FUN_003b57f4();
      if (temp_v6 >= 1) {
        do {
          pcVar2 = pcVar8;
          FUN_003689d0();
          if ((*pcVar2 != -1) && ((int)*pcVar2 == (int)*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 4))) {
            temp_v7 = (int)*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 6);
            temp_v9 = temp_v7 == 0;
            temp_v6 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
            if (!temp_v9) {
              temp_v6 = (int)pcVar2[1];
            }
            temp_v8 = temp_v9 || temp_v6 == temp_v7;
            if (temp_v9 || temp_v6 == temp_v7) {
              temp_v7 = (int)pcVar2[0xb];
              temp_v8 = temp_v7 == temp_v1;
            }
            if (temp_v8) {
              temp_v9 = 0;
              if (((temp_v7 == 0) || (temp_v7 == 6 || temp_v7 == 0xe)) &&
                 ((*(unsigned int *)(temp_v0 + ((int)(pcVar8 + ((unsigned int)((int)pcVar8 >> 0x1f) >> 0x1b)) >> 5) *
                                     4 + 0x7c8) & (1 << (((int)pcVar8 % 0x20) & 0xffU))) == 0)) {
                temp_v9 = 1;
              }
              if ((((((temp_v7 != 1 && temp_v7 != 0xb) && temp_v7 != 0xc) ||
                    (temp_v6 = FUN_00364484((int)(short)pcVar8), temp_v6 == 0)) &&
                   ((!temp_v9 &&
                    ((*(short *)(pcVar2 + 0xc) == 0 || (temp_v6 = FUN_0018719c(), temp_v6 != 0)))))) &&
                  ((*(short *)(pcVar2 + 0xe) == 0 || (temp_v6 = FUN_0018719c(), temp_v6 == 0)))) &&
                 ((*(short *)(pcVar2 + 0x28) == 0 || (temp_v6 = FUN_0033aaac(), temp_v6 == 0)))) {
                temp_v5 = temp_v5 + 1;
                temp_v10 = temp_v10 + 1;
              }
            }
          }
          pcVar8 = pcVar8 + 1;
          temp_v6 = FUN_003b57f4();
        } while ((int)pcVar8 < temp_v6);
        if (temp_v5 != 0) {
          if (temp_v5 != 1) {
            *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v1 * 8 + 0x1c) = 2;
          }
          else {
            *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v1 * 8 + 0x1c) = 1;
          }
        }
        else {
          *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v1 * 8 + 0x1c) = 0;
        }
      }
      else {
        *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v1 * 8 + 0x1c) = 0;
      }
      temp_v2 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x11);
    if (temp_v10 == 0) {
      *(unsigned short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 8) = 99;
      return 1;
    }
    *(unsigned short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) = 0;
    *(short *)(temp_v2 + 8) = *(short *)(temp_v2 + 8) + 1;
  }
  temp_v2 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
  temp_v1 = (int)*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10);
  if (*(int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v1 * 8 + 0x1c) == 0) {
    temp_v3 = *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) + 1;
    *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) = temp_v3;
    if (temp_v3 < 0x11) {
      return 0;
    }
    *(unsigned short *)(temp_v2 + 8) = 99;
    return 1;
  }
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if (temp_v1 != 3) {
          if (temp_v1 != 4) {
            if (temp_v1 != 5) {
              if (temp_v1 != 6) {
                if (temp_v1 == 8) {
                  temp_v1 = 0x20;
                  FUN_00178b04(0x20,&LAB_00356bcc,0x193);
                  goto joined_r0x00356b80;
                }
                if (temp_v1 == 9) {
                  temp_v1 = 0x20;
                  FUN_00178b04(0x20,&LAB_00356bcc,0x19c);
                  goto joined_r0x00356bb0;
                }
                if (temp_v1 != 10) {
                  if (temp_v1 != 0xb) {
                    if (temp_v1 != 0xc) {
                      if (temp_v1 != 0xd) {
                        if (temp_v1 != 0xe) {
                          if (temp_v1 != 0xf) {
                            if (temp_v1 != 0x10) {
                              temp_v1 = 0x20;
                              FUN_00178b04(0x20,&LAB_00356bcc,0x1e4);
                              temp_v2 = 0;
                              if (temp_v1 != 0) {
                                temp_v2 = FUN_0040ac08();
                              }
                              *(unsigned int *)
                               ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 +
                               0x20) = temp_v2;
                              FUN_0040aa6c();
                              FUN_0040a908(*(unsigned int *)
                                            ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                             *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),
                                           0x10000);
                              FUN_0040a918(*(unsigned int *)
                                            ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                             *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),
                                           0x30000);
                              FUN_0040aad4(*(unsigned int *)
                                            ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                             *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0);
                            }
                            else {
                              temp_v1 = 0x20;
                              FUN_00178b04(0x20,&LAB_00356bcc,0x1db);
                              temp_v2 = 0;
                              if (temp_v1 != 0) {
                                temp_v2 = FUN_0040ac08();
                              }
                              *(unsigned int *)
                               ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 +
                               0x20) = temp_v2;
                              FUN_0040aa6c();
                              FUN_0040a908(*(unsigned int *)
                                            ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                             *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),
                                           0x10000);
                              FUN_0040a918(*(unsigned int *)
                                            ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                             *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),
                                           0x10000);
                              FUN_0040aad4(*(unsigned int *)
                                            ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                             *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0);
                            }
                          }
                          else {
                            temp_v1 = 0x20;
                            FUN_00178b04(0x20,&LAB_00356bcc,0x1d2);
                            temp_v2 = 0;
                            if (temp_v1 != 0) {
                              temp_v2 = FUN_0040ac08();
                            }
                            *(unsigned int *)
                             ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 +
                             0x20) = temp_v2;
                            FUN_0040aa6c();
                            FUN_0040a908(*(unsigned int *)
                                          ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                           *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),
                                         0x10000);
                            FUN_0040a918(*(unsigned int *)
                                          ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                           *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),
                                         0x10000);
                            FUN_0040aad4(*(unsigned int *)
                                          ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                           *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0);
                          }
                        }
                        else {
                          temp_v1 = 0x20;
                          FUN_00178b04(0x20,&LAB_00356bcc,0x1c9);
                          temp_v2 = 0;
                          if (temp_v1 != 0) {
                            temp_v2 = FUN_0040ac08();
                          }
                          *(unsigned int *)
                           ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 +
                           0x20) = temp_v2;
                          FUN_0040aa6c();
                          FUN_0040a908(*(unsigned int *)
                                        ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                         *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0x10000)
                          ;
                          FUN_0040a918(*(unsigned int *)
                                        ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                         *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0x10000)
                          ;
                          FUN_0040aad4(*(unsigned int *)
                                        ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                         *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0);
                        }
                      }
                      else {
                        temp_v1 = 0x20;
                        FUN_00178b04(0x20,&LAB_00356bcc,0x1c0);
                        temp_v2 = 0;
                        if (temp_v1 != 0) {
                          temp_v2 = FUN_0040ac08();
                        }
                        *(unsigned int *)
                         ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20)
                             = temp_v2;
                        FUN_0040aa6c();
                        FUN_0040a908(*(unsigned int *)
                                      ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                       *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0x10000);
                        FUN_0040a918(*(unsigned int *)
                                      ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                       *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0x10000);
                        FUN_0040aad4(*(unsigned int *)
                                      ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                       *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0);
                      }
                    }
                    else {
                      temp_v1 = 0x20;
                      FUN_00178b04(0x20,&LAB_00356bcc,0x1b7);
                      temp_v2 = 0;
                      if (temp_v1 != 0) {
                        temp_v2 = FUN_0040ac08();
                      }
                      *(unsigned int *)
                       ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20) =
                           temp_v2;
                      FUN_0040aa6c();
                      FUN_0040a908(*(unsigned int *)
                                    ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                     *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0x10000);
                      FUN_0040a918(*(unsigned int *)
                                    ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                     *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0x10000);
                      FUN_0040aad4(*(unsigned int *)
                                    ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                     *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0);
                    }
                  }
                  else {
                    temp_v1 = 0x20;
                    FUN_00178b04(0x20,&LAB_00356bcc,0x1ae);
                    temp_v2 = 0;
                    if (temp_v1 != 0) {
                      temp_v2 = FUN_0040ac08();
                    }
                    *(unsigned int *)
                     ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20) =
                         temp_v2;
                    FUN_0040aa6c();
                    FUN_0040a908(*(unsigned int *)
                                  ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                   *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0x10000);
                    FUN_0040a918(*(unsigned int *)
                                  ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                   *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0x10000);
                    FUN_0040aad4(*(unsigned int *)
                                  ((*(unsigned int *)&s__a_a_00587f08.u1[0]) +
                                   *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0);
                  }
                }
                else {
                  temp_v1 = 0x20;
                  FUN_00178b04(0x20,&LAB_00356bcc,0x1a5);
                  temp_v2 = 0;
                  if (temp_v1 != 0) {
                    temp_v2 = FUN_0040ac08();
                  }
                  *(unsigned int *)
                   ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20) =
                       temp_v2;
                  FUN_0040aa6c();
                  FUN_0040a908(*(unsigned int *)
                                ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8
                                + 0x20),0x10000);
                  FUN_0040a918(*(unsigned int *)
                                ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8
                                + 0x20),0x10000);
                  FUN_0040aad4(*(unsigned int *)
                                ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8
                                + 0x20),0);
                }
              }
              else {
                temp_v1 = 0x20;
                FUN_00178b04(0x20,&LAB_00356bcc,0x18a);
                temp_v2 = 0;
                if (temp_v1 != 0) {
                  temp_v2 = FUN_0040ac08();
                }
                *(unsigned int *)
                 ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20) = temp_v2
                ;
                FUN_0040aa6c();
                FUN_0040a908(*(unsigned int *)
                              ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 +
                              0x20),0x10000);
                FUN_0040a918(*(unsigned int *)
                              ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 +
                              0x20),0x30000);
                FUN_0040aad4(*(unsigned int *)
                              ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 +
                              0x20),0);
              }
            }
            else {
              temp_v1 = 0x20;
              FUN_00178b04(0x20,&LAB_00356bcc,0x181);
              temp_v2 = 0;
              if (temp_v1 != 0) {
                temp_v2 = FUN_0040ac08();
              }
              *(unsigned int *)
               ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20) = temp_v2;
              FUN_0040aa6c();
              FUN_0040a908(*(unsigned int *)
                            ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 +
                            0x20),0x10000);
              FUN_0040a918(*(unsigned int *)
                            ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 +
                            0x20),0x30000);
              FUN_0040aad4(*(unsigned int *)
                            ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 +
                            0x20),0);
            }
          }
          else {
            temp_v1 = 0x20;
            FUN_00178b04(0x20,&LAB_00356bcc,0x178);
joined_r0x00356bb0:
            temp_v2 = 0;
            if (temp_v1 != 0) {
              temp_v2 = FUN_0040ac08();
            }
            *(unsigned int *)
             ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20) = temp_v2;
            FUN_0040aa6c();
            FUN_0040a908(*(unsigned int *)
                          ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20
                          ),0x10000);
            FUN_0040a918(*(unsigned int *)
                          ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20
                          ),0x10000);
            FUN_0040aad4(*(unsigned int *)
                          ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20
                          ),0);
          }
        }
        else {
          temp_v1 = 0x20;
          FUN_00178b04(0x20,&LAB_00356bcc,0x16f);
joined_r0x00356b80:
          temp_v2 = 0;
          if (temp_v1 != 0) {
            temp_v2 = FUN_0040ac08();
          }
          *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20)
               = temp_v2;
          FUN_0040aa6c();
          FUN_0040a908(*(unsigned int *)
                        ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),
                       0x10000);
          FUN_0040a918(*(unsigned int *)
                        ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),
                       0x20000);
          FUN_0040aad4(*(unsigned int *)
                        ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),
                       0);
        }
      }
      else {
        temp_v1 = 0x20;
        FUN_00178b04(0x20,&LAB_00356bcc,0x166);
        temp_v2 = 0;
        if (temp_v1 != 0) {
          temp_v2 = FUN_0040ac08();
        }
        *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20) =
             temp_v2;
        FUN_0040aa6c();
        FUN_0040a908(*(unsigned int *)
                      ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),
                     0x10000);
        FUN_0040a918(*(unsigned int *)
                      ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),
                     0x20000);
        FUN_0040aad4(*(unsigned int *)
                      ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0)
        ;
      }
    }
    else {
      temp_v1 = 0x20;
      FUN_00178b04(0x20,&LAB_00356bcc,0x15d);
      temp_v2 = 0;
      if (temp_v1 != 0) {
        temp_v2 = FUN_0040ac08();
      }
      *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20) =
           temp_v2;
      FUN_0040aa6c();
      FUN_0040a908(*(unsigned int *)
                    ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),
                   0x10000);
      FUN_0040a918(*(unsigned int *)
                    ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),
                   0x20000);
      FUN_0040aad4(*(unsigned int *)
                    ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0);
    }
  }
  else {
    temp_v1 = 0x20;
    FUN_00178b04(0x20,&LAB_00356bcc,0x154);
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = FUN_0040ac08();
    }
    *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20) =
         temp_v2;
    FUN_0040aa6c();
    FUN_0040a908(*(unsigned int *)
                  ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),
                 0x10000);
    FUN_0040a918(*(unsigned int *)
                  ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),
                 0x20000);
    FUN_0040aad4(*(unsigned int *)
                  ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0);
  }
  temp_v2 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
  *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 8) = *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 8) + 1;
  if (*(unsigned short *)(temp_v2 + 10) >= 2 && *(unsigned short *)(temp_v2 + 10) != 3) {
    return 0;
  }
LAB_003572ac:
  temp_v3 = *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 4);
  temp_v9 = temp_v3 == 0x65;
  if (temp_v9) {
    temp_v3 = *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10);
  }
  if (temp_v9 && temp_v3 == 3) {
    temp_v1 = *(int *)(*(int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0x38) + 4);
    FUN_0040ace8(DAT_0056fcc0,temp_v1);
    temp_v6 = 0;
    *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 3;
    do {
      temp_v5 = (*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v6 * 0x58;
      *(unsigned char *)(temp_v5 + 0xba4) = 1;
      temp_v1 = 0x20;
      *(unsigned char *)(temp_v5 + 0xbc4) = 0;
      *(unsigned char *)(temp_v5 + 0xbd8) = 1;
      *(unsigned int *)(temp_v5 + 0xbdc) = 0;
      *(unsigned char *)(temp_v5 + 0xbd0) = 1;
      FUN_00178b04(0x20,&LAB_00356bcc,0x276);
      temp_v2 = 0;
      if (temp_v1 != 0) {
        temp_v2 = FUN_0040ac08();
      }
      *(unsigned int *)(temp_v5 + 0xbd4) = temp_v2;
      FUN_0040aa90();
      temp_v1 = *(int *)(*(int *)(temp_v5 + 0xbd4) + 4);
      FUN_0040ace8(DAT_0056fcc0,temp_v1);
      FUN_003fd784(temp_v1);
      temp_v6 = temp_v6 + 1;
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 3;
    } while (temp_v6 < 3);
  }
  temp_v6 = 0;
  pcVar8 = (char *)0x0;
  temp_v1 = FUN_003b57f4();
  if (0 < temp_v1) {
    do {
      pcVar2 = pcVar8;
      FUN_003689d0();
      if ((*pcVar2 != -1) && (temp_v1 = (int)*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 4), *pcVar2 == temp_v1))
      {
        temp_v5 = (int)*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 6);
        if (temp_v5 != 0) {
          temp_v1 = (int)pcVar2[1];
        }
        if ((temp_v5 == 0 || temp_v1 == temp_v5) &&
           (temp_v1 = (int)pcVar2[0xb], temp_v1 == *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10))) {
          temp_v9 = 0;
          if (((temp_v1 == 0) || (temp_v1 == 6 || temp_v1 == 0xe)) &&
             ((*(unsigned int *)(temp_v0 + ((int)(pcVar8 + ((unsigned int)((int)pcVar8 >> 0x1f) >> 0x1b)) >> 5) * 4 +
                        0x7c8) & (1 << (((int)pcVar8 % 0x20) & 0xffU))) == 0)) {
            temp_v9 = 1;
          }
          if ((((((temp_v1 != 1 && temp_v1 != 0xb) && temp_v1 != 0xc) ||
                (temp_v1 = FUN_00364484((int)(short)pcVar8), temp_v1 == 0)) && (!temp_v9)) &&
              ((*(short *)(pcVar2 + 0xc) == 0 || (temp_v1 = FUN_0018719c(), temp_v1 != 0)))) &&
             (((*(short *)(pcVar2 + 0xe) == 0 || (temp_v1 = FUN_0018719c(), temp_v1 == 0)) &&
              ((*(short *)(pcVar2 + 0x28) == 0 || (temp_v1 = FUN_0033aaac(), temp_v1 == 0)))))) {
            temp_v2 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
            temp_v1 = 0;
            do {
              if (*(char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v1 * 0x58 + 0xa4) == '\0') goto LAB_0035755c;
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < 0x20);
            temp_v1 = -1;
LAB_0035755c:
            *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xc) = (short)temp_v1;
            temp_v5 = *(int *)(temp_v2 + 0x10) + 1;
            temp_v7 = temp_v2 + (short)temp_v1 * 0x58;
            *(int *)(temp_v2 + 0x10) = temp_v5;
            *(unsigned char *)(temp_v7 + 0xa4) = 1;
            *(unsigned int *)(temp_v7 + 0xac) = 0;
            *(unsigned int *)(temp_v7 + 0xa8) = 1;
            temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar2 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(temp_v7 + 0xb0) = temp_v2;
            temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar2 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(temp_v7 + 0xb4) = temp_v2;
            temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar2 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(temp_v7 + 0xb8) = temp_v2;
            temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(temp_v7 + 0xbc) = temp_v2;
            *(unsigned int *)(temp_v7 + 0xc0) = 0;
            *(unsigned char *)(temp_v7 + 0xc4) = 1;
            *(short *)(temp_v7 + 0xc6) = (short)pcVar2[10];
            temp_v3 = *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10);
            *(short *)(temp_v7 + 200) = temp_v3;
            *(char **)(temp_v7 + 0xcc) = pcVar8;
            temp_v1 = (int)*(short *)(pcVar2 + 0x28);
            temp_v9 = temp_v1 == 0;
            if (temp_v9) {
              temp_v1 = 0;
            }
            else {
              temp_v5 = 0;
            }
            *(int *)(temp_v7 + 0xf0) = temp_v1;
            if (!temp_v9) {
              *(char *)(temp_v7 + 0xf4) = (char)temp_v5;
            }
            else {
              *(char *)(temp_v7 + 0xf4) = (char)temp_v1;
            }
            if (((((temp_v3 == 3 || temp_v3 == 4) || (temp_v3 == 5 || temp_v3 == 7)) ||
                 (temp_v3 == 8 || temp_v3 == 9)) ||
                ((temp_v3 == 10 || temp_v3 == 0x10 || (temp_v3 == 0xd || temp_v3 == 0xf)))) &&
               (temp_v1 = FUN_00364484((int)(short)pcVar8), temp_v1 != 0)) {
              *(unsigned int *)(temp_v7 + 0xc0) = 2;
              *(unsigned int *)(temp_v7 + 0xa8) = 0xb;
            }
            temp_v2 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
            temp_v3 = *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 4);
            temp_v9 = temp_v3 == 0x65;
            if (temp_v9) {
              temp_v3 = *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10);
            }
            if (!(temp_v9 && temp_v3 == 3)) {
              *(unsigned char *)(temp_v7 + 0xe0) = 0;
              *(unsigned int *)(temp_v7 + 0xe4) = 0xffffffff;
              if (temp_v6 != 0) {
                *(unsigned char *)(temp_v7 + 0xd0) = 1;
                *(unsigned int *)(temp_v7 + 0xdc) = 0;
                temp_v1 = 0x20;
                *(unsigned char *)(temp_v7 + 0xd8) = 1;
                FUN_00178b04(0x20,&LAB_00356bcc,0x333);
                temp_v2 = 0;
                if (temp_v1 != 0) {
                  temp_v2 = FUN_0040ac08();
                }
                *(unsigned int *)(temp_v7 + 0xd4) = temp_v2;
                FUN_0040aa90();
                FUN_0040ace8(DAT_0056fcc0,*(unsigned int *)(*(int *)(temp_v7 + 0xd4) + 4));
                if (*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 4) >= 100) {
                  FUN_003fd784(*(unsigned int *)(*(int *)(temp_v7 + 0xd4) + 4));
                }
              }
              else {
                *(unsigned char *)(temp_v7 + 0xd0) = 0;
                *(unsigned int *)(temp_v7 + 0xd4) = 0;
                *(unsigned char *)(temp_v7 + 0xd8) = 0;
                temp_v1 = (int)*(short *)(temp_v2 + 10);
                *(int *)(temp_v7 + 0xdc) = temp_v1;
                FUN_0040ace8(DAT_0056fcc0,*(unsigned int *)(*(int *)(temp_v2 + temp_v1 * 8 + 0x20) + 4));
                if (*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 4) >= 100) {
                  FUN_003fd784(*(unsigned int *)
                                (*(int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(int *)(temp_v7 + 0xdc) * 8 + 0x20
                                         ) + 4));
                }
              }
            }
            else {
              *(unsigned char *)(temp_v7 + 0xe0) = 1;
              *(unsigned int *)(temp_v7 + 0xe4) = 0xffffffff;
            }
            temp_v6 = temp_v6 + 1;
          }
        }
      }
      pcVar8 = pcVar8 + 1;
      temp_v1 = FUN_003b57f4();
    } while ((int)pcVar8 < temp_v1);
  }
  temp_v2 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
  temp_v3 = *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) + 1;
  *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) = temp_v3;
  if (temp_v3 < 0x11) {
    temp_v4 = *(short *)(temp_v2 + 8) - 1;
  }
  else {
    temp_v4 = 99;
  }
  *(short *)(temp_v2 + 8) = temp_v4;
  if (temp_v3 < 0x11) {
    return 0;
  }
  return 1;
}
