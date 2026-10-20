/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019c6cc` (_code @ 0x19c6cc, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a7f4(...);
int FUN_0019e378(...);
int FUN_001a6568(unsigned int, unsigned int, unsigned int, int);
int FUN_001acf98(unsigned int, unsigned int);
int FUN_001ad0fc(int);
int FUN_001ad1ac(int, unsigned int);
int FUN_001b2d54(unsigned int, unsigned int, unsigned int);

typedef struct fn_0019c6cc_arg0 fn_0019c6cc_arg0;
struct fn_0019c6cc_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0xc];
    undefined4 field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x64];
    byte field_0x7c; /* +0x7c */
    unsigned char pad_0x7d[0x3];
    undefined4 field_0x80; /* +0x80 */
    undefined4 field_0x84; /* +0x84 */
};

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

extern unsigned int g_aocSystem; /* 0x570280 */

extern int FUN_00162ea4(void);
extern int jobGetWork(void);
extern int FUN_0018206c(unsigned int);
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019e378. */
extern int FUN_001a6508(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001a6568. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_001ad0fc. */
/* Supplied declaration required: FUN_001ad1ac. */
/* Supplied declaration required: FUN_001b2d54. */


/* WARNING: Removing unreachable block (ram,0x0019dad0) */
/* WARNING: Removing unreachable block (ram,0x0019da0c) */
/* WARNING: Removing unreachable block (ram,0x0019da38) */
/* WARNING: Removing unreachable block (ram,0x0019da68) */
/* WARNING: Removing unreachable block (ram,0x0019da60) */
/* WARNING: Removing unreachable block (ram,0x0019da78) */
/* WARNING: Removing unreachable block (ram,0x0019db30) */
/* WARNING: Removing unreachable block (ram,0x0019db1c) */
/* WARNING: Removing unreachable block (ram,0x0019dae0) */
/* WARNING: Removing unreachable block (ram,0x0019daec) */
/* WARNING: Removing unreachable block (ram,0x0019da84) */
/* WARNING: Removing unreachable block (ram,0x0019da48) */
/* WARNING: Removing unreachable block (ram,0x0019da1c) */
/* WARNING: Removing unreachable block (ram,0x0019d9b0) */
/* WARNING: Removing unreachable block (ram,0x0019d9c0) */

void FUN_0019c6cc(fn_0019c6cc_arg0 *param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 23 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = jobGetWork();
  if (param_2 < 1) {
    param_2 = 1;
  }
  if (0 < param_3) {
    param_3 = param_4;
  }
  temp_v3 = 0;
  if (0 < param_3) {
    temp_v1 = FUN_0019e378(*(unsigned int *)(temp_v0 + 4),param_2);
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 2);
  }
  do {
    if (*(unsigned int *)(temp_v0 + 0x14) == temp_v3) {
      return;
    }
    if (*(char *)(temp_v0 + 0x7c) != '\0') {
      if (*(int *)(temp_v0 + 0x84) != -1) {
        FUN_0019a7f4(*(unsigned int *)(temp_v0 + 0x10));
        FUN_001b2d54(g_aocSystem,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x84));
        *(unsigned int *)(temp_v0 + 0x84) = 0xffffffff;
        *(unsigned int *)(temp_v0 + 0x80) = 0;
      }
      *(unsigned int *)(temp_v0 + 0x14) = temp_v3;
      return;
    }
    if (*(char *)(temp_v0 + 0x8d) != '\0') {
      return;
    }
    if ((*(unsigned int *)(temp_v0 + 0x14) != 0xffffffff) &&
       (temp_v1 = FUN_0018206c(*(unsigned int *)(temp_v0 + 0x10)), temp_v1 == 0)) {
      if (*(int *)(temp_v0 + 0x18) == -1) {
        *(unsigned int *)(temp_v0 + 0x18) = temp_v3;
      }
      return;
    }
    if (((*(char *)(temp_v0 + 0x30) == '\0') || (*(float *)(temp_v0 + 0x28) == 0.0f)) &&
       (*(int *)(temp_v0 + 0xc) != 0)) {
      FUN_0019a7f4(*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
      FUN_001b2d54(g_aocSystem,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    temp_v1 = FUN_00162ea4();
    if (temp_v1 != 0) {
      *(unsigned char *)(temp_v0 + 0x7c) = 1;
      return;
    }
    if (*(int *)(temp_v0 + 0xc) != 0) {
      *(int *)(temp_v0 + 0x80) = *(int *)(temp_v0 + 0xc);
      *(unsigned int *)(temp_v0 + 0x84) = *(unsigned int *)(temp_v0 + 0x14);
    }
    *(unsigned int *)(temp_v0 + 0x14) = temp_v3;
    temp_v1 = FUN_001a6508(g_aocSystem,*(unsigned int *)(temp_v0 + 0x10),temp_v3,1);
    if (temp_v1 != 0) {
      temp_v2 = g_aocSystem;
      FUN_001a6568(g_aocSystem,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14),0x10000)
      ;
    }
    else {
      temp_v2 = *(unsigned int *)(temp_v0 + 0x10);
      FUN_001acf98(temp_v2,*(unsigned int *)(temp_v0 + 0x14));
    }
    *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
    if (*(int *)(temp_v0 + 0x80) == 0) {
      return;
    }
    if (param_5 < 0) {
      temp_v3 = 3;
    }
    else {
      temp_v3 = 4;
    }
    *(unsigned int *)(temp_v0 + 0x24) = temp_v3;
                    /* WARNING: Switch table taken from the stored dispatch table */
    if (temp_v3 >= 10) {
      if (((*(char *)(temp_v0 + 0x30) == '\0') || (*(int *)(temp_v0 + 0xc) != 0)) ||
         ((*(int *)(temp_v0 + 0x14) != -1 || (*(int *)(temp_v0 + 4) == 0)))) {
        return;
      }
      temp_v1 = FUN_0019e378(*(int *)(temp_v0 + 4),1);
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 2);
      param_5 = -1;
      continue;
    }
    switch(temp_v3) {
    case 1:
      *(unsigned int *)(temp_v0 + 0x74) = 0x40800000;
      *(unsigned int *)(temp_v0 + 0x28) = 0x3f800000;
      *(unsigned char *)(temp_v0 + 0x30) = 0;
      break;
    case 2:
      temp_v2 = 0x41400000;
      *(unsigned int *)(temp_v0 + 0x74) = temp_v2;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(unsigned char *)(temp_v0 + 0x30) = 1;
      FUN_001ad0fc(temp_v0);
      break;
    case 3:
      *(unsigned char *)(temp_v0 + 0x8d) = 1;
      *(unsigned int *)(temp_v0 + 0x74) = 0x40c00000;
      *(unsigned int *)(temp_v0 + 0x28) = 0x3f800000;
      *(unsigned int *)(temp_v0 + 0x88) = 0x3f800000;
      break;
    case 4:
      *(unsigned int *)(temp_v0 + 0x74) = 0x41400000;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(unsigned int *)(temp_v0 + 0x88) = 0x3f800000;
      break;
    case 5:
      *(unsigned int *)(temp_v0 + 0x74) = 0x41200000;
      break;
    case 6:
      *(unsigned int *)(temp_v0 + 0x74) = 0x41200000;
      FUN_001ad1ac(temp_v0 + 0x34,*(unsigned int *)(temp_v0 + 8));
      *(unsigned char *)(temp_v0 + 0x30) = 1;
      *(unsigned int *)(temp_v0 + 0x5c) = 0;
      *(unsigned int *)(temp_v0 + 0x58) = 0;
      *(unsigned int *)(temp_v0 + 0x60) = 0;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      FUN_001ad0fc(temp_v0);
      break;
    case 7:
      temp_v2 = 0x40800000;
      *(unsigned int *)(temp_v0 + 0x74) = temp_v2;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(unsigned char *)(temp_v0 + 0x30) = 1;
      FUN_001ad0fc(temp_v0);
      break;
    case 8:
      *(unsigned int *)(temp_v0 + 0x74) = 0x42f00000;
      *(unsigned char *)(temp_v0 + 0x30) = 1;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(unsigned int *)(temp_v0 + 0x2c) = 0;
      FUN_001ad0fc(temp_v0);
      break;
    case 9:
      *(unsigned int *)(temp_v0 + 0x74) = 0x42f00000;
      *(unsigned int *)(temp_v0 + 0x28) = 0x3f800000;
      *(unsigned char *)(temp_v0 + 0x30) = 1;
      *(unsigned int *)(temp_v0 + 0x2c) = 0;
      FUN_001ad0fc(temp_v0);
    }
    if (((*(char *)(temp_v0 + 0x30) == '\0') || (*(int *)(temp_v0 + 0xc) != 0)) ||
       ((*(int *)(temp_v0 + 0x14) != -1 || (*(int *)(temp_v0 + 4) == 0)))) {
      return;
    }
    temp_v1 = FUN_0019e378(*(int *)(temp_v0 + 4),1);
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 2);
    param_5 = -1;
  } while( 1 );
}

} /* extern "C" */
