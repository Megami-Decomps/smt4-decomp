/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db0a0` (_code @ 0x1db0a0, 0x928 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int HintPreloadData(...);
int UnsignedSaturate(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */


int * FUN_001db0a0(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  char temp_v3;
  unsigned short temp_v4;
  char temp_v5;
  char temp_v6;
  char temp_v7;
  char temp_v8;
  char temp_v9;
  unsigned char temp_v10;
  char temp_v11;
  char temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  unsigned short temp_v17;
  unsigned short temp_v18;
  unsigned short temp_v19;
  unsigned short temp_v20;
  unsigned short temp_v21;
  unsigned short temp_v22;
  unsigned short temp_v23;
  unsigned short temp_v24;
  unsigned short temp_v25;
  unsigned short temp_v26;
  unsigned short temp_v27;
  char temp_v28;
  char temp_v29;
  char temp_v30;
  char temp_v31;
  char temp_v32;
  char temp_v33;
  int *piVar48;
  int *piVar49;
  unsigned int *puVar50;
  unsigned int *puVar51;
  unsigned int *puVar52;
  unsigned int *puVar53;
  int temp_v34;
  int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  unsigned int temp_v39;
  unsigned int temp_v40;
  unsigned int temp_v41;
  unsigned int temp_v42;
  unsigned int temp_v43;
  unsigned int temp_v44;
  unsigned int temp_v45;
  unsigned int temp_v46;
  unsigned int *puVar67;
  unsigned int temp_v47;
  unsigned int temp_v48;
  unsigned int temp_v49;
  unsigned int temp_v50;
  unsigned int temp_v51;
  int temp_v52;
  unsigned char temp_v53;
  unsigned char temp_v54;
  unsigned char temp_v55;
  unsigned char temp_v56;
  int temp_v57;
  int temp_v58;
  unsigned char temp_v59;
  unsigned char temp_v60;
  unsigned char temp_v61;
  unsigned char temp_v62;
  unsigned char temp_v63;
  unsigned char temp_v64;
  unsigned char temp_v65;
  unsigned char temp_v66;
  unsigned char temp_v67;
  char temp_v68;
  char temp_v69;
  char temp_v70;
  
  temp_v52 = 4;
  puVar51 = (unsigned int *)*param_1;
  puVar53 = (unsigned int *)param_1[1];
  temp_v34 = param_1[2];
  do {
    do {
      temp_v35 = temp_v34;
      HintPreloadData(puVar51 + 8);
      temp_v51 = puVar51[7];
      temp_v43 = puVar51[4];
      temp_v47 = puVar51[5];
      temp_v39 = puVar51[2];
      temp_v41 = puVar51[3];
      puVar50 = puVar51 + 8;
      temp_v36 = *puVar51;
      temp_v38 = puVar51[1];
      puVar53[6] = puVar51[6];
      puVar53[7] = temp_v51;
      puVar53[4] = temp_v43;
      puVar53[5] = temp_v47;
      puVar53[2] = temp_v39;
      puVar53[3] = temp_v41;
      puVar52 = puVar53 + 8;
      *puVar53 = temp_v36;
      puVar53[1] = temp_v38;
      puVar51 = puVar50;
      puVar53 = puVar52;
      temp_v34 = temp_v35 - 0x20;
    } while (temp_v35 - 0x20 != 0 && temp_v35 >= 0x20);
    temp_v34 = param_1[2];
    puVar51 = (unsigned int *)((int)puVar50 + ((temp_v35 + 0xe0) - temp_v34));
    puVar53 = (unsigned int *)((int)puVar52 + ((temp_v35 + 0xe0) - temp_v34));
    temp_v52 = temp_v52 - 1;
  } while (temp_v52 != 0);
  temp_v52 = 4;
  puVar51 = (unsigned int *)(*param_1 + (param_1[3] - 4) * 0x100);
  puVar53 = (unsigned int *)(param_1[1] + (param_1[3] - 4) * 0x100);
  temp_v34 = param_1[2];
  do {
    do {
      temp_v35 = temp_v34;
      HintPreloadData(puVar51 + 8);
      temp_v51 = puVar51[7];
      temp_v43 = puVar51[4];
      temp_v47 = puVar51[5];
      temp_v39 = puVar51[2];
      temp_v41 = puVar51[3];
      puVar50 = puVar51 + 8;
      temp_v36 = *puVar51;
      temp_v38 = puVar51[1];
      puVar53[6] = puVar51[6];
      puVar53[7] = temp_v51;
      puVar53[4] = temp_v43;
      puVar53[5] = temp_v47;
      puVar53[2] = temp_v39;
      puVar53[3] = temp_v41;
      puVar52 = puVar53 + 8;
      *puVar53 = temp_v36;
      puVar53[1] = temp_v38;
      puVar51 = puVar50;
      puVar53 = puVar52;
      temp_v34 = temp_v35 - 0x20;
    } while (temp_v35 - 0x20 != 0 && temp_v35 >= 0x20);
    temp_v34 = param_1[2];
    puVar51 = (unsigned int *)((int)puVar50 + ((temp_v35 + 0xe0) - temp_v34));
    puVar53 = (unsigned int *)((int)puVar52 + ((temp_v35 + 0xe0) - temp_v34));
    temp_v52 = temp_v52 - 1;
  } while (temp_v52 != 0);
  temp_v44 = param_1[4];
  temp_v48 = param_1[5];
  temp_v45 = temp_v44 | (temp_v44 << 8);
  temp_v46 = temp_v45 | (temp_v45 << 0x10);
  temp_v58 = param_1[3] - 8;
  temp_v52 = param_1[2] - 0x18;
  piVar48 = (int *)(*param_1 + 0x800);
  puVar67 = (unsigned int *)(param_1[1] + 0x800);
  temp_v49 = temp_v48 | (temp_v48 << 8);
  temp_v50 = temp_v49 | (temp_v49 << 0x10);
  temp_v34 = temp_v52;
  while( 1 ) {
    do {
      temp_v57 = temp_v34;
      HintPreloadData(piVar48 + -0xf0);
      temp_v42 = piVar48[0x80];
      temp_v37 = piVar48[0x40];
      temp_v35 = *piVar48;
      puVar67[0xc0] = piVar48[0xc0];
      puVar67[0x80] = temp_v42;
      puVar67[0x40] = temp_v37;
      temp_v40 = piVar48[-0xc0];
      temp_v42 = piVar48[-0x80];
      temp_v34 = piVar48[-0x40];
      puVar67[-0x100] = piVar48[-0x100];
      puVar67[-0xc0] = temp_v40;
      puVar67[-0x80] = temp_v42;
      temp_v40 = ~temp_v37;
      temp_v1 = (unsigned char)temp_v42;
      temp_v62 = (unsigned char)(temp_v42 >> 8);
      temp_v63 = (unsigned char)(temp_v42 >> 0x10);
      temp_v64 = (unsigned char)(temp_v42 >> 0x18);
      temp_v0 = (unsigned char)temp_v34;
      temp_v2 = (unsigned char)temp_v35;
      temp_v59 = (unsigned char)((unsigned int)temp_v34 >> 8);
      temp_v65 = (unsigned char)((unsigned int)temp_v35 >> 8);
      temp_v60 = (unsigned char)((unsigned int)temp_v34 >> 0x10);
      temp_v66 = (unsigned char)((unsigned int)temp_v35 >> 0x10);
      temp_v61 = (unsigned char)((unsigned int)temp_v34 >> 0x18);
      temp_v67 = (unsigned char)((unsigned int)temp_v35 >> 0x18);
      temp_v6 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v62 - temp_v59,0x10);
      temp_v18 = UnsignedSaturate(temp_v63 - temp_v60,0x10);
      temp_v22 = UnsignedSaturate(temp_v64 - temp_v61,0x10);
      temp_v7 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v59 - temp_v62,0x10);
      temp_v19 = UnsignedSaturate(temp_v60 - temp_v63,0x10);
      temp_v23 = UnsignedSaturate(temp_v61 - temp_v64,0x10);
      temp_v5 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v40 + (unsigned short)temp_v1) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v8 = UnsignedSaturate(temp_v5 - ' ',0x10);
      temp_v68 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 8) + (unsigned short)temp_v62) >> 1
                                         ) + 1) >> 1) + 1) >> 1);
      temp_v15 = UnsignedSaturate(temp_v68 - ' ',0x10);
      temp_v69 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x10) + (unsigned short)temp_v63)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v20 = UnsignedSaturate(temp_v69 - ' ',0x10);
      temp_v70 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x18) + (unsigned short)temp_v64)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v24 = UnsignedSaturate(temp_v70 - ' ',0x10);
      temp_v63 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v64 = (unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8);
      temp_v9 = UnsignedSaturate(' ' - temp_v5,0x10);
      temp_v16 = UnsignedSaturate(' ' - temp_v68,0x10);
      temp_v20 = UnsignedSaturate(' ' - temp_v69,0x10);
      temp_v24 = UnsignedSaturate(' ' - temp_v70,0x10);
      temp_v1 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v62 = (unsigned char)temp_v20 | (unsigned char)(temp_v16 >> 8);
      temp_v70 = (char)((unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v2) >> 1);
      temp_v3 = UnsignedSaturate(temp_v70 + temp_v8,0x10);
      temp_v69 = (char)((unsigned short)((unsigned short)temp_v59 + (unsigned short)temp_v65) >> 1);
      temp_v20 = UnsignedSaturate(temp_v69 + (char)temp_v15,0x10);
      temp_v68 = (char)((unsigned short)((unsigned short)temp_v60 + (unsigned short)temp_v66) >> 1);
      temp_v24 = UnsignedSaturate(temp_v68 + temp_v64,0x10);
      temp_v5 = (char)((unsigned short)((unsigned short)temp_v61 + (unsigned short)temp_v67) >> 1);
      temp_v4 = UnsignedSaturate(temp_v5 + temp_v63,0x10);
      temp_v10 = UnsignedSaturate(temp_v3 - temp_v9,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 - (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) - temp_v62,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v24 >> 8)) - temp_v1,0x10);
      temp_v42 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v10;
      temp_v3 = UnsignedSaturate(temp_v70 - temp_v8,0x10);
      temp_v20 = UnsignedSaturate(temp_v69 - (char)temp_v15,0x10);
      temp_v4 = UnsignedSaturate(temp_v68 - temp_v64,0x10);
      temp_v26 = UnsignedSaturate(temp_v5 - temp_v63,0x10);
      temp_v5 = UnsignedSaturate(temp_v2 - (char)temp_v37,0x10);
      temp_v68 = (char)(temp_v37 >> 8);
      temp_v24 = UnsignedSaturate(temp_v65 - temp_v68,0x10);
      temp_v69 = (char)(temp_v37 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v66 - temp_v69,0x10);
      temp_v70 = (char)(temp_v37 >> 0x18);
      temp_v27 = UnsignedSaturate(temp_v67 - temp_v70,0x10);
      temp_v63 = UnsignedSaturate(temp_v3 + temp_v9,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 + (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v20 >> 8)) + temp_v62,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v26 | (unsigned char)(temp_v4 >> 8)) + temp_v1,0x10);
      temp_v40 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v63;
      temp_v3 = UnsignedSaturate((char)temp_v37 - temp_v2,0x10);
      temp_v20 = UnsignedSaturate(temp_v68 - temp_v65,0x10);
      temp_v16 = UnsignedSaturate(temp_v69 - temp_v66,0x10);
      temp_v26 = UnsignedSaturate(temp_v70 - temp_v67,0x10);
      temp_v29 = (char)temp_v48;
      temp_v53 = -1 < (int)(char)(temp_v7 + temp_v6) - (int)temp_v29;
      temp_v33 = (char)(temp_v49 >> 8);
      temp_v54 = -1 < (int)(char)((char)temp_v14 + (char)temp_v13) - (int)temp_v33;
      temp_v28 = (char)(temp_v50 >> 0x10);
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v28;
      temp_v70 = (char)(temp_v50 >> 0x18);
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v40) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v40) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v40) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v40) & 0xff000000);
      temp_v69 = UnsignedSaturate(temp_v0 - temp_v2,0x10);
      temp_v4 = UnsignedSaturate(temp_v59 - temp_v65,0x10);
      temp_v14 = UnsignedSaturate(temp_v60 - temp_v66,0x10);
      temp_v19 = UnsignedSaturate(temp_v61 - temp_v67,0x10);
      temp_v68 = UnsignedSaturate(temp_v2 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v65 - temp_v59,0x10);
      temp_v18 = UnsignedSaturate(temp_v66 - temp_v60,0x10);
      temp_v22 = UnsignedSaturate(temp_v67 - temp_v61,0x10);
      temp_v53 = -1 < (int)(char)(temp_v3 + temp_v5) - (int)temp_v29;
      temp_v54 = -1 < (int)(char)((char)temp_v20 + (char)temp_v24) - (int)temp_v33;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v16 | (unsigned char)(temp_v20 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v24 >> 8))) - (int)temp_v28;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v26 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v27 | (unsigned char)(temp_v15 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      temp_v30 = (char)temp_v44;
      temp_v53 = -1 < (int)(char)(temp_v69 + temp_v68) - (int)temp_v30;
      temp_v31 = (char)(temp_v45 >> 8);
      temp_v54 = -1 < (int)(char)((char)temp_v4 + (char)temp_v13) - (int)temp_v31;
      temp_v32 = (char)(temp_v46 >> 0x10);
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v14 | (unsigned char)(temp_v4 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v32;
      temp_v69 = (char)(temp_v46 >> 0x18);
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v69;
      puVar67[-0x40] =
           (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
           (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
           (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
           (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      *puVar67 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
                 (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
                 (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
                 (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      HintPreloadData(piVar48 + -0xaf);
      temp_v42 = piVar48[0x81];
      temp_v37 = piVar48[0x41];
      temp_v35 = piVar48[1];
      puVar67[0xc1] = piVar48[0xc1];
      puVar67[0x81] = temp_v42;
      puVar67[0x41] = temp_v37;
      temp_v40 = piVar48[-0xbf];
      temp_v42 = piVar48[-0x7f];
      temp_v34 = piVar48[-0x3f];
      puVar67[-0xff] = piVar48[-0xff];
      puVar67[-0xbf] = temp_v40;
      puVar67[-0x7f] = temp_v42;
      temp_v40 = ~temp_v37;
      temp_v63 = (unsigned char)temp_v42;
      temp_v64 = (unsigned char)(temp_v42 >> 8);
      temp_v62 = (unsigned char)(temp_v42 >> 0x10);
      temp_v1 = (unsigned char)(temp_v42 >> 0x18);
      temp_v59 = (unsigned char)temp_v34;
      temp_v67 = (unsigned char)temp_v35;
      temp_v60 = (unsigned char)((unsigned int)temp_v34 >> 8);
      temp_v66 = (unsigned char)((unsigned int)temp_v35 >> 8);
      temp_v61 = (unsigned char)((unsigned int)temp_v34 >> 0x10);
      temp_v65 = (unsigned char)((unsigned int)temp_v35 >> 0x10);
      temp_v0 = (unsigned char)((unsigned int)temp_v34 >> 0x18);
      temp_v2 = (unsigned char)((unsigned int)temp_v35 >> 0x18);
      temp_v8 = UnsignedSaturate(temp_v63 - temp_v59,0x10);
      temp_v13 = UnsignedSaturate(temp_v64 - temp_v60,0x10);
      temp_v18 = UnsignedSaturate(temp_v62 - temp_v61,0x10);
      temp_v22 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      temp_v9 = UnsignedSaturate(temp_v59 - temp_v63,0x10);
      temp_v14 = UnsignedSaturate(temp_v60 - temp_v64,0x10);
      temp_v19 = UnsignedSaturate(temp_v61 - temp_v62,0x10);
      temp_v23 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v68 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v40 + (unsigned short)temp_v63) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v68 - ' ',0x10);
      temp_v5 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 8) + (unsigned short)temp_v64) >> 1
                                         ) + 1) >> 1) + 1) >> 1);
      temp_v15 = UnsignedSaturate(temp_v5 - ' ',0x10);
      temp_v3 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x10) + (unsigned short)temp_v62)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v20 = UnsignedSaturate(temp_v3 - ' ',0x10);
      temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x18) + (unsigned short)temp_v1)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v24 = UnsignedSaturate(temp_v6 - ' ',0x10);
      temp_v63 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v64 = (unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v68,0x10);
      temp_v16 = UnsignedSaturate(' ' - temp_v5,0x10);
      temp_v20 = UnsignedSaturate(' ' - temp_v3,0x10);
      temp_v24 = UnsignedSaturate(' ' - temp_v6,0x10);
      temp_v1 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v62 = (unsigned char)temp_v20 | (unsigned char)(temp_v16 >> 8);
      temp_v68 = (char)((unsigned short)((unsigned short)temp_v59 + (unsigned short)temp_v67) >> 1);
      temp_v7 = UnsignedSaturate(temp_v68 + temp_v11,0x10);
      temp_v5 = (char)((unsigned short)((unsigned short)temp_v60 + (unsigned short)temp_v66) >> 1);
      temp_v20 = UnsignedSaturate(temp_v5 + (char)temp_v15,0x10);
      temp_v3 = (char)((unsigned short)((unsigned short)temp_v61 + (unsigned short)temp_v65) >> 1);
      temp_v24 = UnsignedSaturate(temp_v3 + temp_v64,0x10);
      temp_v6 = (char)((unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v2) >> 1);
      temp_v4 = UnsignedSaturate(temp_v6 + temp_v63,0x10);
      temp_v10 = UnsignedSaturate(temp_v7 - temp_v12,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 - (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) - temp_v62,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v24 >> 8)) - temp_v1,0x10);
      temp_v42 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v10;
      temp_v7 = UnsignedSaturate(temp_v68 - temp_v11,0x10);
      temp_v20 = UnsignedSaturate(temp_v5 - (char)temp_v15,0x10);
      temp_v4 = UnsignedSaturate(temp_v3 - temp_v64,0x10);
      temp_v26 = UnsignedSaturate(temp_v6 - temp_v63,0x10);
      temp_v6 = UnsignedSaturate(temp_v67 - (char)temp_v37,0x10);
      temp_v3 = (char)(temp_v37 >> 8);
      temp_v24 = UnsignedSaturate(temp_v66 - temp_v3,0x10);
      temp_v5 = (char)(temp_v37 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v65 - temp_v5,0x10);
      temp_v68 = (char)(temp_v37 >> 0x18);
      temp_v27 = UnsignedSaturate(temp_v2 - temp_v68,0x10);
      temp_v63 = UnsignedSaturate(temp_v7 + temp_v12,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 + (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v20 >> 8)) + temp_v62,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v26 | (unsigned char)(temp_v4 >> 8)) + temp_v1,0x10);
      temp_v40 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v63;
      temp_v7 = UnsignedSaturate((char)temp_v37 - temp_v67,0x10);
      temp_v20 = UnsignedSaturate(temp_v3 - temp_v66,0x10);
      temp_v16 = UnsignedSaturate(temp_v5 - temp_v65,0x10);
      temp_v26 = UnsignedSaturate(temp_v68 - temp_v2,0x10);
      temp_v53 = -1 < (int)(char)(temp_v9 + temp_v8) - (int)temp_v29;
      temp_v54 = -1 < (int)(char)((char)temp_v14 + (char)temp_v13) - (int)temp_v33;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v28;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v40) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v40) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v40) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v40) & 0xff000000);
      temp_v68 = UnsignedSaturate(temp_v59 - temp_v67,0x10);
      temp_v4 = UnsignedSaturate(temp_v60 - temp_v66,0x10);
      temp_v14 = UnsignedSaturate(temp_v61 - temp_v65,0x10);
      temp_v19 = UnsignedSaturate(temp_v0 - temp_v2,0x10);
      temp_v5 = UnsignedSaturate(temp_v67 - temp_v59,0x10);
      temp_v13 = UnsignedSaturate(temp_v66 - temp_v60,0x10);
      temp_v18 = UnsignedSaturate(temp_v65 - temp_v61,0x10);
      temp_v22 = UnsignedSaturate(temp_v2 - temp_v0,0x10);
      temp_v53 = -1 < (int)(char)(temp_v7 + temp_v6) - (int)temp_v29;
      temp_v54 = -1 < (int)(char)((char)temp_v20 + (char)temp_v24) - (int)temp_v33;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v16 | (unsigned char)(temp_v20 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v24 >> 8))) - (int)temp_v28;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v26 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v27 | (unsigned char)(temp_v15 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      temp_v53 = -1 < (int)(char)(temp_v68 + temp_v5) - (int)temp_v30;
      temp_v54 = -1 < (int)(char)((char)temp_v4 + (char)temp_v13) - (int)temp_v31;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v14 | (unsigned char)(temp_v4 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v32;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v69;
      puVar67[-0x3f] =
           (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
           (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
           (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
           (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      puVar67[1] = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
                   (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
                   (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
                   (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      HintPreloadData(piVar48 + -0x6e);
      temp_v42 = piVar48[0x82];
      temp_v37 = piVar48[0x42];
      temp_v35 = piVar48[2];
      puVar67[0xc2] = piVar48[0xc2];
      puVar67[0x82] = temp_v42;
      puVar67[0x42] = temp_v37;
      temp_v40 = piVar48[-0xbe];
      temp_v42 = piVar48[-0x7e];
      temp_v34 = piVar48[-0x3e];
      puVar67[-0xfe] = piVar48[-0xfe];
      puVar67[-0xbe] = temp_v40;
      puVar67[-0x7e] = temp_v42;
      temp_v40 = ~temp_v37;
      temp_v1 = (unsigned char)temp_v42;
      temp_v62 = (unsigned char)(temp_v42 >> 8);
      temp_v64 = (unsigned char)(temp_v42 >> 0x10);
      temp_v63 = (unsigned char)(temp_v42 >> 0x18);
      temp_v0 = (unsigned char)temp_v34;
      temp_v2 = (unsigned char)temp_v35;
      temp_v59 = (unsigned char)((unsigned int)temp_v34 >> 8);
      temp_v65 = (unsigned char)((unsigned int)temp_v35 >> 8);
      temp_v61 = (unsigned char)((unsigned int)temp_v34 >> 0x10);
      temp_v66 = (unsigned char)((unsigned int)temp_v35 >> 0x10);
      temp_v60 = (unsigned char)((unsigned int)temp_v34 >> 0x18);
      temp_v67 = (unsigned char)((unsigned int)temp_v35 >> 0x18);
      temp_v8 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v62 - temp_v59,0x10);
      temp_v18 = UnsignedSaturate(temp_v64 - temp_v61,0x10);
      temp_v22 = UnsignedSaturate(temp_v63 - temp_v60,0x10);
      temp_v9 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v59 - temp_v62,0x10);
      temp_v19 = UnsignedSaturate(temp_v61 - temp_v64,0x10);
      temp_v23 = UnsignedSaturate(temp_v60 - temp_v63,0x10);
      temp_v68 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v40 + (unsigned short)temp_v1) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v68 - ' ',0x10);
      temp_v5 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 8) + (unsigned short)temp_v62) >> 1
                                         ) + 1) >> 1) + 1) >> 1);
      temp_v15 = UnsignedSaturate(temp_v5 - ' ',0x10);
      temp_v3 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x10) + (unsigned short)temp_v64)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v20 = UnsignedSaturate(temp_v3 - ' ',0x10);
      temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x18) + (unsigned short)temp_v63)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v24 = UnsignedSaturate(temp_v6 - ' ',0x10);
      temp_v63 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v64 = (unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v68,0x10);
      temp_v16 = UnsignedSaturate(' ' - temp_v5,0x10);
      temp_v20 = UnsignedSaturate(' ' - temp_v3,0x10);
      temp_v24 = UnsignedSaturate(' ' - temp_v6,0x10);
      temp_v1 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v62 = (unsigned char)temp_v20 | (unsigned char)(temp_v16 >> 8);
      temp_v68 = (char)((unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v2) >> 1);
      temp_v7 = UnsignedSaturate(temp_v68 + temp_v11,0x10);
      temp_v6 = (char)((unsigned short)((unsigned short)temp_v59 + (unsigned short)temp_v65) >> 1);
      temp_v20 = UnsignedSaturate(temp_v6 + (char)temp_v15,0x10);
      temp_v3 = (char)((unsigned short)((unsigned short)temp_v61 + (unsigned short)temp_v66) >> 1);
      temp_v24 = UnsignedSaturate(temp_v3 + temp_v64,0x10);
      temp_v5 = (char)((unsigned short)((unsigned short)temp_v60 + (unsigned short)temp_v67) >> 1);
      temp_v4 = UnsignedSaturate(temp_v5 + temp_v63,0x10);
      temp_v10 = UnsignedSaturate(temp_v7 - temp_v12,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 - (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) - temp_v62,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v24 >> 8)) - temp_v1,0x10);
      temp_v42 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v10;
      temp_v7 = UnsignedSaturate(temp_v68 - temp_v11,0x10);
      temp_v20 = UnsignedSaturate(temp_v6 - (char)temp_v15,0x10);
      temp_v4 = UnsignedSaturate(temp_v3 - temp_v64,0x10);
      temp_v26 = UnsignedSaturate(temp_v5 - temp_v63,0x10);
      temp_v6 = UnsignedSaturate(temp_v2 - (char)temp_v37,0x10);
      temp_v3 = (char)(temp_v37 >> 8);
      temp_v24 = UnsignedSaturate(temp_v65 - temp_v3,0x10);
      temp_v5 = (char)(temp_v37 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v66 - temp_v5,0x10);
      temp_v68 = (char)(temp_v37 >> 0x18);
      temp_v27 = UnsignedSaturate(temp_v67 - temp_v68,0x10);
      temp_v63 = UnsignedSaturate(temp_v7 + temp_v12,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 + (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v20 >> 8)) + temp_v62,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v26 | (unsigned char)(temp_v4 >> 8)) + temp_v1,0x10);
      temp_v40 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v63;
      temp_v7 = UnsignedSaturate((char)temp_v37 - temp_v2,0x10);
      temp_v20 = UnsignedSaturate(temp_v3 - temp_v65,0x10);
      temp_v16 = UnsignedSaturate(temp_v5 - temp_v66,0x10);
      temp_v26 = UnsignedSaturate(temp_v68 - temp_v67,0x10);
      temp_v53 = -1 < (int)(char)(temp_v9 + temp_v8) - (int)temp_v29;
      temp_v54 = -1 < (int)(char)((char)temp_v14 + (char)temp_v13) - (int)temp_v33;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v28;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v40) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v40) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v40) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v40) & 0xff000000);
      temp_v68 = UnsignedSaturate(temp_v0 - temp_v2,0x10);
      temp_v4 = UnsignedSaturate(temp_v59 - temp_v65,0x10);
      temp_v14 = UnsignedSaturate(temp_v61 - temp_v66,0x10);
      temp_v19 = UnsignedSaturate(temp_v60 - temp_v67,0x10);
      temp_v5 = UnsignedSaturate(temp_v2 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v65 - temp_v59,0x10);
      temp_v18 = UnsignedSaturate(temp_v66 - temp_v61,0x10);
      temp_v22 = UnsignedSaturate(temp_v67 - temp_v60,0x10);
      temp_v53 = -1 < (int)(char)(temp_v7 + temp_v6) - (int)temp_v29;
      temp_v54 = -1 < (int)(char)((char)temp_v20 + (char)temp_v24) - (int)temp_v33;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v16 | (unsigned char)(temp_v20 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v24 >> 8))) - (int)temp_v28;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v26 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v27 | (unsigned char)(temp_v15 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      temp_v53 = -1 < (int)(char)(temp_v68 + temp_v5) - (int)temp_v30;
      temp_v54 = -1 < (int)(char)((char)temp_v4 + (char)temp_v13) - (int)temp_v31;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v14 | (unsigned char)(temp_v4 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v32;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v69;
      puVar67[-0x3e] =
           (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
           (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
           (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
           (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      puVar67[2] = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
                   (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
                   (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
                   (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      HintPreloadData(piVar48 + -0x2d);
      temp_v42 = piVar48[0x83];
      temp_v37 = piVar48[0x43];
      temp_v35 = piVar48[3];
      puVar67[0xc3] = piVar48[0xc3];
      puVar67[0x83] = temp_v42;
      puVar67[0x43] = temp_v37;
      temp_v40 = piVar48[-0xbd];
      temp_v42 = piVar48[-0x7d];
      temp_v34 = piVar48[-0x3d];
      puVar67[-0xfd] = piVar48[-0xfd];
      puVar67[-0xbd] = temp_v40;
      puVar67[-0x7d] = temp_v42;
      temp_v40 = ~temp_v37;
      temp_v63 = (unsigned char)temp_v42;
      temp_v64 = (unsigned char)(temp_v42 >> 8);
      temp_v62 = (unsigned char)(temp_v42 >> 0x10);
      temp_v1 = (unsigned char)(temp_v42 >> 0x18);
      temp_v59 = (unsigned char)temp_v34;
      temp_v2 = (unsigned char)temp_v35;
      temp_v60 = (unsigned char)((unsigned int)temp_v34 >> 8);
      temp_v65 = (unsigned char)((unsigned int)temp_v35 >> 8);
      temp_v61 = (unsigned char)((unsigned int)temp_v34 >> 0x10);
      temp_v66 = (unsigned char)((unsigned int)temp_v35 >> 0x10);
      temp_v0 = (unsigned char)((unsigned int)temp_v34 >> 0x18);
      temp_v67 = (unsigned char)((unsigned int)temp_v35 >> 0x18);
      temp_v8 = UnsignedSaturate(temp_v63 - temp_v59,0x10);
      temp_v13 = UnsignedSaturate(temp_v64 - temp_v60,0x10);
      temp_v18 = UnsignedSaturate(temp_v62 - temp_v61,0x10);
      temp_v22 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      temp_v9 = UnsignedSaturate(temp_v59 - temp_v63,0x10);
      temp_v14 = UnsignedSaturate(temp_v60 - temp_v64,0x10);
      temp_v19 = UnsignedSaturate(temp_v61 - temp_v62,0x10);
      temp_v23 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v68 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v40 + (unsigned short)temp_v63) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v68 - ' ',0x10);
      temp_v5 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 8) + (unsigned short)temp_v64) >> 1
                                         ) + 1) >> 1) + 1) >> 1);
      temp_v15 = UnsignedSaturate(temp_v5 - ' ',0x10);
      temp_v3 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x10) + (unsigned short)temp_v62)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v20 = UnsignedSaturate(temp_v3 - ' ',0x10);
      temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x18) + (unsigned short)temp_v1)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v24 = UnsignedSaturate(temp_v6 - ' ',0x10);
      temp_v64 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v63 = (unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v68,0x10);
      temp_v16 = UnsignedSaturate(' ' - temp_v5,0x10);
      temp_v20 = UnsignedSaturate(' ' - temp_v3,0x10);
      temp_v24 = UnsignedSaturate(' ' - temp_v6,0x10);
      temp_v62 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v1 = (unsigned char)temp_v20 | (unsigned char)(temp_v16 >> 8);
      temp_v68 = (char)((unsigned short)((unsigned short)temp_v59 + (unsigned short)temp_v2) >> 1);
      temp_v7 = UnsignedSaturate(temp_v68 + temp_v11,0x10);
      temp_v5 = (char)((unsigned short)((unsigned short)temp_v60 + (unsigned short)temp_v65) >> 1);
      temp_v20 = UnsignedSaturate(temp_v5 + (char)temp_v15,0x10);
      temp_v3 = (char)((unsigned short)((unsigned short)temp_v61 + (unsigned short)temp_v66) >> 1);
      temp_v24 = UnsignedSaturate(temp_v3 + temp_v63,0x10);
      temp_v6 = (char)((unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v67) >> 1);
      temp_v4 = UnsignedSaturate(temp_v6 + temp_v64,0x10);
      temp_v10 = UnsignedSaturate(temp_v7 - temp_v12,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 - (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) - temp_v1,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v24 >> 8)) - temp_v62,0x10);
      temp_v42 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v10;
      temp_v7 = UnsignedSaturate(temp_v68 - temp_v11,0x10);
      temp_v20 = UnsignedSaturate(temp_v5 - (char)temp_v15,0x10);
      temp_v4 = UnsignedSaturate(temp_v3 - temp_v63,0x10);
      temp_v26 = UnsignedSaturate(temp_v6 - temp_v64,0x10);
      temp_v6 = UnsignedSaturate(temp_v2 - (char)temp_v37,0x10);
      temp_v68 = (char)(temp_v37 >> 8);
      temp_v24 = UnsignedSaturate(temp_v65 - temp_v68,0x10);
      temp_v5 = (char)(temp_v37 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v66 - temp_v5,0x10);
      temp_v3 = (char)(temp_v37 >> 0x18);
      temp_v27 = UnsignedSaturate(temp_v67 - temp_v3,0x10);
      temp_v63 = UnsignedSaturate(temp_v7 + temp_v12,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 + (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v20 >> 8)) + temp_v1,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v26 | (unsigned char)(temp_v4 >> 8)) + temp_v62,0x10);
      temp_v40 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v63;
      temp_v7 = UnsignedSaturate((char)temp_v37 - temp_v2,0x10);
      temp_v20 = UnsignedSaturate(temp_v68 - temp_v65,0x10);
      temp_v16 = UnsignedSaturate(temp_v5 - temp_v66,0x10);
      temp_v26 = UnsignedSaturate(temp_v3 - temp_v67,0x10);
      temp_v53 = -1 < (int)(char)(temp_v9 + temp_v8) - (int)temp_v29;
      temp_v54 = -1 < (int)(char)((char)temp_v14 + (char)temp_v13) - (int)temp_v33;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v28;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v40) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v40) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v40) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v40) & 0xff000000);
      temp_v68 = UnsignedSaturate(temp_v59 - temp_v2,0x10);
      temp_v4 = UnsignedSaturate(temp_v60 - temp_v65,0x10);
      temp_v14 = UnsignedSaturate(temp_v61 - temp_v66,0x10);
      temp_v19 = UnsignedSaturate(temp_v0 - temp_v67,0x10);
      temp_v5 = UnsignedSaturate(temp_v2 - temp_v59,0x10);
      temp_v13 = UnsignedSaturate(temp_v65 - temp_v60,0x10);
      temp_v18 = UnsignedSaturate(temp_v66 - temp_v61,0x10);
      temp_v22 = UnsignedSaturate(temp_v67 - temp_v0,0x10);
      temp_v53 = -1 < (int)(char)(temp_v7 + temp_v6) - (int)temp_v29;
      temp_v54 = -1 < (int)(char)((char)temp_v20 + (char)temp_v24) - (int)temp_v33;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v16 | (unsigned char)(temp_v20 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v24 >> 8))) - (int)temp_v28;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v26 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v27 | (unsigned char)(temp_v15 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      temp_v53 = -1 < (int)(char)(temp_v68 + temp_v5) - (int)temp_v30;
      temp_v54 = -1 < (int)(char)((char)temp_v4 + (char)temp_v13) - (int)temp_v31;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v14 | (unsigned char)(temp_v4 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v32;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v69;
      puVar67[-0x3d] =
           (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
           (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
           (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
           (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      puVar67[3] = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
                   (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
                   (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
                   (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      HintPreloadData(piVar48 + 0x14);
      temp_v42 = piVar48[0x84];
      temp_v37 = piVar48[0x44];
      temp_v35 = piVar48[4];
      puVar67[0xc4] = piVar48[0xc4];
      puVar67[0x84] = temp_v42;
      puVar67[0x44] = temp_v37;
      temp_v40 = piVar48[-0xbc];
      temp_v42 = piVar48[-0x7c];
      temp_v34 = piVar48[-0x3c];
      puVar67[-0xfc] = piVar48[-0xfc];
      puVar67[-0xbc] = temp_v40;
      puVar67[-0x7c] = temp_v42;
      temp_v40 = ~temp_v37;
      temp_v63 = (unsigned char)temp_v42;
      temp_v64 = (unsigned char)(temp_v42 >> 8);
      temp_v62 = (unsigned char)(temp_v42 >> 0x10);
      temp_v1 = (unsigned char)(temp_v42 >> 0x18);
      temp_v0 = (unsigned char)temp_v34;
      temp_v2 = (unsigned char)temp_v35;
      temp_v61 = (unsigned char)((unsigned int)temp_v34 >> 8);
      temp_v65 = (unsigned char)((unsigned int)temp_v35 >> 8);
      temp_v59 = (unsigned char)((unsigned int)temp_v34 >> 0x10);
      temp_v66 = (unsigned char)((unsigned int)temp_v35 >> 0x10);
      temp_v60 = (unsigned char)((unsigned int)temp_v34 >> 0x18);
      temp_v67 = (unsigned char)((unsigned int)temp_v35 >> 0x18);
      temp_v8 = UnsignedSaturate(temp_v63 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v64 - temp_v61,0x10);
      temp_v18 = UnsignedSaturate(temp_v62 - temp_v59,0x10);
      temp_v22 = UnsignedSaturate(temp_v1 - temp_v60,0x10);
      temp_v9 = UnsignedSaturate(temp_v0 - temp_v63,0x10);
      temp_v14 = UnsignedSaturate(temp_v61 - temp_v64,0x10);
      temp_v19 = UnsignedSaturate(temp_v59 - temp_v62,0x10);
      temp_v23 = UnsignedSaturate(temp_v60 - temp_v1,0x10);
      temp_v68 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v40 + (unsigned short)temp_v63) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v68 - ' ',0x10);
      temp_v5 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 8) + (unsigned short)temp_v64) >> 1
                                         ) + 1) >> 1) + 1) >> 1);
      temp_v15 = UnsignedSaturate(temp_v5 - ' ',0x10);
      temp_v3 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x10) + (unsigned short)temp_v62)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v20 = UnsignedSaturate(temp_v3 - ' ',0x10);
      temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x18) + (unsigned short)temp_v1)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v24 = UnsignedSaturate(temp_v6 - ' ',0x10);
      temp_v63 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v64 = (unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v68,0x10);
      temp_v16 = UnsignedSaturate(' ' - temp_v5,0x10);
      temp_v20 = UnsignedSaturate(' ' - temp_v3,0x10);
      temp_v24 = UnsignedSaturate(' ' - temp_v6,0x10);
      temp_v62 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v1 = (unsigned char)temp_v20 | (unsigned char)(temp_v16 >> 8);
      temp_v6 = (char)((unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v2) >> 1);
      temp_v7 = UnsignedSaturate(temp_v6 + temp_v11,0x10);
      temp_v68 = (char)((unsigned short)((unsigned short)temp_v61 + (unsigned short)temp_v65) >> 1);
      temp_v20 = UnsignedSaturate(temp_v68 + (char)temp_v15,0x10);
      temp_v3 = (char)((unsigned short)((unsigned short)temp_v59 + (unsigned short)temp_v66) >> 1);
      temp_v24 = UnsignedSaturate(temp_v3 + temp_v64,0x10);
      temp_v5 = (char)((unsigned short)((unsigned short)temp_v60 + (unsigned short)temp_v67) >> 1);
      temp_v4 = UnsignedSaturate(temp_v5 + temp_v63,0x10);
      temp_v10 = UnsignedSaturate(temp_v7 - temp_v12,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 - (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) - temp_v1,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v24 >> 8)) - temp_v62,0x10);
      temp_v42 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v10;
      temp_v6 = UnsignedSaturate(temp_v6 - temp_v11,0x10);
      temp_v20 = UnsignedSaturate(temp_v68 - (char)temp_v15,0x10);
      temp_v4 = UnsignedSaturate(temp_v3 - temp_v64,0x10);
      temp_v26 = UnsignedSaturate(temp_v5 - temp_v63,0x10);
      temp_v7 = UnsignedSaturate(temp_v2 - (char)temp_v37,0x10);
      temp_v3 = (char)(temp_v37 >> 8);
      temp_v24 = UnsignedSaturate(temp_v65 - temp_v3,0x10);
      temp_v5 = (char)(temp_v37 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v66 - temp_v5,0x10);
      temp_v68 = (char)(temp_v37 >> 0x18);
      temp_v27 = UnsignedSaturate(temp_v67 - temp_v68,0x10);
      temp_v63 = UnsignedSaturate(temp_v6 + temp_v12,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 + (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v20 >> 8)) + temp_v1,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v26 | (unsigned char)(temp_v4 >> 8)) + temp_v62,0x10);
      temp_v40 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v63;
      temp_v6 = UnsignedSaturate((char)temp_v37 - temp_v2,0x10);
      temp_v20 = UnsignedSaturate(temp_v3 - temp_v65,0x10);
      temp_v16 = UnsignedSaturate(temp_v5 - temp_v66,0x10);
      temp_v26 = UnsignedSaturate(temp_v68 - temp_v67,0x10);
      temp_v53 = -1 < (int)(char)(temp_v9 + temp_v8) - (int)temp_v29;
      temp_v54 = -1 < (int)(char)((char)temp_v14 + (char)temp_v13) - (int)temp_v33;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v28;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v40) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v40) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v40) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v40) & 0xff000000);
      temp_v68 = UnsignedSaturate(temp_v0 - temp_v2,0x10);
      temp_v4 = UnsignedSaturate(temp_v61 - temp_v65,0x10);
      temp_v14 = UnsignedSaturate(temp_v59 - temp_v66,0x10);
      temp_v19 = UnsignedSaturate(temp_v60 - temp_v67,0x10);
      temp_v5 = UnsignedSaturate(temp_v2 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v65 - temp_v61,0x10);
      temp_v18 = UnsignedSaturate(temp_v66 - temp_v59,0x10);
      temp_v22 = UnsignedSaturate(temp_v67 - temp_v60,0x10);
      temp_v53 = -1 < (int)(char)(temp_v6 + temp_v7) - (int)temp_v29;
      temp_v54 = -1 < (int)(char)((char)temp_v20 + (char)temp_v24) - (int)temp_v33;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v16 | (unsigned char)(temp_v20 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v24 >> 8))) - (int)temp_v28;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v26 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v27 | (unsigned char)(temp_v15 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      temp_v53 = -1 < (int)(char)(temp_v68 + temp_v5) - (int)temp_v30;
      temp_v54 = -1 < (int)(char)((char)temp_v4 + (char)temp_v13) - (int)temp_v31;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v14 | (unsigned char)(temp_v4 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v32;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v69;
      puVar67[-0x3c] =
           (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
           (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
           (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
           (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      puVar67[4] = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
                   (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
                   (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
                   (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      HintPreloadData(piVar48 + 0x55);
      temp_v42 = piVar48[0x85];
      temp_v37 = piVar48[0x45];
      temp_v35 = piVar48[5];
      puVar67[0xc5] = piVar48[0xc5];
      puVar67[0x85] = temp_v42;
      puVar67[0x45] = temp_v37;
      temp_v40 = piVar48[-0xbb];
      temp_v42 = piVar48[-0x7b];
      temp_v34 = piVar48[-0x3b];
      puVar67[-0xfb] = piVar48[-0xfb];
      puVar67[-0xbb] = temp_v40;
      puVar67[-0x7b] = temp_v42;
      temp_v40 = ~temp_v37;
      temp_v63 = (unsigned char)temp_v42;
      temp_v64 = (unsigned char)(temp_v42 >> 8);
      temp_v62 = (unsigned char)(temp_v42 >> 0x10);
      temp_v1 = (unsigned char)(temp_v42 >> 0x18);
      temp_v59 = (unsigned char)temp_v34;
      temp_v2 = (unsigned char)temp_v35;
      temp_v60 = (unsigned char)((unsigned int)temp_v34 >> 8);
      temp_v65 = (unsigned char)((unsigned int)temp_v35 >> 8);
      temp_v61 = (unsigned char)((unsigned int)temp_v34 >> 0x10);
      temp_v66 = (unsigned char)((unsigned int)temp_v35 >> 0x10);
      temp_v0 = (unsigned char)((unsigned int)temp_v34 >> 0x18);
      temp_v67 = (unsigned char)((unsigned int)temp_v35 >> 0x18);
      temp_v8 = UnsignedSaturate(temp_v63 - temp_v59,0x10);
      temp_v13 = UnsignedSaturate(temp_v64 - temp_v60,0x10);
      temp_v18 = UnsignedSaturate(temp_v62 - temp_v61,0x10);
      temp_v22 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      temp_v9 = UnsignedSaturate(temp_v59 - temp_v63,0x10);
      temp_v14 = UnsignedSaturate(temp_v60 - temp_v64,0x10);
      temp_v19 = UnsignedSaturate(temp_v61 - temp_v62,0x10);
      temp_v23 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v68 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v40 + (unsigned short)temp_v63) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v68 - ' ',0x10);
      temp_v5 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 8) + (unsigned short)temp_v64) >> 1
                                         ) + 1) >> 1) + 1) >> 1);
      temp_v15 = UnsignedSaturate(temp_v5 - ' ',0x10);
      temp_v3 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x10) + (unsigned short)temp_v62)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v20 = UnsignedSaturate(temp_v3 - ' ',0x10);
      temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x18) + (unsigned short)temp_v1)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v24 = UnsignedSaturate(temp_v6 - ' ',0x10);
      temp_v63 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v64 = (unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v68,0x10);
      temp_v16 = UnsignedSaturate(' ' - temp_v5,0x10);
      temp_v20 = UnsignedSaturate(' ' - temp_v3,0x10);
      temp_v24 = UnsignedSaturate(' ' - temp_v6,0x10);
      temp_v62 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v1 = (unsigned char)temp_v20 | (unsigned char)(temp_v16 >> 8);
      temp_v68 = (char)((unsigned short)((unsigned short)temp_v59 + (unsigned short)temp_v2) >> 1);
      temp_v7 = UnsignedSaturate(temp_v68 + temp_v11,0x10);
      temp_v5 = (char)((unsigned short)((unsigned short)temp_v60 + (unsigned short)temp_v65) >> 1);
      temp_v20 = UnsignedSaturate(temp_v5 + (char)temp_v15,0x10);
      temp_v3 = (char)((unsigned short)((unsigned short)temp_v61 + (unsigned short)temp_v66) >> 1);
      temp_v24 = UnsignedSaturate(temp_v3 + temp_v64,0x10);
      temp_v6 = (char)((unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v67) >> 1);
      temp_v4 = UnsignedSaturate(temp_v6 + temp_v63,0x10);
      temp_v10 = UnsignedSaturate(temp_v7 - temp_v12,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 - (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) - temp_v1,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v24 >> 8)) - temp_v62,0x10);
      temp_v42 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v10;
      temp_v7 = UnsignedSaturate(temp_v68 - temp_v11,0x10);
      temp_v20 = UnsignedSaturate(temp_v5 - (char)temp_v15,0x10);
      temp_v4 = UnsignedSaturate(temp_v3 - temp_v64,0x10);
      temp_v26 = UnsignedSaturate(temp_v6 - temp_v63,0x10);
      temp_v6 = UnsignedSaturate(temp_v2 - (char)temp_v37,0x10);
      temp_v3 = (char)(temp_v37 >> 8);
      temp_v24 = UnsignedSaturate(temp_v65 - temp_v3,0x10);
      temp_v5 = (char)(temp_v37 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v66 - temp_v5,0x10);
      temp_v68 = (char)(temp_v37 >> 0x18);
      temp_v27 = UnsignedSaturate(temp_v67 - temp_v68,0x10);
      temp_v63 = UnsignedSaturate(temp_v7 + temp_v12,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 + (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v20 >> 8)) + temp_v1,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v26 | (unsigned char)(temp_v4 >> 8)) + temp_v62,0x10);
      temp_v40 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v63;
      temp_v7 = UnsignedSaturate((char)temp_v37 - temp_v2,0x10);
      temp_v20 = UnsignedSaturate(temp_v3 - temp_v65,0x10);
      temp_v16 = UnsignedSaturate(temp_v5 - temp_v66,0x10);
      temp_v26 = UnsignedSaturate(temp_v68 - temp_v67,0x10);
      temp_v53 = -1 < (int)(char)(temp_v9 + temp_v8) - (int)temp_v29;
      temp_v54 = -1 < (int)(char)((char)temp_v14 + (char)temp_v13) - (int)temp_v33;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v28;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v40) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v40) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v40) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v40) & 0xff000000);
      temp_v68 = UnsignedSaturate(temp_v59 - temp_v2,0x10);
      temp_v4 = UnsignedSaturate(temp_v60 - temp_v65,0x10);
      temp_v14 = UnsignedSaturate(temp_v61 - temp_v66,0x10);
      temp_v19 = UnsignedSaturate(temp_v0 - temp_v67,0x10);
      temp_v5 = UnsignedSaturate(temp_v2 - temp_v59,0x10);
      temp_v13 = UnsignedSaturate(temp_v65 - temp_v60,0x10);
      temp_v18 = UnsignedSaturate(temp_v66 - temp_v61,0x10);
      temp_v22 = UnsignedSaturate(temp_v67 - temp_v0,0x10);
      temp_v53 = -1 < (int)(char)(temp_v7 + temp_v6) - (int)temp_v29;
      temp_v54 = -1 < (int)(char)((char)temp_v20 + (char)temp_v24) - (int)temp_v33;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v16 | (unsigned char)(temp_v20 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v24 >> 8))) - (int)temp_v28;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v26 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v27 | (unsigned char)(temp_v15 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      temp_v53 = -1 < (int)(char)(temp_v68 + temp_v5) - (int)temp_v30;
      temp_v54 = -1 < (int)(char)((char)temp_v4 + (char)temp_v13) - (int)temp_v31;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v14 | (unsigned char)(temp_v4 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v32;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v69;
      puVar67[-0x3b] =
           (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
           (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
           (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
           (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      puVar67[5] = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
                   (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
                   (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
                   (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      HintPreloadData(piVar48 + 0x96);
      temp_v42 = piVar48[0x86];
      temp_v37 = piVar48[0x46];
      temp_v35 = piVar48[6];
      puVar67[0xc6] = piVar48[0xc6];
      puVar67[0x86] = temp_v42;
      puVar67[0x46] = temp_v37;
      temp_v40 = piVar48[-0xba];
      temp_v42 = piVar48[-0x7a];
      temp_v34 = piVar48[-0x3a];
      puVar67[-0xfa] = piVar48[-0xfa];
      puVar67[-0xba] = temp_v40;
      puVar67[-0x7a] = temp_v42;
      temp_v40 = ~temp_v37;
      temp_v1 = (unsigned char)temp_v42;
      temp_v62 = (unsigned char)(temp_v42 >> 8);
      temp_v64 = (unsigned char)(temp_v42 >> 0x10);
      temp_v63 = (unsigned char)(temp_v42 >> 0x18);
      temp_v0 = (unsigned char)temp_v34;
      temp_v2 = (unsigned char)temp_v35;
      temp_v61 = (unsigned char)((unsigned int)temp_v34 >> 8);
      temp_v65 = (unsigned char)((unsigned int)temp_v35 >> 8);
      temp_v60 = (unsigned char)((unsigned int)temp_v34 >> 0x10);
      temp_v66 = (unsigned char)((unsigned int)temp_v35 >> 0x10);
      temp_v59 = (unsigned char)((unsigned int)temp_v34 >> 0x18);
      temp_v67 = (unsigned char)((unsigned int)temp_v35 >> 0x18);
      temp_v8 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v62 - temp_v61,0x10);
      temp_v18 = UnsignedSaturate(temp_v64 - temp_v60,0x10);
      temp_v22 = UnsignedSaturate(temp_v63 - temp_v59,0x10);
      temp_v9 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v61 - temp_v62,0x10);
      temp_v19 = UnsignedSaturate(temp_v60 - temp_v64,0x10);
      temp_v23 = UnsignedSaturate(temp_v59 - temp_v63,0x10);
      temp_v68 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v40 + (unsigned short)temp_v1) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v68 - ' ',0x10);
      temp_v5 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 8) + (unsigned short)temp_v62) >> 1
                                         ) + 1) >> 1) + 1) >> 1);
      temp_v15 = UnsignedSaturate(temp_v5 - ' ',0x10);
      temp_v3 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x10) + (unsigned short)temp_v64)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v20 = UnsignedSaturate(temp_v3 - ' ',0x10);
      temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x18) + (unsigned short)temp_v63)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v24 = UnsignedSaturate(temp_v6 - ' ',0x10);
      temp_v64 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v63 = (unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v68,0x10);
      temp_v16 = UnsignedSaturate(' ' - temp_v5,0x10);
      temp_v20 = UnsignedSaturate(' ' - temp_v3,0x10);
      temp_v24 = UnsignedSaturate(' ' - temp_v6,0x10);
      temp_v62 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v1 = (unsigned char)temp_v20 | (unsigned char)(temp_v16 >> 8);
      temp_v68 = (char)((unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v2) >> 1);
      temp_v7 = UnsignedSaturate(temp_v68 + temp_v11,0x10);
      temp_v5 = (char)((unsigned short)((unsigned short)temp_v61 + (unsigned short)temp_v65) >> 1);
      temp_v20 = UnsignedSaturate(temp_v5 + (char)temp_v15,0x10);
      temp_v3 = (char)((unsigned short)((unsigned short)temp_v60 + (unsigned short)temp_v66) >> 1);
      temp_v24 = UnsignedSaturate(temp_v3 + temp_v63,0x10);
      temp_v6 = (char)((unsigned short)((unsigned short)temp_v59 + (unsigned short)temp_v67) >> 1);
      temp_v4 = UnsignedSaturate(temp_v6 + temp_v64,0x10);
      temp_v10 = UnsignedSaturate(temp_v7 - temp_v12,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 - (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) - temp_v1,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v24 >> 8)) - temp_v62,0x10);
      temp_v42 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v10;
      temp_v7 = UnsignedSaturate(temp_v68 - temp_v11,0x10);
      temp_v20 = UnsignedSaturate(temp_v5 - (char)temp_v15,0x10);
      temp_v4 = UnsignedSaturate(temp_v3 - temp_v63,0x10);
      temp_v26 = UnsignedSaturate(temp_v6 - temp_v64,0x10);
      temp_v6 = UnsignedSaturate(temp_v2 - (char)temp_v37,0x10);
      temp_v3 = (char)(temp_v37 >> 8);
      temp_v24 = UnsignedSaturate(temp_v65 - temp_v3,0x10);
      temp_v5 = (char)(temp_v37 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v66 - temp_v5,0x10);
      temp_v68 = (char)(temp_v37 >> 0x18);
      temp_v27 = UnsignedSaturate(temp_v67 - temp_v68,0x10);
      temp_v63 = UnsignedSaturate(temp_v7 + temp_v12,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 + (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v20 >> 8)) + temp_v1,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v26 | (unsigned char)(temp_v4 >> 8)) + temp_v62,0x10);
      temp_v40 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v63;
      temp_v7 = UnsignedSaturate((char)temp_v37 - temp_v2,0x10);
      temp_v20 = UnsignedSaturate(temp_v3 - temp_v65,0x10);
      temp_v16 = UnsignedSaturate(temp_v5 - temp_v66,0x10);
      temp_v26 = UnsignedSaturate(temp_v68 - temp_v67,0x10);
      temp_v53 = -1 < (int)(char)(temp_v9 + temp_v8) - (int)temp_v29;
      temp_v54 = -1 < (int)(char)((char)temp_v14 + (char)temp_v13) - (int)temp_v33;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v28;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v40) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v40) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v40) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v40) & 0xff000000);
      temp_v68 = UnsignedSaturate(temp_v0 - temp_v2,0x10);
      temp_v4 = UnsignedSaturate(temp_v61 - temp_v65,0x10);
      temp_v14 = UnsignedSaturate(temp_v60 - temp_v66,0x10);
      temp_v19 = UnsignedSaturate(temp_v59 - temp_v67,0x10);
      temp_v5 = UnsignedSaturate(temp_v2 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v65 - temp_v61,0x10);
      temp_v18 = UnsignedSaturate(temp_v66 - temp_v60,0x10);
      temp_v22 = UnsignedSaturate(temp_v67 - temp_v59,0x10);
      temp_v53 = -1 < (int)(char)(temp_v7 + temp_v6) - (int)temp_v29;
      temp_v54 = -1 < (int)(char)((char)temp_v20 + (char)temp_v24) - (int)temp_v33;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v16 | (unsigned char)(temp_v20 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v24 >> 8))) - (int)temp_v28;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v26 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v27 | (unsigned char)(temp_v15 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      temp_v53 = -1 < (int)(char)(temp_v68 + temp_v5) - (int)temp_v30;
      temp_v54 = -1 < (int)(char)((char)temp_v4 + (char)temp_v13) - (int)temp_v31;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v14 | (unsigned char)(temp_v4 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v32;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v69;
      puVar67[-0x3a] =
           (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
           (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
           (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
           (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      puVar67[6] = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
                   (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
                   (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
                   (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      HintPreloadData(piVar48 + 0xd7);
      temp_v42 = piVar48[0x87];
      temp_v37 = piVar48[0x47];
      piVar49 = piVar48 + -0x39;
      temp_v35 = piVar48[7];
      puVar67[199] = piVar48[199];
      puVar67[0x87] = temp_v42;
      puVar67[0x47] = temp_v37;
      puVar1 = (unsigned int *)(piVar48 + -0xf9);
      temp_v40 = piVar48[-0xb9];
      temp_v42 = piVar48[-0x79];
      piVar48 = piVar48 + 8;
      temp_v34 = *piVar49;
      puVar67[-0xf9] = *puVar1;
      puVar67[-0xb9] = temp_v40;
      puVar67[-0x79] = temp_v42;
      temp_v40 = ~temp_v37;
      temp_v62 = (unsigned char)temp_v42;
      temp_v1 = (unsigned char)(temp_v42 >> 8);
      temp_v64 = (unsigned char)(temp_v42 >> 0x10);
      temp_v63 = (unsigned char)(temp_v42 >> 0x18);
      temp_v59 = (unsigned char)temp_v34;
      temp_v67 = (unsigned char)temp_v35;
      temp_v60 = (unsigned char)((unsigned int)temp_v34 >> 8);
      temp_v66 = (unsigned char)((unsigned int)temp_v35 >> 8);
      temp_v61 = (unsigned char)((unsigned int)temp_v34 >> 0x10);
      temp_v65 = (unsigned char)((unsigned int)temp_v35 >> 0x10);
      temp_v0 = (unsigned char)((unsigned int)temp_v34 >> 0x18);
      temp_v2 = (unsigned char)((unsigned int)temp_v35 >> 0x18);
      temp_v8 = UnsignedSaturate(temp_v62 - temp_v59,0x10);
      temp_v13 = UnsignedSaturate(temp_v1 - temp_v60,0x10);
      temp_v18 = UnsignedSaturate(temp_v64 - temp_v61,0x10);
      temp_v22 = UnsignedSaturate(temp_v63 - temp_v0,0x10);
      temp_v9 = UnsignedSaturate(temp_v59 - temp_v62,0x10);
      temp_v14 = UnsignedSaturate(temp_v60 - temp_v1,0x10);
      temp_v19 = UnsignedSaturate(temp_v61 - temp_v64,0x10);
      temp_v23 = UnsignedSaturate(temp_v0 - temp_v63,0x10);
      temp_v68 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v40 + (unsigned short)temp_v62) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v68 - ' ',0x10);
      temp_v5 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 8) + (unsigned short)temp_v1) >> 1
                                         ) + 1) >> 1) + 1) >> 1);
      temp_v15 = UnsignedSaturate(temp_v5 - ' ',0x10);
      temp_v3 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x10) + (unsigned short)temp_v64)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v20 = UnsignedSaturate(temp_v3 - ' ',0x10);
      temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x18) + (unsigned short)temp_v63)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v24 = UnsignedSaturate(temp_v6 - ' ',0x10);
      temp_v64 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v63 = (unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v68,0x10);
      temp_v16 = UnsignedSaturate(' ' - temp_v5,0x10);
      temp_v20 = UnsignedSaturate(' ' - temp_v3,0x10);
      temp_v24 = UnsignedSaturate(' ' - temp_v6,0x10);
      temp_v62 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
      temp_v1 = (unsigned char)temp_v20 | (unsigned char)(temp_v16 >> 8);
      temp_v68 = (char)((unsigned short)((unsigned short)temp_v59 + (unsigned short)temp_v67) >> 1);
      temp_v7 = UnsignedSaturate(temp_v68 + temp_v11,0x10);
      temp_v5 = (char)((unsigned short)((unsigned short)temp_v60 + (unsigned short)temp_v66) >> 1);
      temp_v20 = UnsignedSaturate(temp_v5 + (char)temp_v15,0x10);
      temp_v3 = (char)((unsigned short)((unsigned short)temp_v61 + (unsigned short)temp_v65) >> 1);
      temp_v24 = UnsignedSaturate(temp_v3 + temp_v63,0x10);
      temp_v6 = (char)((unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v2) >> 1);
      temp_v4 = UnsignedSaturate(temp_v6 + temp_v64,0x10);
      temp_v10 = UnsignedSaturate(temp_v7 - temp_v12,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 - (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) - temp_v1,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v24 >> 8)) - temp_v62,0x10);
      temp_v42 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v10;
      temp_v7 = UnsignedSaturate(temp_v68 - temp_v11,0x10);
      temp_v20 = UnsignedSaturate(temp_v5 - (char)temp_v15,0x10);
      temp_v4 = UnsignedSaturate(temp_v3 - temp_v63,0x10);
      temp_v26 = UnsignedSaturate(temp_v6 - temp_v64,0x10);
      temp_v6 = UnsignedSaturate(temp_v67 - (char)temp_v37,0x10);
      temp_v3 = (char)(temp_v37 >> 8);
      temp_v24 = UnsignedSaturate(temp_v66 - temp_v3,0x10);
      temp_v5 = (char)(temp_v37 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v65 - temp_v5,0x10);
      temp_v68 = (char)(temp_v37 >> 0x18);
      temp_v27 = UnsignedSaturate(temp_v2 - temp_v68,0x10);
      temp_v63 = UnsignedSaturate(temp_v7 + temp_v12,0x10);
      temp_v17 = UnsignedSaturate((char)temp_v20 + (char)temp_v16,0x10);
      temp_v21 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v20 >> 8)) + temp_v1,0x10);
      temp_v25 = UnsignedSaturate(((unsigned char)temp_v26 | (unsigned char)(temp_v4 >> 8)) + temp_v62,0x10);
      temp_v40 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v63;
      temp_v7 = UnsignedSaturate((char)temp_v37 - temp_v67,0x10);
      temp_v20 = UnsignedSaturate(temp_v3 - temp_v66,0x10);
      temp_v16 = UnsignedSaturate(temp_v5 - temp_v65,0x10);
      temp_v26 = UnsignedSaturate(temp_v68 - temp_v2,0x10);
      temp_v53 = -1 < (int)(char)(temp_v9 + temp_v8) - (int)temp_v29;
      temp_v54 = -1 < (int)(char)((char)temp_v14 + (char)temp_v13) - (int)temp_v33;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v28;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v40) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v40) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v40) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v40) & 0xff000000);
      temp_v68 = UnsignedSaturate(temp_v59 - temp_v67,0x10);
      temp_v4 = UnsignedSaturate(temp_v60 - temp_v66,0x10);
      temp_v14 = UnsignedSaturate(temp_v61 - temp_v65,0x10);
      temp_v19 = UnsignedSaturate(temp_v0 - temp_v2,0x10);
      temp_v5 = UnsignedSaturate(temp_v67 - temp_v59,0x10);
      temp_v13 = UnsignedSaturate(temp_v66 - temp_v60,0x10);
      temp_v18 = UnsignedSaturate(temp_v65 - temp_v61,0x10);
      temp_v22 = UnsignedSaturate(temp_v2 - temp_v0,0x10);
      temp_v53 = -1 < (int)(char)(temp_v7 + temp_v6) - (int)temp_v29;
      temp_v54 = -1 < (int)(char)((char)temp_v20 + (char)temp_v24) - (int)temp_v33;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v16 | (unsigned char)(temp_v20 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v24 >> 8))) - (int)temp_v28;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v26 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v27 | (unsigned char)(temp_v15 >> 8))) - (int)temp_v70;
      temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
               (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
               (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
               (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
               (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      temp_v53 = -1 < (int)(char)(temp_v68 + temp_v5) - (int)temp_v30;
      temp_v54 = -1 < (int)(char)((char)temp_v4 + (char)temp_v13) - (int)temp_v31;
      temp_v55 = -1 < (int)(char)(((unsigned char)temp_v14 | (unsigned char)(temp_v4 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v32;
      temp_v56 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v69;
      puVar67[-0x39] =
           (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
           (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
           (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
           (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
      puVar67[7] = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
                   (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
                   (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
                   (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
      puVar67 = puVar67 + 8;
      temp_v34 = temp_v57 - 0x20;
    } while (temp_v57 - 0x20 != 0 && temp_v57 >= 0x20);
    temp_v57 = temp_v57 - 8;
    if (temp_v57 != 0) {
      do {
        temp_v42 = piVar48[0x80];
        temp_v37 = piVar48[0x40];
        temp_v35 = *piVar48;
        puVar67[0xc0] = piVar48[0xc0];
        puVar67[0x80] = temp_v42;
        puVar67[0x40] = temp_v37;
        temp_v40 = piVar48[-0xc0];
        temp_v42 = piVar48[-0x80];
        temp_v34 = piVar48[-0x40];
        puVar67[-0x100] = piVar48[-0x100];
        puVar67[-0xc0] = temp_v40;
        puVar67[-0x80] = temp_v42;
        temp_v40 = ~temp_v37;
        temp_v1 = (unsigned char)temp_v42;
        temp_v62 = (unsigned char)(temp_v42 >> 8);
        temp_v63 = (unsigned char)(temp_v42 >> 0x10);
        temp_v64 = (unsigned char)(temp_v42 >> 0x18);
        temp_v59 = (unsigned char)temp_v34;
        temp_v2 = (unsigned char)temp_v35;
        temp_v60 = (unsigned char)((unsigned int)temp_v34 >> 8);
        temp_v67 = (unsigned char)((unsigned int)temp_v35 >> 8);
        temp_v61 = (unsigned char)((unsigned int)temp_v34 >> 0x10);
        temp_v66 = (unsigned char)((unsigned int)temp_v35 >> 0x10);
        temp_v0 = (unsigned char)((unsigned int)temp_v34 >> 0x18);
        temp_v65 = (unsigned char)((unsigned int)temp_v35 >> 0x18);
        temp_v8 = UnsignedSaturate(temp_v1 - temp_v59,0x10);
        temp_v13 = UnsignedSaturate(temp_v62 - temp_v60,0x10);
        temp_v18 = UnsignedSaturate(temp_v63 - temp_v61,0x10);
        temp_v22 = UnsignedSaturate(temp_v64 - temp_v0,0x10);
        temp_v9 = UnsignedSaturate(temp_v59 - temp_v1,0x10);
        temp_v14 = UnsignedSaturate(temp_v60 - temp_v62,0x10);
        temp_v19 = UnsignedSaturate(temp_v61 - temp_v63,0x10);
        temp_v23 = UnsignedSaturate(temp_v0 - temp_v64,0x10);
        temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v40 + (unsigned short)temp_v1) >> 1) + 1
                                          ) >> 1) + 1) >> 1);
        temp_v11 = UnsignedSaturate(temp_v6 - ' ',0x10);
        temp_v3 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 8) + (unsigned short)temp_v62) >>
                                           1) + 1) >> 1) + 1) >> 1);
        temp_v15 = UnsignedSaturate(temp_v3 - ' ',0x10);
        temp_v68 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x10) + (unsigned short)temp_v63)
                                           >> 1) + 1) >> 1) + 1) >> 1);
        temp_v20 = UnsignedSaturate(temp_v68 - ' ',0x10);
        temp_v5 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x18) + (unsigned short)temp_v64)
                                           >> 1) + 1) >> 1) + 1) >> 1);
        temp_v24 = UnsignedSaturate(temp_v5 - ' ',0x10);
        temp_v63 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
        temp_v64 = (unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8);
        temp_v12 = UnsignedSaturate(' ' - temp_v6,0x10);
        temp_v16 = UnsignedSaturate(' ' - temp_v3,0x10);
        temp_v20 = UnsignedSaturate(' ' - temp_v68,0x10);
        temp_v24 = UnsignedSaturate(' ' - temp_v5,0x10);
        temp_v1 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
        temp_v62 = (unsigned char)temp_v20 | (unsigned char)(temp_v16 >> 8);
        temp_v68 = (char)((unsigned short)((unsigned short)temp_v59 + (unsigned short)temp_v2) >> 1);
        temp_v7 = UnsignedSaturate(temp_v68 + temp_v11,0x10);
        temp_v5 = (char)((unsigned short)((unsigned short)temp_v60 + (unsigned short)temp_v67) >> 1);
        temp_v20 = UnsignedSaturate(temp_v5 + (char)temp_v15,0x10);
        temp_v3 = (char)((unsigned short)((unsigned short)temp_v61 + (unsigned short)temp_v66) >> 1);
        temp_v24 = UnsignedSaturate(temp_v3 + temp_v64,0x10);
        temp_v6 = (char)((unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v65) >> 1);
        temp_v4 = UnsignedSaturate(temp_v6 + temp_v63,0x10);
        temp_v10 = UnsignedSaturate(temp_v7 - temp_v12,0x10);
        temp_v17 = UnsignedSaturate((char)temp_v20 - (char)temp_v16,0x10);
        temp_v21 = UnsignedSaturate(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) - temp_v62,0x10);
        temp_v25 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v24 >> 8)) - temp_v1,0x10);
        temp_v42 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) |
                 (unsigned int)temp_v10;
        temp_v7 = UnsignedSaturate(temp_v68 - temp_v11,0x10);
        temp_v20 = UnsignedSaturate(temp_v5 - (char)temp_v15,0x10);
        temp_v4 = UnsignedSaturate(temp_v3 - temp_v64,0x10);
        temp_v26 = UnsignedSaturate(temp_v6 - temp_v63,0x10);
        temp_v6 = UnsignedSaturate(temp_v2 - (char)temp_v37,0x10);
        temp_v68 = (char)(temp_v37 >> 8);
        temp_v24 = UnsignedSaturate(temp_v67 - temp_v68,0x10);
        temp_v5 = (char)(temp_v37 >> 0x10);
        temp_v15 = UnsignedSaturate(temp_v66 - temp_v5,0x10);
        temp_v3 = (char)(temp_v37 >> 0x18);
        temp_v27 = UnsignedSaturate(temp_v65 - temp_v3,0x10);
        temp_v63 = UnsignedSaturate(temp_v7 + temp_v12,0x10);
        temp_v17 = UnsignedSaturate((char)temp_v20 + (char)temp_v16,0x10);
        temp_v21 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v20 >> 8)) + temp_v62,0x10);
        temp_v25 = UnsignedSaturate(((unsigned char)temp_v26 | (unsigned char)(temp_v4 >> 8)) + temp_v1,0x10);
        temp_v40 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v63
        ;
        temp_v7 = UnsignedSaturate((char)temp_v37 - temp_v2,0x10);
        temp_v20 = UnsignedSaturate(temp_v68 - temp_v67,0x10);
        temp_v16 = UnsignedSaturate(temp_v5 - temp_v66,0x10);
        temp_v26 = UnsignedSaturate(temp_v3 - temp_v65,0x10);
        temp_v53 = -1 < (int)(char)(temp_v9 + temp_v8) - (int)temp_v29;
        temp_v54 = -1 < (int)(char)((char)temp_v14 + (char)temp_v13) - (int)temp_v33;
        temp_v55 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                                 ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v28;
        temp_v56 = -1 < (int)(char)(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) +
                                 ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v70;
        temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
                 (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
                 (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
                 (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
        temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v40) & 0xff) |
                 (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v40) & 0xff00) |
                 (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v40) & 0xff0000) |
                 (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v40) & 0xff000000);
        temp_v68 = UnsignedSaturate(temp_v59 - temp_v2,0x10);
        temp_v4 = UnsignedSaturate(temp_v60 - temp_v67,0x10);
        temp_v14 = UnsignedSaturate(temp_v61 - temp_v66,0x10);
        temp_v19 = UnsignedSaturate(temp_v0 - temp_v65,0x10);
        temp_v5 = UnsignedSaturate(temp_v2 - temp_v59,0x10);
        temp_v13 = UnsignedSaturate(temp_v67 - temp_v60,0x10);
        temp_v18 = UnsignedSaturate(temp_v66 - temp_v61,0x10);
        temp_v22 = UnsignedSaturate(temp_v65 - temp_v0,0x10);
        temp_v53 = -1 < (int)(char)(temp_v7 + temp_v6) - (int)temp_v29;
        temp_v54 = -1 < (int)(char)((char)temp_v20 + (char)temp_v24) - (int)temp_v33;
        temp_v55 = -1 < (int)(char)(((unsigned char)temp_v16 | (unsigned char)(temp_v20 >> 8)) +
                                 ((unsigned char)temp_v15 | (unsigned char)(temp_v24 >> 8))) - (int)temp_v28;
        temp_v56 = -1 < (int)(char)(((unsigned char)temp_v26 | (unsigned char)(temp_v16 >> 8)) +
                                 ((unsigned char)temp_v27 | (unsigned char)(temp_v15 >> 8))) - (int)temp_v70;
        temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
                 (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
                 (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
                 (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
        temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
                 (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
                 (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
                 (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
        temp_v53 = -1 < (int)(char)(temp_v68 + temp_v5) - (int)temp_v30;
        temp_v54 = -1 < (int)(char)((char)temp_v4 + (char)temp_v13) - (int)temp_v31;
        temp_v55 = -1 < (int)(char)(((unsigned char)temp_v14 | (unsigned char)(temp_v4 >> 8)) +
                                 ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v32;
        temp_v56 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                                 ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v69;
        puVar67[-0x40] =
             (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
             (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
             (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
             (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
        *puVar67 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
                   (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
                   (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
                   (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
        temp_v42 = piVar48[0x81];
        temp_v37 = piVar48[0x41];
        piVar49 = piVar48 + -0x3f;
        temp_v35 = piVar48[1];
        puVar67[0xc1] = piVar48[0xc1];
        puVar67[0x81] = temp_v42;
        puVar67[0x41] = temp_v37;
        puVar1 = (unsigned int *)(piVar48 + -0xff);
        temp_v40 = piVar48[-0xbf];
        temp_v42 = piVar48[-0x7f];
        piVar48 = piVar48 + 2;
        temp_v34 = *piVar49;
        puVar67[-0xff] = *puVar1;
        puVar67[-0xbf] = temp_v40;
        puVar67[-0x7f] = temp_v42;
        temp_v40 = ~temp_v37;
        temp_v1 = (unsigned char)temp_v42;
        temp_v62 = (unsigned char)(temp_v42 >> 8);
        temp_v64 = (unsigned char)(temp_v42 >> 0x10);
        temp_v63 = (unsigned char)(temp_v42 >> 0x18);
        temp_v61 = (unsigned char)temp_v34;
        temp_v66 = (unsigned char)temp_v35;
        temp_v0 = (unsigned char)((unsigned int)temp_v34 >> 8);
        temp_v2 = (unsigned char)((unsigned int)temp_v35 >> 8);
        temp_v59 = (unsigned char)((unsigned int)temp_v34 >> 0x10);
        temp_v67 = (unsigned char)((unsigned int)temp_v35 >> 0x10);
        temp_v60 = (unsigned char)((unsigned int)temp_v34 >> 0x18);
        temp_v65 = (unsigned char)((unsigned int)temp_v35 >> 0x18);
        temp_v8 = UnsignedSaturate(temp_v1 - temp_v61,0x10);
        temp_v13 = UnsignedSaturate(temp_v62 - temp_v0,0x10);
        temp_v18 = UnsignedSaturate(temp_v64 - temp_v59,0x10);
        temp_v22 = UnsignedSaturate(temp_v63 - temp_v60,0x10);
        temp_v9 = UnsignedSaturate(temp_v61 - temp_v1,0x10);
        temp_v14 = UnsignedSaturate(temp_v0 - temp_v62,0x10);
        temp_v19 = UnsignedSaturate(temp_v59 - temp_v64,0x10);
        temp_v23 = UnsignedSaturate(temp_v60 - temp_v63,0x10);
        temp_v3 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v40 + (unsigned short)temp_v1) >> 1) + 1
                                          ) >> 1) + 1) >> 1);
        temp_v11 = UnsignedSaturate(temp_v3 - ' ',0x10);
        temp_v5 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 8) + (unsigned short)temp_v62) >>
                                           1) + 1) >> 1) + 1) >> 1);
        temp_v15 = UnsignedSaturate(temp_v5 - ' ',0x10);
        temp_v68 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x10) + (unsigned short)temp_v64)
                                           >> 1) + 1) >> 1) + 1) >> 1);
        temp_v20 = UnsignedSaturate(temp_v68 - ' ',0x10);
        temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x18) + (unsigned short)temp_v63)
                                           >> 1) + 1) >> 1) + 1) >> 1);
        temp_v24 = UnsignedSaturate(temp_v6 - ' ',0x10);
        temp_v63 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
        temp_v64 = (unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8);
        temp_v12 = UnsignedSaturate(' ' - temp_v3,0x10);
        temp_v16 = UnsignedSaturate(' ' - temp_v5,0x10);
        temp_v20 = UnsignedSaturate(' ' - temp_v68,0x10);
        temp_v24 = UnsignedSaturate(' ' - temp_v6,0x10);
        temp_v1 = (unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8);
        temp_v62 = (unsigned char)temp_v20 | (unsigned char)(temp_v16 >> 8);
        temp_v68 = (char)((unsigned short)((unsigned short)temp_v61 + (unsigned short)temp_v66) >> 1);
        temp_v7 = UnsignedSaturate(temp_v68 + temp_v11,0x10);
        temp_v5 = (char)((unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v2) >> 1);
        temp_v20 = UnsignedSaturate(temp_v5 + (char)temp_v15,0x10);
        temp_v3 = (char)((unsigned short)((unsigned short)temp_v59 + (unsigned short)temp_v67) >> 1);
        temp_v24 = UnsignedSaturate(temp_v3 + temp_v64,0x10);
        temp_v6 = (char)((unsigned short)((unsigned short)temp_v60 + (unsigned short)temp_v65) >> 1);
        temp_v4 = UnsignedSaturate(temp_v6 + temp_v63,0x10);
        temp_v10 = UnsignedSaturate(temp_v7 - temp_v12,0x10);
        temp_v17 = UnsignedSaturate((char)temp_v20 - (char)temp_v16,0x10);
        temp_v21 = UnsignedSaturate(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) - temp_v62,0x10);
        temp_v25 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v24 >> 8)) - temp_v1,0x10);
        temp_v42 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) |
                 (unsigned int)temp_v10;
        temp_v7 = UnsignedSaturate(temp_v68 - temp_v11,0x10);
        temp_v20 = UnsignedSaturate(temp_v5 - (char)temp_v15,0x10);
        temp_v4 = UnsignedSaturate(temp_v3 - temp_v64,0x10);
        temp_v26 = UnsignedSaturate(temp_v6 - temp_v63,0x10);
        temp_v6 = UnsignedSaturate(temp_v66 - (char)temp_v37,0x10);
        temp_v3 = (char)(temp_v37 >> 8);
        temp_v24 = UnsignedSaturate(temp_v2 - temp_v3,0x10);
        temp_v68 = (char)(temp_v37 >> 0x10);
        temp_v15 = UnsignedSaturate(temp_v67 - temp_v68,0x10);
        temp_v5 = (char)(temp_v37 >> 0x18);
        temp_v27 = UnsignedSaturate(temp_v65 - temp_v5,0x10);
        temp_v63 = UnsignedSaturate(temp_v7 + temp_v12,0x10);
        temp_v17 = UnsignedSaturate((char)temp_v20 + (char)temp_v16,0x10);
        temp_v21 = UnsignedSaturate(((unsigned char)temp_v4 | (unsigned char)(temp_v20 >> 8)) + temp_v62,0x10);
        temp_v25 = UnsignedSaturate(((unsigned char)temp_v26 | (unsigned char)(temp_v4 >> 8)) + temp_v1,0x10);
        temp_v40 = ((unsigned int)temp_v25 << 0x18) | ((unsigned int)temp_v21 << 0x10) | ((unsigned int)temp_v17 << 8) | (unsigned int)temp_v63
        ;
        temp_v7 = UnsignedSaturate((char)temp_v37 - temp_v66,0x10);
        temp_v20 = UnsignedSaturate(temp_v3 - temp_v2,0x10);
        temp_v16 = UnsignedSaturate(temp_v68 - temp_v67,0x10);
        temp_v26 = UnsignedSaturate(temp_v5 - temp_v65,0x10);
        temp_v53 = -1 < (int)(char)(temp_v9 + temp_v8) - (int)temp_v29;
        temp_v54 = -1 < (int)(char)((char)temp_v14 + (char)temp_v13) - (int)temp_v33;
        temp_v55 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                                 ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v28;
        temp_v56 = -1 < (int)(char)(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) +
                                 ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v70;
        temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
                 (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
                 (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
                 (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
        temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v40) & 0xff) |
                 (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v40) & 0xff00) |
                 (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v40) & 0xff0000) |
                 (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v40) & 0xff000000);
        temp_v68 = UnsignedSaturate(temp_v61 - temp_v66,0x10);
        temp_v4 = UnsignedSaturate(temp_v0 - temp_v2,0x10);
        temp_v14 = UnsignedSaturate(temp_v59 - temp_v67,0x10);
        temp_v19 = UnsignedSaturate(temp_v60 - temp_v65,0x10);
        temp_v5 = UnsignedSaturate(temp_v66 - temp_v61,0x10);
        temp_v13 = UnsignedSaturate(temp_v2 - temp_v0,0x10);
        temp_v18 = UnsignedSaturate(temp_v67 - temp_v59,0x10);
        temp_v22 = UnsignedSaturate(temp_v65 - temp_v60,0x10);
        temp_v53 = -1 < (int)(char)(temp_v7 + temp_v6) - (int)temp_v29;
        temp_v54 = -1 < (int)(char)((char)temp_v20 + (char)temp_v24) - (int)temp_v33;
        temp_v55 = -1 < (int)(char)(((unsigned char)temp_v16 | (unsigned char)(temp_v20 >> 8)) +
                                 ((unsigned char)temp_v15 | (unsigned char)(temp_v24 >> 8))) - (int)temp_v28;
        temp_v56 = -1 < (int)(char)(((unsigned char)temp_v26 | (unsigned char)(temp_v16 >> 8)) +
                                 ((unsigned char)temp_v27 | (unsigned char)(temp_v15 >> 8))) - (int)temp_v70;
        temp_v42 = (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
                 (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
                 (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
                 (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
        temp_v37 = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
                 (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
                 (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
                 (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
        temp_v53 = -1 < (int)(char)(temp_v68 + temp_v5) - (int)temp_v30;
        temp_v54 = -1 < (int)(char)((char)temp_v4 + (char)temp_v13) - (int)temp_v31;
        temp_v55 = -1 < (int)(char)(((unsigned char)temp_v14 | (unsigned char)(temp_v4 >> 8)) +
                                 ((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8))) - (int)temp_v32;
        temp_v56 = -1 < (int)(char)(((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8)) +
                                 ((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8))) - (int)temp_v69;
        puVar67[-0x3f] =
             (((unsigned int)temp_v53 * temp_v34 + !temp_v53 * temp_v42) & 0xff) |
             (((unsigned int)temp_v54 * temp_v34 + !temp_v54 * temp_v42) & 0xff00) |
             (((unsigned int)temp_v55 * temp_v34 + !temp_v55 * temp_v42) & 0xff0000) |
             (((unsigned int)temp_v56 * temp_v34 + !temp_v56 * temp_v42) & 0xff000000);
        puVar67[1] = (((unsigned int)temp_v53 * temp_v35 + !temp_v53 * temp_v37) & 0xff) |
                     (((unsigned int)temp_v54 * temp_v35 + !temp_v54 * temp_v37) & 0xff00) |
                     (((unsigned int)temp_v55 * temp_v35 + !temp_v55 * temp_v37) & 0xff0000) |
                     (((unsigned int)temp_v56 * temp_v35 + !temp_v56 * temp_v37) & 0xff000000);
        puVar67 = puVar67 + 2;
        temp_v34 = temp_v57 - 8;
        temp_v53 = temp_v57 >= 8;
        temp_v57 = temp_v34;
      } while (temp_v34 != 0 && temp_v53);
    }
    temp_v58 = temp_v58 - 8;
    if (temp_v58 == 0) break;
    piVar48 = (int *)((int)piVar48 + (0x7e8 - temp_v52));
    puVar67 = (unsigned int *)((int)puVar67 + (0x7e8 - temp_v52));
    temp_v34 = temp_v52;
  }
  return param_1;
}

} /* extern "C" */
