/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c2ab8` (_code @ 0x1c2ab8, 0x22c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp90; /* 0x90: local_90 */
} param_2_stack;

extern int FUN_001cc198(); /* 0x1cc198 */

extern int FUN_001c2484(void);
/* Supplied declaration required: FUN_001cb7c8. */
/* Supplied declaration required: FUN_001cb954. */
/* Supplied declaration required: FUN_001cb9dc. */
/* Supplied declaration required: FUN_001cbf64. */
/* Supplied declaration required: FUN_001cc1d0. */
extern int FUN_001cc570(int, int);
/* Supplied declaration required: FUN_001cd1e8. */
extern int FUN_001cd210(unsigned char *, unsigned int *, unsigned int);
extern unsigned int aeabi_uidivmod(unsigned int);
extern unsigned int *nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable(unsigned int);
/* Supplied declaration required: nw_snd_internal_driver_StreamBufferPool_Free. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Free. */


void FUN_001c2ab8(int param_1,unsigned char *param_2)

{
/* irregular: 1 goto(s); 9 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int unaff_r9;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [4];
  unsigned int temp_v8;
  unsigned char temp_v9 [80];
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    *(unsigned int *)(param_1 + 0x10c) = *(unsigned int *)(param_2 + 0x10);
    FUN_001cb9dc(temp_v7);
    FUN_001cb954(temp_v7,*(unsigned int *)(param_1 + 0x10c));
    temp_v0 = FUN_001cd210(temp_v7,(unsigned int *)&temp_v4,0);
    if (temp_v0 != 0) {
      *(unsigned int *)(param_1 + 0x210) = temp_v4;
      *(unsigned int *)(param_1 + 0x214) = temp_v5;
      *(unsigned int *)(param_1 + 0x218) = temp_v6;
      FUN_001cd1e8(temp_v7,temp_v9);
      puVar2 = (unsigned int *)
               nw_snd_internal_StreamSoundFile_InfoBlockBody_GetChannelInfoTable(temp_v8);
      *(unsigned int *)(param_1 + 0xb4) = *puVar2;
      FUN_001cb7c8(param_1 + 0x88,temp_v9);
      temp_v1 = *(unsigned int *)(param_1 + 0xb4);
      if (temp_v1 >= 9) {
        temp_v1 = 8;
      }
      *(unsigned int *)(param_1 + 0x220) = temp_v1;
      *(unsigned char *)(param_1 + 0x7c) = *param_2;
      *(unsigned int *)(param_1 + 0x80) = *(unsigned int *)(param_2 + 4);
      *(unsigned char *)(param_1 + 0xc) = 1;
      temp_v0 = FUN_001cc570(param_1,param_1 + 0x88);
      if ((temp_v0 != 0) && (*(unsigned int *)(param_1 + 0xa8) < 0x2001)) {
        temp_v1 = aeabi_uidivmod(*(unsigned int *)(*(int *)(param_1 + 100) + 8));
        *(unsigned int *)(param_1 + 0x68) = temp_v1;
        if (temp_v1 >= 4) {
          if (temp_v1 >= 0x21) {
            temp_v1 = 0x20;
          }
          *(unsigned int *)(param_1 + 0x68) = temp_v1;
          *(unsigned int *)(param_1 + 0x6c) = 0;
          *(unsigned int *)(param_1 + 0x70) = 0;
          *(unsigned int *)(param_1 + 0x74) = 0;
          *(unsigned int *)(param_1 + 0x78) = 0;
          temp_v0 = FUN_001c2484();
          temp_v1 = *(unsigned int *)(param_1 + 0x220);
          if (*(unsigned int *)(temp_v0 + 0x20) >= temp_v1) {
            if (temp_v1 != 0) {
              unaff_r9 = 0x7fff;
            }
            temp_v3 = 0;
            if (temp_v1 != 0) {
              do {
                temp_v0 = param_1 + temp_v3 * 0x3c8;
                temp_v2 = FUN_001c2484();
                FUN_001cbf64(temp_v2,1,unaff_r9,FUN_001cc198,temp_v0 + 0x228);
                if (temp_v2 == 0) {
                  temp_v1 = 0;
                  if (temp_v1 < temp_v3) {
                    do {
                      temp_v0 = param_1 + temp_v1 * 0x3c8;
                      if (*(int *)(temp_v0 + 0x22c) != 0) {
                        nw_snd_internal_driver_Voice_Free();
                        *(unsigned int *)(temp_v0 + 0x22c) = 0;
                      }
                      temp_v1 = temp_v1 + 1;
                    } while (temp_v1 < temp_v3);
                  }
                  goto LAB_001c2c98;
                }
                *(int *)(temp_v0 + 0x22c) = temp_v2;
                temp_v3 = temp_v3 + 1;
              } while (temp_v3 < *(unsigned int *)(param_1 + 0x220));
            }
            *(unsigned char *)(param_1 + 0x53) = 1;
            FUN_001cc1d0(param_1,temp_v7);
          }
          else {
LAB_001c2c98:
            temp_v1 = 0;
            if (*(int *)(param_1 + 0x220) != 0) {
              do {
                temp_v0 = param_1 + temp_v1 * 0x3c8;
                if (*(int *)(temp_v0 + 0x228) != 0) {
                  nw_snd_internal_driver_StreamBufferPool_Free(*(unsigned int *)(param_1 + 100));
                  *(unsigned int *)(temp_v0 + 0x228) = 0;
                }
                temp_v1 = temp_v1 + 1;
              } while (temp_v1 < *(unsigned int *)(param_1 + 0x220));
              return;
            }
          }
        }
      }
    }
  }
  return;
}
