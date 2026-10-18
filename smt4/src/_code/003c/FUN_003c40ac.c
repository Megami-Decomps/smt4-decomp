/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c40ac` (_code @ 0x3c40ac, 0x474 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00439ad4; /* 0x439ad4 */

extern int FUN_0022a444(unsigned int, unsigned int);
extern unsigned int *FUN_0022a464(unsigned int);
extern unsigned int FUN_0025628c(unsigned int);
extern unsigned int *FUN_002a8764(void);


void FUN_003c40ac(int param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0025628c(*(unsigned int *)(param_1 + 0x10));
  switch(temp_v0) {
  case 0:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 4;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xfffffffb;
    }
    break;
  case 1:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 8;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xfffffff7;
    }
    break;
  case 2:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x10;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xffffffef;
    }
    break;
  case 3:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x20;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xffffffdf;
    }
    break;
  case 4:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10));
    temp_v0 = *puVar2;
    puVar2 = (unsigned int *)(param_2 + 0x4a50);
    *puVar2 = temp_v0;
    return;
  case 5:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x40;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xffffffbf;
    }
    break;
  case 6:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x80;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xffffff7f;
    }
    break;
  case 7:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x100;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xfffffeff;
    }
    break;
  case 8:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x200;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xfffffdff;
    }
    break;
  case 9:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x400;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xfffffbff;
    }
    break;
  case 10:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x800;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xfffff7ff;
    }
    break;
  case 0xb:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10));
    temp_v0 = *puVar2;
    puVar2 = (unsigned int *)(param_2 + 0x49c8);
    *puVar2 = temp_v0;
    return;
  case 0xc:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10));
    temp_v0 = *puVar2;
    puVar2 = (unsigned int *)FUN_002a8764();
    *puVar2 = temp_v0;
    return;
  case 0xd:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x20000;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xfffdffff;
    }
    break;
  case 0xe:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x400000;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xffbfffff;
    }
    break;
  case 0xf:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x800000;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xff7fffff;
    }
    break;
  case 0x10:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x1000000;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xfeffffff;
    }
    break;
  case 0x11:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x2000000;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xfdffffff;
    }
    break;
  case 0x12:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x4000000;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xfbffffff;
    }
    break;
  case 0x13:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x8000000;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xf7ffffff;
    }
    break;
  case 0x14:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x10000000;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xefffffff;
    }
    break;
  case 0x15:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) | 0x20000000;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44a8) & 0xdfffffff;
    }
    break;
  case 0x16:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44ac) | 1;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44ac) & 0xfffffffe;
    }
    *(unsigned int *)(param_2 + 0x44ac) = temp_v2;
    return;
  case 0x17:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44ac) | 2;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44ac) & 0xfffffffd;
    }
    *(unsigned int *)(param_2 + 0x44ac) = temp_v2;
    return;
  case 0x18:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10));
    temp_v0 = *puVar2;
    puVar2 = (unsigned int *)(param_2 + 0x2f2c);
    *puVar2 = temp_v0;
    return;
  case 0x19:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44ac) | 4;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44ac) & 0xfffffffb;
    }
    *(unsigned int *)(param_2 + 0x44ac) = temp_v2;
    return;
  case 0x1a:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10));
    temp_v0 = *puVar2;
    puVar2 = (unsigned int *)(param_2 + 0x2f34);
    *puVar2 = temp_v0;
    return;
  case 0x1b:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10));
    DAT_00439ad4 = *puVar2;
    return;
  case 0x1c:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x44ac) | 0x40;
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x44ac) & 0xffffffbf;
    }
    *(unsigned int *)(param_2 + 0x44ac) = temp_v2;
    return;
  default:
    return;
  }
  *(unsigned int *)(param_2 + 0x44a8) = temp_v2;
  return;
}
