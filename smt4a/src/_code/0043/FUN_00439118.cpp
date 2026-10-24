/* NON_MATCHING: close: logic and tables match; built forwards the stored hiragana value instead of reloading it, unrolls/merges the 5- and 21-entry voiced-mark searches differently (retail keeps two separate loops sharing one success tail via a stack slot) and uses different registers */
#include "common.h"

/* A character mapping: `from` becomes `to`. */
struct KanaPair {
    u16 from;
    u16 to;
};

extern "C" {

extern KanaPair DAT_00544d98[12];  /* kana -> its voiced/normalised form */
extern KanaPair DAT_00544dc8[58];  /* half-width kana -> full-width kana */
extern KanaPair DAT_00544eb0[21];  /* half-width kana + voiced mark -> full-width voiced kana */
extern KanaPair DAT_00544f04[5];   /* half-width kana + semi-voiced mark -> full-width kana */

/* Normalises text for comparison: drops spaces, folds full-width letters and digits to ASCII, hiragana to katakana
 * and half-width katakana (with their voiced marks) to full-width katakana. Writes at most size-1 characters and
 * terminates the output. */
void FUN_00439118(u16 *dest, s32 size, const u16 *src)
{
    s32 out = 0;
    s32 in = 0;
    s32 i;

    for (;;) {
        u16 c;

        if (out == size - 1) {
            dest[out] = 0;
            return;
        }
        c = src[in];
        if (c == 0x20 || c == 0x3000) {
            in++;
            continue;
        }
        if ((u32)(c - 0xFF41) <= 25 || (u32)(c - 0xFF21) <= 25 || (u32)(c - 0xFF10) <= 9) {
            dest[out] = c + 0x120;
            in++;
            out++;
            continue;
        }
        if ((u32)(c - 0x3041) <= 0x55) {
            dest[out] = c + 0x60;
            for (i = 0; i < 12; i++) {
                if (DAT_00544d98[i].from == dest[out]) {
                    dest[out] = DAT_00544d98[i].to;
                    break;
                }
            }
            in++;
            out++;
            continue;
        }
        if ((u32)(c - 0x30A1) <= 0x59) {
            dest[out] = c;
            for (i = 0; i < 12; i++) {
                if (DAT_00544d98[i].from == dest[out]) {
                    dest[out] = DAT_00544d98[i].to;
                    break;
                }
            }
            in++;
            out++;
            continue;
        }
        if ((u32)(c - 0xFF66) <= 0x39) {
            u16 mark = src[in + 1];
            KanaPair *voiced = NULL;
            s32 voicedCount = 0;

            if (mark == 0xFF9E) {
                voiced = DAT_00544eb0;
                voicedCount = 21;
            } else if (mark == 0xFF9F) {
                voiced = DAT_00544f04;
                voicedCount = 5;
            }
            for (i = 0; i < voicedCount; i++) {
                if (voiced[i].from == c) {
                    break;
                }
            }
            if (i < voicedCount) {
                dest[out] = voiced[i].to;
                in += 2;
                out++;
                continue;
            }
            for (i = 0; i < 58; i++) {
                if (DAT_00544dc8[i].from == c) {
                    dest[out] = DAT_00544dc8[i].to;
                    break;
                }
            }
            for (i = 0; i < 12; i++) {
                if (DAT_00544d98[i].from == dest[out]) {
                    dest[out] = DAT_00544d98[i].to;
                    break;
                }
            }
            in++;
            out++;
            continue;
        }
        dest[out] = c;
        if (c == 0) {
            return;
        }
        in++;
        out++;
    }
}

} /* extern "C" */
