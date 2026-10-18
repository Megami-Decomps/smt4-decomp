/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c2538` (_code @ 0x1c2538, 0x4d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
} param_4_stack;

extern int FUN_001cc198(); /* 0x1cc198 */

extern int FUN_001c2484(void);
/* Supplied declaration required: FUN_001cbd00. */
/* Supplied declaration required: FUN_001cbd44. */
/* Supplied declaration required: FUN_001cbf64. */
/* Supplied declaration required: FUN_001cc084. */
extern int FUN_001cc570(int *, int *);
/* Supplied declaration required: FUN_001d0984. */
/* Supplied declaration required: FUN_002ffa9c. */
extern unsigned int aeabi_uidivmod(unsigned int);
/* Supplied declaration required: nw_snd_internal_driver_StreamBufferPool_Alloc. */
/* Supplied declaration required: nw_snd_internal_driver_StreamBufferPool_Free. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Free. */


unsigned int FUN_001c2538(int *param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s); 11 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int unaff_r7;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int aiStack_48 [9];
  
  if (((char)param_1[0x14] != '\0') && (*(unsigned short *)(param_1 + 0x87e) == param_4)) {
    if (param_2 != 0) {
      temp_v1 = param_1[0x2d];
      if (temp_v1 >= 9) {
        temp_v1 = 8;
      }
      param_1[0x88] = temp_v1;
      temp_v5 = 0;
      if (temp_v1 != 0) {
        do {
          temp_v2 = param_1[0x19];
          nw_snd_internal_driver_StreamBufferPool_Alloc();
          if (temp_v2 == 0) {
            temp_v1 = 0;
            if (temp_v5 != 0) {
              do {
                nw_snd_internal_driver_StreamBufferPool_Free
                          (param_1[0x19],param_1[temp_v1 * 0xf2 + 0x8a]);
                temp_v7 = temp_v1 + 1;
                param_1[temp_v1 * 0xf2 + 0x8a] = 0;
                temp_v1 = temp_v7;
              } while (temp_v7 < temp_v5);
            }
            (**(romwright_code **)(*param_1 + 0xc))(param_1);
            *(unsigned char *)(param_1 + 4) = 1;
            return 0;
          }
          temp_v1 = temp_v5 + 1;
          param_1[temp_v5 * 0xf2 + 0x8a] = temp_v2;
          temp_v5 = temp_v1;
        } while (temp_v1 < (unsigned int)param_1[0x88]);
      }
      temp_v2 = FUN_001cc570(param_1,param_1 + 0x22);
      if (temp_v2 != 0) {
        if (*(char *)((int)param_1 + 0x53) != '\0') {
LAB_001c28e0:
          temp_v1 = 0;
          if (param_1[0x89] != 0) {
            do {
              temp_v2 = 0;
              if ((char)param_1[temp_v1 * 9 + 0x81d] != '\0') {
                do {
                  temp_v0 = *(char *)((int)param_1 + temp_v1 * 0x24 + 0x207e);
                  temp_v6 = *(unsigned int *)(param_1[temp_v1 * 9 + temp_v2 + 0x81b] + 4);
                  if (temp_v0 != '\0') {
                    if (temp_v0 != '\x01') {
                      if (temp_v0 == '\x02') {
                        FUN_001cbd00(temp_v6,0);
                        FUN_001cbd44(temp_v6,1);
                      }
                    }
                    else {
                      FUN_001cbd00(temp_v6,1);
                      FUN_001cbd44(temp_v6,0);
                    }
                  }
                  else {
                    FUN_001cbd00(temp_v6,0);
                    FUN_001cbd44(temp_v6,0);
                  }
                  temp_v2 = temp_v2 + 1;
                } while (temp_v2 < (int)(unsigned int)*(unsigned char *)(param_1 + temp_v1 * 9 + 0x81d));
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < (unsigned int)param_1[0x89]);
          }
          temp_v1 = 0;
          if (temp_v1 < (unsigned int)param_1[0x88]) {
            do {
              if (*(int *)(param_3 + temp_v1 * 4) != 0) {
                FUN_001d0984(param_1[temp_v1 * 0xf2 + 0x8b],0);
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < (unsigned int)param_1[0x88]);
          }
          return 1;
        }
        if ((unsigned int)param_1[0x2a] < 0x2001) {
          temp_v1 = aeabi_uidivmod(*(unsigned int *)(param_1[0x19] + 8));
          param_1[0x1a] = temp_v1;
          if (temp_v1 >= 4) {
            if (temp_v1 >= 0x21) {
              temp_v1 = 0x20;
            }
            param_1[0x1a] = temp_v1;
            param_1[0x1b] = 0;
            param_1[0x1c] = 0;
            param_1[0x1d] = 0;
            param_1[0x1e] = 0;
            temp_v2 = FUN_001c2484();
            temp_v1 = param_1[0x88];
            if (temp_v1 <= *(unsigned int *)(temp_v2 + 0x20)) {
              if (temp_v1 != 0) {
                unaff_r7 = 0x7fff;
              }
              temp_v5 = 0;
              if (temp_v1 != 0) {
                do {
                  temp_v2 = FUN_001c2484();
                  FUN_001cbf64(temp_v2,1,unaff_r7,FUN_001cc198,param_1 + temp_v5 * 0xf2 + 0x8a);
                  if (temp_v2 == 0) {
                    temp_v1 = 0;
                    if (temp_v1 < temp_v5) {
                      do {
                        if (param_1[temp_v1 * 0xf2 + 0x8b] != 0) {
                          nw_snd_internal_driver_Voice_Free();
                          param_1[temp_v1 * 0xf2 + 0x8b] = 0;
                        }
                        temp_v1 = temp_v1 + 1;
                      } while (temp_v1 < temp_v5);
                    }
                    goto LAB_001c27cc;
                  }
                  param_1[temp_v5 * 0xf2 + 0x8b] = temp_v2;
                  temp_v5 = temp_v5 + 1;
                } while (temp_v5 < (unsigned int)param_1[0x88]);
              }
              param_1[0x17] = 0;
              temp_v1 = 0;
              if (temp_v1 < (unsigned int)param_1[0x1a]) {
                do {
                  temp_v5 = 0;
                  if (temp_v5 < (unsigned int)param_1[0x88]) {
                    do {
                      aiStack_48[temp_v5] =
                           param_1[0x2a] * param_1[0x1b] + param_1[temp_v5 * 0xf2 + 0x8a];
                      temp_v5 = temp_v5 + 1;
                    } while (temp_v5 < (unsigned int)param_1[0x88]);
                  }
                  temp_v2 = 0;
                  if ((char)param_1[0x1f] == '\0') {
                    temp_v2 = param_1[0x20];
                  }
                  else if ((char)param_1[0x1f] == '\x01') {
                    temp_v7 = param_1[0x20];
                    temp_v5 = param_1[0x23];
                    FUN_002ffa9c((int)((unsigned long long)temp_v5 * (unsigned long long)temp_v7),
                                 ((int)temp_v7 >> 0x1f) * temp_v5 +
                                 (int)((unsigned long long)temp_v5 * (unsigned long long)temp_v7 >> 0x20),1000,0);
                    if (temp_v4 != 0) {
                      temp_v2 = -1;
                    }
                    else {
                      temp_v2 = FUN_002ffa9c((int)((unsigned long long)temp_v5 * (unsigned long long)temp_v7),
                                           ((int)temp_v7 >> 0x1f) * temp_v5 +
                                           (int)((unsigned long long)temp_v5 * (unsigned long long)temp_v7 >> 0x20),1000,0
                                          );
                    }
                  }
                  temp_v3 = param_1[0x87];
                  param_1[0x20] = 0;
                  param_1[0x87] = 0;
                  if (*(char *)((int)param_1 + 0xd) == '\0') {
                    temp_v6 = 1;
                  }
                  else {
                    temp_v6 = 2;
                  }
                  FUN_001cc084(param_1[0x18],aiStack_48,param_1[0x1b],temp_v2,temp_v3,temp_v6,
                               (int)(char)param_1[0x21]);
                  temp_v2 = param_1[0x1b];
                  temp_v1 = temp_v1 + 1;
                  param_1[0x1b] = temp_v2 + 1U;
                  if ((unsigned int)param_1[0x1a] <= temp_v2 + 1U) {
                    param_1[0x1b] = 0;
                  }
                  param_1[0x17] = param_1[0x17] + 1;
                } while (temp_v1 < (unsigned int)param_1[0x1a]);
              }
              goto LAB_001c28e0;
            }
LAB_001c27cc:
            temp_v1 = 0;
            if (param_1[0x88] != 0) {
              do {
                if (param_1[temp_v1 * 0xf2 + 0x8a] != 0) {
                  nw_snd_internal_driver_StreamBufferPool_Free(param_1[0x19]);
                  param_1[temp_v1 * 0xf2 + 0x8a] = 0;
                }
                temp_v1 = temp_v1 + 1;
              } while (temp_v1 < (unsigned int)param_1[0x88]);
            }
          }
        }
      }
    }
    else {
      *(unsigned char *)((int)param_1 + 0xf) = 1;
      (**(romwright_code **)(*param_1 + 0x14))(param_1);
    }
  }
  return 0;
}
