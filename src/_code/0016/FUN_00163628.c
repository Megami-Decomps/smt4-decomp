/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00163628` (_code @ 0x163628, 0x3e0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_00163628(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  char temp_v4;
  unsigned short temp_v5;
  char temp_v6;
  char temp_v7;
  char temp_v8;
  char temp_v9;
  char temp_v10;
  unsigned char temp_v11;
  char temp_v12;
  char temp_v13;
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
  unsigned short temp_v28;
  char temp_v29;
  char temp_v30;
  char temp_v31;
  char temp_v32;
  char temp_v33;
  char temp_v34;
  unsigned int *puVar48;
  unsigned int *puVar49;
  unsigned int temp_v35;
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
  unsigned int temp_v47;
  unsigned int temp_v48;
  unsigned char temp_v49;
  unsigned char temp_v50;
  unsigned char temp_v51;
  unsigned char temp_v52;
  unsigned int temp_v53;
  int temp_v54;
  unsigned char temp_v55;
  unsigned char temp_v56;
  unsigned char temp_v57;
  unsigned char temp_v58;
  unsigned char temp_v59;
  unsigned char temp_v60;
  unsigned char temp_v61;
  unsigned char temp_v62;
  unsigned char temp_v63;
  char temp_v64;
  char temp_v65;
  char temp_v66;
  
  temp_v41 = *(unsigned int *)(param_1 + 0x10);
  temp_v44 = *(unsigned int *)(param_1 + 0x14);
  temp_v36 = *(int *)(param_1 + 8) - 8;
  temp_v54 = *(int *)(param_1 + 0xc) - 8;
  temp_v42 = temp_v41 | (temp_v41 << 8);
  temp_v45 = temp_v44 | (temp_v44 << 8);
  temp_v43 = temp_v42 | (temp_v42 << 0x10);
  temp_v46 = temp_v45 | (temp_v45 << 0x10);
  puVar49 = (unsigned int *)(*(int *)(param_1 + 4) + 0x800);
  temp_v35 = temp_v36;
  while( 1 ) {
    do {
      temp_v53 = temp_v35;
      puVar48 = puVar49;
      HintPreloadData(puVar48 + -0x78);
      temp_v35 = puVar48[-0x80];
      temp_v39 = puVar48[0x40];
      temp_v37 = puVar48[-0x40];
      temp_v38 = *puVar48;
      temp_v40 = ~temp_v39;
      temp_v2 = (unsigned char)temp_v35;
      temp_v58 = (unsigned char)(temp_v35 >> 8);
      temp_v59 = (unsigned char)(temp_v35 >> 0x10);
      temp_v60 = (unsigned char)(temp_v35 >> 0x18);
      temp_v1 = (unsigned char)temp_v37;
      temp_v3 = (unsigned char)temp_v38;
      temp_v55 = (unsigned char)(temp_v37 >> 8);
      temp_v61 = (unsigned char)(temp_v38 >> 8);
      temp_v56 = (unsigned char)(temp_v37 >> 0x10);
      temp_v62 = (unsigned char)(temp_v38 >> 0x10);
      temp_v57 = (unsigned char)(temp_v37 >> 0x18);
      temp_v63 = (unsigned char)(temp_v38 >> 0x18);
      temp_v7 = UnsignedSaturate(temp_v2 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v58 - temp_v55,0x10);
      temp_v19 = UnsignedSaturate(temp_v59 - temp_v56,0x10);
      temp_v23 = UnsignedSaturate(temp_v60 - temp_v57,0x10);
      temp_v8 = UnsignedSaturate(temp_v1 - temp_v2,0x10);
      temp_v15 = UnsignedSaturate(temp_v55 - temp_v58,0x10);
      temp_v20 = UnsignedSaturate(temp_v56 - temp_v59,0x10);
      temp_v24 = UnsignedSaturate(temp_v57 - temp_v60,0x10);
      temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v40 + (unsigned short)temp_v2) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v9 = UnsignedSaturate(temp_v6 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 8) + (unsigned short)temp_v58) >> 1
                                         ) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v65 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x10) + (unsigned short)temp_v59)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v21 = UnsignedSaturate(temp_v65 - ' ',0x10);
      temp_v66 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x18) + (unsigned short)temp_v60)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v25 = UnsignedSaturate(temp_v66 - ' ',0x10);
      temp_v60 = (unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8);
      temp_v2 = (unsigned char)temp_v21 | (unsigned char)(temp_v16 >> 8);
      temp_v10 = UnsignedSaturate(' ' - temp_v6,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v21 = UnsignedSaturate(' ' - temp_v65,0x10);
      temp_v25 = UnsignedSaturate(' ' - temp_v66,0x10);
      temp_v59 = (unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8);
      temp_v58 = (unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8);
      temp_v66 = (char)((unsigned short)((unsigned short)temp_v1 + (unsigned short)temp_v3) >> 1);
      temp_v4 = UnsignedSaturate(temp_v66 + temp_v9,0x10);
      temp_v65 = (char)((unsigned short)((unsigned short)temp_v55 + (unsigned short)temp_v61) >> 1);
      temp_v21 = UnsignedSaturate(temp_v65 + (char)temp_v16,0x10);
      temp_v64 = (char)((unsigned short)((unsigned short)temp_v56 + (unsigned short)temp_v62) >> 1);
      temp_v25 = UnsignedSaturate(temp_v64 + temp_v2,0x10);
      temp_v6 = (char)((unsigned short)((unsigned short)temp_v57 + (unsigned short)temp_v63) >> 1);
      temp_v5 = UnsignedSaturate(temp_v6 + temp_v60,0x10);
      temp_v11 = UnsignedSaturate(temp_v4 - temp_v10,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v21 - (char)temp_v17,0x10);
      temp_v22 = UnsignedSaturate(((unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8)) - temp_v58,0x10);
      temp_v26 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v25 >> 8)) - temp_v59,0x10);
      temp_v35 = ((unsigned int)temp_v26 << 0x18) | ((unsigned int)temp_v22 << 0x10) | ((unsigned int)temp_v18 << 8) | (unsigned int)temp_v11;
      temp_v4 = UnsignedSaturate(temp_v66 - temp_v9,0x10);
      temp_v21 = UnsignedSaturate(temp_v65 - (char)temp_v16,0x10);
      temp_v5 = UnsignedSaturate(temp_v64 - temp_v2,0x10);
      temp_v27 = UnsignedSaturate(temp_v6 - temp_v60,0x10);
      temp_v6 = UnsignedSaturate(temp_v3 - (char)temp_v39,0x10);
      temp_v65 = (char)(temp_v39 >> 8);
      temp_v25 = UnsignedSaturate(temp_v61 - temp_v65,0x10);
      temp_v66 = (char)(temp_v39 >> 0x10);
      temp_v16 = UnsignedSaturate(temp_v62 - temp_v66,0x10);
      temp_v64 = (char)(temp_v39 >> 0x18);
      temp_v28 = UnsignedSaturate(temp_v63 - temp_v64,0x10);
      temp_v2 = UnsignedSaturate(temp_v4 + temp_v10,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v21 + (char)temp_v17,0x10);
      temp_v22 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v21 >> 8)) + temp_v58,0x10);
      temp_v26 = UnsignedSaturate(((unsigned char)temp_v27 | (unsigned char)(temp_v5 >> 8)) + temp_v59,0x10);
      temp_v40 = ((unsigned int)temp_v26 << 0x18) | ((unsigned int)temp_v22 << 0x10) | ((unsigned int)temp_v18 << 8) | (unsigned int)temp_v2;
      temp_v4 = UnsignedSaturate((char)temp_v39 - temp_v3,0x10);
      temp_v21 = UnsignedSaturate(temp_v65 - temp_v61,0x10);
      temp_v17 = UnsignedSaturate(temp_v66 - temp_v62,0x10);
      temp_v27 = UnsignedSaturate(temp_v64 - temp_v63,0x10);
      temp_v30 = (char)temp_v44;
      temp_v49 = -1 < (int)(char)(temp_v8 + temp_v7) - (int)temp_v30;
      temp_v33 = (char)(temp_v45 >> 8);
      temp_v50 = -1 < (int)(char)((char)temp_v15 + (char)temp_v14) - (int)temp_v33;
      temp_v29 = (char)(temp_v46 >> 0x10);
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v29;
      temp_v66 = (char)(temp_v46 >> 0x18);
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) +
                               ((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8))) - (int)temp_v66;
      temp_v35 = ((temp_v49 * temp_v37 + !temp_v49 * temp_v35) & 0xff) |
               ((temp_v50 * temp_v37 + !temp_v50 * temp_v35) & 0xff00) |
               ((temp_v51 * temp_v37 + !temp_v51 * temp_v35) & 0xff0000) |
               ((temp_v52 * temp_v37 + !temp_v52 * temp_v35) & 0xff000000);
      temp_v39 = ((temp_v49 * temp_v38 + !temp_v49 * temp_v40) & 0xff) |
               ((temp_v50 * temp_v38 + !temp_v50 * temp_v40) & 0xff00) |
               ((temp_v51 * temp_v38 + !temp_v51 * temp_v40) & 0xff0000) |
               ((temp_v52 * temp_v38 + !temp_v52 * temp_v40) & 0xff000000);
      temp_v65 = UnsignedSaturate(temp_v1 - temp_v3,0x10);
      temp_v5 = UnsignedSaturate(temp_v55 - temp_v61,0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v62,0x10);
      temp_v20 = UnsignedSaturate(temp_v57 - temp_v63,0x10);
      temp_v64 = UnsignedSaturate(temp_v3 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v61 - temp_v55,0x10);
      temp_v19 = UnsignedSaturate(temp_v62 - temp_v56,0x10);
      temp_v23 = UnsignedSaturate(temp_v63 - temp_v57,0x10);
      temp_v49 = -1 < (int)(char)(temp_v4 + temp_v6) - (int)temp_v30;
      temp_v50 = -1 < (int)(char)((char)temp_v21 + (char)temp_v25) - (int)temp_v33;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v17 | (unsigned char)(temp_v21 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v25 >> 8))) - (int)temp_v29;
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v27 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v28 | (unsigned char)(temp_v16 >> 8))) - (int)temp_v66;
      temp_v35 = ((temp_v49 * temp_v37 + !temp_v49 * temp_v35) & 0xff) |
               ((temp_v50 * temp_v37 + !temp_v50 * temp_v35) & 0xff00) |
               ((temp_v51 * temp_v37 + !temp_v51 * temp_v35) & 0xff0000) |
               ((temp_v52 * temp_v37 + !temp_v52 * temp_v35) & 0xff000000);
      temp_v39 = ((temp_v49 * temp_v38 + !temp_v49 * temp_v39) & 0xff) |
               ((temp_v50 * temp_v38 + !temp_v50 * temp_v39) & 0xff00) |
               ((temp_v51 * temp_v38 + !temp_v51 * temp_v39) & 0xff0000) |
               ((temp_v52 * temp_v38 + !temp_v52 * temp_v39) & 0xff000000);
      temp_v32 = (char)temp_v41;
      temp_v49 = -1 < (int)(char)(temp_v65 + temp_v64) - (int)temp_v32;
      temp_v34 = (char)(temp_v42 >> 8);
      temp_v50 = -1 < (int)(char)((char)temp_v5 + (char)temp_v14) - (int)temp_v34;
      temp_v31 = (char)(temp_v43 >> 0x10);
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v15 | (unsigned char)(temp_v5 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v31;
      temp_v65 = (char)(temp_v43 >> 0x18);
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8))) - (int)temp_v65;
      puVar48[-0x40] =
           ((temp_v49 * temp_v37 + !temp_v49 * temp_v35) & 0xff) |
           ((temp_v50 * temp_v37 + !temp_v50 * temp_v35) & 0xff00) |
           ((temp_v51 * temp_v37 + !temp_v51 * temp_v35) & 0xff0000) |
           ((temp_v52 * temp_v37 + !temp_v52 * temp_v35) & 0xff000000);
      *puVar48 = ((temp_v49 * temp_v38 + !temp_v49 * temp_v39) & 0xff) |
                 ((temp_v50 * temp_v38 + !temp_v50 * temp_v39) & 0xff00) |
                 ((temp_v51 * temp_v38 + !temp_v51 * temp_v39) & 0xff0000) |
                 ((temp_v52 * temp_v38 + !temp_v52 * temp_v39) & 0xff000000);
      HintPreloadData(puVar48 + -0x38);
      temp_v35 = puVar48[-0x7f];
      temp_v39 = puVar48[0x41];
      temp_v37 = puVar48[-0x3f];
      temp_v38 = puVar48[1];
      temp_v40 = ~temp_v39;
      temp_v58 = (unsigned char)temp_v35;
      temp_v59 = (unsigned char)(temp_v35 >> 8);
      temp_v60 = (unsigned char)(temp_v35 >> 0x10);
      temp_v2 = (unsigned char)(temp_v35 >> 0x18);
      temp_v55 = (unsigned char)temp_v37;
      temp_v63 = (unsigned char)temp_v38;
      temp_v56 = (unsigned char)(temp_v37 >> 8);
      temp_v62 = (unsigned char)(temp_v38 >> 8);
      temp_v57 = (unsigned char)(temp_v37 >> 0x10);
      temp_v61 = (unsigned char)(temp_v38 >> 0x10);
      temp_v1 = (unsigned char)(temp_v37 >> 0x18);
      temp_v3 = (unsigned char)(temp_v38 >> 0x18);
      temp_v9 = UnsignedSaturate(temp_v58 - temp_v55,0x10);
      temp_v14 = UnsignedSaturate(temp_v59 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v60 - temp_v57,0x10);
      temp_v23 = UnsignedSaturate(temp_v2 - temp_v1,0x10);
      temp_v10 = UnsignedSaturate(temp_v55 - temp_v58,0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v59,0x10);
      temp_v20 = UnsignedSaturate(temp_v57 - temp_v60,0x10);
      temp_v24 = UnsignedSaturate(temp_v1 - temp_v2,0x10);
      temp_v7 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v40 + (unsigned short)temp_v58) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v12 = UnsignedSaturate(temp_v7 - ' ',0x10);
      temp_v4 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 8) + (unsigned short)temp_v59) >> 1
                                         ) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v4 - ' ',0x10);
      temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x10) + (unsigned short)temp_v60)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v21 = UnsignedSaturate(temp_v6 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x18) + (unsigned short)temp_v2)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v25 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v60 = (unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8);
      temp_v2 = (unsigned char)temp_v21 | (unsigned char)(temp_v16 >> 8);
      temp_v13 = UnsignedSaturate(' ' - temp_v7,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v4,0x10);
      temp_v21 = UnsignedSaturate(' ' - temp_v6,0x10);
      temp_v25 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v59 = (unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8);
      temp_v58 = (unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8);
      temp_v64 = (char)((unsigned short)((unsigned short)temp_v55 + (unsigned short)temp_v63) >> 1);
      temp_v8 = UnsignedSaturate(temp_v64 + temp_v12,0x10);
      temp_v6 = (char)((unsigned short)((unsigned short)temp_v56 + (unsigned short)temp_v62) >> 1);
      temp_v21 = UnsignedSaturate(temp_v6 + (char)temp_v16,0x10);
      temp_v4 = (char)((unsigned short)((unsigned short)temp_v57 + (unsigned short)temp_v61) >> 1);
      temp_v25 = UnsignedSaturate(temp_v4 + temp_v2,0x10);
      temp_v7 = (char)((unsigned short)((unsigned short)temp_v1 + (unsigned short)temp_v3) >> 1);
      temp_v5 = UnsignedSaturate(temp_v7 + temp_v60,0x10);
      temp_v11 = UnsignedSaturate(temp_v8 - temp_v13,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v21 - (char)temp_v17,0x10);
      temp_v22 = UnsignedSaturate(((unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8)) - temp_v58,0x10);
      temp_v26 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v25 >> 8)) - temp_v59,0x10);
      temp_v35 = ((unsigned int)temp_v26 << 0x18) | ((unsigned int)temp_v22 << 0x10) | ((unsigned int)temp_v18 << 8) | (unsigned int)temp_v11;
      temp_v8 = UnsignedSaturate(temp_v64 - temp_v12,0x10);
      temp_v21 = UnsignedSaturate(temp_v6 - (char)temp_v16,0x10);
      temp_v5 = UnsignedSaturate(temp_v4 - temp_v2,0x10);
      temp_v27 = UnsignedSaturate(temp_v7 - temp_v60,0x10);
      temp_v7 = UnsignedSaturate(temp_v63 - (char)temp_v39,0x10);
      temp_v64 = (char)(temp_v39 >> 8);
      temp_v25 = UnsignedSaturate(temp_v62 - temp_v64,0x10);
      temp_v6 = (char)(temp_v39 >> 0x10);
      temp_v16 = UnsignedSaturate(temp_v61 - temp_v6,0x10);
      temp_v4 = (char)(temp_v39 >> 0x18);
      temp_v28 = UnsignedSaturate(temp_v3 - temp_v4,0x10);
      temp_v2 = UnsignedSaturate(temp_v8 + temp_v13,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v21 + (char)temp_v17,0x10);
      temp_v22 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v21 >> 8)) + temp_v58,0x10);
      temp_v26 = UnsignedSaturate(((unsigned char)temp_v27 | (unsigned char)(temp_v5 >> 8)) + temp_v59,0x10);
      temp_v40 = ((unsigned int)temp_v26 << 0x18) | ((unsigned int)temp_v22 << 0x10) | ((unsigned int)temp_v18 << 8) | (unsigned int)temp_v2;
      temp_v8 = UnsignedSaturate((char)temp_v39 - temp_v63,0x10);
      temp_v21 = UnsignedSaturate(temp_v64 - temp_v62,0x10);
      temp_v17 = UnsignedSaturate(temp_v6 - temp_v61,0x10);
      temp_v27 = UnsignedSaturate(temp_v4 - temp_v3,0x10);
      temp_v49 = -1 < (int)(char)(temp_v10 + temp_v9) - (int)temp_v30;
      temp_v50 = -1 < (int)(char)((char)temp_v15 + (char)temp_v14) - (int)temp_v33;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v29;
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) +
                               ((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8))) - (int)temp_v66;
      temp_v35 = ((temp_v49 * temp_v37 + !temp_v49 * temp_v35) & 0xff) |
               ((temp_v50 * temp_v37 + !temp_v50 * temp_v35) & 0xff00) |
               ((temp_v51 * temp_v37 + !temp_v51 * temp_v35) & 0xff0000) |
               ((temp_v52 * temp_v37 + !temp_v52 * temp_v35) & 0xff000000);
      temp_v39 = ((temp_v49 * temp_v38 + !temp_v49 * temp_v40) & 0xff) |
               ((temp_v50 * temp_v38 + !temp_v50 * temp_v40) & 0xff00) |
               ((temp_v51 * temp_v38 + !temp_v51 * temp_v40) & 0xff0000) |
               ((temp_v52 * temp_v38 + !temp_v52 * temp_v40) & 0xff000000);
      temp_v64 = UnsignedSaturate(temp_v55 - temp_v63,0x10);
      temp_v5 = UnsignedSaturate(temp_v56 - temp_v62,0x10);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v61,0x10);
      temp_v20 = UnsignedSaturate(temp_v1 - temp_v3,0x10);
      temp_v6 = UnsignedSaturate(temp_v63 - temp_v55,0x10);
      temp_v14 = UnsignedSaturate(temp_v62 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v61 - temp_v57,0x10);
      temp_v23 = UnsignedSaturate(temp_v3 - temp_v1,0x10);
      temp_v49 = -1 < (int)(char)(temp_v8 + temp_v7) - (int)temp_v30;
      temp_v50 = -1 < (int)(char)((char)temp_v21 + (char)temp_v25) - (int)temp_v33;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v17 | (unsigned char)(temp_v21 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v25 >> 8))) - (int)temp_v29;
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v27 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v28 | (unsigned char)(temp_v16 >> 8))) - (int)temp_v66;
      temp_v35 = ((temp_v49 * temp_v37 + !temp_v49 * temp_v35) & 0xff) |
               ((temp_v50 * temp_v37 + !temp_v50 * temp_v35) & 0xff00) |
               ((temp_v51 * temp_v37 + !temp_v51 * temp_v35) & 0xff0000) |
               ((temp_v52 * temp_v37 + !temp_v52 * temp_v35) & 0xff000000);
      temp_v39 = ((temp_v49 * temp_v38 + !temp_v49 * temp_v39) & 0xff) |
               ((temp_v50 * temp_v38 + !temp_v50 * temp_v39) & 0xff00) |
               ((temp_v51 * temp_v38 + !temp_v51 * temp_v39) & 0xff0000) |
               ((temp_v52 * temp_v38 + !temp_v52 * temp_v39) & 0xff000000);
      temp_v49 = -1 < (int)(char)(temp_v64 + temp_v6) - (int)temp_v32;
      temp_v50 = -1 < (int)(char)((char)temp_v5 + (char)temp_v14) - (int)temp_v34;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v15 | (unsigned char)(temp_v5 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v31;
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8))) - (int)temp_v65;
      puVar48[-0x3f] =
           ((temp_v49 * temp_v37 + !temp_v49 * temp_v35) & 0xff) |
           ((temp_v50 * temp_v37 + !temp_v50 * temp_v35) & 0xff00) |
           ((temp_v51 * temp_v37 + !temp_v51 * temp_v35) & 0xff0000) |
           ((temp_v52 * temp_v37 + !temp_v52 * temp_v35) & 0xff000000);
      puVar48[1] = ((temp_v49 * temp_v38 + !temp_v49 * temp_v39) & 0xff) |
                   ((temp_v50 * temp_v38 + !temp_v50 * temp_v39) & 0xff00) |
                   ((temp_v51 * temp_v38 + !temp_v51 * temp_v39) & 0xff0000) |
                   ((temp_v52 * temp_v38 + !temp_v52 * temp_v39) & 0xff000000);
      HintPreloadData(puVar48 + 8);
      temp_v35 = puVar48[-0x7e];
      temp_v39 = puVar48[0x42];
      temp_v37 = puVar48[-0x3e];
      temp_v38 = puVar48[2];
      temp_v40 = ~temp_v39;
      temp_v2 = (unsigned char)temp_v35;
      temp_v60 = (unsigned char)(temp_v35 >> 8);
      temp_v59 = (unsigned char)(temp_v35 >> 0x10);
      temp_v58 = (unsigned char)(temp_v35 >> 0x18);
      temp_v1 = (unsigned char)temp_v37;
      temp_v3 = (unsigned char)temp_v38;
      temp_v57 = (unsigned char)(temp_v37 >> 8);
      temp_v61 = (unsigned char)(temp_v38 >> 8);
      temp_v55 = (unsigned char)(temp_v37 >> 0x10);
      temp_v62 = (unsigned char)(temp_v38 >> 0x10);
      temp_v56 = (unsigned char)(temp_v37 >> 0x18);
      temp_v63 = (unsigned char)(temp_v38 >> 0x18);
      temp_v9 = UnsignedSaturate(temp_v2 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v60 - temp_v57,0x10);
      temp_v19 = UnsignedSaturate(temp_v59 - temp_v55,0x10);
      temp_v23 = UnsignedSaturate(temp_v58 - temp_v56,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v2,0x10);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v60,0x10);
      temp_v20 = UnsignedSaturate(temp_v55 - temp_v59,0x10);
      temp_v24 = UnsignedSaturate(temp_v56 - temp_v58,0x10);
      temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v40 + (unsigned short)temp_v2) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v12 = UnsignedSaturate(temp_v6 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 8) + (unsigned short)temp_v60) >> 1
                                         ) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v4 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x10) + (unsigned short)temp_v59)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v21 = UnsignedSaturate(temp_v4 - ' ',0x10);
      temp_v7 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x18) + (unsigned short)temp_v58)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v25 = UnsignedSaturate(temp_v7 - ' ',0x10);
      temp_v2 = (unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8);
      temp_v60 = (unsigned char)temp_v21 | (unsigned char)(temp_v16 >> 8);
      temp_v13 = UnsignedSaturate(' ' - temp_v6,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v21 = UnsignedSaturate(' ' - temp_v4,0x10);
      temp_v25 = UnsignedSaturate(' ' - temp_v7,0x10);
      temp_v59 = (unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8);
      temp_v58 = (unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8);
      temp_v64 = (char)((unsigned short)((unsigned short)temp_v1 + (unsigned short)temp_v3) >> 1);
      temp_v8 = UnsignedSaturate(temp_v64 + temp_v12,0x10);
      temp_v6 = (char)((unsigned short)((unsigned short)temp_v57 + (unsigned short)temp_v61) >> 1);
      temp_v21 = UnsignedSaturate(temp_v6 + (char)temp_v16,0x10);
      temp_v4 = (char)((unsigned short)((unsigned short)temp_v55 + (unsigned short)temp_v62) >> 1);
      temp_v25 = UnsignedSaturate(temp_v4 + temp_v60,0x10);
      temp_v7 = (char)((unsigned short)((unsigned short)temp_v56 + (unsigned short)temp_v63) >> 1);
      temp_v5 = UnsignedSaturate(temp_v7 + temp_v2,0x10);
      temp_v11 = UnsignedSaturate(temp_v8 - temp_v13,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v21 - (char)temp_v17,0x10);
      temp_v22 = UnsignedSaturate(((unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8)) - temp_v58,0x10);
      temp_v26 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v25 >> 8)) - temp_v59,0x10);
      temp_v35 = ((unsigned int)temp_v26 << 0x18) | ((unsigned int)temp_v22 << 0x10) | ((unsigned int)temp_v18 << 8) | (unsigned int)temp_v11;
      temp_v8 = UnsignedSaturate(temp_v64 - temp_v12,0x10);
      temp_v21 = UnsignedSaturate(temp_v6 - (char)temp_v16,0x10);
      temp_v5 = UnsignedSaturate(temp_v4 - temp_v60,0x10);
      temp_v27 = UnsignedSaturate(temp_v7 - temp_v2,0x10);
      temp_v7 = UnsignedSaturate(temp_v3 - (char)temp_v39,0x10);
      temp_v64 = (char)(temp_v39 >> 8);
      temp_v25 = UnsignedSaturate(temp_v61 - temp_v64,0x10);
      temp_v6 = (char)(temp_v39 >> 0x10);
      temp_v16 = UnsignedSaturate(temp_v62 - temp_v6,0x10);
      temp_v4 = (char)(temp_v39 >> 0x18);
      temp_v28 = UnsignedSaturate(temp_v63 - temp_v4,0x10);
      temp_v2 = UnsignedSaturate(temp_v8 + temp_v13,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v21 + (char)temp_v17,0x10);
      temp_v22 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v21 >> 8)) + temp_v58,0x10);
      temp_v26 = UnsignedSaturate(((unsigned char)temp_v27 | (unsigned char)(temp_v5 >> 8)) + temp_v59,0x10);
      temp_v40 = ((unsigned int)temp_v26 << 0x18) | ((unsigned int)temp_v22 << 0x10) | ((unsigned int)temp_v18 << 8) | (unsigned int)temp_v2;
      temp_v8 = UnsignedSaturate((char)temp_v39 - temp_v3,0x10);
      temp_v21 = UnsignedSaturate(temp_v64 - temp_v61,0x10);
      temp_v17 = UnsignedSaturate(temp_v6 - temp_v62,0x10);
      temp_v27 = UnsignedSaturate(temp_v4 - temp_v63,0x10);
      temp_v49 = -1 < (int)(char)(temp_v10 + temp_v9) - (int)temp_v30;
      temp_v50 = -1 < (int)(char)((char)temp_v15 + (char)temp_v14) - (int)temp_v33;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v29;
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) +
                               ((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8))) - (int)temp_v66;
      temp_v35 = ((temp_v49 * temp_v37 + !temp_v49 * temp_v35) & 0xff) |
               ((temp_v50 * temp_v37 + !temp_v50 * temp_v35) & 0xff00) |
               ((temp_v51 * temp_v37 + !temp_v51 * temp_v35) & 0xff0000) |
               ((temp_v52 * temp_v37 + !temp_v52 * temp_v35) & 0xff000000);
      temp_v39 = ((temp_v49 * temp_v38 + !temp_v49 * temp_v40) & 0xff) |
               ((temp_v50 * temp_v38 + !temp_v50 * temp_v40) & 0xff00) |
               ((temp_v51 * temp_v38 + !temp_v51 * temp_v40) & 0xff0000) |
               ((temp_v52 * temp_v38 + !temp_v52 * temp_v40) & 0xff000000);
      temp_v64 = UnsignedSaturate(temp_v1 - temp_v3,0x10);
      temp_v5 = UnsignedSaturate(temp_v57 - temp_v61,0x10);
      temp_v15 = UnsignedSaturate(temp_v55 - temp_v62,0x10);
      temp_v20 = UnsignedSaturate(temp_v56 - temp_v63,0x10);
      temp_v6 = UnsignedSaturate(temp_v3 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v61 - temp_v57,0x10);
      temp_v19 = UnsignedSaturate(temp_v62 - temp_v55,0x10);
      temp_v23 = UnsignedSaturate(temp_v63 - temp_v56,0x10);
      temp_v49 = -1 < (int)(char)(temp_v8 + temp_v7) - (int)temp_v30;
      temp_v50 = -1 < (int)(char)((char)temp_v21 + (char)temp_v25) - (int)temp_v33;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v17 | (unsigned char)(temp_v21 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v25 >> 8))) - (int)temp_v29;
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v27 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v28 | (unsigned char)(temp_v16 >> 8))) - (int)temp_v66;
      temp_v35 = ((temp_v49 * temp_v37 + !temp_v49 * temp_v35) & 0xff) |
               ((temp_v50 * temp_v37 + !temp_v50 * temp_v35) & 0xff00) |
               ((temp_v51 * temp_v37 + !temp_v51 * temp_v35) & 0xff0000) |
               ((temp_v52 * temp_v37 + !temp_v52 * temp_v35) & 0xff000000);
      temp_v39 = ((temp_v49 * temp_v38 + !temp_v49 * temp_v39) & 0xff) |
               ((temp_v50 * temp_v38 + !temp_v50 * temp_v39) & 0xff00) |
               ((temp_v51 * temp_v38 + !temp_v51 * temp_v39) & 0xff0000) |
               ((temp_v52 * temp_v38 + !temp_v52 * temp_v39) & 0xff000000);
      temp_v49 = -1 < (int)(char)(temp_v64 + temp_v6) - (int)temp_v32;
      temp_v50 = -1 < (int)(char)((char)temp_v5 + (char)temp_v14) - (int)temp_v34;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v15 | (unsigned char)(temp_v5 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v31;
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8))) - (int)temp_v65;
      puVar48[-0x3e] =
           ((temp_v49 * temp_v37 + !temp_v49 * temp_v35) & 0xff) |
           ((temp_v50 * temp_v37 + !temp_v50 * temp_v35) & 0xff00) |
           ((temp_v51 * temp_v37 + !temp_v51 * temp_v35) & 0xff0000) |
           ((temp_v52 * temp_v37 + !temp_v52 * temp_v35) & 0xff000000);
      puVar48[2] = ((temp_v49 * temp_v38 + !temp_v49 * temp_v39) & 0xff) |
                   ((temp_v50 * temp_v38 + !temp_v50 * temp_v39) & 0xff00) |
                   ((temp_v51 * temp_v38 + !temp_v51 * temp_v39) & 0xff0000) |
                   ((temp_v52 * temp_v38 + !temp_v52 * temp_v39) & 0xff000000);
      HintPreloadData(puVar48 + 0x48);
      temp_v35 = puVar48[-0x7d];
      temp_v39 = puVar48[0x43];
      temp_v37 = puVar48[-0x3d];
      temp_v38 = puVar48[3];
      temp_v40 = ~temp_v39;
      temp_v2 = (unsigned char)temp_v35;
      temp_v60 = (unsigned char)(temp_v35 >> 8);
      temp_v59 = (unsigned char)(temp_v35 >> 0x10);
      temp_v58 = (unsigned char)(temp_v35 >> 0x18);
      temp_v55 = (unsigned char)temp_v37;
      temp_v62 = (unsigned char)temp_v38;
      temp_v56 = (unsigned char)(temp_v37 >> 8);
      temp_v61 = (unsigned char)(temp_v38 >> 8);
      temp_v57 = (unsigned char)(temp_v37 >> 0x10);
      temp_v63 = (unsigned char)(temp_v38 >> 0x10);
      temp_v1 = (unsigned char)(temp_v37 >> 0x18);
      temp_v3 = (unsigned char)(temp_v38 >> 0x18);
      temp_v9 = UnsignedSaturate(temp_v2 - temp_v55,0x10);
      temp_v14 = UnsignedSaturate(temp_v60 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v59 - temp_v57,0x10);
      temp_v23 = UnsignedSaturate(temp_v58 - temp_v1,0x10);
      temp_v10 = UnsignedSaturate(temp_v55 - temp_v2,0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v60,0x10);
      temp_v20 = UnsignedSaturate(temp_v57 - temp_v59,0x10);
      temp_v24 = UnsignedSaturate(temp_v1 - temp_v58,0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v40 + (unsigned short)temp_v2) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v12 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 8) + (unsigned short)temp_v60) >> 1
                                         ) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v6 - ' ',0x10);
      temp_v4 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x10) + (unsigned short)temp_v59)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v21 = UnsignedSaturate(temp_v4 - ' ',0x10);
      temp_v7 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x18) + (unsigned short)temp_v58)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v25 = UnsignedSaturate(temp_v7 - ' ',0x10);
      temp_v2 = (unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8);
      temp_v60 = (unsigned char)temp_v21 | (unsigned char)(temp_v16 >> 8);
      temp_v13 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v6,0x10);
      temp_v21 = UnsignedSaturate(' ' - temp_v4,0x10);
      temp_v25 = UnsignedSaturate(' ' - temp_v7,0x10);
      temp_v59 = (unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8);
      temp_v58 = (unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8);
      temp_v7 = (char)((unsigned short)((unsigned short)temp_v55 + (unsigned short)temp_v62) >> 1);
      temp_v8 = UnsignedSaturate(temp_v7 + temp_v12,0x10);
      temp_v64 = (char)((unsigned short)((unsigned short)temp_v56 + (unsigned short)temp_v61) >> 1);
      temp_v21 = UnsignedSaturate(temp_v64 + (char)temp_v16,0x10);
      temp_v4 = (char)((unsigned short)((unsigned short)temp_v57 + (unsigned short)temp_v63) >> 1);
      temp_v25 = UnsignedSaturate(temp_v4 + temp_v60,0x10);
      temp_v6 = (char)((unsigned short)((unsigned short)temp_v1 + (unsigned short)temp_v3) >> 1);
      temp_v5 = UnsignedSaturate(temp_v6 + temp_v2,0x10);
      temp_v11 = UnsignedSaturate(temp_v8 - temp_v13,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v21 - (char)temp_v17,0x10);
      temp_v22 = UnsignedSaturate(((unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8)) - temp_v58,0x10);
      temp_v26 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v25 >> 8)) - temp_v59,0x10);
      temp_v35 = ((unsigned int)temp_v26 << 0x18) | ((unsigned int)temp_v22 << 0x10) | ((unsigned int)temp_v18 << 8) | (unsigned int)temp_v11;
      temp_v7 = UnsignedSaturate(temp_v7 - temp_v12,0x10);
      temp_v21 = UnsignedSaturate(temp_v64 - (char)temp_v16,0x10);
      temp_v5 = UnsignedSaturate(temp_v4 - temp_v60,0x10);
      temp_v27 = UnsignedSaturate(temp_v6 - temp_v2,0x10);
      temp_v8 = UnsignedSaturate(temp_v62 - (char)temp_v39,0x10);
      temp_v64 = (char)(temp_v39 >> 8);
      temp_v25 = UnsignedSaturate(temp_v61 - temp_v64,0x10);
      temp_v6 = (char)(temp_v39 >> 0x10);
      temp_v16 = UnsignedSaturate(temp_v63 - temp_v6,0x10);
      temp_v4 = (char)(temp_v39 >> 0x18);
      temp_v28 = UnsignedSaturate(temp_v3 - temp_v4,0x10);
      temp_v2 = UnsignedSaturate(temp_v7 + temp_v13,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v21 + (char)temp_v17,0x10);
      temp_v22 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v21 >> 8)) + temp_v58,0x10);
      temp_v26 = UnsignedSaturate(((unsigned char)temp_v27 | (unsigned char)(temp_v5 >> 8)) + temp_v59,0x10);
      temp_v40 = ((unsigned int)temp_v26 << 0x18) | ((unsigned int)temp_v22 << 0x10) | ((unsigned int)temp_v18 << 8) | (unsigned int)temp_v2;
      temp_v7 = UnsignedSaturate((char)temp_v39 - temp_v62,0x10);
      temp_v21 = UnsignedSaturate(temp_v64 - temp_v61,0x10);
      temp_v17 = UnsignedSaturate(temp_v6 - temp_v63,0x10);
      temp_v27 = UnsignedSaturate(temp_v4 - temp_v3,0x10);
      temp_v49 = -1 < (int)(char)(temp_v10 + temp_v9) - (int)temp_v30;
      temp_v50 = -1 < (int)(char)((char)temp_v15 + (char)temp_v14) - (int)temp_v33;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v29;
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) +
                               ((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8))) - (int)temp_v66;
      temp_v35 = ((temp_v49 * temp_v37 + !temp_v49 * temp_v35) & 0xff) |
               ((temp_v50 * temp_v37 + !temp_v50 * temp_v35) & 0xff00) |
               ((temp_v51 * temp_v37 + !temp_v51 * temp_v35) & 0xff0000) |
               ((temp_v52 * temp_v37 + !temp_v52 * temp_v35) & 0xff000000);
      temp_v39 = ((temp_v49 * temp_v38 + !temp_v49 * temp_v40) & 0xff) |
               ((temp_v50 * temp_v38 + !temp_v50 * temp_v40) & 0xff00) |
               ((temp_v51 * temp_v38 + !temp_v51 * temp_v40) & 0xff0000) |
               ((temp_v52 * temp_v38 + !temp_v52 * temp_v40) & 0xff000000);
      temp_v64 = UnsignedSaturate(temp_v55 - temp_v62,0x10);
      temp_v5 = UnsignedSaturate(temp_v56 - temp_v61,0x10);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v63,0x10);
      temp_v20 = UnsignedSaturate(temp_v1 - temp_v3,0x10);
      temp_v6 = UnsignedSaturate(temp_v62 - temp_v55,0x10);
      temp_v14 = UnsignedSaturate(temp_v61 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v63 - temp_v57,0x10);
      temp_v23 = UnsignedSaturate(temp_v3 - temp_v1,0x10);
      temp_v49 = -1 < (int)(char)(temp_v7 + temp_v8) - (int)temp_v30;
      temp_v50 = -1 < (int)(char)((char)temp_v21 + (char)temp_v25) - (int)temp_v33;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v17 | (unsigned char)(temp_v21 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v25 >> 8))) - (int)temp_v29;
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v27 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v28 | (unsigned char)(temp_v16 >> 8))) - (int)temp_v66;
      temp_v35 = ((temp_v49 * temp_v37 + !temp_v49 * temp_v35) & 0xff) |
               ((temp_v50 * temp_v37 + !temp_v50 * temp_v35) & 0xff00) |
               ((temp_v51 * temp_v37 + !temp_v51 * temp_v35) & 0xff0000) |
               ((temp_v52 * temp_v37 + !temp_v52 * temp_v35) & 0xff000000);
      temp_v39 = ((temp_v49 * temp_v38 + !temp_v49 * temp_v39) & 0xff) |
               ((temp_v50 * temp_v38 + !temp_v50 * temp_v39) & 0xff00) |
               ((temp_v51 * temp_v38 + !temp_v51 * temp_v39) & 0xff0000) |
               ((temp_v52 * temp_v38 + !temp_v52 * temp_v39) & 0xff000000);
      temp_v49 = -1 < (int)(char)(temp_v64 + temp_v6) - (int)temp_v32;
      temp_v50 = -1 < (int)(char)((char)temp_v5 + (char)temp_v14) - (int)temp_v34;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v15 | (unsigned char)(temp_v5 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v31;
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8))) - (int)temp_v65;
      puVar48[-0x3d] =
           ((temp_v49 * temp_v37 + !temp_v49 * temp_v35) & 0xff) |
           ((temp_v50 * temp_v37 + !temp_v50 * temp_v35) & 0xff00) |
           ((temp_v51 * temp_v37 + !temp_v51 * temp_v35) & 0xff0000) |
           ((temp_v52 * temp_v37 + !temp_v52 * temp_v35) & 0xff000000);
      puVar48[3] = ((temp_v49 * temp_v38 + !temp_v49 * temp_v39) & 0xff) |
                   ((temp_v50 * temp_v38 + !temp_v50 * temp_v39) & 0xff00) |
                   ((temp_v51 * temp_v38 + !temp_v51 * temp_v39) & 0xff0000) |
                   ((temp_v52 * temp_v38 + !temp_v52 * temp_v39) & 0xff000000);
      puVar49 = puVar48 + 4;
      temp_v35 = temp_v53 - 0x10;
    } while (temp_v35 != 0 && (int)temp_v53 >= 0x10);
    if ((int)temp_v53 >= 0x10) {
      temp_v35 = puVar48[-0x7c];
      temp_v39 = puVar48[0x44];
      temp_v37 = puVar48[-0x3c];
      temp_v38 = *puVar49;
      temp_v40 = ~temp_v39;
      temp_v2 = (unsigned char)temp_v35;
      temp_v60 = (unsigned char)(temp_v35 >> 8);
      temp_v59 = (unsigned char)(temp_v35 >> 0x10);
      temp_v58 = (unsigned char)(temp_v35 >> 0x18);
      temp_v55 = (unsigned char)temp_v37;
      temp_v3 = (unsigned char)temp_v38;
      temp_v56 = (unsigned char)(temp_v37 >> 8);
      temp_v61 = (unsigned char)(temp_v38 >> 8);
      temp_v57 = (unsigned char)(temp_v37 >> 0x10);
      temp_v63 = (unsigned char)(temp_v38 >> 0x10);
      temp_v1 = (unsigned char)(temp_v37 >> 0x18);
      temp_v62 = (unsigned char)(temp_v38 >> 0x18);
      temp_v9 = UnsignedSaturate(temp_v2 - temp_v55,0x10);
      temp_v14 = UnsignedSaturate(temp_v60 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v59 - temp_v57,0x10);
      temp_v23 = UnsignedSaturate(temp_v58 - temp_v1,0x10);
      temp_v10 = UnsignedSaturate(temp_v55 - temp_v2,0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v60,0x10);
      temp_v20 = UnsignedSaturate(temp_v57 - temp_v59,0x10);
      temp_v24 = UnsignedSaturate(temp_v1 - temp_v58,0x10);
      temp_v4 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v40 + (unsigned short)temp_v2) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v12 = UnsignedSaturate(temp_v4 - ' ',0x10);
      temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 8) + (unsigned short)temp_v60) >> 1
                                         ) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v6 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x10) + (unsigned short)temp_v59)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v21 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v7 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v40 >> 0x18) + (unsigned short)temp_v58)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v25 = UnsignedSaturate(temp_v7 - ' ',0x10);
      temp_v60 = (unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8);
      temp_v2 = (unsigned char)temp_v21 | (unsigned char)(temp_v16 >> 8);
      temp_v13 = UnsignedSaturate(' ' - temp_v4,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v6,0x10);
      temp_v21 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v25 = UnsignedSaturate(' ' - temp_v7,0x10);
      temp_v59 = (unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8);
      temp_v58 = (unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8);
      temp_v64 = (char)((unsigned short)((unsigned short)temp_v55 + (unsigned short)temp_v3) >> 1);
      temp_v8 = UnsignedSaturate(temp_v64 + temp_v12,0x10);
      temp_v6 = (char)((unsigned short)((unsigned short)temp_v56 + (unsigned short)temp_v61) >> 1);
      temp_v21 = UnsignedSaturate(temp_v6 + (char)temp_v16,0x10);
      temp_v4 = (char)((unsigned short)((unsigned short)temp_v57 + (unsigned short)temp_v63) >> 1);
      temp_v25 = UnsignedSaturate(temp_v4 + temp_v2,0x10);
      temp_v7 = (char)((unsigned short)((unsigned short)temp_v1 + (unsigned short)temp_v62) >> 1);
      temp_v5 = UnsignedSaturate(temp_v7 + temp_v60,0x10);
      temp_v11 = UnsignedSaturate(temp_v8 - temp_v13,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v21 - (char)temp_v17,0x10);
      temp_v22 = UnsignedSaturate(((unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8)) - temp_v58,0x10);
      temp_v26 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v25 >> 8)) - temp_v59,0x10);
      temp_v35 = ((unsigned int)temp_v26 << 0x18) | ((unsigned int)temp_v22 << 0x10) | ((unsigned int)temp_v18 << 8) | (unsigned int)temp_v11;
      temp_v8 = UnsignedSaturate(temp_v64 - temp_v12,0x10);
      temp_v21 = UnsignedSaturate(temp_v6 - (char)temp_v16,0x10);
      temp_v5 = UnsignedSaturate(temp_v4 - temp_v2,0x10);
      temp_v27 = UnsignedSaturate(temp_v7 - temp_v60,0x10);
      temp_v7 = UnsignedSaturate(temp_v3 - (char)temp_v39,0x10);
      temp_v64 = (char)(temp_v39 >> 8);
      temp_v25 = UnsignedSaturate(temp_v61 - temp_v64,0x10);
      temp_v6 = (char)(temp_v39 >> 0x10);
      temp_v16 = UnsignedSaturate(temp_v63 - temp_v6,0x10);
      temp_v4 = (char)(temp_v39 >> 0x18);
      temp_v28 = UnsignedSaturate(temp_v62 - temp_v4,0x10);
      temp_v2 = UnsignedSaturate(temp_v8 + temp_v13,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v21 + (char)temp_v17,0x10);
      temp_v22 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v21 >> 8)) + temp_v58,0x10);
      temp_v26 = UnsignedSaturate(((unsigned char)temp_v27 | (unsigned char)(temp_v5 >> 8)) + temp_v59,0x10);
      temp_v40 = ((unsigned int)temp_v26 << 0x18) | ((unsigned int)temp_v22 << 0x10) | ((unsigned int)temp_v18 << 8) | (unsigned int)temp_v2;
      temp_v8 = UnsignedSaturate((char)temp_v39 - temp_v3,0x10);
      temp_v21 = UnsignedSaturate(temp_v64 - temp_v61,0x10);
      temp_v17 = UnsignedSaturate(temp_v6 - temp_v63,0x10);
      temp_v27 = UnsignedSaturate(temp_v4 - temp_v62,0x10);
      temp_v49 = -1 < (int)(char)(temp_v10 + temp_v9) - (int)temp_v30;
      temp_v50 = -1 < (int)(char)((char)temp_v15 + (char)temp_v14) - (int)temp_v33;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v29;
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) +
                               ((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8))) - (int)temp_v66;
      temp_v35 = ((temp_v49 * temp_v37 + !temp_v49 * temp_v35) & 0xff) |
               ((temp_v50 * temp_v37 + !temp_v50 * temp_v35) & 0xff00) |
               ((temp_v51 * temp_v37 + !temp_v51 * temp_v35) & 0xff0000) |
               ((temp_v52 * temp_v37 + !temp_v52 * temp_v35) & 0xff000000);
      temp_v39 = ((temp_v49 * temp_v38 + !temp_v49 * temp_v40) & 0xff) |
               ((temp_v50 * temp_v38 + !temp_v50 * temp_v40) & 0xff00) |
               ((temp_v51 * temp_v38 + !temp_v51 * temp_v40) & 0xff0000) |
               ((temp_v52 * temp_v38 + !temp_v52 * temp_v40) & 0xff000000);
      temp_v64 = UnsignedSaturate(temp_v55 - temp_v3,0x10);
      temp_v5 = UnsignedSaturate(temp_v56 - temp_v61,0x10);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v63,0x10);
      temp_v20 = UnsignedSaturate(temp_v1 - temp_v62,0x10);
      temp_v6 = UnsignedSaturate(temp_v3 - temp_v55,0x10);
      temp_v14 = UnsignedSaturate(temp_v61 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v63 - temp_v57,0x10);
      temp_v23 = UnsignedSaturate(temp_v62 - temp_v1,0x10);
      temp_v49 = -1 < (int)(char)(temp_v8 + temp_v7) - (int)temp_v30;
      temp_v50 = -1 < (int)(char)((char)temp_v21 + (char)temp_v25) - (int)temp_v33;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v17 | (unsigned char)(temp_v21 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v25 >> 8))) - (int)temp_v29;
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v27 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v28 | (unsigned char)(temp_v16 >> 8))) - (int)temp_v66;
      temp_v35 = ((temp_v49 * temp_v37 + !temp_v49 * temp_v35) & 0xff) |
               ((temp_v50 * temp_v37 + !temp_v50 * temp_v35) & 0xff00) |
               ((temp_v51 * temp_v37 + !temp_v51 * temp_v35) & 0xff0000) |
               ((temp_v52 * temp_v37 + !temp_v52 * temp_v35) & 0xff000000);
      temp_v39 = ((temp_v49 * temp_v38 + !temp_v49 * temp_v39) & 0xff) |
               ((temp_v50 * temp_v38 + !temp_v50 * temp_v39) & 0xff00) |
               ((temp_v51 * temp_v38 + !temp_v51 * temp_v39) & 0xff0000) |
               ((temp_v52 * temp_v38 + !temp_v52 * temp_v39) & 0xff000000);
      temp_v49 = -1 < (int)(char)(temp_v64 + temp_v6) - (int)temp_v32;
      temp_v50 = -1 < (int)(char)((char)temp_v5 + (char)temp_v14) - (int)temp_v34;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v15 | (unsigned char)(temp_v5 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v31;
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8))) - (int)temp_v65;
      puVar48[-0x3c] =
           ((temp_v49 * temp_v37 + !temp_v49 * temp_v35) & 0xff) |
           ((temp_v50 * temp_v37 + !temp_v50 * temp_v35) & 0xff00) |
           ((temp_v51 * temp_v37 + !temp_v51 * temp_v35) & 0xff0000) |
           ((temp_v52 * temp_v37 + !temp_v52 * temp_v35) & 0xff000000);
      *puVar49 = ((temp_v49 * temp_v38 + !temp_v49 * temp_v39) & 0xff) |
                 ((temp_v50 * temp_v38 + !temp_v50 * temp_v39) & 0xff00) |
                 ((temp_v51 * temp_v38 + !temp_v51 * temp_v39) & 0xff0000) |
                 ((temp_v52 * temp_v38 + !temp_v52 * temp_v39) & 0xff000000);
      temp_v35 = puVar48[-0x7b];
      temp_v37 = puVar48[0x45];
      temp_v39 = puVar48[-0x3b];
      temp_v40 = puVar48[5];
      temp_v38 = ~temp_v37;
      temp_v58 = (unsigned char)temp_v35;
      temp_v59 = (unsigned char)(temp_v35 >> 8);
      temp_v60 = (unsigned char)(temp_v35 >> 0x10);
      temp_v2 = (unsigned char)(temp_v35 >> 0x18);
      temp_v1 = (unsigned char)temp_v39;
      temp_v61 = (unsigned char)temp_v40;
      temp_v57 = (unsigned char)(temp_v39 >> 8);
      temp_v62 = (unsigned char)(temp_v40 >> 8);
      temp_v55 = (unsigned char)(temp_v39 >> 0x10);
      temp_v3 = (unsigned char)(temp_v40 >> 0x10);
      temp_v56 = (unsigned char)(temp_v39 >> 0x18);
      temp_v63 = (unsigned char)(temp_v40 >> 0x18);
      temp_v9 = UnsignedSaturate(temp_v58 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v59 - temp_v57,0x10);
      temp_v19 = UnsignedSaturate(temp_v60 - temp_v55,0x10);
      temp_v23 = UnsignedSaturate(temp_v2 - temp_v56,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v58,0x10);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v59,0x10);
      temp_v20 = UnsignedSaturate(temp_v55 - temp_v60,0x10);
      temp_v24 = UnsignedSaturate(temp_v56 - temp_v2,0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v38 + (unsigned short)temp_v58) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v12 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v38 >> 8) + (unsigned short)temp_v59) >> 1
                                         ) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v6 - ' ',0x10);
      temp_v4 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v38 >> 0x10) + (unsigned short)temp_v60)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v21 = UnsignedSaturate(temp_v4 - ' ',0x10);
      temp_v7 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v38 >> 0x18) + (unsigned short)temp_v2)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v25 = UnsignedSaturate(temp_v7 - ' ',0x10);
      temp_v60 = (unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8);
      temp_v2 = (unsigned char)temp_v21 | (unsigned char)(temp_v16 >> 8);
      temp_v13 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v6,0x10);
      temp_v21 = UnsignedSaturate(' ' - temp_v4,0x10);
      temp_v25 = UnsignedSaturate(' ' - temp_v7,0x10);
      temp_v59 = (unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8);
      temp_v58 = (unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8);
      temp_v6 = (char)((unsigned short)((unsigned short)temp_v1 + (unsigned short)temp_v61) >> 1);
      temp_v8 = UnsignedSaturate(temp_v6 + temp_v12,0x10);
      temp_v4 = (char)((unsigned short)((unsigned short)temp_v57 + (unsigned short)temp_v62) >> 1);
      temp_v21 = UnsignedSaturate(temp_v4 + (char)temp_v16,0x10);
      temp_v7 = (char)((unsigned short)((unsigned short)temp_v55 + (unsigned short)temp_v3) >> 1);
      temp_v25 = UnsignedSaturate(temp_v7 + temp_v2,0x10);
      temp_v64 = (char)((unsigned short)((unsigned short)temp_v56 + (unsigned short)temp_v63) >> 1);
      temp_v5 = UnsignedSaturate(temp_v64 + temp_v60,0x10);
      temp_v11 = UnsignedSaturate(temp_v8 - temp_v13,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v21 - (char)temp_v17,0x10);
      temp_v22 = UnsignedSaturate(((unsigned char)temp_v25 | (unsigned char)(temp_v21 >> 8)) - temp_v58,0x10);
      temp_v26 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v25 >> 8)) - temp_v59,0x10);
      temp_v47 = ((unsigned int)temp_v26 << 0x18) | ((unsigned int)temp_v22 << 0x10) | ((unsigned int)temp_v18 << 8) | (unsigned int)temp_v11;
      temp_v8 = UnsignedSaturate(temp_v6 - temp_v12,0x10);
      temp_v21 = UnsignedSaturate(temp_v4 - (char)temp_v16,0x10);
      temp_v5 = UnsignedSaturate(temp_v7 - temp_v2,0x10);
      temp_v27 = UnsignedSaturate(temp_v64 - temp_v60,0x10);
      temp_v7 = UnsignedSaturate(temp_v61 - (char)temp_v37,0x10);
      temp_v4 = (char)(temp_v37 >> 8);
      temp_v25 = UnsignedSaturate(temp_v62 - temp_v4,0x10);
      temp_v64 = (char)(temp_v37 >> 0x10);
      temp_v16 = UnsignedSaturate(temp_v3 - temp_v64,0x10);
      temp_v6 = (char)(temp_v37 >> 0x18);
      temp_v28 = UnsignedSaturate(temp_v63 - temp_v6,0x10);
      temp_v2 = UnsignedSaturate(temp_v8 + temp_v13,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v21 + (char)temp_v17,0x10);
      temp_v22 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v21 >> 8)) + temp_v58,0x10);
      temp_v26 = UnsignedSaturate(((unsigned char)temp_v27 | (unsigned char)(temp_v5 >> 8)) + temp_v59,0x10);
      temp_v48 = ((unsigned int)temp_v26 << 0x18) | ((unsigned int)temp_v22 << 0x10) | ((unsigned int)temp_v18 << 8) | (unsigned int)temp_v2;
      temp_v8 = UnsignedSaturate((char)temp_v37 - temp_v61,0x10);
      temp_v21 = UnsignedSaturate(temp_v4 - temp_v62,0x10);
      temp_v17 = UnsignedSaturate(temp_v64 - temp_v3,0x10);
      temp_v27 = UnsignedSaturate(temp_v6 - temp_v63,0x10);
      temp_v35 = (int)(char)(temp_v10 + temp_v9) - (int)temp_v30;
      temp_v49 = -1 < (int)temp_v35;
      temp_v37 = (int)(char)((char)temp_v15 + (char)temp_v14) - (int)temp_v33;
      temp_v50 = -1 < (int)temp_v37;
      temp_v38 = (int)(char)(((unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8)) +
                          ((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v29;
      temp_v51 = -1 < (int)temp_v38;
      temp_v0 = (int)(char)(((unsigned char)temp_v24 | (unsigned char)(temp_v20 >> 8)) +
                         ((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8))) - (int)temp_v66;
      temp_v52 = -1 < temp_v0;
      temp_v35 = (temp_v0 * 0x1000000) | ((temp_v38 & 0xff) << 0x10) | ((temp_v37 & 0xff) << 8) |
               (temp_v35 & 0xff);
      temp_v37 = ((temp_v49 * temp_v39 + !temp_v49 * temp_v47) & 0xff) |
               ((temp_v50 * temp_v39 + !temp_v50 * temp_v47) & 0xff00) |
               ((temp_v51 * temp_v39 + !temp_v51 * temp_v47) & 0xff0000) |
               ((temp_v52 * temp_v39 + !temp_v52 * temp_v47) & 0xff000000);
      temp_v38 = ((temp_v49 * temp_v40 + !temp_v49 * temp_v48) & 0xff) |
               ((temp_v50 * temp_v40 + !temp_v50 * temp_v48) & 0xff00) |
               ((temp_v51 * temp_v40 + !temp_v51 * temp_v48) & 0xff0000) |
               ((temp_v52 * temp_v40 + !temp_v52 * temp_v48) & 0xff000000);
      temp_v64 = UnsignedSaturate(temp_v1 - temp_v61,0x10);
      temp_v5 = UnsignedSaturate(temp_v57 - temp_v62,0x10);
      temp_v15 = UnsignedSaturate(temp_v55 - temp_v3,0x10);
      temp_v20 = UnsignedSaturate(temp_v56 - temp_v63,0x10);
      temp_v6 = UnsignedSaturate(temp_v61 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v62 - temp_v57,0x10);
      temp_v19 = UnsignedSaturate(temp_v3 - temp_v55,0x10);
      temp_v23 = UnsignedSaturate(temp_v63 - temp_v56,0x10);
      temp_v49 = -1 < (int)(char)(temp_v8 + temp_v7) - (int)temp_v30;
      temp_v50 = -1 < (int)(char)((char)temp_v21 + (char)temp_v25) - (int)temp_v33;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v17 | (unsigned char)(temp_v21 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v25 >> 8))) - (int)temp_v29;
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v27 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v28 | (unsigned char)(temp_v16 >> 8))) - (int)temp_v66;
      temp_v37 = ((temp_v49 * temp_v39 + !temp_v49 * temp_v37) & 0xff) |
               ((temp_v50 * temp_v39 + !temp_v50 * temp_v37) & 0xff00) |
               ((temp_v51 * temp_v39 + !temp_v51 * temp_v37) & 0xff0000) |
               ((temp_v52 * temp_v39 + !temp_v52 * temp_v37) & 0xff000000);
      temp_v38 = ((temp_v49 * temp_v40 + !temp_v49 * temp_v38) & 0xff) |
               ((temp_v50 * temp_v40 + !temp_v50 * temp_v38) & 0xff00) |
               ((temp_v51 * temp_v40 + !temp_v51 * temp_v38) & 0xff0000) |
               ((temp_v52 * temp_v40 + !temp_v52 * temp_v38) & 0xff000000);
      temp_v49 = -1 < (int)(char)(temp_v64 + temp_v6) - (int)temp_v32;
      temp_v50 = -1 < (int)(char)((char)temp_v5 + (char)temp_v14) - (int)temp_v34;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v15 | (unsigned char)(temp_v5 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v31;
      temp_v52 = -1 < (int)(char)(((unsigned char)temp_v20 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8))) - (int)temp_v65;
      puVar48[-0x3b] =
           ((temp_v49 * temp_v39 + !temp_v49 * temp_v37) & 0xff) |
           ((temp_v50 * temp_v39 + !temp_v50 * temp_v37) & 0xff00) |
           ((temp_v51 * temp_v39 + !temp_v51 * temp_v37) & 0xff0000) |
           ((temp_v52 * temp_v39 + !temp_v52 * temp_v37) & 0xff000000);
      puVar48[5] = ((temp_v49 * temp_v40 + !temp_v49 * temp_v38) & 0xff) |
                   ((temp_v50 * temp_v40 + !temp_v50 * temp_v38) & 0xff00) |
                   ((temp_v51 * temp_v40 + !temp_v51 * temp_v38) & 0xff0000) |
                   ((temp_v52 * temp_v40 + !temp_v52 * temp_v38) & 0xff000000);
      puVar49 = puVar48 + 6;
    }
    temp_v54 = temp_v54 - 8;
    if (temp_v54 == 0) break;
    puVar49 = (unsigned int *)((int)puVar49 + (0x7f8 - temp_v36));
    temp_v35 = temp_v36;
  }
  return romwright_piece_4_4(temp_v35,param_1);
}
