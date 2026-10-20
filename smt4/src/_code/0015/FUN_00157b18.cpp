/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157b18` (_code @ 0x157b18, 0x50c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015c404(int, unsigned char [36], int, int, unsigned int);
int FUN_0015c6bc(int, int, int, unsigned char *, int *);
int FUN_0015d240(int, int);
int FUN_002a1f84(unsigned int, int);
int FUN_002aa278(int, unsigned int, int, int);
int nw_snd_internal_driver_StreamBufferPool_Free(int);
int nw_snd_internal_driver_Voice_Free(void);
int rt_memcpy_w(int *, unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
} param_5_stack;

extern unsigned char LAB_0015c7dc; /* 0x15c7dc */

/* Supplied declaration required: FUN_0015c404. */
/* Supplied declaration required: FUN_0015c6bc. */
/* Supplied declaration required: FUN_0015d240. */
/* Supplied declaration required: FUN_002a1f84. */
/* Supplied declaration required: FUN_002aa278. */
extern int FUN_002baf30(void);
extern unsigned int __aeabi_uidivmod(unsigned int);
/* Supplied declaration required: nw_snd_internal_driver_StreamBufferPool_Free. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Free. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_00157b18(int *param_1,int param_2,unsigned int param_3,int param_4,unsigned int param_5)

{
/* irregular: 9 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char *unaff_r10;
  unsigned char temp_v8 [36];
  
  if (((char)param_1[0x14] != '\0') && (*(unsigned short *)(param_1 + 0x716) == param_5)) {
    if (param_2 == 0) {
      *(unsigned char *)((int)param_1 + 0xf) = 1;
      (**(romwright_code **)(*param_1 + 0x14))(param_1);
      return 0;
    }
    rt_memcpy_w(param_1 + 0x1f,param_3,0x48);
    temp_v7 = 0;
    if (temp_v7 < (unsigned int)param_1[0x35]) {
      do {
        puVar3 = (unsigned char *)((int)param_1 + temp_v7 * 7 + 0xa8);
        *(unsigned char *)((int)param_1 + temp_v7 * 0x20 + 0x1ae5) = *puVar3;
        *(unsigned char *)((int)param_1 + temp_v7 * 0x20 + 0x1ae6) =
             *(unsigned char *)((int)param_1 + temp_v7 * 7 + 0xa9);
        *(unsigned char *)((int)param_1 + temp_v7 * 0x20 + 0x1ae7) =
             *(unsigned char *)((int)param_1 + temp_v7 * 7 + 0xaa);
        *(unsigned char *)(param_1 + temp_v7 * 8 + 0x6ba) =
             *(unsigned char *)((int)param_1 + temp_v7 * 7 + 0xab);
        *(unsigned char *)(param_1 + temp_v7 * 8 + 0x6b9) =
             *(unsigned char *)((int)param_1 + temp_v7 * 7 + 0xac);
        temp_v3 = (unsigned int)*(unsigned char *)((int)param_1 + temp_v7 * 7 + 0xac);
        temp_v4 = 0;
        if ((temp_v3 != 0) && (temp_v4 = temp_v3 & 1, temp_v4 == 1)) {
          param_1[temp_v7 * 8 + 0x6b7] =
               (int)(param_1 + (unsigned int)*(unsigned char *)((int)param_1 + temp_v7 * 7 + 0xad) * 0xd0 + 0x36);
        }
        if (temp_v4 < *(unsigned char *)((int)param_1 + temp_v7 * 7 + 0xac)) {
          do {
            temp_v1 = temp_v4 + 0x6b8;
            param_1[temp_v7 * 8 + temp_v4 + 0x6b7] =
                 (int)(param_1 + (unsigned int)(unsigned char)puVar3[temp_v4 + 5] * 0xd0 + 0x36);
            temp_v6 = temp_v4 + 6;
            temp_v4 = temp_v4 + 2;
            param_1[temp_v7 * 8 + temp_v1] = (int)(param_1 + (unsigned int)(unsigned char)puVar3[temp_v6] * 0xd0 + 0x36);
          } while ((int)temp_v4 < (int)(unsigned int)*(unsigned char *)((int)param_1 + temp_v7 * 7 + 0xac));
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < (unsigned int)param_1[0x35]);
    }
    if ((unsigned int)param_1[0x25] < 0x2001) {
      temp_v7 = __aeabi_uidivmod(*(unsigned int *)(param_1[0x19] + 8));
      param_1[0x1a] = temp_v7;
      if (temp_v7 >= 4) {
        if (temp_v7 >= 0x21) {
          temp_v7 = 0x20;
        }
        param_1[0x1a] = temp_v7;
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        temp_v4 = 0;
        if (temp_v7 != 0) {
          unaff_r10 = temp_v8;
        }
        param_1[0x17] = 0;
        if (temp_v7 != 0) {
          do {
            temp_v7 = 0;
            if (temp_v7 < (unsigned int)param_1[0x34]) {
              do {
                *(int *)(unaff_r10 + temp_v7 * 4) =
                     param_1[0x25] * param_1[0x1b] + param_1[temp_v7 * 0xd0 + 0x36];
                temp_v7 = temp_v7 + 1;
              } while (temp_v7 < (unsigned int)param_1[0x34]);
            }
            temp_v6 = 0;
            if ((char)param_1[0x1d] == '\0') {
              temp_v6 = param_1[0x1e];
            }
            else if ((char)param_1[0x1d] == '\x01') {
              temp_v3 = param_1[0x1e];
              temp_v7 = param_1[0x20];
              FUN_002aa278((int)((unsigned long long)temp_v7 * (unsigned long long)temp_v3),
                           ((int)temp_v3 >> 0x1f) * temp_v7 +
                           (int)((unsigned long long)temp_v7 * (unsigned long long)temp_v3 >> 0x20),1000,0);
              if (temp_v5 != 0) {
                temp_v6 = -1;
              }
              else {
                temp_v6 = FUN_002aa278((int)((unsigned long long)temp_v7 * (unsigned long long)temp_v3),
                                     ((int)temp_v3 >> 0x1f) * temp_v7 +
                                     (int)((unsigned long long)temp_v7 * (unsigned long long)temp_v3 >> 0x20),1000,0);
              }
            }
            param_1[0x1e] = 0;
            if (*(char *)((int)param_1 + 0xd) == '\0') {
              temp_v2 = 1;
            }
            else {
              temp_v2 = 2;
            }
            FUN_0015c404(param_1[0x18],temp_v8,param_1[0x1b],temp_v6,temp_v2);
            temp_v6 = param_1[0x1b];
            temp_v4 = temp_v4 + 1;
            param_1[0x1b] = temp_v6 + 1U;
            if ((unsigned int)param_1[0x1a] <= temp_v6 + 1U) {
              param_1[0x1b] = 0;
            }
            param_1[0x17] = param_1[0x17] + 1;
          } while (temp_v4 < (unsigned int)param_1[0x1a]);
        }
        temp_v7 = 0;
        if (temp_v7 < (unsigned int)param_1[0x34]) {
          do {
            temp_v6 = FUN_002baf30();
            FUN_0015c6bc(temp_v6,1,0x7fff,&LAB_0015c7dc,param_1 + temp_v7 * 0xd0 + 0x36);
            if (temp_v6 == 0) {
              temp_v4 = 0;
              if (temp_v4 < temp_v7) {
                do {
                  if (param_1[temp_v4 * 0xd0 + 0x42] != 0) {
                    nw_snd_internal_driver_Voice_Free();
                    param_1[temp_v4 * 0xd0 + 0x42] = 0;
                  }
                  temp_v4 = temp_v4 + 1;
                } while (temp_v4 < temp_v7);
              }
              temp_v7 = 0;
              if (param_1[0x34] == 0) {
                return 0;
              }
              do {
                if (param_1[temp_v7 * 0xd0 + 0x36] != 0) {
                  nw_snd_internal_driver_StreamBufferPool_Free(param_1[0x19]);
                  param_1[temp_v7 * 0xd0 + 0x36] = 0;
                }
                temp_v7 = temp_v7 + 1;
              } while (temp_v7 < (unsigned int)param_1[0x34]);
              return 0;
            }
            param_1[temp_v7 * 0xd0 + 0x42] = temp_v6;
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < (unsigned int)param_1[0x34]);
        }
        temp_v7 = 0;
        if (temp_v7 < (unsigned int)param_1[0x35]) {
          do {
            temp_v6 = 0;
            if (*(unsigned char *)(param_1 + temp_v7 * 8 + 0x6b9) != 0) {
              do {
                temp_v0 = (char)param_1[temp_v7 * 8 + 0x6ba];
                temp_v2 = *(unsigned int *)(param_1[temp_v7 * 8 + temp_v6 + 0x6b7] + 0x30);
                if (temp_v0 != '\0') {
                  if (temp_v0 != '\x01') {
                    if (temp_v0 == '\x02') {
                      FUN_002a1f84(temp_v2,0);
                    }
                  }
                  else {
                    FUN_002a1f84(temp_v2,1);
                  }
                }
                else {
                  FUN_002a1f84(temp_v2,0);
                }
                temp_v6 = temp_v6 + 1;
              } while (temp_v6 < (int)(unsigned int)*(unsigned char *)(param_1 + temp_v7 * 8 + 0x6b9));
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < (unsigned int)param_1[0x35]);
        }
        temp_v7 = 0;
        if (temp_v7 < (unsigned int)param_1[0x34]) {
          do {
            if (*(int *)(param_4 + temp_v7 * 4) != 0) {
              FUN_0015d240(param_1[temp_v7 * 0xd0 + 0x42],0);
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < (unsigned int)param_1[0x34]);
        }
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
