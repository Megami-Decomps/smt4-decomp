/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00164148` (_code @ 0x164148, 0xbb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int HintPreloadData(...);
int UnsignedSaturate(...);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */


int FUN_00164148(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  unsigned short temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  char temp_v8;
  char temp_v9;
  char temp_v10;
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
  unsigned char temp_v22;
  unsigned char temp_v23;
  int temp_v24;
  unsigned int *puVar45;
  unsigned int *puVar46;
  unsigned int temp_v25;
  int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  unsigned int temp_v39;
  unsigned char temp_v40;
  unsigned char temp_v41;
  unsigned char temp_v42;
  unsigned char temp_v43;
  int temp_v44;
  int temp_v45;
  unsigned char temp_v46;
  unsigned char temp_v47;
  unsigned char temp_v48;
  unsigned char temp_v49;
  unsigned char temp_v50;
  unsigned char temp_v51;
  unsigned char temp_v52;
  unsigned char temp_v53;
  unsigned char temp_v54;
  unsigned char temp_v55;
  unsigned char temp_v56;
  unsigned char temp_v57;
  char temp_v58;
  unsigned char temp_v59;
  unsigned char temp_v60;
  unsigned char temp_v61;
  unsigned char temp_v62;
  unsigned char temp_v63;
  unsigned char temp_v64;
  
  temp_v33 = *(unsigned int *)(param_1 + 0x10);
  temp_v36 = *(unsigned int *)(param_1 + 0x14);
  temp_v45 = *(int *)(param_1 + 0xc) - 8;
  temp_v26 = *(int *)(param_1 + 8) - 0x10;
  temp_v34 = temp_v33 | (temp_v33 << 8);
  temp_v37 = temp_v36 | (temp_v36 << 8);
  temp_v35 = temp_v34 | (temp_v34 << 0x10);
  temp_v38 = temp_v37 | (temp_v37 << 0x10);
  puVar46 = (unsigned int *)(*(int *)(param_1 + 4) + 0x800);
  temp_v24 = temp_v26;
  while( 1 ) {
    do {
      temp_v44 = temp_v24;
      puVar45 = puVar46;
      temp_v30 = puVar45[-0xc0];
      temp_v25 = puVar45[-0x80];
      temp_v27 = puVar45[-0x40];
      temp_v28 = *puVar45;
      temp_v29 = puVar45[0x40];
      temp_v32 = puVar45[0x80];
      temp_v0 = (unsigned char)temp_v27;
      temp_v1 = (unsigned char)temp_v28;
      temp_v2 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v1) >> 1;
      temp_v46 = (unsigned char)(temp_v27 >> 8);
      temp_v49 = (unsigned char)(temp_v28 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v46 + (unsigned short)temp_v49) >> 1;
      temp_v47 = (unsigned char)(temp_v27 >> 0x10);
      temp_v50 = (unsigned char)(temp_v28 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v47 + (unsigned short)temp_v50) >> 1;
      temp_v48 = (unsigned char)(temp_v27 >> 0x18);
      temp_v51 = (unsigned char)(temp_v28 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v48 + (unsigned short)temp_v51) >> 1;
      temp_v6 = (unsigned char)temp_v30;
      temp_v9 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v52 = (unsigned char)(temp_v30 >> 8);
      temp_v13 = UnsignedSaturate(temp_v52 - temp_v46,0x10);
      temp_v53 = (unsigned char)(temp_v30 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v53 - temp_v47,0x10);
      temp_v54 = (unsigned char)(temp_v30 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v48,0x10);
      temp_v10 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v46 - temp_v52,0x10);
      temp_v16 = UnsignedSaturate(temp_v47 - temp_v53,0x10);
      temp_v18 = UnsignedSaturate(temp_v48 - temp_v54,0x10);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v54) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v53) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v52) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1)
      ;
      temp_v22 = (unsigned char)temp_v36;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v59 = (unsigned char)(temp_v37 >> 8);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v60 = (unsigned char)(temp_v38 >> 0x10);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v61 = (unsigned char)(temp_v38 >> 0x18);
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v7 = (unsigned char)temp_v32;
      temp_v9 = UnsignedSaturate(temp_v7 - temp_v1,0x10);
      temp_v55 = (unsigned char)(temp_v32 >> 8);
      temp_v13 = UnsignedSaturate(temp_v55 - temp_v49,0x10);
      temp_v56 = (unsigned char)(temp_v32 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v50,0x10);
      temp_v57 = (unsigned char)(temp_v32 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v57 - temp_v51,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v7,0x10);
      temp_v14 = UnsignedSaturate(temp_v49 - temp_v55,0x10);
      temp_v16 = UnsignedSaturate(temp_v50 - temp_v56,0x10);
      temp_v18 = UnsignedSaturate(temp_v51 - temp_v57,0x10);
      temp_v39 = ~temp_v29;
      temp_v54 = (unsigned char)temp_v25;
      temp_v53 = (unsigned char)(temp_v25 >> 8);
      temp_v52 = (unsigned char)(temp_v25 >> 0x10);
      temp_v6 = (unsigned char)(temp_v25 >> 0x18);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v57) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v56) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v55) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v7) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v39 + (unsigned short)temp_v54) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 8) + (unsigned short)temp_v53) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x10) + (unsigned short)temp_v52)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v58 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x18) + (unsigned short)temp_v6)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v58 - ' ',0x10);
      temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v55 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v58,0x10);
      temp_v56 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v57 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v55,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v55,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
      temp_v55 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v56,0x10);
      temp_v30 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v55 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v56,0x10);
      temp_v39 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v58 = UnsignedSaturate(temp_v54 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v53 - temp_v46,0x10);
      temp_v16 = UnsignedSaturate(temp_v52 - temp_v47,0x10);
      temp_v19 = UnsignedSaturate(temp_v6 - temp_v48,0x10);
      temp_v11 = UnsignedSaturate(temp_v0 - temp_v54,0x10);
      temp_v14 = UnsignedSaturate(temp_v46 - temp_v53,0x10);
      temp_v17 = UnsignedSaturate(temp_v47 - temp_v52,0x10);
      temp_v20 = UnsignedSaturate(temp_v48 - temp_v6,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v29,0x10);
      temp_v9 = (char)(temp_v29 >> 8);
      temp_v15 = UnsignedSaturate(temp_v49 - temp_v9,0x10);
      temp_v8 = (char)(temp_v29 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v50 - temp_v8,0x10);
      temp_v10 = (char)(temp_v29 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v51 - temp_v10,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v58 + temp_v11);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v58 = UnsignedSaturate((char)temp_v29 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v9 - temp_v49,0x10);
      temp_v16 = UnsignedSaturate(temp_v8 - temp_v50,0x10);
      temp_v19 = UnsignedSaturate(temp_v10 - temp_v51,0x10);
      temp_v9 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v46 - temp_v49,0x10);
      temp_v17 = UnsignedSaturate(temp_v47 - temp_v50,0x10);
      temp_v20 = UnsignedSaturate(temp_v48 - temp_v51,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v12 + temp_v58);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v49 - temp_v46,0x10);
      temp_v15 = UnsignedSaturate(temp_v50 - temp_v47,0x10);
      temp_v16 = UnsignedSaturate(temp_v51 - temp_v48,0x10);
      HintPreloadData(puVar45 + -0xb8);
      temp_v23 = (unsigned char)temp_v33;
      temp_v40 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v62 = (unsigned char)(temp_v34 >> 8);
      temp_v41 = temp_v62 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v63 = (unsigned char)(temp_v35 >> 0x10);
      temp_v42 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v64 = (unsigned char)(temp_v35 >> 0x18);
      temp_v43 = temp_v64 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar45[-0x80] =
           ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
           ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
           ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
           ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      puVar45[-0x40] =
           ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
           ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
           ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
           ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      *puVar45 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
                 ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
                 ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
                 ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      puVar45[0x40] =
           ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
           ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
           ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
           ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v30 = puVar45[-0xbf];
      temp_v25 = puVar45[-0x7f];
      temp_v27 = puVar45[-0x3f];
      temp_v28 = puVar45[1];
      temp_v29 = puVar45[0x41];
      temp_v32 = puVar45[0x81];
      temp_v46 = (unsigned char)temp_v27;
      temp_v49 = (unsigned char)temp_v28;
      temp_v2 = (unsigned short)((unsigned short)temp_v46 + (unsigned short)temp_v49) >> 1;
      temp_v47 = (unsigned char)(temp_v27 >> 8);
      temp_v50 = (unsigned char)(temp_v28 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v47 + (unsigned short)temp_v50) >> 1;
      temp_v48 = (unsigned char)(temp_v27 >> 0x10);
      temp_v51 = (unsigned char)(temp_v28 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v48 + (unsigned short)temp_v51) >> 1;
      temp_v0 = (unsigned char)(temp_v27 >> 0x18);
      temp_v1 = (unsigned char)(temp_v28 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v1) >> 1;
      temp_v6 = (unsigned char)temp_v30;
      temp_v9 = UnsignedSaturate(temp_v6 - temp_v46,0x10);
      temp_v52 = (unsigned char)(temp_v30 >> 8);
      temp_v13 = UnsignedSaturate(temp_v52 - temp_v47,0x10);
      temp_v53 = (unsigned char)(temp_v30 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v53 - temp_v48,0x10);
      temp_v54 = (unsigned char)(temp_v30 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v0,0x10);
      temp_v10 = UnsignedSaturate(temp_v46 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v52,0x10);
      temp_v16 = UnsignedSaturate(temp_v48 - temp_v53,0x10);
      temp_v18 = UnsignedSaturate(temp_v0 - temp_v54,0x10);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v54) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v53) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v52) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v57 = (unsigned char)temp_v32;
      temp_v9 = UnsignedSaturate(temp_v57 - temp_v49,0x10);
      temp_v55 = (unsigned char)(temp_v32 >> 8);
      temp_v13 = UnsignedSaturate(temp_v55 - temp_v50,0x10);
      temp_v56 = (unsigned char)(temp_v32 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v51,0x10);
      temp_v7 = (unsigned char)(temp_v32 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v7 - temp_v1,0x10);
      temp_v10 = UnsignedSaturate(temp_v49 - temp_v57,0x10);
      temp_v14 = UnsignedSaturate(temp_v50 - temp_v55,0x10);
      temp_v16 = UnsignedSaturate(temp_v51 - temp_v56,0x10);
      temp_v18 = UnsignedSaturate(temp_v1 - temp_v7,0x10);
      temp_v39 = ~temp_v29;
      temp_v54 = (unsigned char)temp_v25;
      temp_v53 = (unsigned char)(temp_v25 >> 8);
      temp_v52 = (unsigned char)(temp_v25 >> 0x10);
      temp_v6 = (unsigned char)(temp_v25 >> 0x18);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v7) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v56) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v55) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v57) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v39 + (unsigned short)temp_v54) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v58 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 8) + (unsigned short)temp_v53) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v58 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x10) + (unsigned short)temp_v52)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x18) + (unsigned short)temp_v6)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v55 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v58,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v56 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v57 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v55,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v55,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
      temp_v55 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v56,0x10);
      temp_v30 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v55 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v56,0x10);
      temp_v39 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v58 = UnsignedSaturate(temp_v54 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v53 - temp_v47,0x10);
      temp_v16 = UnsignedSaturate(temp_v52 - temp_v48,0x10);
      temp_v19 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v11 = UnsignedSaturate(temp_v46 - temp_v54,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v53,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v52,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v12 = UnsignedSaturate(temp_v49 - (char)temp_v29,0x10);
      temp_v8 = (char)(temp_v29 >> 8);
      temp_v15 = UnsignedSaturate(temp_v50 - temp_v8,0x10);
      temp_v9 = (char)(temp_v29 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v51 - temp_v9,0x10);
      temp_v10 = (char)(temp_v29 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v1 - temp_v10,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v58 + temp_v11);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v58 = UnsignedSaturate((char)temp_v29 - temp_v49,0x10);
      temp_v13 = UnsignedSaturate(temp_v8 - temp_v50,0x10);
      temp_v16 = UnsignedSaturate(temp_v9 - temp_v51,0x10);
      temp_v19 = UnsignedSaturate(temp_v10 - temp_v1,0x10);
      temp_v9 = UnsignedSaturate(temp_v46 - temp_v49,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v50,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v51,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v12 + temp_v58);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v49 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v50 - temp_v47,0x10);
      temp_v15 = UnsignedSaturate(temp_v51 - temp_v48,0x10);
      temp_v16 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      HintPreloadData(puVar45 + -0x78);
      temp_v40 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v62 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v42 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v64 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar45[-0x7f] =
           ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
           ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
           ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
           ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      puVar45[-0x3f] =
           ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
           ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
           ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
           ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      puVar45[1] = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
                   ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
                   ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
                   ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      puVar45[0x41] =
           ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
           ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
           ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
           ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v30 = puVar45[-0xbe];
      temp_v25 = puVar45[-0x7e];
      temp_v27 = puVar45[-0x3e];
      temp_v28 = puVar45[2];
      temp_v29 = puVar45[0x42];
      temp_v32 = puVar45[0x82];
      temp_v0 = (unsigned char)temp_v27;
      temp_v51 = (unsigned char)temp_v28;
      temp_v2 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v51) >> 1;
      temp_v46 = (unsigned char)(temp_v27 >> 8);
      temp_v1 = (unsigned char)(temp_v28 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v46 + (unsigned short)temp_v1) >> 1;
      temp_v48 = (unsigned char)(temp_v27 >> 0x10);
      temp_v50 = (unsigned char)(temp_v28 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v48 + (unsigned short)temp_v50) >> 1;
      temp_v47 = (unsigned char)(temp_v27 >> 0x18);
      temp_v49 = (unsigned char)(temp_v28 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v47 + (unsigned short)temp_v49) >> 1;
      temp_v6 = (unsigned char)temp_v30;
      temp_v9 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v52 = (unsigned char)(temp_v30 >> 8);
      temp_v13 = UnsignedSaturate(temp_v52 - temp_v46,0x10);
      temp_v53 = (unsigned char)(temp_v30 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v53 - temp_v48,0x10);
      temp_v54 = (unsigned char)(temp_v30 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v47,0x10);
      temp_v10 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v46 - temp_v52,0x10);
      temp_v16 = UnsignedSaturate(temp_v48 - temp_v53,0x10);
      temp_v18 = UnsignedSaturate(temp_v47 - temp_v54,0x10);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v54) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v53) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v52) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v55 = (unsigned char)temp_v32;
      temp_v9 = UnsignedSaturate(temp_v55 - temp_v51,0x10);
      temp_v57 = (unsigned char)(temp_v32 >> 8);
      temp_v13 = UnsignedSaturate(temp_v57 - temp_v1,0x10);
      temp_v56 = (unsigned char)(temp_v32 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v50,0x10);
      temp_v7 = (unsigned char)(temp_v32 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v7 - temp_v49,0x10);
      temp_v10 = UnsignedSaturate(temp_v51 - temp_v55,0x10);
      temp_v14 = UnsignedSaturate(temp_v1 - temp_v57,0x10);
      temp_v16 = UnsignedSaturate(temp_v50 - temp_v56,0x10);
      temp_v18 = UnsignedSaturate(temp_v49 - temp_v7,0x10);
      temp_v39 = ~temp_v29;
      temp_v6 = (unsigned char)temp_v25;
      temp_v52 = (unsigned char)(temp_v25 >> 8);
      temp_v53 = (unsigned char)(temp_v25 >> 0x10);
      temp_v54 = (unsigned char)(temp_v25 >> 0x18);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v7) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v56) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v57) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v55) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v39 + (unsigned short)temp_v6) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 8) + (unsigned short)temp_v52) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x10) + (unsigned short)temp_v53)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v58 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x18) + (unsigned short)temp_v54)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v58 - ' ',0x10);
      temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v55 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v58,0x10);
      temp_v56 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v57 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v55,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v55,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
      temp_v55 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v56,0x10);
      temp_v30 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v55 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v56,0x10);
      temp_v39 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v58 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v52 - temp_v46,0x10);
      temp_v16 = UnsignedSaturate(temp_v53 - temp_v48,0x10);
      temp_v19 = UnsignedSaturate(temp_v54 - temp_v47,0x10);
      temp_v11 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v46 - temp_v52,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v53,0x10);
      temp_v20 = UnsignedSaturate(temp_v47 - temp_v54,0x10);
      temp_v12 = UnsignedSaturate(temp_v51 - (char)temp_v29,0x10);
      temp_v9 = (char)(temp_v29 >> 8);
      temp_v15 = UnsignedSaturate(temp_v1 - temp_v9,0x10);
      temp_v10 = (char)(temp_v29 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v50 - temp_v10,0x10);
      temp_v8 = (char)(temp_v29 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v49 - temp_v8,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v58 + temp_v11);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v58 = UnsignedSaturate((char)temp_v29 - temp_v51,0x10);
      temp_v13 = UnsignedSaturate(temp_v9 - temp_v1,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v50,0x10);
      temp_v19 = UnsignedSaturate(temp_v8 - temp_v49,0x10);
      temp_v9 = UnsignedSaturate(temp_v0 - temp_v51,0x10);
      temp_v14 = UnsignedSaturate(temp_v46 - temp_v1,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v50,0x10);
      temp_v20 = UnsignedSaturate(temp_v47 - temp_v49,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v12 + temp_v58);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v51 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v1 - temp_v46,0x10);
      temp_v15 = UnsignedSaturate(temp_v50 - temp_v48,0x10);
      temp_v16 = UnsignedSaturate(temp_v49 - temp_v47,0x10);
      HintPreloadData(puVar45 + -0x38);
      temp_v40 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v62 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v42 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v64 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar45[-0x7e] =
           ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
           ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
           ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
           ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      puVar45[-0x3e] =
           ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
           ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
           ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
           ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      puVar45[2] = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
                   ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
                   ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
                   ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      puVar45[0x42] =
           ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
           ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
           ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
           ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v30 = puVar45[-0xbd];
      temp_v25 = puVar45[-0x7d];
      temp_v27 = puVar45[-0x3d];
      temp_v28 = puVar45[3];
      temp_v29 = puVar45[0x43];
      temp_v32 = puVar45[0x83];
      temp_v46 = (unsigned char)temp_v27;
      temp_v1 = (unsigned char)temp_v28;
      temp_v2 = (unsigned short)((unsigned short)temp_v46 + (unsigned short)temp_v1) >> 1;
      temp_v47 = (unsigned char)(temp_v27 >> 8);
      temp_v51 = (unsigned char)(temp_v28 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v47 + (unsigned short)temp_v51) >> 1;
      temp_v48 = (unsigned char)(temp_v27 >> 0x10);
      temp_v50 = (unsigned char)(temp_v28 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v48 + (unsigned short)temp_v50) >> 1;
      temp_v0 = (unsigned char)(temp_v27 >> 0x18);
      temp_v49 = (unsigned char)(temp_v28 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v49) >> 1;
      temp_v6 = (unsigned char)temp_v30;
      temp_v9 = UnsignedSaturate(temp_v6 - temp_v46,0x10);
      temp_v52 = (unsigned char)(temp_v30 >> 8);
      temp_v13 = UnsignedSaturate(temp_v52 - temp_v47,0x10);
      temp_v53 = (unsigned char)(temp_v30 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v53 - temp_v48,0x10);
      temp_v54 = (unsigned char)(temp_v30 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v0,0x10);
      temp_v10 = UnsignedSaturate(temp_v46 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v52,0x10);
      temp_v16 = UnsignedSaturate(temp_v48 - temp_v53,0x10);
      temp_v18 = UnsignedSaturate(temp_v0 - temp_v54,0x10);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v54) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v53) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v52) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v55 = (unsigned char)temp_v32;
      temp_v9 = UnsignedSaturate(temp_v55 - temp_v1,0x10);
      temp_v7 = (unsigned char)(temp_v32 >> 8);
      temp_v13 = UnsignedSaturate(temp_v7 - temp_v51,0x10);
      temp_v56 = (unsigned char)(temp_v32 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v50,0x10);
      temp_v57 = (unsigned char)(temp_v32 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v57 - temp_v49,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v55,0x10);
      temp_v14 = UnsignedSaturate(temp_v51 - temp_v7,0x10);
      temp_v16 = UnsignedSaturate(temp_v50 - temp_v56,0x10);
      temp_v18 = UnsignedSaturate(temp_v49 - temp_v57,0x10);
      temp_v39 = ~temp_v29;
      temp_v52 = (unsigned char)temp_v25;
      temp_v53 = (unsigned char)(temp_v25 >> 8);
      temp_v54 = (unsigned char)(temp_v25 >> 0x10);
      temp_v6 = (unsigned char)(temp_v25 >> 0x18);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v57) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v56) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v7) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v55) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v39 + (unsigned short)temp_v52) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 8) + (unsigned short)temp_v53) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x10) + (unsigned short)temp_v54)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v58 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x18) + (unsigned short)temp_v6)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v58 - ' ',0x10);
      temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v55 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v58,0x10);
      temp_v56 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v57 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v55,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v55,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
      temp_v55 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v56,0x10);
      temp_v30 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v55 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v56,0x10);
      temp_v39 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v58 = UnsignedSaturate(temp_v52 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v53 - temp_v47,0x10);
      temp_v16 = UnsignedSaturate(temp_v54 - temp_v48,0x10);
      temp_v19 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v11 = UnsignedSaturate(temp_v46 - temp_v52,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v53,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v54,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v29,0x10);
      temp_v8 = (char)(temp_v29 >> 8);
      temp_v15 = UnsignedSaturate(temp_v51 - temp_v8,0x10);
      temp_v10 = (char)(temp_v29 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v50 - temp_v10,0x10);
      temp_v9 = (char)(temp_v29 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v49 - temp_v9,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v58 + temp_v11);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v58 = UnsignedSaturate((char)temp_v29 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v8 - temp_v51,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v50,0x10);
      temp_v19 = UnsignedSaturate(temp_v9 - temp_v49,0x10);
      temp_v9 = UnsignedSaturate(temp_v46 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v51,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v50,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v49,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v12 + temp_v58);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v51 - temp_v47,0x10);
      temp_v15 = UnsignedSaturate(temp_v50 - temp_v48,0x10);
      temp_v16 = UnsignedSaturate(temp_v49 - temp_v0,0x10);
      HintPreloadData(puVar45 + 8);
      temp_v40 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v62 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v42 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v64 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar45[-0x7d] =
           ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
           ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
           ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
           ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      puVar45[-0x3d] =
           ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
           ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
           ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
           ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      puVar45[3] = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
                   ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
                   ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
                   ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      puVar45[0x43] =
           ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
           ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
           ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
           ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v30 = puVar45[-0xbc];
      temp_v25 = puVar45[-0x7c];
      temp_v27 = puVar45[-0x3c];
      temp_v28 = puVar45[4];
      temp_v29 = puVar45[0x44];
      temp_v32 = puVar45[0x84];
      temp_v0 = (unsigned char)temp_v27;
      temp_v1 = (unsigned char)temp_v28;
      temp_v2 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v1) >> 1;
      temp_v48 = (unsigned char)(temp_v27 >> 8);
      temp_v51 = (unsigned char)(temp_v28 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v48 + (unsigned short)temp_v51) >> 1;
      temp_v46 = (unsigned char)(temp_v27 >> 0x10);
      temp_v50 = (unsigned char)(temp_v28 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v46 + (unsigned short)temp_v50) >> 1;
      temp_v47 = (unsigned char)(temp_v27 >> 0x18);
      temp_v49 = (unsigned char)(temp_v28 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v47 + (unsigned short)temp_v49) >> 1;
      temp_v52 = (unsigned char)temp_v30;
      temp_v9 = UnsignedSaturate(temp_v52 - temp_v0,0x10);
      temp_v53 = (unsigned char)(temp_v30 >> 8);
      temp_v13 = UnsignedSaturate(temp_v53 - temp_v48,0x10);
      temp_v54 = (unsigned char)(temp_v30 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v54 - temp_v46,0x10);
      temp_v6 = (unsigned char)(temp_v30 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v6 - temp_v47,0x10);
      temp_v10 = UnsignedSaturate(temp_v0 - temp_v52,0x10);
      temp_v14 = UnsignedSaturate(temp_v48 - temp_v53,0x10);
      temp_v16 = UnsignedSaturate(temp_v46 - temp_v54,0x10);
      temp_v18 = UnsignedSaturate(temp_v47 - temp_v6,0x10);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v6) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v54) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v53) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v52) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v55 = (unsigned char)temp_v32;
      temp_v9 = UnsignedSaturate(temp_v55 - temp_v1,0x10);
      temp_v7 = (unsigned char)(temp_v32 >> 8);
      temp_v13 = UnsignedSaturate(temp_v7 - temp_v51,0x10);
      temp_v56 = (unsigned char)(temp_v32 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v50,0x10);
      temp_v57 = (unsigned char)(temp_v32 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v57 - temp_v49,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v55,0x10);
      temp_v14 = UnsignedSaturate(temp_v51 - temp_v7,0x10);
      temp_v16 = UnsignedSaturate(temp_v50 - temp_v56,0x10);
      temp_v18 = UnsignedSaturate(temp_v49 - temp_v57,0x10);
      temp_v39 = ~temp_v29;
      temp_v6 = (unsigned char)temp_v25;
      temp_v52 = (unsigned char)(temp_v25 >> 8);
      temp_v53 = (unsigned char)(temp_v25 >> 0x10);
      temp_v54 = (unsigned char)(temp_v25 >> 0x18);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v57) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v56) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v7) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v55) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v39 + (unsigned short)temp_v6) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 8) + (unsigned short)temp_v52) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x10) + (unsigned short)temp_v53)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v58 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x18) + (unsigned short)temp_v54)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v58 - ' ',0x10);
      temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v55 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v58,0x10);
      temp_v56 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v57 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v55,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v55,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
      temp_v55 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v56,0x10);
      temp_v30 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v55 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v56,0x10);
      temp_v39 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v58 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v52 - temp_v48,0x10);
      temp_v16 = UnsignedSaturate(temp_v53 - temp_v46,0x10);
      temp_v19 = UnsignedSaturate(temp_v54 - temp_v47,0x10);
      temp_v11 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v48 - temp_v52,0x10);
      temp_v17 = UnsignedSaturate(temp_v46 - temp_v53,0x10);
      temp_v20 = UnsignedSaturate(temp_v47 - temp_v54,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v29,0x10);
      temp_v8 = (char)(temp_v29 >> 8);
      temp_v15 = UnsignedSaturate(temp_v51 - temp_v8,0x10);
      temp_v10 = (char)(temp_v29 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v50 - temp_v10,0x10);
      temp_v9 = (char)(temp_v29 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v49 - temp_v9,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v58 + temp_v11);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v58 = UnsignedSaturate((char)temp_v29 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v8 - temp_v51,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v50,0x10);
      temp_v19 = UnsignedSaturate(temp_v9 - temp_v49,0x10);
      temp_v9 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v48 - temp_v51,0x10);
      temp_v17 = UnsignedSaturate(temp_v46 - temp_v50,0x10);
      temp_v20 = UnsignedSaturate(temp_v47 - temp_v49,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v12 + temp_v58);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v51 - temp_v48,0x10);
      temp_v15 = UnsignedSaturate(temp_v50 - temp_v46,0x10);
      temp_v16 = UnsignedSaturate(temp_v49 - temp_v47,0x10);
      HintPreloadData(puVar45 + 0x48);
      temp_v40 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v62 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v42 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v64 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar45[-0x7c] =
           ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
           ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
           ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
           ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      puVar45[-0x3c] =
           ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
           ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
           ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
           ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      puVar45[4] = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
                   ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
                   ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
                   ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      puVar45[0x44] =
           ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
           ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
           ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
           ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v30 = puVar45[-0xbb];
      temp_v25 = puVar45[-0x7b];
      temp_v27 = puVar45[-0x3b];
      temp_v28 = puVar45[5];
      temp_v29 = puVar45[0x45];
      temp_v32 = puVar45[0x85];
      temp_v46 = (unsigned char)temp_v27;
      temp_v1 = (unsigned char)temp_v28;
      temp_v2 = (unsigned short)((unsigned short)temp_v46 + (unsigned short)temp_v1) >> 1;
      temp_v47 = (unsigned char)(temp_v27 >> 8);
      temp_v51 = (unsigned char)(temp_v28 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v47 + (unsigned short)temp_v51) >> 1;
      temp_v48 = (unsigned char)(temp_v27 >> 0x10);
      temp_v50 = (unsigned char)(temp_v28 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v48 + (unsigned short)temp_v50) >> 1;
      temp_v0 = (unsigned char)(temp_v27 >> 0x18);
      temp_v49 = (unsigned char)(temp_v28 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v49) >> 1;
      temp_v54 = (unsigned char)temp_v30;
      temp_v9 = UnsignedSaturate(temp_v54 - temp_v46,0x10);
      temp_v53 = (unsigned char)(temp_v30 >> 8);
      temp_v13 = UnsignedSaturate(temp_v53 - temp_v47,0x10);
      temp_v52 = (unsigned char)(temp_v30 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v52 - temp_v48,0x10);
      temp_v6 = (unsigned char)(temp_v30 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v10 = UnsignedSaturate(temp_v46 - temp_v54,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v53,0x10);
      temp_v16 = UnsignedSaturate(temp_v48 - temp_v52,0x10);
      temp_v18 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v6) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v52) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v53) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v54) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v57 = (unsigned char)temp_v32;
      temp_v9 = UnsignedSaturate(temp_v57 - temp_v1,0x10);
      temp_v56 = (unsigned char)(temp_v32 >> 8);
      temp_v13 = UnsignedSaturate(temp_v56 - temp_v51,0x10);
      temp_v7 = (unsigned char)(temp_v32 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v7 - temp_v50,0x10);
      temp_v55 = (unsigned char)(temp_v32 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v55 - temp_v49,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v57,0x10);
      temp_v14 = UnsignedSaturate(temp_v51 - temp_v56,0x10);
      temp_v16 = UnsignedSaturate(temp_v50 - temp_v7,0x10);
      temp_v18 = UnsignedSaturate(temp_v49 - temp_v55,0x10);
      temp_v39 = ~temp_v29;
      temp_v6 = (unsigned char)temp_v25;
      temp_v52 = (unsigned char)(temp_v25 >> 8);
      temp_v53 = (unsigned char)(temp_v25 >> 0x10);
      temp_v54 = (unsigned char)(temp_v25 >> 0x18);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v55) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v7) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v56) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v57) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v39 + (unsigned short)temp_v6) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 8) + (unsigned short)temp_v52) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x10) + (unsigned short)temp_v53)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v58 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x18) + (unsigned short)temp_v54)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v58 - ' ',0x10);
      temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v55 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v58,0x10);
      temp_v56 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v57 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v55,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v55,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
      temp_v55 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v56,0x10);
      temp_v30 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v55 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v56,0x10);
      temp_v39 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v58 = UnsignedSaturate(temp_v6 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v52 - temp_v47,0x10);
      temp_v16 = UnsignedSaturate(temp_v53 - temp_v48,0x10);
      temp_v19 = UnsignedSaturate(temp_v54 - temp_v0,0x10);
      temp_v11 = UnsignedSaturate(temp_v46 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v52,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v53,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v54,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v29,0x10);
      temp_v10 = (char)(temp_v29 >> 8);
      temp_v15 = UnsignedSaturate(temp_v51 - temp_v10,0x10);
      temp_v9 = (char)(temp_v29 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v50 - temp_v9,0x10);
      temp_v8 = (char)(temp_v29 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v49 - temp_v8,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v58 + temp_v11);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v58 = UnsignedSaturate((char)temp_v29 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v10 - temp_v51,0x10);
      temp_v16 = UnsignedSaturate(temp_v9 - temp_v50,0x10);
      temp_v19 = UnsignedSaturate(temp_v8 - temp_v49,0x10);
      temp_v9 = UnsignedSaturate(temp_v46 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v51,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v50,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v49,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v12 + temp_v58);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v51 - temp_v47,0x10);
      temp_v15 = UnsignedSaturate(temp_v50 - temp_v48,0x10);
      temp_v16 = UnsignedSaturate(temp_v49 - temp_v0,0x10);
      HintPreloadData(puVar45 + 0x88);
      temp_v40 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v62 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v42 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v64 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar45[-0x7b] =
           ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
           ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
           ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
           ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      puVar45[-0x3b] =
           ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
           ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
           ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
           ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      puVar45[5] = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
                   ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
                   ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
                   ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      puVar45[0x45] =
           ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
           ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
           ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
           ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v30 = puVar45[-0xba];
      temp_v25 = puVar45[-0x7a];
      temp_v27 = puVar45[-0x3a];
      temp_v28 = puVar45[6];
      temp_v29 = puVar45[0x46];
      temp_v32 = puVar45[0x86];
      temp_v0 = (unsigned char)temp_v27;
      temp_v1 = (unsigned char)temp_v28;
      temp_v2 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v1) >> 1;
      temp_v48 = (unsigned char)(temp_v27 >> 8);
      temp_v51 = (unsigned char)(temp_v28 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v48 + (unsigned short)temp_v51) >> 1;
      temp_v47 = (unsigned char)(temp_v27 >> 0x10);
      temp_v50 = (unsigned char)(temp_v28 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v47 + (unsigned short)temp_v50) >> 1;
      temp_v46 = (unsigned char)(temp_v27 >> 0x18);
      temp_v49 = (unsigned char)(temp_v28 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v46 + (unsigned short)temp_v49) >> 1;
      temp_v52 = (unsigned char)temp_v30;
      temp_v9 = UnsignedSaturate(temp_v52 - temp_v0,0x10);
      temp_v6 = (unsigned char)(temp_v30 >> 8);
      temp_v13 = UnsignedSaturate(temp_v6 - temp_v48,0x10);
      temp_v53 = (unsigned char)(temp_v30 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v53 - temp_v47,0x10);
      temp_v54 = (unsigned char)(temp_v30 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v46,0x10);
      temp_v10 = UnsignedSaturate(temp_v0 - temp_v52,0x10);
      temp_v14 = UnsignedSaturate(temp_v48 - temp_v6,0x10);
      temp_v16 = UnsignedSaturate(temp_v47 - temp_v53,0x10);
      temp_v18 = UnsignedSaturate(temp_v46 - temp_v54,0x10);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v54) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v53) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v6) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v52) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v7 = (unsigned char)temp_v32;
      temp_v9 = UnsignedSaturate(temp_v7 - temp_v1,0x10);
      temp_v56 = (unsigned char)(temp_v32 >> 8);
      temp_v13 = UnsignedSaturate(temp_v56 - temp_v51,0x10);
      temp_v57 = (unsigned char)(temp_v32 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v50,0x10);
      temp_v55 = (unsigned char)(temp_v32 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v55 - temp_v49,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v7,0x10);
      temp_v14 = UnsignedSaturate(temp_v51 - temp_v56,0x10);
      temp_v16 = UnsignedSaturate(temp_v50 - temp_v57,0x10);
      temp_v18 = UnsignedSaturate(temp_v49 - temp_v55,0x10);
      temp_v39 = ~temp_v29;
      temp_v6 = (unsigned char)temp_v25;
      temp_v52 = (unsigned char)(temp_v25 >> 8);
      temp_v53 = (unsigned char)(temp_v25 >> 0x10);
      temp_v54 = (unsigned char)(temp_v25 >> 0x18);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v55) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v57) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v56) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v7) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v39 + (unsigned short)temp_v6) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 8) + (unsigned short)temp_v52) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x10) + (unsigned short)temp_v53)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v58 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x18) + (unsigned short)temp_v54)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v58 - ' ',0x10);
      temp_v55 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v7 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v58,0x10);
      temp_v56 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v57 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v7,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v55,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v7,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v55,0x10);
      temp_v55 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v56,0x10);
      temp_v30 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v55 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v56,0x10);
      temp_v39 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v58 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v52 - temp_v48,0x10);
      temp_v16 = UnsignedSaturate(temp_v53 - temp_v47,0x10);
      temp_v19 = UnsignedSaturate(temp_v54 - temp_v46,0x10);
      temp_v11 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v48 - temp_v52,0x10);
      temp_v17 = UnsignedSaturate(temp_v47 - temp_v53,0x10);
      temp_v20 = UnsignedSaturate(temp_v46 - temp_v54,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v29,0x10);
      temp_v9 = (char)(temp_v29 >> 8);
      temp_v15 = UnsignedSaturate(temp_v51 - temp_v9,0x10);
      temp_v10 = (char)(temp_v29 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v50 - temp_v10,0x10);
      temp_v8 = (char)(temp_v29 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v49 - temp_v8,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v58 + temp_v11);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v58 = UnsignedSaturate((char)temp_v29 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v9 - temp_v51,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v50,0x10);
      temp_v19 = UnsignedSaturate(temp_v8 - temp_v49,0x10);
      temp_v9 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v48 - temp_v51,0x10);
      temp_v17 = UnsignedSaturate(temp_v47 - temp_v50,0x10);
      temp_v20 = UnsignedSaturate(temp_v46 - temp_v49,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v12 + temp_v58);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v51 - temp_v48,0x10);
      temp_v15 = UnsignedSaturate(temp_v50 - temp_v47,0x10);
      temp_v16 = UnsignedSaturate(temp_v49 - temp_v46,0x10);
      temp_v40 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v62 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v42 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v64 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar45[-0x7a] =
           ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
           ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
           ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
           ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      puVar45[-0x3a] =
           ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
           ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
           ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
           ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      puVar45[6] = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
                   ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
                   ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
                   ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      puVar45[0x46] =
           ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
           ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
           ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
           ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v30 = puVar45[-0xb9];
      temp_v25 = puVar45[-0x79];
      temp_v27 = puVar45[-0x39];
      temp_v28 = puVar45[7];
      temp_v29 = puVar45[0x47];
      temp_v32 = puVar45[0x87];
      temp_v46 = (unsigned char)temp_v27;
      temp_v1 = (unsigned char)temp_v28;
      temp_v2 = (unsigned short)((unsigned short)temp_v46 + (unsigned short)temp_v1) >> 1;
      temp_v47 = (unsigned char)(temp_v27 >> 8);
      temp_v51 = (unsigned char)(temp_v28 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v47 + (unsigned short)temp_v51) >> 1;
      temp_v48 = (unsigned char)(temp_v27 >> 0x10);
      temp_v50 = (unsigned char)(temp_v28 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v48 + (unsigned short)temp_v50) >> 1;
      temp_v0 = (unsigned char)(temp_v27 >> 0x18);
      temp_v49 = (unsigned char)(temp_v28 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v49) >> 1;
      temp_v54 = (unsigned char)temp_v30;
      temp_v9 = UnsignedSaturate(temp_v54 - temp_v46,0x10);
      temp_v53 = (unsigned char)(temp_v30 >> 8);
      temp_v13 = UnsignedSaturate(temp_v53 - temp_v47,0x10);
      temp_v52 = (unsigned char)(temp_v30 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v52 - temp_v48,0x10);
      temp_v6 = (unsigned char)(temp_v30 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v10 = UnsignedSaturate(temp_v46 - temp_v54,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v53,0x10);
      temp_v16 = UnsignedSaturate(temp_v48 - temp_v52,0x10);
      temp_v18 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v6) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v52) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v53) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v54) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v55 = (unsigned char)temp_v32;
      temp_v9 = UnsignedSaturate(temp_v55 - temp_v1,0x10);
      temp_v7 = (unsigned char)(temp_v32 >> 8);
      temp_v13 = UnsignedSaturate(temp_v7 - temp_v51,0x10);
      temp_v56 = (unsigned char)(temp_v32 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v50,0x10);
      temp_v57 = (unsigned char)(temp_v32 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v57 - temp_v49,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v55,0x10);
      temp_v14 = UnsignedSaturate(temp_v51 - temp_v7,0x10);
      temp_v16 = UnsignedSaturate(temp_v50 - temp_v56,0x10);
      temp_v18 = UnsignedSaturate(temp_v49 - temp_v57,0x10);
      temp_v39 = ~temp_v29;
      temp_v54 = (unsigned char)temp_v25;
      temp_v53 = (unsigned char)(temp_v25 >> 8);
      temp_v52 = (unsigned char)(temp_v25 >> 0x10);
      temp_v6 = (unsigned char)(temp_v25 >> 0x18);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v57) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v56) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v7) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v55) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v39 + (unsigned short)temp_v54) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 8) + (unsigned short)temp_v53) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x10) + (unsigned short)temp_v52)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v58 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x18) + (unsigned short)temp_v6)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v58 - ' ',0x10);
      temp_v55 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v7 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v58,0x10);
      temp_v56 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v57 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v7,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v55,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v7,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v55,0x10);
      temp_v55 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v56,0x10);
      temp_v30 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v55 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v57,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v56,0x10);
      temp_v39 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v58 = UnsignedSaturate(temp_v54 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v53 - temp_v47,0x10);
      temp_v16 = UnsignedSaturate(temp_v52 - temp_v48,0x10);
      temp_v19 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v11 = UnsignedSaturate(temp_v46 - temp_v54,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v53,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v52,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v29,0x10);
      temp_v8 = (char)(temp_v29 >> 8);
      temp_v15 = UnsignedSaturate(temp_v51 - temp_v8,0x10);
      temp_v10 = (char)(temp_v29 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v50 - temp_v10,0x10);
      temp_v9 = (char)(temp_v29 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v49 - temp_v9,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v58 + temp_v11);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v58 = UnsignedSaturate((char)temp_v29 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v8 - temp_v51,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v50,0x10);
      temp_v19 = UnsignedSaturate(temp_v9 - temp_v49,0x10);
      temp_v9 = UnsignedSaturate(temp_v46 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v51,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v50,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v49,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v12 + temp_v58);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v51 - temp_v47,0x10);
      temp_v15 = UnsignedSaturate(temp_v50 - temp_v48,0x10);
      temp_v16 = UnsignedSaturate(temp_v49 - temp_v0,0x10);
      temp_v40 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v62 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v42 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v64 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar45[-0x79] =
           ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
           ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
           ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
           ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      puVar45[-0x39] =
           ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
           ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
           ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
           ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      puVar45[7] = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
                   ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
                   ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
                   ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      puVar45[0x47] =
           ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
           ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
           ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
           ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      puVar46 = puVar45 + 8;
      temp_v24 = temp_v44 - 0x20;
    } while (temp_v44 - 0x20 != 0 && temp_v44 >= 0x20);
    if (temp_v44 >= 0x20) {
      temp_v30 = puVar45[-0xb8];
      temp_v25 = puVar45[-0x78];
      temp_v27 = puVar45[-0x38];
      temp_v28 = *puVar46;
      temp_v29 = puVar45[0x48];
      temp_v32 = puVar45[0x88];
      temp_v46 = (unsigned char)temp_v27;
      temp_v51 = (unsigned char)temp_v28;
      temp_v2 = (unsigned short)((unsigned short)temp_v46 + (unsigned short)temp_v51) >> 1;
      temp_v0 = (unsigned char)(temp_v27 >> 8);
      temp_v1 = (unsigned char)(temp_v28 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v1) >> 1;
      temp_v48 = (unsigned char)(temp_v27 >> 0x10);
      temp_v50 = (unsigned char)(temp_v28 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v48 + (unsigned short)temp_v50) >> 1;
      temp_v47 = (unsigned char)(temp_v27 >> 0x18);
      temp_v49 = (unsigned char)(temp_v28 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v47 + (unsigned short)temp_v49) >> 1;
      temp_v6 = (unsigned char)temp_v30;
      temp_v9 = UnsignedSaturate(temp_v6 - temp_v46,0x10);
      temp_v52 = (unsigned char)(temp_v30 >> 8);
      temp_v13 = UnsignedSaturate(temp_v52 - temp_v0,0x10);
      temp_v54 = (unsigned char)(temp_v30 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v54 - temp_v48,0x10);
      temp_v53 = (unsigned char)(temp_v30 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v53 - temp_v47,0x10);
      temp_v10 = UnsignedSaturate(temp_v46 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v0 - temp_v52,0x10);
      temp_v16 = UnsignedSaturate(temp_v48 - temp_v54,0x10);
      temp_v18 = UnsignedSaturate(temp_v47 - temp_v53,0x10);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v53) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v54) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v52) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v57 = (unsigned char)temp_v32;
      temp_v9 = UnsignedSaturate(temp_v57 - temp_v51,0x10);
      temp_v56 = (unsigned char)(temp_v32 >> 8);
      temp_v13 = UnsignedSaturate(temp_v56 - temp_v1,0x10);
      temp_v7 = (unsigned char)(temp_v32 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v7 - temp_v50,0x10);
      temp_v55 = (unsigned char)(temp_v32 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v55 - temp_v49,0x10);
      temp_v10 = UnsignedSaturate(temp_v51 - temp_v57,0x10);
      temp_v14 = UnsignedSaturate(temp_v1 - temp_v56,0x10);
      temp_v16 = UnsignedSaturate(temp_v50 - temp_v7,0x10);
      temp_v18 = UnsignedSaturate(temp_v49 - temp_v55,0x10);
      temp_v39 = ~temp_v29;
      temp_v6 = (unsigned char)temp_v25;
      temp_v52 = (unsigned char)(temp_v25 >> 8);
      temp_v53 = (unsigned char)(temp_v25 >> 0x10);
      temp_v54 = (unsigned char)(temp_v25 >> 0x18);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v55) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v7) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v56) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v57) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v39 + (unsigned short)temp_v6) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 8) + (unsigned short)temp_v52) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x10) + (unsigned short)temp_v53)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v58 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x18) + (unsigned short)temp_v54)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v58 - ' ',0x10);
      temp_v55 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v7 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v58,0x10);
      temp_v57 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v56 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v7,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v55,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v7,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v55,0x10);
      temp_v55 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v56,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v57,0x10);
      temp_v30 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v55 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v56,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v57,0x10);
      temp_v39 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v58 = UnsignedSaturate(temp_v6 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v52 - temp_v0,0x10);
      temp_v16 = UnsignedSaturate(temp_v53 - temp_v48,0x10);
      temp_v19 = UnsignedSaturate(temp_v54 - temp_v47,0x10);
      temp_v11 = UnsignedSaturate(temp_v46 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v0 - temp_v52,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v53,0x10);
      temp_v20 = UnsignedSaturate(temp_v47 - temp_v54,0x10);
      temp_v12 = UnsignedSaturate(temp_v51 - (char)temp_v29,0x10);
      temp_v9 = (char)(temp_v29 >> 8);
      temp_v15 = UnsignedSaturate(temp_v1 - temp_v9,0x10);
      temp_v10 = (char)(temp_v29 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v50 - temp_v10,0x10);
      temp_v8 = (char)(temp_v29 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v49 - temp_v8,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v58 + temp_v11);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v58 = UnsignedSaturate((char)temp_v29 - temp_v51,0x10);
      temp_v13 = UnsignedSaturate(temp_v9 - temp_v1,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v50,0x10);
      temp_v19 = UnsignedSaturate(temp_v8 - temp_v49,0x10);
      temp_v9 = UnsignedSaturate(temp_v46 - temp_v51,0x10);
      temp_v14 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v50,0x10);
      temp_v20 = UnsignedSaturate(temp_v47 - temp_v49,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v12 + temp_v58);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v51 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      temp_v15 = UnsignedSaturate(temp_v50 - temp_v48,0x10);
      temp_v16 = UnsignedSaturate(temp_v49 - temp_v47,0x10);
      temp_v40 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v62 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v42 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v64 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar45[-0x78] =
           ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
           ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
           ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
           ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      puVar45[-0x38] =
           ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
           ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
           ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
           ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      *puVar46 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
                 ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
                 ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
                 ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      puVar45[0x48] =
           ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
           ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
           ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
           ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v30 = puVar45[-0xb7];
      temp_v25 = puVar45[-0x77];
      temp_v27 = puVar45[-0x37];
      temp_v28 = puVar45[9];
      temp_v29 = puVar45[0x49];
      temp_v32 = puVar45[0x89];
      temp_v46 = (unsigned char)temp_v27;
      temp_v1 = (unsigned char)temp_v28;
      temp_v2 = (unsigned short)((unsigned short)temp_v46 + (unsigned short)temp_v1) >> 1;
      temp_v47 = (unsigned char)(temp_v27 >> 8);
      temp_v51 = (unsigned char)(temp_v28 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v47 + (unsigned short)temp_v51) >> 1;
      temp_v48 = (unsigned char)(temp_v27 >> 0x10);
      temp_v50 = (unsigned char)(temp_v28 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v48 + (unsigned short)temp_v50) >> 1;
      temp_v0 = (unsigned char)(temp_v27 >> 0x18);
      temp_v49 = (unsigned char)(temp_v28 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v49) >> 1;
      temp_v54 = (unsigned char)temp_v30;
      temp_v9 = UnsignedSaturate(temp_v54 - temp_v46,0x10);
      temp_v53 = (unsigned char)(temp_v30 >> 8);
      temp_v13 = UnsignedSaturate(temp_v53 - temp_v47,0x10);
      temp_v6 = (unsigned char)(temp_v30 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v6 - temp_v48,0x10);
      temp_v52 = (unsigned char)(temp_v30 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v52 - temp_v0,0x10);
      temp_v10 = UnsignedSaturate(temp_v46 - temp_v54,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v53,0x10);
      temp_v16 = UnsignedSaturate(temp_v48 - temp_v6,0x10);
      temp_v18 = UnsignedSaturate(temp_v0 - temp_v52,0x10);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v52) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v6) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v53) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v54) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v7 = (unsigned char)temp_v32;
      temp_v9 = UnsignedSaturate(temp_v7 - temp_v1,0x10);
      temp_v56 = (unsigned char)(temp_v32 >> 8);
      temp_v13 = UnsignedSaturate(temp_v56 - temp_v51,0x10);
      temp_v57 = (unsigned char)(temp_v32 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v50,0x10);
      temp_v55 = (unsigned char)(temp_v32 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v55 - temp_v49,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v7,0x10);
      temp_v14 = UnsignedSaturate(temp_v51 - temp_v56,0x10);
      temp_v16 = UnsignedSaturate(temp_v50 - temp_v57,0x10);
      temp_v18 = UnsignedSaturate(temp_v49 - temp_v55,0x10);
      temp_v39 = ~temp_v29;
      temp_v52 = (unsigned char)temp_v25;
      temp_v53 = (unsigned char)(temp_v25 >> 8);
      temp_v54 = (unsigned char)(temp_v25 >> 0x10);
      temp_v6 = (unsigned char)(temp_v25 >> 0x18);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v55) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v57) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v56) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v7) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v39 + (unsigned short)temp_v52) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 8) + (unsigned short)temp_v53) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x10) + (unsigned short)temp_v54)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v58 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x18) + (unsigned short)temp_v6)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v58 - ' ',0x10);
      temp_v55 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v7 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v58,0x10);
      temp_v57 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v56 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v7,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v55,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v7,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v55,0x10);
      temp_v55 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v56,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v57,0x10);
      temp_v30 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v55 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v56,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v57,0x10);
      temp_v39 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v58 = UnsignedSaturate(temp_v52 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v53 - temp_v47,0x10);
      temp_v16 = UnsignedSaturate(temp_v54 - temp_v48,0x10);
      temp_v19 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v11 = UnsignedSaturate(temp_v46 - temp_v52,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v53,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v54,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v29,0x10);
      temp_v9 = (char)(temp_v29 >> 8);
      temp_v15 = UnsignedSaturate(temp_v51 - temp_v9,0x10);
      temp_v10 = (char)(temp_v29 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v50 - temp_v10,0x10);
      temp_v8 = (char)(temp_v29 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v49 - temp_v8,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v58 + temp_v11);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v58 = UnsignedSaturate((char)temp_v29 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v9 - temp_v51,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v50,0x10);
      temp_v19 = UnsignedSaturate(temp_v8 - temp_v49,0x10);
      temp_v9 = UnsignedSaturate(temp_v46 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v51,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v50,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v49,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v12 + temp_v58);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v51 - temp_v47,0x10);
      temp_v15 = UnsignedSaturate(temp_v50 - temp_v48,0x10);
      temp_v16 = UnsignedSaturate(temp_v49 - temp_v0,0x10);
      temp_v40 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v62 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v42 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v64 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar45[-0x77] =
           ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
           ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
           ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
           ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      puVar45[-0x37] =
           ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
           ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
           ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
           ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      puVar45[9] = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
                   ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
                   ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
                   ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      puVar45[0x49] =
           ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
           ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
           ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
           ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v30 = puVar45[-0xb6];
      temp_v25 = puVar45[-0x76];
      temp_v27 = puVar45[-0x36];
      temp_v28 = puVar45[10];
      temp_v29 = puVar45[0x4a];
      temp_v32 = puVar45[0x8a];
      temp_v46 = (unsigned char)temp_v27;
      temp_v1 = (unsigned char)temp_v28;
      temp_v2 = (unsigned short)((unsigned short)temp_v46 + (unsigned short)temp_v1) >> 1;
      temp_v47 = (unsigned char)(temp_v27 >> 8);
      temp_v51 = (unsigned char)(temp_v28 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v47 + (unsigned short)temp_v51) >> 1;
      temp_v48 = (unsigned char)(temp_v27 >> 0x10);
      temp_v50 = (unsigned char)(temp_v28 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v48 + (unsigned short)temp_v50) >> 1;
      temp_v0 = (unsigned char)(temp_v27 >> 0x18);
      temp_v49 = (unsigned char)(temp_v28 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v49) >> 1;
      temp_v52 = (unsigned char)temp_v30;
      temp_v9 = UnsignedSaturate(temp_v52 - temp_v46,0x10);
      temp_v6 = (unsigned char)(temp_v30 >> 8);
      temp_v13 = UnsignedSaturate(temp_v6 - temp_v47,0x10);
      temp_v54 = (unsigned char)(temp_v30 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v54 - temp_v48,0x10);
      temp_v53 = (unsigned char)(temp_v30 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v53 - temp_v0,0x10);
      temp_v10 = UnsignedSaturate(temp_v46 - temp_v52,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v6,0x10);
      temp_v16 = UnsignedSaturate(temp_v48 - temp_v54,0x10);
      temp_v18 = UnsignedSaturate(temp_v0 - temp_v53,0x10);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v53) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v54) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v6) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v52) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v57 = (unsigned char)temp_v32;
      temp_v9 = UnsignedSaturate(temp_v57 - temp_v1,0x10);
      temp_v56 = (unsigned char)(temp_v32 >> 8);
      temp_v13 = UnsignedSaturate(temp_v56 - temp_v51,0x10);
      temp_v7 = (unsigned char)(temp_v32 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v7 - temp_v50,0x10);
      temp_v55 = (unsigned char)(temp_v32 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v55 - temp_v49,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v57,0x10);
      temp_v14 = UnsignedSaturate(temp_v51 - temp_v56,0x10);
      temp_v16 = UnsignedSaturate(temp_v50 - temp_v7,0x10);
      temp_v18 = UnsignedSaturate(temp_v49 - temp_v55,0x10);
      temp_v39 = ~temp_v29;
      temp_v6 = (unsigned char)temp_v25;
      temp_v52 = (unsigned char)(temp_v25 >> 8);
      temp_v53 = (unsigned char)(temp_v25 >> 0x10);
      temp_v54 = (unsigned char)(temp_v25 >> 0x18);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v55) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v7) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v56) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v57) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v39 + (unsigned short)temp_v6) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 8) + (unsigned short)temp_v52) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x10) + (unsigned short)temp_v53)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v58 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x18) + (unsigned short)temp_v54)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v58 - ' ',0x10);
      temp_v55 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v7 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v58,0x10);
      temp_v57 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v56 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v7,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v55,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v7,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v55,0x10);
      temp_v55 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v56,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v57,0x10);
      temp_v30 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v55 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v56,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v57,0x10);
      temp_v39 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v58 = UnsignedSaturate(temp_v6 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v52 - temp_v47,0x10);
      temp_v16 = UnsignedSaturate(temp_v53 - temp_v48,0x10);
      temp_v19 = UnsignedSaturate(temp_v54 - temp_v0,0x10);
      temp_v11 = UnsignedSaturate(temp_v46 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v52,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v53,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v54,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v29,0x10);
      temp_v9 = (char)(temp_v29 >> 8);
      temp_v15 = UnsignedSaturate(temp_v51 - temp_v9,0x10);
      temp_v10 = (char)(temp_v29 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v50 - temp_v10,0x10);
      temp_v8 = (char)(temp_v29 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v49 - temp_v8,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v58 + temp_v11);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v58 = UnsignedSaturate((char)temp_v29 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v9 - temp_v51,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v50,0x10);
      temp_v19 = UnsignedSaturate(temp_v8 - temp_v49,0x10);
      temp_v9 = UnsignedSaturate(temp_v46 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v51,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v50,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v49,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v12 + temp_v58);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v51 - temp_v47,0x10);
      temp_v15 = UnsignedSaturate(temp_v50 - temp_v48,0x10);
      temp_v16 = UnsignedSaturate(temp_v49 - temp_v0,0x10);
      temp_v40 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v62 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v42 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v64 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar45[-0x76] =
           ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
           ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
           ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
           ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      puVar45[-0x36] =
           ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
           ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
           ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
           ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      puVar45[10] = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
                    ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
                    ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
                    ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      puVar45[0x4a] =
           ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
           ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
           ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
           ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v30 = puVar45[-0xb5];
      temp_v25 = puVar45[-0x75];
      temp_v27 = puVar45[-0x35];
      temp_v28 = puVar45[0xb];
      temp_v29 = puVar45[0x4b];
      temp_v32 = puVar45[0x8b];
      temp_v46 = (unsigned char)temp_v27;
      temp_v1 = (unsigned char)temp_v28;
      temp_v2 = (unsigned short)((unsigned short)temp_v46 + (unsigned short)temp_v1) >> 1;
      temp_v47 = (unsigned char)(temp_v27 >> 8);
      temp_v51 = (unsigned char)(temp_v28 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v47 + (unsigned short)temp_v51) >> 1;
      temp_v48 = (unsigned char)(temp_v27 >> 0x10);
      temp_v50 = (unsigned char)(temp_v28 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v48 + (unsigned short)temp_v50) >> 1;
      temp_v0 = (unsigned char)(temp_v27 >> 0x18);
      temp_v49 = (unsigned char)(temp_v28 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v49) >> 1;
      temp_v6 = (unsigned char)temp_v30;
      temp_v9 = UnsignedSaturate(temp_v6 - temp_v46,0x10);
      temp_v52 = (unsigned char)(temp_v30 >> 8);
      temp_v13 = UnsignedSaturate(temp_v52 - temp_v47,0x10);
      temp_v53 = (unsigned char)(temp_v30 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v53 - temp_v48,0x10);
      temp_v54 = (unsigned char)(temp_v30 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v0,0x10);
      temp_v10 = UnsignedSaturate(temp_v46 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v52,0x10);
      temp_v16 = UnsignedSaturate(temp_v48 - temp_v53,0x10);
      temp_v18 = UnsignedSaturate(temp_v0 - temp_v54,0x10);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v54) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v53) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v52) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v7 = (unsigned char)temp_v32;
      temp_v9 = UnsignedSaturate(temp_v7 - temp_v1,0x10);
      temp_v56 = (unsigned char)(temp_v32 >> 8);
      temp_v13 = UnsignedSaturate(temp_v56 - temp_v51,0x10);
      temp_v55 = (unsigned char)(temp_v32 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v55 - temp_v50,0x10);
      temp_v57 = (unsigned char)(temp_v32 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v57 - temp_v49,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v7,0x10);
      temp_v14 = UnsignedSaturate(temp_v51 - temp_v56,0x10);
      temp_v16 = UnsignedSaturate(temp_v50 - temp_v55,0x10);
      temp_v18 = UnsignedSaturate(temp_v49 - temp_v57,0x10);
      temp_v39 = ~temp_v29;
      temp_v53 = (unsigned char)temp_v25;
      temp_v52 = (unsigned char)(temp_v25 >> 8);
      temp_v6 = (unsigned char)(temp_v25 >> 0x10);
      temp_v54 = (unsigned char)(temp_v25 >> 0x18);
      temp_v30 = ((unsigned int)((unsigned short)(temp_v5 + temp_v57) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v55) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v56) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v7) >> 1)
      ;
      temp_v40 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v39 + (unsigned short)temp_v53) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v58 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 8) + (unsigned short)temp_v52) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v58 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x10) + (unsigned short)temp_v6)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v39 >> 0x18) + (unsigned short)temp_v54)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v55 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v7 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v58,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v57 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v56 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v7,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v55,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v7,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v55,0x10);
      temp_v55 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v56,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v57,0x10);
      temp_v30 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v55 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v56,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v57,0x10);
      temp_v39 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v55;
      temp_v58 = UnsignedSaturate(temp_v53 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v52 - temp_v47,0x10);
      temp_v16 = UnsignedSaturate(temp_v6 - temp_v48,0x10);
      temp_v19 = UnsignedSaturate(temp_v54 - temp_v0,0x10);
      temp_v11 = UnsignedSaturate(temp_v46 - temp_v53,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v52,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v6,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v54,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v29,0x10);
      temp_v8 = (char)(temp_v29 >> 8);
      temp_v15 = UnsignedSaturate(temp_v51 - temp_v8,0x10);
      temp_v9 = (char)(temp_v29 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v50 - temp_v9,0x10);
      temp_v10 = (char)(temp_v29 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v49 - temp_v10,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v58 + temp_v11);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v58 = UnsignedSaturate((char)temp_v29 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v8 - temp_v51,0x10);
      temp_v16 = UnsignedSaturate(temp_v9 - temp_v50,0x10);
      temp_v19 = UnsignedSaturate(temp_v10 - temp_v49,0x10);
      temp_v9 = UnsignedSaturate(temp_v46 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v47 - temp_v51,0x10);
      temp_v17 = UnsignedSaturate(temp_v48 - temp_v50,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v49,0x10);
      temp_v40 = temp_v22 <= (unsigned char)(temp_v12 + temp_v58);
      temp_v41 = temp_v59 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v42 = temp_v60 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v61 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v30 = ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
               ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
               ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
               ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      temp_v39 = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
               ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
               ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
               ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      temp_v31 = ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
               ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
               ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
               ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      temp_v32 = ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
               ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
               ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
               ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v46,0x10);
      temp_v13 = UnsignedSaturate(temp_v51 - temp_v47,0x10);
      temp_v15 = UnsignedSaturate(temp_v50 - temp_v48,0x10);
      temp_v16 = UnsignedSaturate(temp_v49 - temp_v0,0x10);
      temp_v40 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v41 = temp_v62 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v42 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v43 = temp_v64 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar45[-0x75] =
           ((temp_v40 * temp_v25 + !temp_v40 * temp_v31) & 0xff) |
           ((temp_v41 * temp_v25 + !temp_v41 * temp_v31) & 0xff00) |
           ((temp_v42 * temp_v25 + !temp_v42 * temp_v31) & 0xff0000) |
           ((temp_v43 * temp_v25 + !temp_v43 * temp_v31) & 0xff000000);
      puVar45[-0x35] =
           ((temp_v40 * temp_v27 + !temp_v40 * temp_v30) & 0xff) |
           ((temp_v41 * temp_v27 + !temp_v41 * temp_v30) & 0xff00) |
           ((temp_v42 * temp_v27 + !temp_v42 * temp_v30) & 0xff0000) |
           ((temp_v43 * temp_v27 + !temp_v43 * temp_v30) & 0xff000000);
      puVar45[0xb] = ((temp_v40 * temp_v28 + !temp_v40 * temp_v39) & 0xff) |
                     ((temp_v41 * temp_v28 + !temp_v41 * temp_v39) & 0xff00) |
                     ((temp_v42 * temp_v28 + !temp_v42 * temp_v39) & 0xff0000) |
                     ((temp_v43 * temp_v28 + !temp_v43 * temp_v39) & 0xff000000);
      puVar45[0x4b] =
           ((temp_v40 * temp_v29 + !temp_v40 * temp_v32) & 0xff) |
           ((temp_v41 * temp_v29 + !temp_v41 * temp_v32) & 0xff00) |
           ((temp_v42 * temp_v29 + !temp_v42 * temp_v32) & 0xff0000) |
           ((temp_v43 * temp_v29 + !temp_v43 * temp_v32) & 0xff000000);
      puVar46 = puVar45 + 0xc;
    }
    temp_v45 = temp_v45 - 8;
    if (temp_v45 == 0) break;
    puVar46 = (unsigned int *)((int)puVar46 + (0x7f0 - temp_v26));
    temp_v24 = temp_v26;
  }
  return param_1;
}

} /* extern "C" */
