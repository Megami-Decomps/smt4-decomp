/* NON_MATCHING: logic matches the retail range chain; retail compares the 10-bit id (lsl/lsr extraction) with signed branches (blt/bgt) and recomputes it per branch, the build folds the same ranges into unsigned compares and keeps the sign-bit test as TST. */
#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {
u32 FUN_00280bc0(void);
void FUN_0032ca54(u32 result);
void FUN_00359974(s32 index, u32 a, u32 b, u32 c);
void FUN_0037aaec(s32 kind, s32 value);
void FUN_003cc97c(u32 owner, u32 code);
}

#define RESULT_KIND_NOTICE 17

/* A packed result: bit 31 set when pending, kind in bits 10-17, id in the low ten bits. */
union ResultWord {
    s32 raw;
    struct {
        u16 id : 10;
        u16 unused : 6;
        u16 high;
    } bits;
};

extern "C" {

// Report the pending result: pick the notice code for its id range and forward it. Returns the severity (0 = none).
u32 FUN_002c7388(u32 owner, s32 value, s32 mode, s32 extra)
{
    ResultWord result;
    u32 severity;

    result.raw = FUN_00280bc0();
    if ((result.raw & (s32)0x80000000) >= 0) {
        severity = 0;
    } else {
        FUN_0032ca54(result.raw);
        severity = 4;
        u32 kind = (result.raw & 0x3FC00) >> 10;
        u32 code = 28;
        if (kind == RESULT_KIND_NOTICE && result.bits.id >= 100 && result.bits.id <= 179) {
            if (result.bits.id < 130) {
                return 3;
            }
            code = 30;
        } else if (kind != RESULT_KIND_NOTICE || result.bits.id < 180 || result.bits.id > 199) {
            if (kind == RESULT_KIND_NOTICE && result.bits.id >= 390 && result.bits.id <= 399) {
                if (mode == 1) {
                    if (value != 0) {
                        FUN_0037aaec(1, value);
                    }
                    severity = 1;
                    code = 25;
                } else if (mode == 3) {
                    if (value != 0) {
                        FUN_0037aaec(1, value);
                    }
                    severity = 1;
                    FUN_00359974(0, extra + 1, 0xFFFFFFFF, 0);
                    code = 34;
                } else if (mode == 0) {
                    if (value != 0) {
                        FUN_0037aaec(1, value);
                    }
                    severity = 1;
                    code = 33;
                } else if (mode == 2) {
                    severity = 6;
                } else {
                    code = 32;
                }
            } else if (kind == RESULT_KIND_NOTICE && result.bits.id >= 220 && result.bits.id <= 229) {
                FUN_001386b4();
                severity = 5;
            } else if (kind == RESULT_KIND_NOTICE && result.bits.id >= 230 && result.bits.id <= 339) {
                if ((result.bits.id >= 260 && result.bits.id <= 279) || result.bits.id <= 279 ||
                    result.bits.id >= 335) {
                    code = 27;
                }
            } else if (kind == RESULT_KIND_NOTICE && result.bits.id >= 200 && result.bits.id <= 219 && mode == 1) {
                if (value != 0) {
                    FUN_0037aaec(1, value);
                }
                code = 29;
            }
        }
        FUN_003cc97c(owner, code);
    }
    return severity;
}

}
