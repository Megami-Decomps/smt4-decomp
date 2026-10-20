#include "common.h"

extern "C" {

#define GIMIC_COUNT_001E2ADC 24

typedef struct GimicItem001e2adc {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x17];
    /* 0x18 */ u32 model;
    /* 0x1c */ u8 unk1c[0xc];
} GimicItem001e2adc;

typedef struct MapGimic001e2adc {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ GimicItem001e2adc items[GIMIC_COUNT_001E2ADC];
} MapGimic001e2adc;

void asdMdlManagerDestroy(void);

extern MapGimic001e2adc *g_mapGimic; /* 0x447a48 */

/* Destroys the models of all map gimmicks (last to first) and clears their active flags. */
void mapGimicReleaseAll(void)
{
    s32 i;

    for (i = GIMIC_COUNT_001E2ADC - 1; i >= 0; i--) {
        if (g_mapGimic->items[i].model != 0) {
            asdMdlManagerDestroy();
            g_mapGimic->items[i].model = 0;
        }
    }
    for (i = 0; i < GIMIC_COUNT_001E2ADC; i++) {
        g_mapGimic->items[i].active = 0;
    }
}

} /* extern "C" */
